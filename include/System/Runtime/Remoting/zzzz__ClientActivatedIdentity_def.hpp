#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClientActivatedIdentity)
namespace System {
class MarshalByRefObject;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ClientActivatedIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ClientActivatedIdentity);
// Type: System.Runtime.Remoting::ClientActivatedIdentity
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3073))
// CS Name: ::System.Runtime.Remoting::ClientActivatedIdentity*
class CORDL_TYPE ClientActivatedIdentity : public ::System::Runtime::Remoting::ServerIdentity {
public:
  // Declarations
  /// @brief Field _targetThis, offset 0x70, size 0x8
  __declspec(property(get = __get__targetThis, put = __set__targetThis))::System::MarshalByRefObject* _targetThis;

  constexpr ::System::MarshalByRefObject*& __get__targetThis();

  constexpr ::cordl_internals::to_const_pointer<::System::MarshalByRefObject*> const& __get__targetThis() const;

  constexpr void __set__targetThis(::System::MarshalByRefObject* value);

  static inline ::System::Runtime::Remoting::ClientActivatedIdentity* New_ctor(::StringW objectUri, ::System::Type* objectType);

  /// @brief Method .ctor addr 0x2493760 size 0x2c virtual false final false
  inline void _ctor(::StringW objectUri, ::System::Type* objectType);

  /// @brief Method GetServerObject addr 0x249378c size 0x8 virtual false final false
  inline ::System::MarshalByRefObject* GetServerObject();

  /// @brief Method SetClientProxy addr 0x2493794 size 0x8 virtual false final false
  inline void SetClientProxy(::System::MarshalByRefObject* obj);

  /// @brief Method OnLifetimeExpired addr 0x249379c size 0x60 virtual true final false
  inline void OnLifetimeExpired();

  /// @brief Method SyncObjectProcessMessage addr 0x24937fc size 0xdc virtual true final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method AsyncObjectProcessMessage addr 0x2493a90 size 0xf0 virtual true final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                         ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  // Ctor Parameters [CppParam { name: "", ty: "ClientActivatedIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClientActivatedIdentity(ClientActivatedIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClientActivatedIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClientActivatedIdentity(ClientActivatedIdentity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClientActivatedIdentity();

public:
  /// @brief Field _targetThis, offset: 0x70, size: 0x8, def value: None
  ::System::MarshalByRefObject* ____targetThis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ClientActivatedIdentity, 0x78>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ClientActivatedIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ClientActivatedIdentity*, "System.Runtime.Remoting", "ClientActivatedIdentity");
