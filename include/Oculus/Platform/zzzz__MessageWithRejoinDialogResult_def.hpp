#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithRejoinDialogResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
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
// Type: Oculus.Platform::MessageWithRejoinDialogResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithRejoinDialogResult*
class CORDL_TYPE MessageWithRejoinDialogResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RejoinDialogResult*> {
public:
  // Declarations
  /// @brief Method GetDataFromMessage, addr 0x2afda40, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RejoinDialogResult* GetDataFromMessage(::System::IntPtr c_message);

  /// @brief Method GetRejoinDialogResult, addr 0x2afda04, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::RejoinDialogResult* GetRejoinDialogResult();

  static inline ::Oculus::Platform::MessageWithRejoinDialogResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x2af99bc, size 0x58, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithRejoinDialogResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithRejoinDialogResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRejoinDialogResult*, "Oculus.Platform", "MessageWithRejoinDialogResult");
