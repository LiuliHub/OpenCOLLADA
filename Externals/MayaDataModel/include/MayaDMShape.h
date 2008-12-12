/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_SHAPE_H__
#define __MayaDM_SHAPE_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMDagNode.h"
namespace MayaDM
{
/*
*/
class Shape : public DagNode
{
public:
public:
	Shape(FILE* file,const std::string& name,const std::string& parent=""):DagNode(file, name, parent, "shape"){}
	virtual ~Shape(){}
protected:
	Shape(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):DagNode(file, name, parent, nodeType) {}
private:

};
}//namespace MayaDM
#endif//__MayaDM_SHAPE_H__