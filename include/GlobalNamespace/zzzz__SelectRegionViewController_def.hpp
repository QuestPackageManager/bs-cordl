#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectRegionViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectRegionViewController)
namespace GlobalNamespace {
struct SelectRegionViewController_RegionToLocalizationKeyPair;
}
namespace GlobalNamespace {
struct SelectRegionViewController_Region;
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
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
struct SelectRegionViewController_Region;
}
namespace GlobalNamespace {
class SelectRegionViewController;
}
namespace GlobalNamespace {
class SelectRegionViewController___c;
}
namespace GlobalNamespace {
struct SelectRegionViewController_RegionToLocalizationKeyPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SelectRegionViewController_Region);
MARK_REF_PTR_T(::GlobalNamespace::SelectRegionViewController);
MARK_REF_PTR_T(::GlobalNamespace::SelectRegionViewController___c);
MARK_VAL_T(::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SelectRegionViewController/Region
struct CORDL_TYPE SelectRegionViewController_Region {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectRegionViewController_Region_Unwrapped
  enum struct __SelectRegionViewController_Region_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NorthAndSouthAmerica = static_cast<int32_t>(0x1),
    __E_Europe = static_cast<int32_t>(0x2),
    __E_SouthKorea = static_cast<int32_t>(0x3),
    __E_Japan = static_cast<int32_t>(0x4),
    __E_Other = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectRegionViewController_Region_Unwrapped() const noexcept {
    return static_cast<__SelectRegionViewController_Region_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectRegionViewController_Region();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectRegionViewController_Region(int32_t value__) noexcept;

  /// @brief Field Europe value: I32(2)
  static ::GlobalNamespace::SelectRegionViewController_Region const Europe;

  /// @brief Field Japan value: I32(4)
  static ::GlobalNamespace::SelectRegionViewController_Region const Japan;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::SelectRegionViewController_Region const None;

  /// @brief Field NorthAndSouthAmerica value: I32(1)
  static ::GlobalNamespace::SelectRegionViewController_Region const NorthAndSouthAmerica;

  /// @brief Field Other value: I32(5)
  static ::GlobalNamespace::SelectRegionViewController_Region const Other;

  /// @brief Field SouthKorea value: I32(3)
  static ::GlobalNamespace::SelectRegionViewController_Region const SouthKorea;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5389 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectRegionViewController_Region, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectRegionViewController_Region, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SelectRegionViewController::Region
namespace GlobalNamespace {
// Is value type: true
// CS Name: SelectRegionViewController/RegionToLocalizationKeyPair
struct CORDL_TYPE SelectRegionViewController_RegionToLocalizationKeyPair {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3b6fe60, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::SelectRegionViewController_Region region, ::StringW localizationKey);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectRegionViewController_RegionToLocalizationKeyPair();

  // Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::SelectRegionViewController_Region", modifiers: "", def_value: None }, CppParam { name: "localizationKey", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr SelectRegionViewController_RegionToLocalizationKeyPair(::GlobalNamespace::SelectRegionViewController_Region region, ::StringW localizationKey) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field region, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::SelectRegionViewController_Region region;

  /// @brief Field localizationKey, offset: 0x8, size: 0x8, def value: None
  ::StringW localizationKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, region) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, localizationKey) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectRegionViewController/<>c
class CORDL_TYPE SelectRegionViewController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::SelectRegionViewController___c* __9;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1)) ::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>* __9__8_1;

  static inline ::GlobalNamespace::SelectRegionViewController___c* New_ctor();

  /// @brief Method <DidActivate>b__8_1, addr 0x3b6fed0, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _DidActivate_b__8_1(::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair p);

  /// @brief Method .ctor, addr 0x3b6fec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::SelectRegionViewController___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>* getStaticF___9__8_1();

  static inline void setStaticF___9(::GlobalNamespace::SelectRegionViewController___c* value);

  static inline void setStaticF___9__8_1(::System::Func_2<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectRegionViewController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectRegionViewController___c(SelectRegionViewController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectRegionViewController___c(SelectRegionViewController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectRegionViewController___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectRegionViewController
class CORDL_TYPE SelectRegionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using Region = ::GlobalNamespace::SelectRegionViewController_Region;

  using RegionToLocalizationKeyPair = ::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair;

  using __c = ::GlobalNamespace::SelectRegionViewController___c;

  /// @brief Field _continueButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _regionLocalizationKeys, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__regionLocalizationKeys,
                      put = __cordl_internal_set__regionLocalizationKeys)) ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair,
                                                                                    ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*>
      _regionLocalizationKeys;

  /// @brief Field _regionSelectionDropdown, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__regionSelectionDropdown, put = __cordl_internal_set__regionSelectionDropdown)) ::UnityW<::HMUI::SimpleTextDropdown> _regionSelectionDropdown;

  /// @brief Field didPressContinueButtonEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressContinueButtonEvent,
                      put = __cordl_internal_set_didPressContinueButtonEvent)) ::System::Action_1<::GlobalNamespace::SelectRegionViewController_Region>* didPressContinueButtonEvent;

  /// @brief Method DidActivate, addr 0x3b6fabc, size 0x224, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleRegionSelectionDropdownDidSelectCell, addr 0x3b6fdbc, size 0x44, virtual false, abstract: false, final false
  inline void HandleRegionSelectionDropdownDidSelectCell(::HMUI::DropdownWithTableView* dropdown, int32_t idx);

  static inline ::GlobalNamespace::SelectRegionViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b6fce0, size 0xdc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method <DidActivate>b__8_0, addr 0x3b6fe08, size 0x58, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*> const&
  __cordl_internal_get__regionLocalizationKeys() const;

  constexpr ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*>&
  __cordl_internal_get__regionLocalizationKeys();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__regionSelectionDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__regionSelectionDropdown();

  constexpr ::System::Action_1<::GlobalNamespace::SelectRegionViewController_Region>* const& __cordl_internal_get_didPressContinueButtonEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::SelectRegionViewController_Region>*& __cordl_internal_get_didPressContinueButtonEvent();

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__regionLocalizationKeys(
      ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*> value);

  constexpr void __cordl_internal_set__regionSelectionDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::SelectRegionViewController_Region>* value);

  /// @brief Method .ctor, addr 0x3b6fe00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressContinueButtonEvent, addr 0x3b6f95c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::SelectRegionViewController_Region>* value);

  /// @brief Method remove_didPressContinueButtonEvent, addr 0x3b6fa0c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::SelectRegionViewController_Region>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectRegionViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectRegionViewController(SelectRegionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectRegionViewController(SelectRegionViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5392 };

  /// @brief Field _continueButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _regionSelectionDropdown, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____regionSelectionDropdown;

  /// @brief Field _regionLocalizationKeys, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair>*> ____regionLocalizationKeys;

  /// @brief Field didPressContinueButtonEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SelectRegionViewController_Region>* ___didPressContinueButtonEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____continueButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____regionSelectionDropdown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____regionLocalizationKeys) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ___didPressContinueButtonEvent) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectRegionViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController_Region, "", "SelectRegionViewController/Region");
NEED_NO_BOX(::GlobalNamespace::SelectRegionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController*, "", "SelectRegionViewController");
NEED_NO_BOX(::GlobalNamespace::SelectRegionViewController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController___c*, "", "SelectRegionViewController/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController_RegionToLocalizationKeyPair, "", "SelectRegionViewController/RegionToLocalizationKeyPair");
