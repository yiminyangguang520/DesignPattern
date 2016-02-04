// StrategyDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <memory>
#include <cassert>

class IRenderableNode;

class IScaleToFitMethod
{
public:
    virtual void ScaleToFit(IRenderableNode *pNode) = 0;
};

class IRenderableNode
{
public:
    IRenderableNode(IScaleToFitMethod *pMethod)
        : m_pScaleToFitMethod(pMethod)
    {
        assert(pMethod);
    }

    virtual void Transform() = 0;
    virtual int GetWidth() const = 0;

    // 'simplified' method
    virtual int GetParentWidth() const = 0;

    void ScaleToFit()
    {
        m_pScaleToFitMethod->ScaleToFit(this);
    }

protected:
    IScaleToFitMethod *m_pScaleToFitMethod;
};

class BasicScaleToFit : public IScaleToFitMethod
{
public:
    virtual void ScaleToFit(IRenderableNode *pNode)
    {
        std::cout << "calling BasicScaleToFit::ScaleToFit..." << std::endl;

        const int parentWidth = pNode->GetParentWidth();
        const int nodeWidth = pNode->GetWidth();

        // scale down?
        if (nodeWidth > parentWidth)
        {
            // this should scale down the object...
            pNode->Transform();
            // what if we need to specific private data?
        }
    }
};

class Picture : public IRenderableNode
{
public:
    using IRenderableNode::IRenderableNode;

    void Transform()
    {

    }

    int GetWidth() const
    {
        return 10;
    }

    int GetParentWidth() const
    {
        return 8;
    }
};

int main()
{
    // using 'normally' via a Node's method call
    BasicScaleToFit scalingMethod;
    Picture pic(&scalingMethod);
    pic.ScaleToFit();

    // scalingMethod can be shared among other nodes

    // or by separate objects:
    // TransformManager::TransformNodes(list_nodes)
    // foreach n in list_nodes
    //     scalingMethod.ScaleToFit(n);  
}

