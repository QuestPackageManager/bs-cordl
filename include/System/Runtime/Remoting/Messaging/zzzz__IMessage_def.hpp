#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/IMessage.hpp"
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
// Dependencies
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.IMessage
class CORDL_TYPE IMessage {
public:
  // Declarations
  __declspec(property(get = get_Properties)) ::System::Collections::IDictionary* Properties;

  /// @brief Method get_Properties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* get_Properties();

  // Ctor Parameters [CppParam { name: "", ty: "IMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMessage(IMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3184 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMessage*, "System.Runtime.Remoting.Messaging", "IMessage");
