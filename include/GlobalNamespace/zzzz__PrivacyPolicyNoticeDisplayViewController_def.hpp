#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyNoticeDisplayViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(PrivacyPolicyNoticeDisplayViewController)
namespace GlobalNamespace {
class PrivacyPolicyNoticeView;
}
// Forward declare root types
namespace GlobalNamespace {
class PrivacyPolicyNoticeDisplayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: PrivacyPolicyNoticeDisplayViewController
class CORDL_TYPE PrivacyPolicyNoticeDisplayViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief Field _privacyPolicyNoticeView, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__privacyPolicyNoticeView, put=__cordl_internal_set__privacyPolicyNoticeView)) ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  _privacyPolicyNoticeView;

/// @brief Method DidActivate, addr 0x57357f0, size 0x24, virtual true, abstract: false, final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

static inline ::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView> const& __cordl_internal_get__privacyPolicyNoticeView() const;

constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>& __cordl_internal_get__privacyPolicyNoticeView() ;

constexpr void __cordl_internal_set__privacyPolicyNoticeView(::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  value) ;

/// @brief Method .ctor, addr 0x5735968, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrivacyPolicyNoticeDisplayViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyNoticeDisplayViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrivacyPolicyNoticeDisplayViewController(PrivacyPolicyNoticeDisplayViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrivacyPolicyNoticeDisplayViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrivacyPolicyNoticeDisplayViewController(PrivacyPolicyNoticeDisplayViewController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6515};

/// @brief Field _privacyPolicyNoticeView, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PrivacyPolicyNoticeView>  ____privacyPolicyNoticeView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController, ____privacyPolicyNoticeView) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrivacyPolicyNoticeDisplayViewController*, "", "PrivacyPolicyNoticeDisplayViewController");
