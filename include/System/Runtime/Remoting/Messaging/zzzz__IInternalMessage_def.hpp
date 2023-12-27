#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IInternalMessage)
namespace System::Runtime::Remoting {
class Identity;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IInternalMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IInternalMessage);
// Type: System.Runtime.Remoting.Messaging::IInternalMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3167))
// CS Name: ::System.Runtime.Remoting.Messaging::IInternalMessage*
class CORDL_TYPE IInternalMessage {
public:
  // Declarations
  __declspec(property(get = get_TargetIdentity, put = set_TargetIdentity))::System::Runtime::Remoting::Identity* TargetIdentity;

  __declspec(property(get = get_Uri, put = set_Uri))::StringW Uri;

  /// @brief Method get_TargetIdentity addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Runtime::Remoting::Identity* get_TargetIdentity();

  /// @brief Method set_TargetIdentity addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_TargetIdentity(::System::Runtime::Remoting::Identity* value);

  /// @brief Method get_Uri addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Uri();

  /// @brief Method set_Uri addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_Uri(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IInternalMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInternalMessage(IInternalMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInternalMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInternalMessage(IInternalMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IInternalMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IInternalMessage*, "System.Runtime.Remoting.Messaging", "IInternalMessage");
