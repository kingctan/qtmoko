/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGPathSegArcAbs.h"

#include <wtf/GetPtr.h>

#include "SVGPathSegArc.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGPathSegArcAbsTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "r2", JSSVGPathSegArcAbs::R2AttrNum, DontDelete, 0, &JSSVGPathSegArcAbsTableEntries[9] },
    { "x", JSSVGPathSegArcAbs::XAttrNum, DontDelete, 0, &JSSVGPathSegArcAbsTableEntries[7] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "y", JSSVGPathSegArcAbs::YAttrNum, DontDelete, 0, &JSSVGPathSegArcAbsTableEntries[8] },
    { 0, 0, 0, 0, 0 },
    { "r1", JSSVGPathSegArcAbs::R1AttrNum, DontDelete, 0, 0 },
    { "angle", JSSVGPathSegArcAbs::AngleAttrNum, DontDelete, 0, 0 },
    { "largeArcFlag", JSSVGPathSegArcAbs::LargeArcFlagAttrNum, DontDelete, 0, &JSSVGPathSegArcAbsTableEntries[10] },
    { "sweepFlag", JSSVGPathSegArcAbs::SweepFlagAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSSVGPathSegArcAbsTable = 
{
    2, 11, JSSVGPathSegArcAbsTableEntries, 7
};

/* Hash table for prototype */

static const HashEntry JSSVGPathSegArcAbsPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGPathSegArcAbsPrototypeTable = 
{
    2, 1, JSSVGPathSegArcAbsPrototypeTableEntries, 1
};

const ClassInfo JSSVGPathSegArcAbsPrototype::info = { "SVGPathSegArcAbsPrototype", 0, &JSSVGPathSegArcAbsPrototypeTable, 0 };

JSObject* JSSVGPathSegArcAbsPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGPathSegArcAbsPrototype>(exec, "[[JSSVGPathSegArcAbs.prototype]]");
}

const ClassInfo JSSVGPathSegArcAbs::info = { "SVGPathSegArcAbs", &JSSVGPathSeg::info, &JSSVGPathSegArcAbsTable, 0 };

JSSVGPathSegArcAbs::JSSVGPathSegArcAbs(ExecState* exec, SVGPathSegArcAbs* impl)
    : JSSVGPathSeg(exec, impl)
{
    setPrototype(JSSVGPathSegArcAbsPrototype::self(exec));
}

bool JSSVGPathSegArcAbs::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegArcAbs, JSSVGPathSeg>(exec, &JSSVGPathSegArcAbsTable, this, propertyName, slot);
}

JSValue* JSSVGPathSegArcAbs::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        return jsNumber(imp->x());
    }
    case YAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        return jsNumber(imp->y());
    }
    case R1AttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        return jsNumber(imp->r1());
    }
    case R2AttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        return jsNumber(imp->r2());
    }
    case AngleAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        return jsNumber(imp->angle());
    }
    case LargeArcFlagAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        return jsBoolean(imp->largeArcFlag());
    }
    case SweepFlagAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        return jsBoolean(imp->sweepFlag());
    }
    }
    return 0;
}

void JSSVGPathSegArcAbs::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGPathSegArcAbs, JSSVGPathSeg>(exec, propertyName, value, attr, &JSSVGPathSegArcAbsTable, this);
}

void JSSVGPathSegArcAbs::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        imp->setX(value->toFloat(exec));
        break;
    }
    case YAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        imp->setY(value->toFloat(exec));
        break;
    }
    case R1AttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        imp->setR1(value->toFloat(exec));
        break;
    }
    case R2AttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        imp->setR2(value->toFloat(exec));
        break;
    }
    case AngleAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        imp->setAngle(value->toFloat(exec));
        break;
    }
    case LargeArcFlagAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        imp->setLargeArcFlag(value->toBoolean(exec));
        break;
    }
    case SweepFlagAttrNum: {
        SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

        imp->setSweepFlag(value->toBoolean(exec));
        break;
    }
    }
    SVGPathSegArcAbs* imp = static_cast<SVGPathSegArcAbs*>(impl());

    ASSERT(exec && exec->dynamicInterpreter());
    Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
    if (!activeFrame)
        return;

    SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
    if (extensions && extensions->hasGenericContext<SVGPathSeg>(imp)) {
        const SVGElement* context = extensions->genericContext<SVGPathSeg>(imp);
        ASSERT(context);

        context->notifyAttributeChange();
    }

}


}

#endif // ENABLE(SVG)
