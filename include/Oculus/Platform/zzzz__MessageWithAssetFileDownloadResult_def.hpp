#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAssetFileDownloadResult)
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetFileDownloadResult);
// Type: Oculus.Platform::MessageWithAssetFileDownloadResult
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13421)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4580 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13279)) CS Name: ::Oculus.Platform::MessageWithAssetFileDownloadResult*
class CORDL_TYPE MessageWithAssetFileDownloadResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadResult*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithAssetFileDownloadResult* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26eecc0 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetAssetFileDownloadResult addr 0x26f11d0 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetAssetFileDownloadResult();

  /// @brief Method GetDataFromMessage addr 0x26f120c size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::AssetFileDownloadResult* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithAssetFileDownloadResult(MessageWithAssetFileDownloadResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithAssetFileDownloadResult(MessageWithAssetFileDownloadResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithAssetFileDownloadResult();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetFileDownloadResult, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetFileDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetFileDownloadResult*, "Oculus.Platform", "MessageWithAssetFileDownloadResult");
