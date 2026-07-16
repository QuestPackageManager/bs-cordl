#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/ActivationServices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ActivationServices)
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class ConstructionCall;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Proxies {
class RemotingProxy;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class ActivationServices;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::Activation::ActivationServices*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::Activation::ActivationServices*, "System.Runtime.Remoting.Activation", "ActivationServices");
// Dependencies System.Object
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: System.Runtime.Remoting.Activation.ActivationServices
class CORDL_TYPE ActivationServices : public ::System::Object {
public:
  // Declarations
  /// @brief Field _constructionActivator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__constructionActivator, put = setStaticF__constructionActivator)) ::System::Runtime::Remoting::Activation::IActivator* _constructionActivator;

  /// @brief Method Activate, addr 0x5b324b4, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* Activate(::System::Runtime::Remoting::Proxies::RemotingProxy* proxy,
                                                                           ::System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall);

  /// @brief Method AllocateUninitializedClassInstance, addr 0x5b3add4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* AllocateUninitializedClassInstance(::System::Type* type);

  /// @brief Method CreateConstructionCall, addr 0x5b30d6c, size 0x918, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(::System::Type* type, ::StringW activationUrl, ::ArrayW<::System::Object*> activationAttributes);

  /// @brief Method CreateInstanceFromMessage, addr 0x5b3abf4, size 0x1e0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);

  /// @brief Method CreateProxyForType, addr 0x5b3add8, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Object* CreateProxyForType(::System::Type* type);

  /// @brief Method EnableProxyActivation, addr 0x5b3af10, size 0x8, virtual false, abstract: false, final false
  static inline void EnableProxyActivation(::System::Type* type, bool enable);

  /// @brief Method RemoteActivate, addr 0x5b3aa04, size 0x1e0, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);

  static inline ::System::Runtime::Remoting::Activation::IActivator* getStaticF__constructionActivator();

  /// @brief Method get_ConstructionActivator, addr 0x5b3a978, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator();

  static inline void setStaticF__constructionActivator(::System::Runtime::Remoting::Activation::IActivator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivationServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivationServices(ActivationServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivationServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivationServices(ActivationServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3145 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Remoting::Activation::ActivationServices) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Remoting::Activation
