#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAvatarEditorResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAvatarEditorResult)
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAvatarEditorResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAvatarEditorResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAvatarEditorResult
class CORDL_TYPE MessageWithAvatarEditorResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AvatarEditorResult*> {
public:
  // Declarations
  /// @brief Method GetAvatarEditorResult, addr 0x3f7e1fc, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AvatarEditorResult* GetAvatarEditorResult();

  /// @brief Method GetDataFromMessage, addr 0x3f7e238, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AvatarEditorResult* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAvatarEditorResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7bcdc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAvatarEditorResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAvatarEditorResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAvatarEditorResult(MessageWithAvatarEditorResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAvatarEditorResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAvatarEditorResult(MessageWithAvatarEditorResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAvatarEditorResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAvatarEditorResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAvatarEditorResult*, "Oculus.Platform", "MessageWithAvatarEditorResult");
