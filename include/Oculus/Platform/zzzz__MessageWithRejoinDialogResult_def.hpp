#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithRejoinDialogResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithRejoinDialogResult)
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRejoinDialogResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithRejoinDialogResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithRejoinDialogResult
class CORDL_TYPE MessageWithRejoinDialogResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RejoinDialogResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x3f80540, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RejoinDialogResult* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetRejoinDialogResult, addr 0x3f80504, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RejoinDialogResult* GetRejoinDialogResult();

  static inline ::Oculus::Platform::MessageWithRejoinDialogResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7c6d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithRejoinDialogResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRejoinDialogResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithRejoinDialogResult(MessageWithRejoinDialogResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithRejoinDialogResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithRejoinDialogResult(MessageWithRejoinDialogResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithRejoinDialogResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithRejoinDialogResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRejoinDialogResult*, "Oculus.Platform", "MessageWithRejoinDialogResult");
