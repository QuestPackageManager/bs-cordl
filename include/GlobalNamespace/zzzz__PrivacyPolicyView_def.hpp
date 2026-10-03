#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrivacyPolicyView)
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace GlobalNamespace {
struct PrivacyPolicyView_LinkState;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace HMUI {
class ButtonBinder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct PrivacyPolicyView_LinkState;
}
namespace GlobalNamespace {
class PrivacyPolicyView;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PrivacyPolicyView_LinkState);
MARK_REF_T(::GlobalNamespace::PrivacyPolicyView*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrivacyPolicyView_LinkState, "", "PrivacyPolicyView/LinkState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrivacyPolicyView*, "", "PrivacyPolicyView");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PrivacyPolicyView/LinkState
struct CORDL_TYPE PrivacyPolicyView_LinkState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PrivacyPolicyView_LinkState_Unwrapped
  enum struct __PrivacyPolicyView_LinkState_Unwrapped : int32_t {
    __E_Display = static_cast<int32_t>(0x0),
    __E_Opened = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PrivacyPolicyView_LinkState_Unwrapped() const noexcept {
    return static_cast<__PrivacyPolicyView_LinkState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivacyPolicyView_LinkState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PrivacyPolicyView_LinkState(int32_t value__) noexcept;

  /// @brief Field Display value: I32(0)
  static ::GlobalNamespace::PrivacyPolicyView_LinkState const Display;

  /// @brief Field Opened value: I32(1)
  static ::GlobalNamespace::PrivacyPolicyView_LinkState const Opened;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6612 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView_LinkState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrivacyPolicyView_LinkState) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivacyPolicyView
class CORDL_TYPE PrivacyPolicyView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LinkState = ::GlobalNamespace::PrivacyPolicyView_LinkState;

  /// @brief Field _koreanLocalizedTextAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__koreanLocalizedTextAsset, put = __cordl_internal_set__koreanLocalizedTextAsset)) ::UnityW<::GlobalNamespace::LocalizedTextAsset>
      _koreanLocalizedTextAsset;

  /// @brief Field _linkWasOpenedMessageTextMesh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__linkWasOpenedMessageTextMesh, put = __cordl_internal_set__linkWasOpenedMessageTextMesh)) ::UnityW<::TMPro::TextMeshProUGUI>
      _linkWasOpenedMessageTextMesh;

  /// @brief Field _localizedTextAsset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__localizedTextAsset, put = __cordl_internal_set__localizedTextAsset)) ::UnityW<::GlobalNamespace::LocalizedTextAsset> _localizedTextAsset;

  /// @brief Field _openLinkButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__openLinkButton, put = __cordl_internal_set__openLinkButton)) ::UnityW<::UnityEngine::UI::Button> _openLinkButton;

  /// @brief Field _popupMessageLocalizationKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__popupMessageLocalizationKey, put = __cordl_internal_set__popupMessageLocalizationKey)) ::StringW _popupMessageLocalizationKey;

  /// @brief Field _privacyPolicyTextMesh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyTextMesh, put = __cordl_internal_set__privacyPolicyTextMesh)) ::UnityW<::TMPro::TextMeshProUGUI> _privacyPolicyTextMesh;

  /// @brief Field _settingsManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Method Activate, addr 0x5cf30f0, size 0x160, virtual false, abstract: false, final false
  inline void Activate(::HMUI::ButtonBinder* buttonBinder, bool firstActivation);

  static inline ::GlobalNamespace::PrivacyPolicyView* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x5cf3670, size 0x10, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool focus);

  /// @brief Method OpenLink, addr 0x5cf3600, size 0x70, virtual false, abstract: false, final false
  inline void OpenLink();

  /// @brief Method SetLinkState, addr 0x5cf359c, size 0x64, virtual false, abstract: false, final false
  inline void SetLinkState(::GlobalNamespace::PrivacyPolicyView_LinkState linkState);

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__koreanLocalizedTextAsset() const;

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__koreanLocalizedTextAsset();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__linkWasOpenedMessageTextMesh() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__linkWasOpenedMessageTextMesh();

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__localizedTextAsset() const;

  constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__localizedTextAsset();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__openLinkButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__openLinkButton();

  constexpr ::StringW const& __cordl_internal_get__popupMessageLocalizationKey() const;

  constexpr ::StringW& __cordl_internal_get__popupMessageLocalizationKey();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__privacyPolicyTextMesh() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__privacyPolicyTextMesh();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__koreanLocalizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value);

  constexpr void __cordl_internal_set__linkWasOpenedMessageTextMesh(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value);

  constexpr void __cordl_internal_set__openLinkButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__popupMessageLocalizationKey(::StringW value);

  constexpr void __cordl_internal_set__privacyPolicyTextMesh(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x5cf3680, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrivacyPolicyView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyView", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrivacyPolicyView(PrivacyPolicyView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyView", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrivacyPolicyView(PrivacyPolicyView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6613 };

  /// @brief Field kPrivacyPolicyURL offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrivacyPolicyURL{ u"https://www.meta.com/legal/privacy-policy/" };

  /// [SerializeField]
  /// @brief Field _openLinkButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____openLinkButton;

  /// [Header("Texts")]
  /// [SerializeField]
  /// @brief Field _privacyPolicyTextMesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____privacyPolicyTextMesh;

  /// [SerializeField]
  /// @brief Field _linkWasOpenedMessageTextMesh, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____linkWasOpenedMessageTextMesh;

  /// [Header("Localization")]
  /// [SerializeField]
  /// @brief Field _localizedTextAsset, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalizedTextAsset> ____localizedTextAsset;

  /// [SerializeField]
  /// @brief Field _koreanLocalizedTextAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalizedTextAsset> ____koreanLocalizedTextAsset;

  /// [SerializeField]
  /// [LocalizationKey]
  /// @brief Field _popupMessageLocalizationKey, offset: 0x48, size: 0x8, def value: None
  ::StringW ____popupMessageLocalizationKey;

  /// [Inject]
  /// @brief Field _settingsManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView, ____openLinkButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView, ____privacyPolicyTextMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView, ____linkWasOpenedMessageTextMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView, ____localizedTextAsset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView, ____koreanLocalizedTextAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView, ____popupMessageLocalizationKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyView, ____settingsManager) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrivacyPolicyView) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
