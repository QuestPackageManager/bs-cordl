#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAssetFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontAssetFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontAssetFactory);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.FontAssetFactory
class CORDL_TYPE FontAssetFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_SystemFontName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_SystemFontName, put = setStaticF_k_SystemFontName)) ::StringW k_SystemFontName;

  /// @brief Field visitedFontAssets, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_visitedFontAssets,
                      put = setStaticF_visitedFontAssets)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* visitedFontAssets;

  /// @brief Method CreateDefaultEditorFontAsset, addr 0x6a327b4, size 0x834, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> CreateDefaultEditorFontAsset(::UnityEngine::Font* font, ::UnityEngine::Shader* shader);

  /// @brief Method SetHideFlags, addr 0x6a330b0, size 0xc0, virtual false, abstract: false, final false
  static inline void SetHideFlags(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method SetupFontAssetSettings, addr 0x6a32fe8, size 0xc8, virtual false, abstract: false, final false
  static inline void SetupFontAssetSettings(::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::Shader* shader);

  static inline ::StringW getStaticF_k_SystemFontName();

  static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_visitedFontAssets();

  static inline void setStaticF_k_SystemFontName(::StringW value);

  static inline void setStaticF_visitedFontAssets(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAssetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontAssetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontAssetFactory(FontAssetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontAssetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontAssetFactory(FontAssetFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17197 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAssetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAssetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAssetFactory*, "UnityEngine.TextCore.Text", "FontAssetFactory");
