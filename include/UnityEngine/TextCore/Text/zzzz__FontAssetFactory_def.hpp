#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAssetFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FontAssetFactory)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontAssetFactory;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::FontAssetFactory*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::FontAssetFactory*, "UnityEngine.TextCore.Text", "FontAssetFactory");
// [Nullable(0)]
// [NullableContext(1)]
// [VisibleToOtherModules(new[] { "UnityEditor.CoreModule", "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.FontAssetFactory
class CORDL_TYPE FontAssetFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field visitedFontAssets, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_visitedFontAssets,
                      put = setStaticF_visitedFontAssets)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* visitedFontAssets;

  /// @brief Method ConvertFontToFontAsset, addr 0x70515dc, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> ConvertFontToFontAsset(::UnityEngine::Font* font);

  /// @brief Method SetHideFlags, addr 0x70517a8, size 0xc0, virtual false, abstract: false, final false
  static inline void SetHideFlags(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method SetupFontAssetSettings, addr 0x7051700, size 0xa8, virtual false, abstract: false, final false
  static inline void SetupFontAssetSettings(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_visitedFontAssets();

  static inline void setStaticF_visitedFontAssets(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAssetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontAssetFactory", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontAssetFactory(FontAssetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontAssetFactory", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontAssetFactory(FontAssetFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::FontAssetFactory) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
