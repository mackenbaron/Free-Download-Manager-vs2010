/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_InterAppMessagePortBinding_h__
#define mozilla_dom_InterAppMessagePortBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"
#include "nsDOMEventTargetHelper.h"
#include "nsWeakReference.h"

namespace mozilla {
namespace dom {

class EventHandlerNonNull;
class MozInterAppMessagePort;
class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

namespace MozInterAppMessagePortBinding {

  typedef mozilla::dom::MozInterAppMessagePort NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::MozInterAppMessagePort* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace MozInterAppMessagePortBinding



class MozInterAppMessagePortJSImpl : public CallbackInterface
{
public:
  explicit inline MozInterAppMessagePortJSImpl(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCallback, aIncumbentGlobal)
  {
  }

  void PostMessage(JS::Handle<JS::Value> message, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Start(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Close(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void __Init(const nsAString& messagePortID, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const MozInterAppMessagePortJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  already_AddRefed<EventHandlerNonNull> GetOnmessage(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void SetOnmessage(EventHandlerNonNull* arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);
};


class MozInterAppMessagePort MOZ_FINAL : public nsDOMEventTargetHelper
{
public:
  NS_DECL_ISUPPORTS_INHERITED
  NS_DECL_CYCLE_COLLECTION_CLASS_INHERITED(MozInterAppMessagePort, nsDOMEventTargetHelper)

private:
  nsRefPtr<MozInterAppMessagePortJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  MozInterAppMessagePort(JS::Handle<JSObject*> aJSImplObject, nsPIDOMWindow* aParent);

  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  static already_AddRefed<MozInterAppMessagePort> Constructor(const GlobalObject& global, JSContext* cx, const nsAString& messagePortID, ErrorResult& aRv);

  void PostMessage(JS::Handle<JS::Value> message, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Start(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void Close(ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  already_AddRefed<EventHandlerNonNull> GetOnmessage(ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void SetOnmessage(EventHandlerNonNull* arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_InterAppMessagePortBinding_h__
