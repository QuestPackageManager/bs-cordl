#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ClientIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClientIdentity)
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class Type;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ClientIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ClientIdentity);
// Dependencies System.Runtime.Remoting.Identity
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.ClientIdentity
class CORDL_TYPE ClientIdentity : public ::System::Runtime::Remoting::Identity {
public:
  // Declarations
  __declspec(property(get = get_ClientProxy, put = set_ClientProxy)) ::System::MarshalByRefObject* ClientProxy;

  __declspec(property(get = get_TargetUri)) ::StringW TargetUri;

  /// @brief Field _proxyReference, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__proxyReference, put = __cordl_internal_set__proxyReference)) ::System::WeakReference* _proxyReference;

  /// @brief Method CreateObjRef, addr 0x5971414, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType);

  static inline ::System::Runtime::Remoting::ClientIdentity* New_ctor(::StringW objectUri, ::System::Runtime::Remoting::ObjRef* objRef);

  constexpr ::System::WeakReference* const& __cordl_internal_get__proxyReference() const;

  constexpr ::System::WeakReference*& __cordl_internal_get__proxyReference();

  constexpr void __cordl_internal_set__proxyReference(::System::WeakReference* value);

  /// @brief Method .ctor, addr 0x597121c, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectUri, ::System::Runtime::Remoting::ObjRef* objRef);

  /// @brief Method get_ClientProxy, addr 0x5971310, size 0x8c, virtual false, abstract: false, final false
  inline ::System::MarshalByRefObject* get_ClientProxy();

  /// @brief Method get_TargetUri, addr 0x597141c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_TargetUri();

  /// @brief Method set_ClientProxy, addr 0x597139c, size 0x78, virtual false, abstract: false, final false
  inline void set_ClientProxy(::System::MarshalByRefObject* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientIdentity(ClientIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientIdentity(ClientIdentity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3077 };

  /// @brief Field _proxyReference, offset: 0x48, size: 0x8, def value: None
  ::System::WeakReference* ____proxyReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::ClientIdentity, ____proxyReference) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ClientIdentity, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ClientIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ClientIdentity*, "System.Runtime.Remoting", "ClientIdentity");
