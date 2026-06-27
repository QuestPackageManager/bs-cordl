#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyView)
namespace GlobalNamespace {
class LocalizedTextAsset;
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
class PrivacyPolicyView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivacyPolicyView
class CORDL_TYPE PrivacyPolicyView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _koreanLocalizedTextAsset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__koreanLocalizedTextAsset, put=__cordl_internal_set__koreanLocalizedTextAsset)) ::UnityW<::GlobalNamespace::LocalizedTextAsset>  _koreanLocalizedTextAsset;

/// @brief Field _linkWasOpenedMessageTextMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkWasOpenedMessageTextMesh, put=__cordl_internal_set__linkWasOpenedMessageTextMesh)) ::UnityW<::TMPro::TextMeshProUGUI>  _linkWasOpenedMessageTextMesh;

/// @brief Field _localizedTextAsset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizedTextAsset, put=__cordl_internal_set__localizedTextAsset)) ::UnityW<::GlobalNamespace::LocalizedTextAsset>  _localizedTextAsset;

/// @brief Field _openLinkButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__openLinkButton, put=__cordl_internal_set__openLinkButton)) ::UnityW<::UnityEngine::UI::Button>  _openLinkButton;

/// @brief Field _popupMessageLocalizationKey, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__popupMessageLocalizationKey, put=__cordl_internal_set__popupMessageLocalizationKey)) ::StringW  _popupMessageLocalizationKey;

/// @brief Field _privacyPolicyTextMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__privacyPolicyTextMesh, put=__cordl_internal_set__privacyPolicyTextMesh)) ::UnityW<::TMPro::TextMeshProUGUI>  _privacyPolicyTextMesh;

/// @brief Field _settingsManager, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

/// @brief Method Activate, addr 0x57a73e4, size 0x198, virtual false, abstract: false, final false
inline void Activate(::HMUI::ButtonBinder*  buttonBinder, bool  firstActivation) ;

static inline ::GlobalNamespace::PrivacyPolicyView* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x57b6564, size 0x5c, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OpenLink, addr 0x57b64f4, size 0x70, virtual false, abstract: false, final false
inline void OpenLink() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__koreanLocalizedTextAsset() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__koreanLocalizedTextAsset() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__linkWasOpenedMessageTextMesh() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__linkWasOpenedMessageTextMesh() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& __cordl_internal_get__localizedTextAsset() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& __cordl_internal_get__localizedTextAsset() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__openLinkButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__openLinkButton() ;

constexpr ::StringW const& __cordl_internal_get__popupMessageLocalizationKey() const;

constexpr ::StringW& __cordl_internal_get__popupMessageLocalizationKey() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__privacyPolicyTextMesh() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__privacyPolicyTextMesh() ;

constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr void __cordl_internal_set__koreanLocalizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset>  value) ;

constexpr void __cordl_internal_set__linkWasOpenedMessageTextMesh(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset>  value) ;

constexpr void __cordl_internal_set__openLinkButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__popupMessageLocalizationKey(::StringW  value) ;

constexpr void __cordl_internal_set__privacyPolicyTextMesh(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

/// @brief Method .ctor, addr 0x57b65c0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrivacyPolicyView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivacyPolicyView(PrivacyPolicyView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivacyPolicyView(PrivacyPolicyView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6582};

/// @brief Field kPrivacyPolicyURL offset 0xffffffff size 0x8
static constexpr ::ConstString  kPrivacyPolicyURL{u"https://www.meta.com/legal/privacy-policy/"};

/// @brief Field _openLinkButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____openLinkButton;

/// @brief Field _privacyPolicyTextMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____privacyPolicyTextMesh;

/// @brief Field _linkWasOpenedMessageTextMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____linkWasOpenedMessageTextMesh;

/// @brief Field _localizedTextAsset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedTextAsset>  ____localizedTextAsset;

/// @brief Field _koreanLocalizedTextAsset, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedTextAsset>  ____koreanLocalizedTextAsset;

/// @brief Field _popupMessageLocalizationKey, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____popupMessageLocalizationKey;

/// @brief Field _settingsManager, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

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

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyView, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyView*, "", "PrivacyPolicyView");
