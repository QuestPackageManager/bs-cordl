#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyNoticeViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompletableViewController_def.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyNoticeViewController)
namespace GlobalNamespace {
class PrivacyPolicyNoticeView;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivacyPolicyNoticeViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyNoticeViewController);
// Dependencies CompletableViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivacyPolicyNoticeViewController
class CORDL_TYPE PrivacyPolicyNoticeViewController : public ::GlobalNamespace::CompletableViewController {
public:
// Declarations
/// @brief Field _continueButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__continueButton, put=__cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button>  _continueButton;

/// @brief Field _privacyPolicyNoticeView, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__privacyPolicyNoticeView, put=__cordl_internal_set__privacyPolicyNoticeView)) ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  _privacyPolicyNoticeView;

/// @brief Method DidActivate, addr 0x573596c, size 0xbc, virtual true, abstract: false, final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::PrivacyPolicyNoticeViewController* New_ctor() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton() ;

constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView> const& __cordl_internal_get__privacyPolicyNoticeView() const;

constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>& __cordl_internal_get__privacyPolicyNoticeView() ;

constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__privacyPolicyNoticeView(::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  value) ;

/// @brief Method .ctor, addr 0x5735a28, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrivacyPolicyNoticeViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyNoticeViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivacyPolicyNoticeViewController(PrivacyPolicyNoticeViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyNoticeViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivacyPolicyNoticeViewController(PrivacyPolicyNoticeViewController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6516};

/// @brief Field _continueButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____continueButton;

/// @brief Field _privacyPolicyNoticeView, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  ____privacyPolicyNoticeView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeViewController, ____continueButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeViewController, ____privacyPolicyNoticeView) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyNoticeViewController, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyNoticeViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyNoticeViewController*, "", "PrivacyPolicyNoticeViewController");
