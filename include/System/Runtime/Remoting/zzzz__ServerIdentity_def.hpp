#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ServerIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__Identity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerIdentity)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Lifetime {
class ILease;
}
namespace System::Runtime::Remoting::Lifetime {
class Lease;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class MarshalByRefObject;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ServerIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ServerIdentity);
// Type: System.Runtime.Remoting::ServerIdentity
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::ServerIdentity*
class CORDL_TYPE ServerIdentity : public ::System::Runtime::Remoting::Identity {
public:
  // Declarations
  __declspec(property(get = get_Context, put = set_Context)) ::System::Runtime::Remoting::Contexts::Context* Context;

  __declspec(property(get = get_Lease)) ::System::Runtime::Remoting::Lifetime::Lease* Lease;

  __declspec(property(get = get_ObjectType)) ::System::Type* ObjectType;

  /// @brief Field _context, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::System::Runtime::Remoting::Contexts::Context* _context;

  /// @brief Field _lease, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__lease, put = __cordl_internal_set__lease)) ::System::Runtime::Remoting::Lifetime::Lease* _lease;

  /// @brief Field _objectType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__objectType, put = __cordl_internal_set__objectType)) ::System::Type* _objectType;

  /// @brief Field _serverObject, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__serverObject, put = __cordl_internal_set__serverObject)) ::System::MarshalByRefObject* _serverObject;

  /// @brief Field _serverSink, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__serverSink, put = __cordl_internal_set__serverSink)) ::System::Runtime::Remoting::Messaging::IMessageSink* _serverSink;

  /// @brief Method AsyncObjectProcessMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                         ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  /// @brief Method AttachServerObject, addr 0x3c5dd1c, size 0x5c, virtual false, abstract: false, final false
  inline void AttachServerObject(::System::MarshalByRefObject* serverObject, ::System::Runtime::Remoting::Contexts::Context* context);

  /// @brief Method CreateObjRef, addr 0x3c5efe8, size 0x1a4, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* requestedType);

  /// @brief Method DisposeServerObject, addr 0x3c5ef6c, size 0x7c, virtual false, abstract: false, final false
  inline void DisposeServerObject();

  static inline ::System::Runtime::Remoting::ServerIdentity* New_ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType);

  /// @brief Method OnLifetimeExpired, addr 0x3c5ef68, size 0x4, virtual true, abstract: false, final false
  inline void OnLifetimeExpired();

  /// @brief Method StartTrackingLifetime, addr 0x3c5b840, size 0x190, virtual false, abstract: false, final false
  inline void StartTrackingLifetime(::System::Runtime::Remoting::Lifetime::ILease* lease);

  /// @brief Method SyncObjectProcessMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  constexpr ::System::Runtime::Remoting::Contexts::Context*& __cordl_internal_get__context();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::Context*> const& __cordl_internal_get__context() const;

  constexpr ::System::Runtime::Remoting::Lifetime::Lease*& __cordl_internal_get__lease();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Lifetime::Lease*> const& __cordl_internal_get__lease() const;

  constexpr ::System::Type*& __cordl_internal_get__objectType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__objectType() const;

  constexpr ::System::MarshalByRefObject*& __cordl_internal_get__serverObject();

  constexpr ::cordl_internals::to_const_pointer<::System::MarshalByRefObject*> const& __cordl_internal_get__serverObject() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& __cordl_internal_get__serverSink();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& __cordl_internal_get__serverSink() const;

  constexpr void __cordl_internal_set__context(::System::Runtime::Remoting::Contexts::Context* value);

  constexpr void __cordl_internal_set__lease(::System::Runtime::Remoting::Lifetime::Lease* value);

  constexpr void __cordl_internal_set__objectType(::System::Type* value);

  constexpr void __cordl_internal_set__serverObject(::System::MarshalByRefObject* value);

  constexpr void __cordl_internal_set__serverSink(::System::Runtime::Remoting::Messaging::IMessageSink* value);

  /// @brief Method .ctor, addr 0x3c5ed70, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType);

  /// @brief Method get_Context, addr 0x3c5f73c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Contexts::Context* get_Context();

  /// @brief Method get_Lease, addr 0x3c5f734, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::Lifetime::Lease* get_Lease();

  /// @brief Method get_ObjectType, addr 0x3c5eda0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method set_Context, addr 0x3c5f744, size 0x8, virtual false, abstract: false, final false
  inline void set_Context(::System::Runtime::Remoting::Contexts::Context* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerIdentity(ServerIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerIdentity(ServerIdentity const&) = delete;

  /// @brief Field _objectType, offset: 0x48, size: 0x8, def value: None
  ::System::Type* ____objectType;

  /// @brief Field _serverObject, offset: 0x50, size: 0x8, def value: None
  ::System::MarshalByRefObject* ____serverObject;

  /// @brief Field _serverSink, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMessageSink* ____serverSink;

  /// @brief Field _context, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::Remoting::Contexts::Context* ____context;

  /// @brief Field _lease, offset: 0x68, size: 0x8, def value: None
  ::System::Runtime::Remoting::Lifetime::Lease* ____lease;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3071 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ServerIdentity, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ServerIdentity, ____objectType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ServerIdentity, ____serverObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ServerIdentity, ____serverSink) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ServerIdentity, ____context) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ServerIdentity, ____lease) == 0x68, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ServerIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ServerIdentity*, "System.Runtime.Remoting", "ServerIdentity");
