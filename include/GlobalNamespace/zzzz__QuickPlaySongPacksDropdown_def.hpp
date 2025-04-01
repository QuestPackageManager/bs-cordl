#pragma once
// IWYU pragma private; include "GlobalNamespace/QuickPlaySongPacksDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QuickPlaySongPacksDropdown)
namespace GlobalNamespace {
class QuickPlaySetupData_QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown_SongPackMaskItem;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown___c;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown___c__DisplayClass13_0;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack;
}
namespace GlobalNamespace {
class QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown_SongPackMaskItem;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown___c;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksDropdown);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksDropdown___c);
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0);
// Dependencies SongPackMask, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySongPacksDropdown/SongPackMaskItem
class CORDL_TYPE QuickPlaySongPacksDropdown_SongPackMaskItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field localizedName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localizedName, put = __cordl_internal_set_localizedName)) ::StringW localizedName;

  /// @brief Field order, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_order, put = __cordl_internal_set_order)) int32_t order;

  /// @brief Field serializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedName, put = __cordl_internal_set_serializedName)) ::StringW serializedName;

  /// @brief Field songPackMask, offset 0x28, size 0x20
  __declspec(property(get = __cordl_internal_get_songPackMask, put = __cordl_internal_set_songPackMask)) ::GlobalNamespace::SongPackMask songPackMask;

  static inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_localizedName() const;

  constexpr ::StringW& __cordl_internal_get_localizedName();

  constexpr int32_t const& __cordl_internal_get_order() const;

  constexpr int32_t& __cordl_internal_get_order();

  constexpr ::StringW const& __cordl_internal_get_serializedName() const;

  constexpr ::StringW& __cordl_internal_get_serializedName();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get_songPackMask() const;

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get_songPackMask();

  constexpr void __cordl_internal_set_localizedName(::StringW value);

  constexpr void __cordl_internal_set_order(int32_t value);

  constexpr void __cordl_internal_set_serializedName(::StringW value);

  constexpr void __cordl_internal_set_songPackMask(::GlobalNamespace::SongPackMask value);

  /// @brief Method .ctor, addr 0x3c09ad8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksDropdown_SongPackMaskItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown_SongPackMaskItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksDropdown_SongPackMaskItem(QuickPlaySongPacksDropdown_SongPackMaskItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown_SongPackMaskItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksDropdown_SongPackMaskItem(QuickPlaySongPacksDropdown_SongPackMaskItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4838 };

  /// @brief Field serializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serializedName;

  /// @brief Field localizedName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localizedName;

  /// @brief Field order, offset: 0x20, size: 0x4, def value: None
  int32_t ___order;

  /// @brief Field songPackMask, offset: 0x28, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ___songPackMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem, ___serializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem, ___localizedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem, ___order) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem, ___songPackMask) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySongPacksDropdown/<>c
class CORDL_TYPE QuickPlaySongPacksDropdown___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::QuickPlaySongPacksDropdown___c* __9;

  /// @brief Field <>9__15_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_2, put = setStaticF___9__15_2)) ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*,
                                                                                                ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* __9__15_2;

  /// @brief Field <>9__15_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_3, put = setStaticF___9__15_3)) ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>* __9__15_3;

  /// @brief Field <>9__15_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_4,
                      put = setStaticF___9__15_4)) ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>* __9__15_4;

  static inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c* New_ctor();

  /// @brief Method <LazyInit>b__15_2, addr 0x3c09c00, size 0x1a8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* _LazyInit_b__15_2(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack* localizedPack);

  /// @brief Method <LazyInit>b__15_3, addr 0x3c09de8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _LazyInit_b__15_3(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* item);

  /// @brief Method <LazyInit>b__15_4, addr 0x3c09da8, size 0x40, virtual false, abstract: false, final false
  inline bool _LazyInit_b__15_4(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName* packName);

  /// @brief Method .ctor, addr 0x3c09bf8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*
  getStaticF___9__15_2();

  static inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>* getStaticF___9__15_3();

  static inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>* getStaticF___9__15_4();

  static inline void setStaticF___9(::GlobalNamespace::QuickPlaySongPacksDropdown___c* value);

  static inline void
  setStaticF___9__15_2(::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* value);

  static inline void setStaticF___9__15_3(::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>* value);

  static inline void setStaticF___9__15_4(::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksDropdown___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksDropdown___c(QuickPlaySongPacksDropdown___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksDropdown___c(QuickPlaySongPacksDropdown___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4839 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksDropdown___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySongPacksDropdown/<>c__DisplayClass13_0
class CORDL_TYPE QuickPlaySongPacksDropdown___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field serializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedName, put = __cordl_internal_set_serializedName)) ::StringW serializedName;

  static inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0* New_ctor();

  /// @brief Method <SelectCellWithSerializedName>b__0, addr 0x3c09e00, size 0x24, virtual false, abstract: false, final false
  inline bool _SelectCellWithSerializedName_b__0(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* item);

  constexpr ::StringW const& __cordl_internal_get_serializedName() const;

  constexpr ::StringW& __cordl_internal_get_serializedName();

  constexpr void __cordl_internal_set_serializedName(::StringW value);

  /// @brief Method .ctor, addr 0x3c099f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksDropdown___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksDropdown___c__DisplayClass13_0(QuickPlaySongPacksDropdown___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksDropdown___c__DisplayClass13_0(QuickPlaySongPacksDropdown___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4840 };

  /// @brief Field serializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serializedName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0, ___serializedName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: QuickPlaySongPacksDropdown
class CORDL_TYPE QuickPlaySongPacksDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SongPackMaskItem = ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem;

  using __c = ::GlobalNamespace::QuickPlaySongPacksDropdown___c;

  using __c__DisplayClass13_0 = ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0;

  /// @brief Field _data, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__data,
                      put = __cordl_internal_set__data)) ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* _data;

  /// @brief Field _initialized, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _quickPlaySongPacksOverride, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySongPacksOverride,
                      put = __cordl_internal_set__quickPlaySongPacksOverride)) ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* _quickPlaySongPacksOverride;

  /// @brief Field _simpleTextDropdown, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleTextDropdown, put = __cordl_internal_set__simpleTextDropdown)) ::UnityW<::HMUI::SimpleTextDropdown> _simpleTextDropdown;

  /// @brief Field _songPackMasksModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent, put = __cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_1<int32_t>* didSelectCellWithIdxEvent;

  /// @brief Method GetSelectedSerializedName, addr 0x3c0945c, size 0x70, virtual false, abstract: false, final false
  inline ::StringW GetSelectedSerializedName();

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x3c099fc, size 0x24, virtual false, abstract: false, final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  /// @brief Method LazyInit, addr 0x3c094cc, size 0x3d4, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::GlobalNamespace::QuickPlaySongPacksDropdown* New_ctor();

  /// @brief Method OnDestroy, addr 0x3c09384, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectCellWithSerializedName, addr 0x3c098a0, size 0x154, virtual false, abstract: false, final false
  inline void SelectCellWithSerializedName(::StringW serializedName);

  /// @brief Method SetOverrideSongPacks, addr 0x3c09454, size 0x8, virtual false, abstract: false, final false
  inline void SetOverrideSongPacks(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* quickPlaySongPacksOverride);

  /// @brief Method Start, addr 0x3c092f4, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <LazyInit>b__15_0, addr 0x3c09a28, size 0xb0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* _LazyInit_b__15_0(::StringW serializedName);

  /// @brief Method <LazyInit>b__15_1, addr 0x3c09ae0, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* _LazyInit_b__15_1(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack* pack);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* const& __cordl_internal_get__data() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*& __cordl_internal_get__data();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* const& __cordl_internal_get__quickPlaySongPacksOverride() const;

  constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*& __cordl_internal_get__quickPlaySongPacksOverride();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__simpleTextDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__simpleTextDropdown();

  constexpr ::GlobalNamespace::SongPackMasksModel* const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr void __cordl_internal_set__data(::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__quickPlaySongPacksOverride(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* value);

  constexpr void __cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3c09a20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x3c09194, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x3c09244, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksDropdown(QuickPlaySongPacksDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksDropdown(QuickPlaySongPacksDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4841 };

  /// @brief Field _simpleTextDropdown, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____simpleTextDropdown;

  /// @brief Field _songPackMasksModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field _initialized, offset: 0x38, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _quickPlaySongPacksOverride, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* ____quickPlaySongPacksOverride;

  /// @brief Field _data, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____simpleTextDropdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____songPackMasksModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ___didSelectCellWithIdxEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____initialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____quickPlaySongPacksOverride) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____data) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksDropdown, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksDropdown*, "", "QuickPlaySongPacksDropdown");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, "", "QuickPlaySongPacksDropdown/SongPackMaskItem");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksDropdown___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksDropdown___c*, "", "QuickPlaySongPacksDropdown/<>c");
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*, "", "QuickPlaySongPacksDropdown/<>c__DisplayClass13_0");
