#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/IConstructionReturnMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
CORDL_MODULE_EXPORT(IConstructionReturnMessage)
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Activation::IConstructionReturnMessage);
// Dependencies System.Runtime.Remoting.Messaging.IMessage, System.Runtime.Remoting.Messaging.IMethodMessage, System.Runtime.Remoting.Messaging.IMethodReturnMessage
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// CS Name: System.Runtime.Remoting.Activation.IConstructionReturnMessage
class CORDL_TYPE IConstructionReturnMessage {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodMessage*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMessage* i___System__Runtime__Remoting__Messaging__IMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* i___System__Runtime__Remoting__Messaging__IMethodMessage() noexcept;

  /// @brief Convert to "::System::Runtime::Remoting::Messaging::IMethodReturnMessage"
  constexpr ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* i___System__Runtime__Remoting__Messaging__IMethodReturnMessage() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IConstructionReturnMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConstructionReturnMessage(IConstructionReturnMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3134 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Activation
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IConstructionReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IConstructionReturnMessage*, "System.Runtime.Remoting.Activation", "IConstructionReturnMessage");
