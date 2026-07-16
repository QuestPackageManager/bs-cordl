#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadCancelResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*, "Oculus.Platform", "MessageWithAssetFileDownloadCancelResult");
// Dependencies Oculus.Platform.Message`1<T>
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.MessageWithAssetFileDownloadCancelResult
class CORDL_TYPE MessageWithAssetFileDownloadCancelResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*> {
public:
  // Declarations
  /// @brief Method GetAssetFileDownloadCancelResult, addr 0x5dd802c, size 0x44, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult();

  /// @brief Method GetDataFromMessage, addr 0x5dd8070, size 0x9c, virtual true, abstract: false, final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetDataFromMessage(::System::IntPtr c_message);

  static inline ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult* New_ctor(::System::IntPtr c_message);

  /// @brief Method .ctor, addr 0x5dd4ff8, size 0x5c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult) == 0x30, "Size mismatch!");

} // namespace Oculus::Platform
