#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadCancelResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAssetFileDownloadCancelResult)
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadCancelResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult);
// Type: Oculus.Platform::MessageWithAssetFileDownloadCancelResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13269), inst: 4473 }), TypeDefinitionIndex(TypeDefinitionIndex(13269)),
// TypeDefinitionIndex(TypeDefinitionIndex(13457))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13283)) CS Name: ::Oculus.Platform::MessageWithAssetFileDownloadCancelResult*
class CORDL_TYPE MessageWithAssetFileDownloadCancelResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadCancelResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithAssetFileDownloadCancelResult* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x2592954 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetAssetFileDownloadCancelResult addr 0x2594be4 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult();

  /// @brief Method GetDataFromMessage addr 0x2594c20 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadCancelResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAssetFileDownloadCancelResult(MessageWithAssetFileDownloadCancelResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadCancelResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAssetFileDownloadCancelResult(MessageWithAssetFileDownloadCancelResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAssetFileDownloadCancelResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetFileDownloadCancelResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetFileDownloadCancelResult*, "Oculus.Platform", "MessageWithAssetFileDownloadCancelResult");
