#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLivestreamingStartResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithLivestreamingStartResult)
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLivestreamingStartResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLivestreamingStartResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithLivestreamingStartResult
class CORDL_TYPE MessageWithLivestreamingStartResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingStartResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f7de88, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStartResult* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetLivestreamingStartResult, addr 0x3f7de4c, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::LivestreamingStartResult* GetLivestreamingStartResult();

  static inline ::Oculus::Platform::MessageWithLivestreamingStartResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7ddf4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithLivestreamingStartResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStartResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithLivestreamingStartResult(MessageWithLivestreamingStartResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithLivestreamingStartResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithLivestreamingStartResult(MessageWithLivestreamingStartResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLivestreamingStartResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLivestreamingStartResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLivestreamingStartResult*, "Oculus.Platform", "MessageWithLivestreamingStartResult");
