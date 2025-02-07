#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchBlockFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLaunchBlockFlowResult)
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchBlockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchBlockFlowResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLaunchBlockFlowResult
class CORDL_TYPE MessageWithLaunchBlockFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchBlockFlowResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f83494, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetLaunchBlockFlowResult, addr 0x3f83458, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult();

  static inline ::Oculus::Platform::MessageWithLaunchBlockFlowResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f80958, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLaunchBlockFlowResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchBlockFlowResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchBlockFlowResult*, "Oculus.Platform", "MessageWithLaunchBlockFlowResult");
