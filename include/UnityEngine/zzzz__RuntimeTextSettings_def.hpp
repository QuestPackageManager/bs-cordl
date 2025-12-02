#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeTextSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
CORDL_MODULE_EXPORT(RuntimeTextSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class RuntimeTextSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RuntimeTextSettings);
// Dependencies UnityEngine.TextCore.Text.TextSettings
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RuntimeTextSettings
class CORDL_TYPE RuntimeTextSettings : public ::UnityEngine::TextCore::Text::TextSettings {
public:
  // Declarations
  /// @brief Field s_DefaultTextSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultTextSettings, put = setStaticF_s_DefaultTextSettings)) ::UnityW<::UnityEngine::RuntimeTextSettings> s_DefaultTextSettings;

  /// @brief Field s_FallbackOSFontAssetIMGUIInternal, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_FallbackOSFontAssetIMGUIInternal,
      put = setStaticF_s_FallbackOSFontAssetIMGUIInternal)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* s_FallbackOSFontAssetIMGUIInternal;

  /// @brief Method GetFontShader, addr 0x691d770, size 0x54, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> GetFontShader();

  /// @brief Method GetStaticFallbackOSFontAsset, addr 0x691d7c4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* GetStaticFallbackOSFontAsset();

  static inline ::UnityEngine::RuntimeTextSettings* New_ctor();

  /// @brief Method SetStaticFallbackOSFontAsset, addr 0x691d810, size 0x50, virtual true, abstract: false, final false
  inline void SetStaticFallbackOSFontAsset(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* fontAssets);

  /// @brief Method .ctor, addr 0x691d860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::RuntimeTextSettings> getStaticF_s_DefaultTextSettings();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* getStaticF_s_FallbackOSFontAssetIMGUIInternal();

  /// @brief Method get_defaultTextSettings, addr 0x691d6b0, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RuntimeTextSettings> get_defaultTextSettings();

  static inline void setStaticF_s_DefaultTextSettings(::UnityW<::UnityEngine::RuntimeTextSettings> value);

  static inline void setStaticF_s_FallbackOSFontAssetIMGUIInternal(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeTextSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeTextSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeTextSettings(RuntimeTextSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeTextSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeTextSettings(RuntimeTextSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimeTextSettings, 0xa8>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RuntimeTextSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeTextSettings*, "UnityEngine", "RuntimeTextSettings");
