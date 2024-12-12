#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchFriendRequestFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLaunchFriendRequestFlowResult)
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchFriendRequestFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLaunchFriendRequestFlowResult
class CORDL_TYPE MessageWithLaunchFriendRequestFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7d6a8, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetLaunchFriendRequestFlowResult, addr 0x3f7d66c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult();

  static inline ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7aaf4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLaunchFriendRequestFlowResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*, "Oculus.Platform", "MessageWithLaunchFriendRequestFlowResult");
