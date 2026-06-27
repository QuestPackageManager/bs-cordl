#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectRegionViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CompletableViewController_1_def.hpp"
#include "GlobalNamespace/zzzz__Region_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectRegionViewController)
namespace GlobalNamespace {
struct RegionToLocalizationKeyPair;
}
namespace GlobalNamespace {
class SelectRegionViewController___c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectRegionViewController;
}
namespace GlobalNamespace {
class SelectRegionViewController___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectRegionViewController);
MARK_REF_PTR_T(::GlobalNamespace::SelectRegionViewController___c);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectRegionViewController/<>c
class CORDL_TYPE SelectRegionViewController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::SelectRegionViewController___c*  __9;

/// @brief Field <>9__3_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_1, put=setStaticF___9__3_1)) ::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair,::StringW>*  __9__3_1;

static inline ::GlobalNamespace::SelectRegionViewController___c* New_ctor() ;

/// @brief Method <DidActivate>b__3_1, addr 0x5833c70, size 0xc, virtual false, abstract: false, final false
inline ::StringW _DidActivate_b__3_1(::GlobalNamespace::RegionToLocalizationKeyPair  p) ;

/// @brief Method .ctor, addr 0x5833c6c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SelectRegionViewController___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair,::StringW>* getStaticF___9__3_1() ;

static inline void setStaticF___9(::GlobalNamespace::SelectRegionViewController___c*  value) ;

static inline void setStaticF___9__3_1(::System::Func_2<::GlobalNamespace::RegionToLocalizationKeyPair,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectRegionViewController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectRegionViewController___c(SelectRegionViewController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectRegionViewController___c(SelectRegionViewController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6999};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectRegionViewController___c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CompletableViewController`1<T>, Region
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectRegionViewController
class CORDL_TYPE SelectRegionViewController : public ::GlobalNamespace::CompletableViewController_1<::GlobalNamespace::Region> {
public:
// Declarations
using __c = ::GlobalNamespace::SelectRegionViewController___c;

/// @brief Field _continueButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__continueButton, put=__cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button>  _continueButton;

/// @brief Field _regionLocalizationKeys, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__regionLocalizationKeys, put=__cordl_internal_set__regionLocalizationKeys)) ::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair,::Array<::GlobalNamespace::RegionToLocalizationKeyPair>*>  _regionLocalizationKeys;

/// @brief Field _regionSelectionDropdown, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__regionSelectionDropdown, put=__cordl_internal_set__regionSelectionDropdown)) ::UnityW<::HMUI::SimpleTextDropdown>  _regionSelectionDropdown;

/// @brief Method DidActivate, addr 0x58337e4, size 0x248, virtual true, abstract: false, final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method HandleRegionSelectionDropdownDidSelectCell, addr 0x5833b14, size 0x44, virtual false, abstract: false, final false
inline void HandleRegionSelectionDropdownDidSelectCell(::HMUI::DropdownWithTableView*  dropdown, int32_t  idx) ;

static inline ::GlobalNamespace::SelectRegionViewController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5833a2c, size 0xe8, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method <DidActivate>b__3_0, addr 0x5833b9c, size 0x7c, virtual false, abstract: false, final false
inline void _DidActivate_b__3_0() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton() ;

constexpr ::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair,::Array<::GlobalNamespace::RegionToLocalizationKeyPair>*> const& __cordl_internal_get__regionLocalizationKeys() const;

constexpr ::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair,::Array<::GlobalNamespace::RegionToLocalizationKeyPair>*>& __cordl_internal_get__regionLocalizationKeys() ;

constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__regionSelectionDropdown() const;

constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__regionSelectionDropdown() ;

constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__regionLocalizationKeys(::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair,::Array<::GlobalNamespace::RegionToLocalizationKeyPair>*>  value) ;

constexpr void __cordl_internal_set__regionSelectionDropdown(::UnityW<::HMUI::SimpleTextDropdown>  value) ;

/// @brief Method .ctor, addr 0x5833b58, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectRegionViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectRegionViewController(SelectRegionViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectRegionViewController(SelectRegionViewController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7000};

/// @brief Field _continueButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____continueButton;

/// @brief Field _regionSelectionDropdown, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::HMUI::SimpleTextDropdown>  ____regionSelectionDropdown;

/// @brief Field _regionLocalizationKeys, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RegionToLocalizationKeyPair,::Array<::GlobalNamespace::RegionToLocalizationKeyPair>*>  ____regionLocalizationKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____continueButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____regionSelectionDropdown) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____regionLocalizationKeys) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectRegionViewController, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectRegionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController*, "", "SelectRegionViewController");
NEED_NO_BOX(::GlobalNamespace::SelectRegionViewController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController___c*, "", "SelectRegionViewController/<>c");
