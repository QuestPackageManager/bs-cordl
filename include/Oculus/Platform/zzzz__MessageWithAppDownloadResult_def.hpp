#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAppDownloadResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAppDownloadResult)
namespace Oculus::Platform::Models {
class AppDownloadResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAppDownloadResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAppDownloadResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAppDownloadResult
class CORDL_TYPE MessageWithAppDownloadResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AppDownloadResult*> {
public:
  // Declarations
  /// @brief Method GetAppDownloadResult, addr 0x3f8b360, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadResult* GetAppDownloadResult();

  /// @brief Method GetDataFromMessage, addr 0x3f8b39c, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadResult* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAppDownloadResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f89278, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAppDownloadResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAppDownloadResult(MessageWithAppDownloadResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAppDownloadResult(MessageWithAppDownloadResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15363 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAppDownloadResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAppDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAppDownloadResult*, "Oculus.Platform", "MessageWithAppDownloadResult");
