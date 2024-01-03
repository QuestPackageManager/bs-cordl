#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SingleCallIdentity)
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class SingleCallIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::SingleCallIdentity);
// Type: System.Runtime.Remoting::SingleCallIdentity
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3075))
// CS Name: ::System.Runtime.Remoting::SingleCallIdentity*
class CORDL_TYPE SingleCallIdentity : public ::System::Runtime::Remoting::ServerIdentity {
public:
  // Declarations
  static inline ::System::Runtime::Remoting::SingleCallIdentity* New_ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType);

  /// @brief Method .ctor, addr 0x2493f5c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectUri, ::System::Runtime::Remoting::Contexts::Context* context, ::System::Type* objectType);

  /// @brief Method SyncObjectProcessMessage, addr 0x2493f8c, size 0x210, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);

  /// @brief Method AsyncObjectProcessMessage, addr 0x249419c, size 0x1c0, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                         ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);

  // Ctor Parameters [CppParam { name: "", ty: "SingleCallIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SingleCallIdentity(SingleCallIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SingleCallIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SingleCallIdentity(SingleCallIdentity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SingleCallIdentity();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::SingleCallIdentity, 0x70>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::SingleCallIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::SingleCallIdentity*, "System.Runtime.Remoting", "SingleCallIdentity");
