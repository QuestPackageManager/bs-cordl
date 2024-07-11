#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelTextSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PanelTextSettings)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelTextSettings);
// Type: UnityEngine.UIElements::PanelTextSettings
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PanelTextSettings*
class CORDL_TYPE PanelTextSettings : public ::UnityEngine::TextCore::Text::TextSettings {
public:
  // Declarations
  /// @brief Field EditorGUIUtilityLoad, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EditorGUIUtilityLoad, put = setStaticF_EditorGUIUtilityLoad))::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>* EditorGUIUtilityLoad;

  /// @brief Field GetCurrentLanguage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GetCurrentLanguage, put = setStaticF_GetCurrentLanguage))::System::Func_1<::UnityEngine::SystemLanguage>* GetCurrentLanguage;

  /// @brief Field s_DefaultEditorPanelTextSettingPath, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultEditorPanelTextSettingPath, put = setStaticF_s_DefaultEditorPanelTextSettingPath))::StringW s_DefaultEditorPanelTextSettingPath;

  /// @brief Field s_DefaultPanelTextSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultPanelTextSettings,
                             put = setStaticF_s_DefaultPanelTextSettings))::UnityW<::UnityEngine::UIElements::PanelTextSettings> s_DefaultPanelTextSettings;

  /// @brief Method GetCachedFontAsset, addr 0x35dd120, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> GetCachedFontAsset(::UnityEngine::Font* font);

  static inline ::UnityEngine::UIElements::PanelTextSettings* New_ctor();

  /// @brief Method UpdateLocalizationFontAsset, addr 0x35ddb10, size 0x4c0, virtual false, abstract: false, final false
  static inline void UpdateLocalizationFontAsset();

  /// @brief Method .ctor, addr 0x35ddfd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>* getStaticF_EditorGUIUtilityLoad();

  static inline ::System::Func_1<::UnityEngine::SystemLanguage>* getStaticF_GetCurrentLanguage();

  static inline ::StringW getStaticF_s_DefaultEditorPanelTextSettingPath();

  static inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> getStaticF_s_DefaultPanelTextSettings();

  /// @brief Method get_defaultPanelTextSettings, addr 0x35dd628, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::PanelTextSettings> get_defaultPanelTextSettings();

  static inline void setStaticF_EditorGUIUtilityLoad(::System::Func_2<::StringW, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_GetCurrentLanguage(::System::Func_1<::UnityEngine::SystemLanguage>* value);

  static inline void setStaticF_s_DefaultEditorPanelTextSettingPath(::StringW value);

  static inline void setStaticF_s_DefaultPanelTextSettings(::UnityW<::UnityEngine::UIElements::PanelTextSettings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelTextSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelTextSettings(PanelTextSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelTextSettings(PanelTextSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelTextSettings, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelTextSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelTextSettings*, "UnityEngine.UIElements", "PanelTextSettings");
