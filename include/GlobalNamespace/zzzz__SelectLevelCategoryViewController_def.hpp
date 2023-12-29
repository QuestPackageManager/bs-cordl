#pragma once
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
class __SelectLevelCategoryViewController____c;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController__LevelCategoryInfo;
}
namespace HMUI {
class SegmentedControl;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class __SelectLevelCategoryViewController____c__DisplayClass12_0;
}
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class __IconSegmentedControl__DataItem;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5773))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SelectLevelCategoryViewController__LevelCategory(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController__LevelCategory();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const None;

  /// @brief Field MusicPacks value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const MusicPacks;

  /// @brief Field CustomSongs value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const CustomSongs;

  /// @brief Field Favorites value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const Favorites;

  /// @brief Field All value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelCategoryInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(5773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5774))
// CS Name: ::SelectLevelCategoryViewController::LevelCategoryInfo*
class CORDL_TYPE __SelectLevelCategoryViewController__LevelCategoryInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelCategory, offset 0x10, size 0x4
  __declspec(property(get = __get_levelCategory, put = __set_levelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory;

  /// @brief Field localizedKey, offset 0x18, size 0x8
  __declspec(property(get = __get_localizedKey, put = __set_localizedKey))::StringW localizedKey;

  /// @brief Field categoryIcon, offset 0x20, size 0x8
  __declspec(property(get = __get_categoryIcon, put = __set_categoryIcon))::UnityEngine::Sprite* categoryIcon;

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory& __get_levelCategory();

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const& __get_levelCategory() const;

  constexpr void __set_levelCategory(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory value);

  constexpr ::StringW& __get_localizedKey();

  constexpr ::StringW const& __get_localizedKey() const;

  constexpr void __set_localizedKey(::StringW value);

  constexpr ::UnityEngine::Sprite*& __get_categoryIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get_categoryIcon() const;

  constexpr void __set_categoryIcon(::UnityEngine::Sprite* value);

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* New_ctor();

  /// @brief Method .ctor addr 0x217fdc8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController__LevelCategoryInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectLevelCategoryViewController__LevelCategoryInfo(__SelectLevelCategoryViewController__LevelCategoryInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController__LevelCategoryInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectLevelCategoryViewController__LevelCategoryInfo(__SelectLevelCategoryViewController__LevelCategoryInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController__LevelCategoryInfo();

public:
  /// @brief Field levelCategory, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory ___levelCategory;

  /// @brief Field localizedKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localizedKey;

  /// @brief Field categoryIcon, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___categoryIcon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, ___levelCategory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, ___localizedKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo, ___categoryIcon) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5775))
// CS Name: ::SelectLevelCategoryViewController::<>c__DisplayClass12_0*
class CORDL_TYPE __SelectLevelCategoryViewController____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabledLevelCategories, offset 0x10, size 0x8
  __declspec(property(get = __get_enabledLevelCategories,
                      put = __set_enabledLevelCategories))::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,
                                                                   ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> enabledLevelCategories;

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>&
  __get_enabledLevelCategories();

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const&
  __get_enabledLevelCategories() const;

  constexpr void
  __set_enabledLevelCategories(::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> value);

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor addr 0x217fa5c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Setup>b__0 addr 0x217fdd0 size 0x58 virtual false final false
  inline bool _Setup_b__0(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* data);

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectLevelCategoryViewController____c__DisplayClass12_0(__SelectLevelCategoryViewController____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectLevelCategoryViewController____c__DisplayClass12_0(__SelectLevelCategoryViewController____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController____c__DisplayClass12_0();

public:
  /// @brief Field enabledLevelCategories, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> ___enabledLevelCategories;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0, ___enabledLevelCategories) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5776))
// CS Name: ::SelectLevelCategoryViewController::<>c*
class CORDL_TYPE __SelectLevelCategoryViewController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__SelectLevelCategoryViewController____c* __9;

  /// @brief Field <>9__12_1, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__12_1,
               put = setStaticF___9__12_1))::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::HMUI::__IconSegmentedControl__DataItem*>* __9__12_1;

  /// @brief Field <>9__12_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_2, put = setStaticF___9__12_2))::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,
                                                                                                      ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* __9__12_2;

  static inline void setStaticF___9(::GlobalNamespace::__SelectLevelCategoryViewController____c* value);

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController____c* getStaticF___9();

  static inline void setStaticF___9__12_1(::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::HMUI::__IconSegmentedControl__DataItem*>* value);

  static inline ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::HMUI::__IconSegmentedControl__DataItem*>* getStaticF___9__12_1();

  static inline void
  setStaticF___9__12_2(::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

  static inline ::System::Func_2<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*
  getStaticF___9__12_2();

  static inline ::GlobalNamespace::__SelectLevelCategoryViewController____c* New_ctor();

  /// @brief Method .ctor addr 0x217fe8c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Setup>b__12_1 addr 0x217fe94 size 0x80 virtual false final false
  inline ::HMUI::__IconSegmentedControl__DataItem* _Setup_b__12_1(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* x);

  /// @brief Method <Setup>b__12_2 addr 0x217ff14 size 0x18 virtual false final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory _Setup_b__12_2(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo* x);

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SelectLevelCategoryViewController____c(__SelectLevelCategoryViewController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SelectLevelCategoryViewController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SelectLevelCategoryViewController____c(__SelectLevelCategoryViewController____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectLevelCategoryViewController____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectLevelCategoryViewController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectLevelCategoryViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5773)), TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5777))
// CS Name: ::SelectLevelCategoryViewController*
class CORDL_TYPE SelectLevelCategoryViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c = ::GlobalNamespace::__SelectLevelCategoryViewController____c;

  using __c__DisplayClass12_0 = ::GlobalNamespace::__SelectLevelCategoryViewController____c__DisplayClass12_0;

  using LevelCategoryInfo = ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo;

  using LevelCategory = ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory;

  /// @brief Field _allLevelCategoryInfos, offset 0x70, size 0x8
  __declspec(property(get = __get__allLevelCategoryInfos,
                      put = __set__allLevelCategoryInfos))::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,
                                                                   ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> _allLevelCategoryInfos;

  /// @brief Field _levelFilterCategoryIconSegmentedControl, offset 0x78, size 0x8
  __declspec(property(get = __get__levelFilterCategoryIconSegmentedControl,
                      put = __set__levelFilterCategoryIconSegmentedControl))::HMUI::IconSegmentedControl* _levelFilterCategoryIconSegmentedControl;

  /// @brief Field _analyticsModel, offset 0x80, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field didSelectLevelCategoryEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_didSelectLevelCategoryEvent,
                      put = __set_didSelectLevelCategoryEvent))::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*,
                                                                                  ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* didSelectLevelCategoryEvent;

  /// @brief Field _prevSelectedLevelCategory, offset 0x90, size 0x4
  __declspec(property(get = __get__prevSelectedLevelCategory, put = __set__prevSelectedLevelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory _prevSelectedLevelCategory;

  /// @brief Field _levelCategoryInfos, offset 0x98, size 0x8
  __declspec(property(get = __get__levelCategoryInfos,
                      put = __set__levelCategoryInfos))::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*,
                                                                ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> _levelCategoryInfos;

  __declspec(property(get = get_selectedLevelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedLevelCategory;

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>&
  __get__allLevelCategoryInfos();

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> const&
  __get__allLevelCategoryInfos() const;

  constexpr void __set__allLevelCategoryInfos(
      ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> value);

  constexpr ::HMUI::IconSegmentedControl*& __get__levelFilterCategoryIconSegmentedControl();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControl*> const& __get__levelFilterCategoryIconSegmentedControl() const;

  constexpr void __set__levelFilterCategoryIconSegmentedControl(::HMUI::IconSegmentedControl* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*& __get_didSelectLevelCategoryEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const&
  __get_didSelectLevelCategoryEvent() const;

  constexpr void
  __set_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory& __get__prevSelectedLevelCategory();

  constexpr ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory const& __get__prevSelectedLevelCategory() const;

  constexpr void __set__prevSelectedLevelCategory(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory value);

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*>&
  __get__levelCategoryInfos();

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> const&
  __get__levelCategoryInfos() const;

  constexpr void __set__levelCategoryInfos(
      ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> value);

  /// @brief Method add_didSelectLevelCategoryEvent addr 0x217b464 size 0xb0 virtual false final false
  inline void add_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

  /// @brief Method remove_didSelectLevelCategoryEvent addr 0x217bb50 size 0xb0 virtual false final false
  inline void
  remove_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* value);

  /// @brief Method get_selectedLevelCategory addr 0x217a760 size 0x58 virtual false final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory();

  /// @brief Method Setup addr 0x217ad64 size 0x318 virtual false final false
  inline void
  Setup(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedCategory,
        ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> enabledLevelCategories);

  /// @brief Method DidActivate addr 0x217fa64 size 0xa0 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x217fb04 size 0xa0 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method LevelFilterCategoryIconSegmentedControlDidSelectCell addr 0x217fba4 size 0x21c virtual false final false
  inline void LevelFilterCategoryIconSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t index);

  static inline ::GlobalNamespace::SelectLevelCategoryViewController* New_ctor();

  /// @brief Method .ctor addr 0x217fdc0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelCategoryViewController(SelectLevelCategoryViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelCategoryViewController(SelectLevelCategoryViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelCategoryViewController();

public:
  /// @brief Field _allLevelCategoryInfos, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> ____allLevelCategoryInfos;

  /// @brief Field _levelFilterCategoryIconSegmentedControl, offset: 0x78, size: 0x8, def value: None
  ::HMUI::IconSegmentedControl* ____levelFilterCategoryIconSegmentedControl;

  /// @brief Field _analyticsModel, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field didSelectLevelCategoryEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>* ___didSelectLevelCategoryEvent;

  /// @brief Field _prevSelectedLevelCategory, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory ____prevSelectedLevelCategory;

  /// @brief Field _levelCategoryInfos, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategoryInfo*>*> ____levelCategoryInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelCategoryViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____allLevelCategoryInfos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____levelFilterCategoryIconSegmentedControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____analyticsModel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ___didSelectLevelCategoryEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____prevSelectedLevelCategory) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelCategoryViewController, ____levelCategoryInfos) == 0x98, "Offset mismatch!");

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
