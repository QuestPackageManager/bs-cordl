#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadCancelResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
CORDL_MODULE_EXPORT(MessageWithAssetFileDownloadCancelResult)
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadCancelResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult);
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAssetFileDownloadCancelResult
class CORDL_TYPE MessageWithAssetFileDownloadCancelResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*> {
public:
  // Declarations
  /// @brief Method GetAssetFileDownloadCancelResult, addr 0x3f7fbe8, size 0x3c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult();

  /// @brief Method GetDataFromMessage, addr 0x3f7fc24, size 0x94, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x3f7d830, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr c_message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAssetFileDownloadCancelResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadCancelResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAssetFileDownloadCancelResult(MessageWithAssetFileDownloadCancelResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadCancelResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAssetFileDownloadCancelResult(MessageWithAssetFileDownloadCancelResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15363 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*, "Oculus.Platform", "MessageWithAssetFileDownloadCancelResult");
