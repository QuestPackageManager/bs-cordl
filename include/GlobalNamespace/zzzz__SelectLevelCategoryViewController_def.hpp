#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectLevelCategoryViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectLevelCategoryViewController)
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController__LevelCategoryInfo;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController____c;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController____c__DisplayClass12_0;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class __IconSegmentedControl__DataItem;
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
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController__LevelCategoryInfo;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController____c;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController____c__DisplayClass12_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory);
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelCategoryViewController);
MARK_REF_PTR_T(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo);
MARK_REF_PTR_T(::GlobalNamespace::__SelectLevelCategoryViewController____c);
MARK_REF_PTR_T(::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0);
// Type: ::LevelCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SelectLevelCategoryViewController::LevelCategory
struct CORDL_TYPE __SelectLevelCategoryViewController__LevelCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SelectLevelCategoryViewController__LevelCategory_Unwrapped
  enum struct ____SelectLevelCategoryViewController__LevelCategory_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MusicPacks = static_cast<int32_t>(0x1),
    __E_CustomSongs = static_cast<int32_t>(0x2),
    __E_Favorites = static_cast<int32_t>(0x3),
    __E_All = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SelectLevelCategoryViewController__LevelCategory_Unwrapped() const noexcept {
    return static_cast<____SelectLevelCategoryViewController__LevelCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController__LevelCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SelectLevelCategoryViewController__LevelCategory(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const All;

  /// @brief Field CustomSongs value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const CustomSongs;

  /// @brief Field Favorites value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const Favorites;

  /// @brief Field MusicPacks value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const MusicPacks;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5326 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelCategoryInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectLevelCategoryViewController::LevelCategoryInfo*
class CORDL_TYPE __SelectLevelCategoryViewController__LevelCategoryInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field categoryIcon, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_categoryIcon, put = __cordl_internal_set_categoryIcon)) ::UnityW<::UnityEngine::Sprite> categoryIcon;

  /// @brief Field levelCategory, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_levelCategory, put = __cordl_internal_set_levelCategory)) ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory;

  /// @brief Field localizedKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedKey, put = __cordl_internal_set_localizedKey)) ::StringW localizedKey;

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* New_ctor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_categoryIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_categoryIcon();

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const& __cordl_internal_get_levelCategory() const;

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory& __cordl_internal_get_levelCategory();

  constexpr ::StringW const& __cordl_internal_get_localizedKey() const;

  constexpr ::StringW& __cordl_internal_get_localizedKey();

  constexpr void __cordl_internal_set_categoryIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_levelCategory(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory value);

  constexpr void __cordl_internal_set_localizedKey(::StringW value);

  /// @brief Method .ctor, addr 0x3af1c68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController__LevelCategoryInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController__LevelCategoryInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectLevelCategoryViewController__LevelCategoryInfo(__SelectLevelCategoryViewController__LevelCategoryInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController__LevelCategoryInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectLevelCategoryViewController__LevelCategoryInfo(__SelectLevelCategoryViewController__LevelCategoryInfo const&) = delete;

  /// @brief Field levelCategory, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory ___levelCategory;

  /// @brief Field localizedKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localizedKey;

  /// @brief Field categoryIcon, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___categoryIcon;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, ___levelCategory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, ___localizedKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, ___categoryIcon) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectLevelCategoryViewController::<>c*
class CORDL_TYPE __SelectLevelCategoryViewController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__SelectLevelCategoryViewController____c* __9;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__12_1,
      put = setStaticF___9__12_1)) ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::HMUI::__IconSegmentedControl__DataItem*>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2)) ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,
                                                                                                       ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* __9__12_2;

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController____c* New_ctor();

  /// @brief Method <Setup>b__12_1, addr 0x3af1cd4, size 0x80, virtual false, abstract: false, final false
  inline ::HMUI::__IconSegmentedControl__DataItem* _Setup_b__12_1(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* x);

  /// @brief Method <Setup>b__12_2, addr 0x3af1d54, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory _Setup_b__12_2(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* x);

  /// @brief Method .ctor, addr 0x3af1ccc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::HMUI::__IconSegmentedControl__DataItem*>* getStaticF___9__12_1();

  static inline ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*
  getStaticF___9__12_2();

  static inline void setStaticF___9(::GlobalNamespace::__SelectLevelCategoryViewController____c* value);

  static inline void setStaticF___9__12_1(::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::HMUI::__IconSegmentedControl__DataItem*>* value);

  static inline void
  setStaticF___9__12_2(::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectLevelCategoryViewController____c(__SelectLevelCategoryViewController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectLevelCategoryViewController____c(__SelectLevelCategoryViewController____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5328 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectLevelCategoryViewController::<>c__DisplayClass12_0*
class CORDL_TYPE __SelectLevelCategoryViewController____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabledLevelCategories, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enabledLevelCategories,
                      put = __cordl_internal_set_enabledLevelCategories)) ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,
                                                                                   ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>
      enabledLevelCategories;

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0* New_ctor();

  /// @brief Method <Setup>b__0, addr 0x3af1d6c, size 0x58, virtual false, abstract: false, final false
  inline bool _Setup_b__0(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* data);

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const&
  __cordl_internal_get_enabledLevelCategories() const;

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>&
  __cordl_internal_get_enabledLevelCategories();

  constexpr void __cordl_internal_set_enabledLevelCategories(
      ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> value);

  /// @brief Method .ctor, addr 0x3af1904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController____c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectLevelCategoryViewController____c__DisplayClass12_0(__SelectLevelCategoryViewController____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectLevelCategoryViewController____c__DisplayClass12_0(__SelectLevelCategoryViewController____c__DisplayClass12_0 const&) = delete;

  /// @brief Field enabledLevelCategories, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> ___enabledLevelCategories;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0, ___enabledLevelCategories) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectLevelCategoryViewController
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectLevelCategoryViewController*
class CORDL_TYPE SelectLevelCategoryViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using LevelCategory = ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory;

  using LevelCategoryInfo = ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo;

  using __c = ::GlobalNamespace::__SelectLevelCategoryViewController____c;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0;

  /// @brief Field _allLevelCategoryInfos, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__allLevelCategoryInfos,
                      put = __cordl_internal_set__allLevelCategoryInfos)) ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,
                                                                                   ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>
      _allLevelCategoryInfos;

  /// @brief Field _analyticsModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel)) ::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _levelCategoryInfos, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCategoryInfos,
                      put = __cordl_internal_set__levelCategoryInfos)) ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,
                                                                                ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>
      _levelCategoryInfos;

  /// @brief Field _levelFilterCategoryIconSegmentedControl, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFilterCategoryIconSegmentedControl, put = __cordl_internal_set__levelFilterCategoryIconSegmentedControl)) ::UnityW<::HMUI::IconSegmentedControl>
      _levelFilterCategoryIconSegmentedControl;

  /// @brief Field _prevSelectedLevelCategory, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__prevSelectedLevelCategory,
                      put = __cordl_internal_set__prevSelectedLevelCategory)) ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory _prevSelectedLevelCategory;

  /// @brief Field didSelectLevelCategoryEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectLevelCategoryEvent,
                      put = __cordl_internal_set_didSelectLevelCategoryEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>,
                                                                                                  ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* didSelectLevelCategoryEvent;

  __declspec(property(get = get_selectedLevelCategory)) ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedLevelCategory;

  /// @brief Method DidActivate, addr 0x3af190c, size 0x9c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3af19a8, size 0x9c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method LevelFilterCategoryIconSegmentedControlDidSelectCell, addr 0x3af1a44, size 0x21c, virtual false, abstract: false, final false
  inline void LevelFilterCategoryIconSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t index);

  static inline ::GlobalNamespace::SelectLevelCategoryViewController* New_ctor();

  /// @brief Method Setup, addr 0x3aec828, size 0x30c, virtual false, abstract: false, final false
  inline void
  Setup(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedCategory,
        ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> enabledLevelCategories);

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> const&
  __cordl_internal_get__allLevelCategoryInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>&
  __cordl_internal_get__allLevelCategoryInfos();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> const&
  __cordl_internal_get__levelCategoryInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>&
  __cordl_internal_get__levelCategoryInfos();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__levelFilterCategoryIconSegmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__levelFilterCategoryIconSegmentedControl();

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const& __cordl_internal_get__prevSelectedLevelCategory() const;

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory& __cordl_internal_get__prevSelectedLevelCategory();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*&
  __cordl_internal_get_didSelectLevelCategoryEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const&
  __cordl_internal_get_didSelectLevelCategoryEvent() const;

  constexpr void __cordl_internal_set__allLevelCategoryInfos(
      ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__levelCategoryInfos(
      ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> value);

  constexpr void __cordl_internal_set__levelFilterCategoryIconSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__prevSelectedLevelCategory(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory value);

  constexpr void __cordl_internal_set_didSelectLevelCategoryEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

  /// @brief Method .ctor, addr 0x3af1c60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectLevelCategoryEvent, addr 0x3aecef0, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didSelectLevelCategoryEvent(::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

  /// @brief Method get_selectedLevelCategory, addr 0x3aec374, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory();

  /// @brief Method remove_didSelectLevelCategoryEvent, addr 0x3aed5b8, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_didSelectLevelCategoryEvent(::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

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

  /// @brief Field _allLevelCategoryInfos, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> ____allLevelCategoryInfos;

  /// @brief Field _levelFilterCategoryIconSegmentedControl, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____levelFilterCategoryIconSegmentedControl;

  /// @brief Field _analyticsModel, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field didSelectLevelCategoryEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* ___didSelectLevelCategoryEvent;

  /// @brief Field _prevSelectedLevelCategory, offset: 0x98, size: 0x4, def value: None
  ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory ____prevSelectedLevelCategory;

  /// @brief Field _levelCategoryInfos, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> ____levelCategoryInfos;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5330 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelCategoryViewController, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____allLevelCategoryInfos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____levelFilterCategoryIconSegmentedControl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____analyticsModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ___didSelectLevelCategoryEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____prevSelectedLevelCategory) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____levelCategoryInfos) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, "", "SelectLevelCategoryViewController/LevelCategory");
NEED_NO_BOX(::GlobalNamespace::SelectLevelCategoryViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController*, "", "SelectLevelCategoryViewController");
NEED_NO_BOX(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, "", "SelectLevelCategoryViewController/LevelCategoryInfo");
NEED_NO_BOX(::GlobalNamespace::__SelectLevelCategoryViewController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectLevelCategoryViewController____c*, "", "SelectLevelCategoryViewController/<>c");
NEED_NO_BOX(::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0*, "", "SelectLevelCategoryViewController/<>c__DisplayClass12_0");
