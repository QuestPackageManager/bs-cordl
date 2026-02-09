#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyNoticeView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyNoticeView)
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
class PrivacyPolicyNoticeView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyNoticeView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivacyPolicyNoticeView
class CORDL_TYPE PrivacyPolicyNoticeView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _linkWasOpenedMessageTextMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__linkWasOpenedMessageTextMesh, put=__cordl_internal_set__linkWasOpenedMessageTextMesh)) ::UnityW<::TMPro::TextMeshProUGUI>  _linkWasOpenedMessageTextMesh;

/// @brief Field _openLinkButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__openLinkButton, put=__cordl_internal_set__openLinkButton)) ::UnityW<::UnityEngine::UI::Button>  _openLinkButton;

/// @brief Field _popupMessageLocalizationKey, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__popupMessageLocalizationKey, put=__cordl_internal_set__popupMessageLocalizationKey)) ::StringW  _popupMessageLocalizationKey;

/// @brief Field _privacyPolicyNoticeLocalizationKey, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__privacyPolicyNoticeLocalizationKey, put=__cordl_internal_set__privacyPolicyNoticeLocalizationKey)) ::StringW  _privacyPolicyNoticeLocalizationKey;

/// @brief Field _privacyPolicyNoticeTextMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__privacyPolicyNoticeTextMesh, put=__cordl_internal_set__privacyPolicyNoticeTextMesh)) ::UnityW<::TMPro::TextMeshProUGUI>  _privacyPolicyNoticeTextMesh;

/// @brief Method Activate, addr 0x5735814, size 0x154, virtual false, abstract: false, final false
inline void Activate(::HMUI::ButtonBinder*  buttonBinder, bool  firstActivation) ;

static inline ::GlobalNamespace::PrivacyPolicyNoticeView* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x57451d8, size 0x5c, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OpenLink, addr 0x5745168, size 0x70, virtual false, abstract: false, final false
inline void OpenLink() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__linkWasOpenedMessageTextMesh() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__linkWasOpenedMessageTextMesh() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__openLinkButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__openLinkButton() ;

constexpr ::StringW const& __cordl_internal_get__popupMessageLocalizationKey() const;

constexpr ::StringW& __cordl_internal_get__popupMessageLocalizationKey() ;

constexpr ::StringW const& __cordl_internal_get__privacyPolicyNoticeLocalizationKey() const;

constexpr ::StringW& __cordl_internal_get__privacyPolicyNoticeLocalizationKey() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__privacyPolicyNoticeTextMesh() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__privacyPolicyNoticeTextMesh() ;

constexpr void __cordl_internal_set__linkWasOpenedMessageTextMesh(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set__openLinkButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__popupMessageLocalizationKey(::StringW  value) ;

constexpr void __cordl_internal_set__privacyPolicyNoticeLocalizationKey(::StringW  value) ;

constexpr void __cordl_internal_set__privacyPolicyNoticeTextMesh(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x5745234, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrivacyPolicyNoticeView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyNoticeView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivacyPolicyNoticeView(PrivacyPolicyNoticeView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyNoticeView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivacyPolicyNoticeView(PrivacyPolicyNoticeView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6575};

/// @brief Field kPrivacyPolicyURL offset 0xffffffff size 0x8
static constexpr ::ConstString  kPrivacyPolicyURL{u"https://www.meta.com/legal/privacy-policy/"};

/// @brief Field _openLinkButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____openLinkButton;

/// @brief Field _privacyPolicyNoticeTextMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____privacyPolicyNoticeTextMesh;

/// @brief Field _linkWasOpenedMessageTextMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ____linkWasOpenedMessageTextMesh;

/// @brief Field _privacyPolicyNoticeLocalizationKey, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____privacyPolicyNoticeLocalizationKey;

/// @brief Field _popupMessageLocalizationKey, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____popupMessageLocalizationKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeView, ____openLinkButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeView, ____privacyPolicyNoticeTextMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeView, ____linkWasOpenedMessageTextMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeView, ____privacyPolicyNoticeLocalizationKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeView, ____popupMessageLocalizationKey) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyNoticeView, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyNoticeView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyNoticeView*, "", "PrivacyPolicyNoticeView");
