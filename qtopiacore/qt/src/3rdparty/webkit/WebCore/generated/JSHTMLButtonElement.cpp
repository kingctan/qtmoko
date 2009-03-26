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

#include "JSHTMLButtonElement.h"

#include <wtf/GetPtr.h>

#include "HTMLButtonElement.h"
#include "HTMLFormElement.h"
#include "JSHTMLFormElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLButtonElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "disabled", JSHTMLButtonElement::DisabledAttrNum, DontDelete, 0, &JSHTMLButtonElementTableEntries[8] },
    { 0, 0, 0, 0, 0 },
    { "type", JSHTMLButtonElement::TypeAttrNum, DontDelete|ReadOnly, 0, &JSHTMLButtonElementTableEntries[10] },
    { 0, 0, 0, 0, 0 },
    { "form", JSHTMLButtonElement::FormAttrNum, DontDelete|ReadOnly, 0, &JSHTMLButtonElementTableEntries[9] },
    { "accessKey", JSHTMLButtonElement::AccessKeyAttrNum, DontDelete, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "name", JSHTMLButtonElement::NameAttrNum, DontDelete, 0, &JSHTMLButtonElementTableEntries[11] },
    { "tabIndex", JSHTMLButtonElement::TabIndexAttrNum, DontDelete, 0, 0 },
    { "value", JSHTMLButtonElement::ValueAttrNum, DontDelete, 0, 0 },
    { "constructor", JSHTMLButtonElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSHTMLButtonElementTable = 
{
    2, 12, JSHTMLButtonElementTableEntries, 8
};

/* Hash table for constructor */

static const HashEntry JSHTMLButtonElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLButtonElementConstructorTable = 
{
    2, 1, JSHTMLButtonElementConstructorTableEntries, 1
};

class JSHTMLButtonElementConstructor : public DOMObject {
public:
    JSHTMLButtonElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLButtonElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLButtonElementConstructor::info = { "HTMLButtonElementConstructor", 0, &JSHTMLButtonElementConstructorTable, 0 };

bool JSHTMLButtonElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLButtonElementConstructor, DOMObject>(exec, &JSHTMLButtonElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLButtonElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLButtonElementPrototypeTableEntries[] =
{
    { "click", JSHTMLButtonElement::ClickFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSHTMLButtonElementPrototypeTable = 
{
    2, 1, JSHTMLButtonElementPrototypeTableEntries, 1
};

const ClassInfo JSHTMLButtonElementPrototype::info = { "HTMLButtonElementPrototype", 0, &JSHTMLButtonElementPrototypeTable, 0 };

JSObject* JSHTMLButtonElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLButtonElementPrototype>(exec, "[[JSHTMLButtonElement.prototype]]");
}

bool JSHTMLButtonElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSHTMLButtonElementPrototypeFunction, JSObject>(exec, &JSHTMLButtonElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLButtonElement::info = { "HTMLButtonElement", &JSHTMLElement::info, &JSHTMLButtonElementTable, 0 };

JSHTMLButtonElement::JSHTMLButtonElement(ExecState* exec, HTMLButtonElement* impl)
    : JSHTMLElement(exec, impl)
{
    setPrototype(JSHTMLButtonElementPrototype::self(exec));
}

bool JSHTMLButtonElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLButtonElement, JSHTMLElement>(exec, &JSHTMLButtonElementTable, this, propertyName, slot);
}

JSValue* JSHTMLButtonElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case FormAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->form()));
    }
    case AccessKeyAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        return jsString(imp->accessKey());
    }
    case DisabledAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        return jsBoolean(imp->disabled());
    }
    case NameAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        return jsString(imp->name());
    }
    case TabIndexAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        return jsNumber(imp->tabIndex());
    }
    case TypeAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        return jsString(imp->type());
    }
    case ValueAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        return jsString(imp->value());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLButtonElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLButtonElement, JSHTMLElement>(exec, propertyName, value, attr, &JSHTMLButtonElementTable, this);
}

void JSHTMLButtonElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case AccessKeyAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        imp->setAccessKey(valueToStringWithNullCheck(exec, value));
        break;
    }
    case DisabledAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        imp->setDisabled(value->toBoolean(exec));
        break;
    }
    case NameAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TabIndexAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        imp->setTabIndex(value->toInt32(exec));
        break;
    }
    case ValueAttrNum: {
        HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(impl());

        imp->setValue(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLButtonElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLButtonElementConstructor>(exec, "[[HTMLButtonElement.constructor]]");
}
JSValue* JSHTMLButtonElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHTMLButtonElement::info))
      return throwError(exec, TypeError);

    HTMLButtonElement* imp = static_cast<HTMLButtonElement*>(static_cast<JSHTMLButtonElement*>(thisObj)->impl());

    switch (id) {
    case JSHTMLButtonElement::ClickFuncNum: {

        imp->click();
        return jsUndefined();
    }
    }
    return 0;
}

}
