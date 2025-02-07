#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAppDownloadProgressResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAppDownloadProgressResult)
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAppDownloadProgressResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAppDownloadProgressResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAppDownloadProgressResult
class CORDL_TYPE MessageWithAppDownloadProgressResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AppDownloadProgressResult*> {
public:
  // Declarations
  /// @brief Method GetAppDownloadProgressResult, addr 0x3f82290, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetAppDownloadProgressResult();

  /// @brief Method GetDataFromMessage, addr 0x3f822cc, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AppDownloadProgressResult* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAppDownloadProgressResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f80220, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAppDownloadProgressResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadProgressResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAppDownloadProgressResult(MessageWithAppDownloadProgressResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAppDownloadProgressResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAppDownloadProgressResult(MessageWithAppDownloadProgressResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAppDownloadProgressResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAppDownloadProgressResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAppDownloadProgressResult*, "Oculus.Platform", "MessageWithAppDownloadProgressResult");
