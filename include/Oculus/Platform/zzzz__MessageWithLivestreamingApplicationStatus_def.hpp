#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLivestreamingApplicationStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLivestreamingApplicationStatus)
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingApplicationStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLivestreamingApplicationStatus);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLivestreamingApplicationStatus
class CORDL_TYPE MessageWithLivestreamingApplicationStatus : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingApplicationStatus*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7f368, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetLivestreamingApplicationStatus, addr 0x3f7f32c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* GetLivestreamingApplicationStatus();

  static inline ::Oculus::Platform::MessageWithLivestreamingApplicationStatus* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7f2d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLivestreamingApplicationStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingApplicationStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLivestreamingApplicationStatus(MessageWithLivestreamingApplicationStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingApplicationStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLivestreamingApplicationStatus(MessageWithLivestreamingApplicationStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15392 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLivestreamingApplicationStatus, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingApplicationStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingApplicationStatus*, "Oculus.Platform", "MessageWithLivestreamingApplicationStatus");
