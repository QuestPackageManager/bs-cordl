#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ATGMeshInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATGMeshInfo)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct NativeTextElementInfo;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct ATGMeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::ATGMeshInfo);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.ATGMeshInfo
struct CORDL_TYPE ATGMeshInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGMeshInfo();

  // Ctor Parameters [CppParam { name: "textElementInfos", ty: "::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo,::Array<::UnityEngine::TextCore::Text::NativeTextElementInfo>*>",
  // modifiers: "", def_value: None }, CppParam { name: "fontAssetId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textElementCount", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: None }]
  constexpr ATGMeshInfo(::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo, ::Array<::UnityEngine::TextCore::Text::NativeTextElementInfo>*> textElementInfos, int32_t fontAssetId,
                        int32_t textElementCount, ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17169 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field textElementInfos, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo, ::Array<::UnityEngine::TextCore::Text::NativeTextElementInfo>*> textElementInfos;

  /// @brief Field fontAssetId, offset: 0x8, size: 0x4, def value: None
  int32_t fontAssetId;

  /// @brief Field textElementCount, offset: 0xc, size: 0x4, def value: None
  int32_t textElementCount;

  /// @brief Field fontAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, textElementInfos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, fontAssetId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, textElementCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, fontAsset) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::ATGMeshInfo, 0x18>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::ATGMeshInfo, "UnityEngine.TextCore.Text", "ATGMeshInfo");
