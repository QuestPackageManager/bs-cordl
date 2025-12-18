#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPushNotificationResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithPushNotificationResult)
namespace Oculus::Platform::Models {
class PushNotificationResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPushNotificationResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPushNotificationResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithPushNotificationResult
class CORDL_TYPE MessageWithPushNotificationResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PushNotificationResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x5c2e714, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PushNotificationResult* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetPushNotificationResult, addr 0x5c2e6d0, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::PushNotificationResult* GetPushNotificationResult();

  static inline ::Oculus::Platform::MessageWithPushNotificationResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5c2999c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithPushNotificationResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPushNotificationResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithPushNotificationResult(MessageWithPushNotificationResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithPushNotificationResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithPushNotificationResult(MessageWithPushNotificationResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17882 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPushNotificationResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPushNotificationResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPushNotificationResult*, "Oculus.Platform", "MessageWithPushNotificationResult");
