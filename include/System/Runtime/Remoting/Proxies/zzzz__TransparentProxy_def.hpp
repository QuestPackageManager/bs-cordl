#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Proxies/TransparentProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/zzzz__RuntimeRemoteClassHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TransparentProxy)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
// Forward declare root types
namespace System::Runtime::Remoting::Proxies {
class TransparentProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Proxies::TransparentProxy);
// Dependencies Mono.RuntimeRemoteClassHandle, System.Object
namespace System::Runtime::Remoting::Proxies {
// Is value type: false
// CS Name: System.Runtime.Remoting.Proxies.TransparentProxy
class CORDL_TYPE TransparentProxy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsContextBoundObject)) bool IsContextBoundObject;

  __declspec(property(get = get_TargetContext)) ::System::Runtime::Remoting::Contexts::Context* TargetContext;

  /// @brief Field _class, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__class, put = __cordl_internal_set__class)) ::Mono::RuntimeRemoteClassHandle _class;

  /// @brief Field _custom_type_info, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__custom_type_info, put = __cordl_internal_set__custom_type_info)) bool _custom_type_info;

  /// @brief Field _rp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rp, put = __cordl_internal_set__rp)) ::System::Runtime::Remoting::Proxies::RealProxy* _rp;

  /// @brief Method GetProxyType, addr 0x3cd9ab0, size 0xd0, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetProxyType();

  /// @brief Method InCurrentContext, addr 0x3cd9bb8, size 0x40, virtual false, abstract: false, final false
  inline bool InCurrentContext();

  /// @brief Method LoadRemoteFieldNew, addr 0x3cd9bf8, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Object* LoadRemoteFieldNew(::System::IntPtr classPtr, ::System::IntPtr fieldPtr);

  static inline ::System::Runtime::Remoting::Proxies::TransparentProxy* New_ctor();

  /// @brief Method StoreRemoteField, addr 0x3cda77c, size 0x2cc, virtual false, abstract: false, final false
  inline void StoreRemoteField(::System::IntPtr classPtr, ::System::IntPtr fieldPtr, ::System::Object* arg);

  constexpr ::Mono::RuntimeRemoteClassHandle const& __cordl_internal_get__class() const;

  constexpr ::Mono::RuntimeRemoteClassHandle& __cordl_internal_get__class();

  constexpr bool const& __cordl_internal_get__custom_type_info() const;

  constexpr bool& __cordl_internal_get__custom_type_info();

  constexpr ::System::Runtime::Remoting::Proxies::RealProxy* const& __cordl_internal_get__rp() const;

  constexpr ::System::Runtime::Remoting::Proxies::RealProxy*& __cordl_internal_get__rp();

  constexpr void __cordl_internal_set__class(::Mono::RuntimeRemoteClassHandle value);

  constexpr void __cordl_internal_set__custom_type_info(bool value);

  constexpr void __cordl_internal_set__rp(::System::Runtime::Remoting::Proxies::RealProxy* value);

  /// @brief Method .ctor, addr 0x3cdaa48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsContextBoundObject, addr 0x3cd9b80, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsContextBoundObject();

  /// @brief Method get_TargetContext, addr 0x3cd9b9c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Contexts::Context* get_TargetContext();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransparentProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransparentProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransparentProxy(TransparentProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransparentProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransparentProxy(TransparentProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3086 };

  /// @brief Field _rp, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Proxies::RealProxy* ____rp;

  /// @brief Field _class, offset: 0x18, size: 0x8, def value: None
  ::Mono::RuntimeRemoteClassHandle ____class;

  /// @brief Field _custom_type_info, offset: 0x20, size: 0x1, def value: None
  bool ____custom_type_info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Proxies::TransparentProxy, ____rp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::TransparentProxy, ____class) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Proxies::TransparentProxy, ____custom_type_info) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Proxies::TransparentProxy, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Proxies
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::TransparentProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::TransparentProxy*, "System.Runtime.Remoting.Proxies", "TransparentProxy");
