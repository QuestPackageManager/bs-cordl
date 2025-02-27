#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectLevelCategoryViewController)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController_LevelCategoryInfo;
}
namespace GlobalNamespace {
struct SelectLevelCategoryViewController_LevelCategory;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController___c;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController___c__DisplayClass12_0;
}
namespace HMUI {
class IconSegmentedControl_DataItem;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class SegmentedControl;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
struct SelectLevelCategoryViewController_LevelCategory;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController_LevelCategoryInfo;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController___c;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController___c__DisplayClass12_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory);
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelCategoryViewController);
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo);
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelCategoryViewController___c);
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SelectLevelCategoryViewController/LevelCategory
struct CORDL_TYPE SelectLevelCategoryViewController_LevelCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SelectLevelCategoryViewController_LevelCategory_Unwrapped
  enum struct __SelectLevelCategoryViewController_LevelCategory_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MusicPacks = static_cast<int32_t>(0x1),
    __E_CustomSongs = static_cast<int32_t>(0x2),
    __E_Favorites = static_cast<int32_t>(0x3),
    __E_All = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SelectLevelCategoryViewController_LevelCategory_Unwrapped() const noexcept {
    return static_cast<__SelectLevelCategoryViewController_LevelCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelCategoryViewController_LevelCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectLevelCategoryViewController_LevelCategory(int32_t value__) noexcept;

  /// @brief Field All value: I32(4)
  static ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const All;

  /// @brief Field CustomSongs value: I32(2)
  static ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const CustomSongs;

  /// @brief Field Favorites value: I32(3)
  static ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const Favorites;

  /// @brief Field MusicPacks value: I32(1)
  static ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const MusicPacks;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5356 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SelectLevelCategoryViewController::LevelCategory, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectLevelCategoryViewController/LevelCategoryInfo
class CORDL_TYPE SelectLevelCategoryViewController_LevelCategoryInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field categoryIcon, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_categoryIcon, put = __cordl_internal_set_categoryIcon)) ::UnityW<::UnityEngine::Sprite> categoryIcon;

  /// @brief Field levelCategory, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_levelCategory, put = __cordl_internal_set_levelCategory)) ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory levelCategory;

  /// @brief Field localizedKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedKey, put = __cordl_internal_set_localizedKey)) ::StringW localizedKey;

  static inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* New_ctor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_categoryIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_categoryIcon();

  constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const& __cordl_internal_get_levelCategory() const;

  constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory& __cordl_internal_get_levelCategory();

  constexpr ::StringW const& __cordl_internal_get_localizedKey() const;

  constexpr ::StringW& __cordl_internal_get_localizedKey();

  constexpr void __cordl_internal_set_categoryIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_levelCategory(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory value);

  constexpr void __cordl_internal_set_localizedKey(::StringW value);

  /// @brief Method .ctor, addr 0x3b73d10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelCategoryViewController_LevelCategoryInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController_LevelCategoryInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelCategoryViewController_LevelCategoryInfo(SelectLevelCategoryViewController_LevelCategoryInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController_LevelCategoryInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelCategoryViewController_LevelCategoryInfo(SelectLevelCategoryViewController_LevelCategoryInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5357 };

  /// @brief Field levelCategory, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory ___levelCategory;

  /// @brief Field localizedKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localizedKey;

  /// @brief Field categoryIcon, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___categoryIcon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo, ___levelCategory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo, ___localizedKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo, ___categoryIcon) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectLevelCategoryViewController/<>c
class CORDL_TYPE SelectLevelCategoryViewController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::SelectLevelCategoryViewController___c* __9;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_1,
                      put = setStaticF___9__12_1)) ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2)) ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*,
                                                                                                ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* __9__12_2;

  static inline ::GlobalNamespace::SelectLevelCategoryViewController___c* New_ctor();

  /// @brief Method <Setup>b__12_1, addr 0x3b73d7c, size 0x80, virtual false, abstract: false, final false
  inline ::HMUI::IconSegmentedControl_DataItem* _Setup_b__12_1(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* x);

  /// @brief Method <Setup>b__12_2, addr 0x3b73dfc, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory _Setup_b__12_2(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* x);

  /// @brief Method .ctor, addr 0x3b73d74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::SelectLevelCategoryViewController___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>* getStaticF___9__12_1();

  static inline ::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* getStaticF___9__12_2();

  static inline void setStaticF___9(::GlobalNamespace::SelectLevelCategoryViewController___c* value);

  static inline void setStaticF___9__12_1(::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::HMUI::IconSegmentedControl_DataItem*>* value);

  static inline void
  setStaticF___9__12_2(::System::Func_2<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelCategoryViewController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelCategoryViewController___c(SelectLevelCategoryViewController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelCategoryViewController___c(SelectLevelCategoryViewController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5358 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelCategoryViewController___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectLevelCategoryViewController/<>c__DisplayClass12_0
class CORDL_TYPE SelectLevelCategoryViewController___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabledLevelCategories, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enabledLevelCategories,
                      put = __cordl_internal_set_enabledLevelCategories)) ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory,
                                                                                   ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>
      enabledLevelCategories;

  static inline ::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0* New_ctor();

  /// @brief Method <Setup>b__0, addr 0x3b73e14, size 0x58, virtual false, abstract: false, final false
  inline bool _Setup_b__0(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo* data);

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> const&
  __cordl_internal_get_enabledLevelCategories() const;

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>&
  __cordl_internal_get_enabledLevelCategories();

  constexpr void __cordl_internal_set_enabledLevelCategories(
      ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> value);

  /// @brief Method .ctor, addr 0x3b739ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelCategoryViewController___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelCategoryViewController___c__DisplayClass12_0(SelectLevelCategoryViewController___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelCategoryViewController___c__DisplayClass12_0(SelectLevelCategoryViewController___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5359 };

  /// @brief Field enabledLevelCategories, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> ___enabledLevelCategories;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0, ___enabledLevelCategories) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController, SelectLevelCategoryViewController::LevelCategory
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectLevelCategoryViewController
class CORDL_TYPE SelectLevelCategoryViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using LevelCategory = ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory;

  using LevelCategoryInfo = ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo;

  using __c = ::GlobalNamespace::SelectLevelCategoryViewController___c;

  using __c__DisplayClass12_0 = ::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0;

  /// @brief Field _allLevelCategoryInfos, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__allLevelCategoryInfos,
                      put = __cordl_internal_set__allLevelCategoryInfos)) ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*,
                                                                                   ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*>
      _allLevelCategoryInfos;

  /// @brief Field _analyticsModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _levelCategoryInfos, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCategoryInfos,
                      put = __cordl_internal_set__levelCategoryInfos)) ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*,
                                                                                ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*>
      _levelCategoryInfos;

  /// @brief Field _levelFilterCategoryIconSegmentedControl, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFilterCategoryIconSegmentedControl, put = __cordl_internal_set__levelFilterCategoryIconSegmentedControl)) ::UnityW<::HMUI::IconSegmentedControl>
      _levelFilterCategoryIconSegmentedControl;

  /// @brief Field _prevSelectedLevelCategory, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__prevSelectedLevelCategory,
                      put = __cordl_internal_set__prevSelectedLevelCategory)) ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory _prevSelectedLevelCategory;

  /// @brief Field didSelectLevelCategoryEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectLevelCategoryEvent,
                      put = __cordl_internal_set_didSelectLevelCategoryEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>,
                                                                                                  ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* didSelectLevelCategoryEvent;

  __declspec(property(get = get_selectedLevelCategory)) ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory selectedLevelCategory;

  /// @brief Method DidActivate, addr 0x3b739b4, size 0x9c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b73a50, size 0x9c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method LevelFilterCategoryIconSegmentedControlDidSelectCell, addr 0x3b73aec, size 0x21c, virtual false, abstract: false, final false
  inline void LevelFilterCategoryIconSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t index);

  static inline ::GlobalNamespace::SelectLevelCategoryViewController* New_ctor();

  /// @brief Method Setup, addr 0x3b736a0, size 0x30c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory selectedCategory,
                    ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> enabledLevelCategories);

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> const&
  __cordl_internal_get__allLevelCategoryInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*>&
  __cordl_internal_get__allLevelCategoryInfos();

  constexpr ::GlobalNamespace::IAnalyticsModel* const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> const&
  __cordl_internal_get__levelCategoryInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*>&
  __cordl_internal_get__levelCategoryInfos();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__levelFilterCategoryIconSegmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__levelFilterCategoryIconSegmentedControl();

  constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory const& __cordl_internal_get__prevSelectedLevelCategory() const;

  constexpr ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory& __cordl_internal_get__prevSelectedLevelCategory();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* const&
  __cordl_internal_get_didSelectLevelCategoryEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*&
  __cordl_internal_get_didSelectLevelCategoryEvent();

  constexpr void __cordl_internal_set__allLevelCategoryInfos(
      ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__levelCategoryInfos(
      ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> value);

  constexpr void __cordl_internal_set__levelFilterCategoryIconSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__prevSelectedLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory value);

  constexpr void __cordl_internal_set_didSelectLevelCategoryEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value);

  /// @brief Method .ctor, addr 0x3b73d08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectLevelCategoryEvent, addr 0x3b734e8, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didSelectLevelCategoryEvent(::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value);

  /// @brief Method get_selectedLevelCategory, addr 0x3b73648, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory get_selectedLevelCategory();

  /// @brief Method remove_didSelectLevelCategoryEvent, addr 0x3b73598, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_didSelectLevelCategoryEvent(::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelCategoryViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelCategoryViewController(SelectLevelCategoryViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelCategoryViewController(SelectLevelCategoryViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5360 };

  /// @brief Field _allLevelCategoryInfos, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> ____allLevelCategoryInfos;

  /// @brief Field _levelFilterCategoryIconSegmentedControl, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____levelFilterCategoryIconSegmentedControl;

  /// @brief Field _analyticsModel, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field didSelectLevelCategoryEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>* ___didSelectLevelCategoryEvent;

  /// @brief Field _prevSelectedLevelCategory, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory ____prevSelectedLevelCategory;

  /// @brief Field _levelCategoryInfos, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*>*> ____levelCategoryInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____allLevelCategoryInfos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____levelFilterCategoryIconSegmentedControl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____analyticsModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ___didSelectLevelCategoryEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____prevSelectedLevelCategory) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____levelCategoryInfos) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelCategoryViewController, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, "", "SelectLevelCategoryViewController/LevelCategory");
NEED_NO_BOX(::GlobalNamespace::SelectLevelCategoryViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController*, "", "SelectLevelCategoryViewController");
NEED_NO_BOX(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategoryInfo*, "", "SelectLevelCategoryViewController/LevelCategoryInfo");
NEED_NO_BOX(::GlobalNamespace::SelectLevelCategoryViewController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController___c*, "", "SelectLevelCategoryViewController/<>c");
NEED_NO_BOX(::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController___c__DisplayClass12_0*, "", "SelectLevelCategoryViewController/<>c__DisplayClass12_0");
