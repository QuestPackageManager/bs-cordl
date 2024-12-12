#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLivestreamingStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLivestreamingStatus)
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLivestreamingStatus);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLivestreamingStatus
class CORDL_TYPE MessageWithLivestreamingStatus : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingStatus*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7df58, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStatus* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetLivestreamingStatus, addr 0x3f7df1c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStatus* GetLivestreamingStatus();

  static inline ::Oculus::Platform::MessageWithLivestreamingStatus* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7ad04, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLivestreamingStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLivestreamingStatus(MessageWithLivestreamingStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLivestreamingStatus(MessageWithLivestreamingStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLivestreamingStatus, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingStatus*, "Oculus.Platform", "MessageWithLivestreamingStatus");
