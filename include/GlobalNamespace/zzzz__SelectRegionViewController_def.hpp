#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectRegionViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectRegionViewController)
namespace GlobalNamespace {
struct __SelectRegionViewController__RegionToLocalizationKeyPair;
}
namespace GlobalNamespace {
struct __SelectRegionViewController__Region;
}
namespace GlobalNamespace {
class __SelectRegionViewController____c;
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
struct __SelectRegionViewController__Region;
}
namespace GlobalNamespace {
class SelectRegionViewController;
}
namespace GlobalNamespace {
class __SelectRegionViewController____c;
}
namespace GlobalNamespace {
struct __SelectRegionViewController__RegionToLocalizationKeyPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SelectRegionViewController__Region);
MARK_REF_PTR_T(::GlobalNamespace::SelectRegionViewController);
MARK_REF_PTR_T(::GlobalNamespace::__SelectRegionViewController____c);
MARK_VAL_T(::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair);
// Type: ::Region
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SelectRegionViewController::Region
struct CORDL_TYPE __SelectRegionViewController__Region {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SelectRegionViewController__Region_Unwrapped
  enum struct ____SelectRegionViewController__Region_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NorthAndSouthAmerica = static_cast<int32_t>(0x1),
    __E_Europe = static_cast<int32_t>(0x2),
    __E_SouthKorea = static_cast<int32_t>(0x3),
    __E_Japan = static_cast<int32_t>(0x4),
    __E_Other = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SelectRegionViewController__Region_Unwrapped() const noexcept {
    return static_cast<____SelectRegionViewController__Region_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectRegionViewController__Region();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SelectRegionViewController__Region(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Europe value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SelectRegionViewController__Region const Europe;

  /// @brief Field Japan value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__SelectRegionViewController__Region const Japan;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SelectRegionViewController__Region const None;

  /// @brief Field NorthAndSouthAmerica value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SelectRegionViewController__Region const NorthAndSouthAmerica;

  /// @brief Field Other value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__SelectRegionViewController__Region const Other;

  /// @brief Field SouthKorea value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SelectRegionViewController__Region const SouthKorea;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5361 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectRegionViewController__Region, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectRegionViewController__Region, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RegionToLocalizationKeyPair
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SelectRegionViewController::RegionToLocalizationKeyPair
struct CORDL_TYPE __SelectRegionViewController__RegionToLocalizationKeyPair {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3b0e754, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__SelectRegionViewController__Region region, ::StringW localizationKey);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectRegionViewController__RegionToLocalizationKeyPair();

  // Ctor Parameters [CppParam { name: "region", ty: "::GlobalNamespace::__SelectRegionViewController__Region", modifiers: "", def_value: None }, CppParam { name: "localizationKey", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr __SelectRegionViewController__RegionToLocalizationKeyPair(::GlobalNamespace::__SelectRegionViewController__Region region, ::StringW localizationKey) noexcept;

  /// @brief Field region, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__SelectRegionViewController__Region region;

  /// @brief Field localizationKey, offset: 0x8, size: 0x8, def value: None
  ::StringW localizationKey;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5362 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, region) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, localizationKey) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectRegionViewController::<>c*
class CORDL_TYPE __SelectRegionViewController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__SelectRegionViewController____c* __9;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1)) ::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, ::StringW>* __9__8_1;

  static inline ::GlobalNamespace::__SelectRegionViewController____c* New_ctor();

  /// @brief Method <DidActivate>b__8_1, addr 0x3b0e7c4, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _DidActivate_b__8_1(::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair p);

  /// @brief Method .ctor, addr 0x3b0e7bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SelectRegionViewController____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, ::StringW>* getStaticF___9__8_1();

  static inline void setStaticF___9(::GlobalNamespace::__SelectRegionViewController____c* value);

  static inline void setStaticF___9__8_1(::System::Func_2<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectRegionViewController____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SelectRegionViewController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectRegionViewController____c(__SelectRegionViewController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectRegionViewController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectRegionViewController____c(__SelectRegionViewController____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5363 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectRegionViewController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectRegionViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectRegionViewController*
class CORDL_TYPE SelectRegionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using Region = ::GlobalNamespace::__SelectRegionViewController__Region;

  using RegionToLocalizationKeyPair = ::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair;

  using __c = ::GlobalNamespace::__SelectRegionViewController____c;

  /// @brief Field _continueButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _regionLocalizationKeys, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__regionLocalizationKeys,
                      put = __cordl_internal_set__regionLocalizationKeys)) ::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair,
                                                                                    ::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>
      _regionLocalizationKeys;

  /// @brief Field _regionSelectionDropdown, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__regionSelectionDropdown, put = __cordl_internal_set__regionSelectionDropdown)) ::UnityW<::HMUI::SimpleTextDropdown> _regionSelectionDropdown;

  /// @brief Field didPressContinueButtonEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressContinueButtonEvent,
                      put = __cordl_internal_set_didPressContinueButtonEvent)) ::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>* didPressContinueButtonEvent;

  /// @brief Method DidActivate, addr 0x3b0e3b0, size 0x224, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleRegionSelectionDropdownDidSelectCell, addr 0x3b0e6b0, size 0x44, virtual false, abstract: false, final false
  inline void HandleRegionSelectionDropdownDidSelectCell(::HMUI::DropdownWithTableView* dropdown, int32_t idx);

  static inline ::GlobalNamespace::SelectRegionViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b0e5d4, size 0xdc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method <DidActivate>b__8_0, addr 0x3b0e6fc, size 0x58, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*> const&
  __cordl_internal_get__regionLocalizationKeys() const;

  constexpr ::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>&
  __cordl_internal_get__regionLocalizationKeys();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__regionSelectionDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__regionSelectionDropdown();

  constexpr ::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*& __cordl_internal_get_didPressContinueButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>*> const& __cordl_internal_get_didPressContinueButtonEvent() const;

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__regionLocalizationKeys(
      ::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*> value);

  constexpr void __cordl_internal_set__regionSelectionDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>* value);

  /// @brief Method .ctor, addr 0x3b0e6f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressContinueButtonEvent, addr 0x3b0e250, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>* value);

  /// @brief Method remove_didPressContinueButtonEvent, addr 0x3b0e300, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressContinueButtonEvent(::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>* value);

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

  /// @brief Field _continueButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _regionSelectionDropdown, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____regionSelectionDropdown;

  /// @brief Field _regionLocalizationKeys, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, ::Array<::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair>*>
      ____regionLocalizationKeys;

  /// @brief Field didPressContinueButtonEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__SelectRegionViewController__Region>* ___didPressContinueButtonEvent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5364 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectRegionViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____continueButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____regionSelectionDropdown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ____regionLocalizationKeys) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectRegionViewController, ___didPressContinueButtonEvent) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectRegionViewController__Region, "", "SelectRegionViewController/Region");
NEED_NO_BOX(::GlobalNamespace::SelectRegionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectRegionViewController*, "", "SelectRegionViewController");
NEED_NO_BOX(::GlobalNamespace::__SelectRegionViewController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectRegionViewController____c*, "", "SelectRegionViewController/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectRegionViewController__RegionToLocalizationKeyPair, "", "SelectRegionViewController/RegionToLocalizationKeyPair");
