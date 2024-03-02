#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMessage)
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::IMessage);
// Type: System.Runtime.Remoting.Messaging::IMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Messaging::IMessage*
class CORDL_TYPE IMessage {
public:
  // Declarations
  __declspec(property(get = get_Properties))::System::Collections::IDictionary* Properties;

  /// @brief Method get_Properties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::IDictionary* get_Properties();

  // Ctor Parameters [CppParam { name: "", ty: "IMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMessage(IMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMessage(IMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMessage*, "System.Runtime.Remoting.Messaging", "IMessage");
