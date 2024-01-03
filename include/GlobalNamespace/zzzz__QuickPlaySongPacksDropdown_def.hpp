#pragma once
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
class SongPackMasksModel;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace GlobalNamespace {
class __QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
namespace GlobalNamespace {
class __QuickPlaySongPacksDropdown__SongPackMaskItem;
}
namespace GlobalNamespace {
class __QuickPlaySongPacksDropdown____c;
}
namespace GlobalNamespace {
class __QuickPlaySongPacksDropdown____c__DisplayClass13_0;
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
class __QuickPlaySongPacksDropdown__SongPackMaskItem;
}
namespace GlobalNamespace {
class __QuickPlaySongPacksDropdown____c;
}
namespace GlobalNamespace {
class __QuickPlaySongPacksDropdown____c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySongPacksDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySongPacksDropdown____c);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0);
// Type: ::SongPackMaskItem
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15047))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5574))
// CS Name: ::QuickPlaySongPacksDropdown::SongPackMaskItem*
class CORDL_TYPE __QuickPlaySongPacksDropdown__SongPackMaskItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field serializedName, offset 0x10, size 0x8
  __declspec(property(get = __get_serializedName, put = __set_serializedName))::StringW serializedName;

  /// @brief Field localizedName, offset 0x18, size 0x8
  __declspec(property(get = __get_localizedName, put = __set_localizedName))::StringW localizedName;

  /// @brief Field order, offset 0x20, size 0x4
  __declspec(property(get = __get_order, put = __set_order)) int32_t order;

  /// @brief Field songPackMask, offset 0x28, size 0x20
  __declspec(property(get = __get_songPackMask, put = __set_songPackMask))::GlobalNamespace::SongPackMask songPackMask;

  constexpr ::StringW& __get_serializedName();

  constexpr ::StringW const& __get_serializedName() const;

  constexpr void __set_serializedName(::StringW value);

  constexpr ::StringW& __get_localizedName();

  constexpr ::StringW const& __get_localizedName() const;

  constexpr void __set_localizedName(::StringW value);

  constexpr int32_t& __get_order();

  constexpr int32_t const& __get_order() const;

  constexpr void __set_order(int32_t value);

  constexpr ::GlobalNamespace::SongPackMask& __get_songPackMask();

  constexpr ::GlobalNamespace::SongPackMask const& __get_songPackMask() const;

  constexpr void __set_songPackMask(::GlobalNamespace::SongPackMask value);

  static inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* New_ctor();

  /// @brief Method .ctor, addr 0x22a6190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySongPacksDropdown__SongPackMaskItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySongPacksDropdown__SongPackMaskItem(__QuickPlaySongPacksDropdown__SongPackMaskItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySongPacksDropdown__SongPackMaskItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySongPacksDropdown__SongPackMaskItem(__QuickPlaySongPacksDropdown__SongPackMaskItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySongPacksDropdown__SongPackMaskItem();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem, ___serializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem, ___localizedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem, ___order) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem, ___songPackMask) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5575))
// CS Name: ::QuickPlaySongPacksDropdown::<>c__DisplayClass13_0*
class CORDL_TYPE __QuickPlaySongPacksDropdown____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field serializedName, offset 0x10, size 0x8
  __declspec(property(get = __get_serializedName, put = __set_serializedName))::StringW serializedName;

  constexpr ::StringW& __get_serializedName();

  constexpr ::StringW const& __get_serializedName() const;

  constexpr void __set_serializedName(::StringW value);

  static inline ::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor, addr 0x22a60ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SelectCellWithSerializedName>b__0, addr 0x22a6254, size 0x24, virtual false, abstract: false, final false
  inline bool _SelectCellWithSerializedName_b__0(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* item);

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySongPacksDropdown____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySongPacksDropdown____c__DisplayClass13_0(__QuickPlaySongPacksDropdown____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySongPacksDropdown____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySongPacksDropdown____c__DisplayClass13_0(__QuickPlaySongPacksDropdown____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySongPacksDropdown____c__DisplayClass13_0();

public:
  /// @brief Field serializedName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serializedName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0, ___serializedName) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5576))
// CS Name: ::QuickPlaySongPacksDropdown::<>c*
class CORDL_TYPE __QuickPlaySongPacksDropdown____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__QuickPlaySongPacksDropdown____c* __9;

  /// @brief Field <>9__15_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_4,
                             put = setStaticF___9__15_4))::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>* __9__15_4;

  /// @brief Field <>9__15_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_2, put = setStaticF___9__15_2))::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*,
                                                                                                      ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>* __9__15_2;

  /// @brief Field <>9__15_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_3, put = setStaticF___9__15_3))::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>* __9__15_3;

  static inline void setStaticF___9(::GlobalNamespace::__QuickPlaySongPacksDropdown____c* value);

  static inline ::GlobalNamespace::__QuickPlaySongPacksDropdown____c* getStaticF___9();

  static inline void setStaticF___9__15_4(::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>* getStaticF___9__15_4();

  static inline void setStaticF___9__15_2(
      ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>* value);

  static inline ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*
  getStaticF___9__15_2();

  static inline void setStaticF___9__15_3(::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>* getStaticF___9__15_3();

  static inline ::GlobalNamespace::__QuickPlaySongPacksDropdown____c* New_ctor();

  /// @brief Method .ctor, addr 0x22a62dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LazyInit>b__15_2, addr 0x22a62e4, size 0x1a0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* _LazyInit_b__15_2(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack* localizedPack);

  /// @brief Method <LazyInit>b__15_4, addr 0x22a6484, size 0x3c, virtual false, abstract: false, final false
  inline bool _LazyInit_b__15_4(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName* packName);

  /// @brief Method <LazyInit>b__15_3, addr 0x22a64c0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _LazyInit_b__15_3(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* item);

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySongPacksDropdown____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __QuickPlaySongPacksDropdown____c(__QuickPlaySongPacksDropdown____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySongPacksDropdown____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __QuickPlaySongPacksDropdown____c(__QuickPlaySongPacksDropdown____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuickPlaySongPacksDropdown____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySongPacksDropdown____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::QuickPlaySongPacksDropdown
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5577))
// CS Name: ::QuickPlaySongPacksDropdown*
class CORDL_TYPE QuickPlaySongPacksDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__QuickPlaySongPacksDropdown____c;

  using __c__DisplayClass13_0 = ::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0;

  using SongPackMaskItem = ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem;

  /// @brief Field _simpleTextDropdown, offset 0x18, size 0x8
  __declspec(property(get = __get__simpleTextDropdown, put = __set__simpleTextDropdown))::HMUI::SimpleTextDropdown* _simpleTextDropdown;

  /// @brief Field _songPackMasksModel, offset 0x20, size 0x8
  __declspec(property(get = __get__songPackMasksModel, put = __set__songPackMasksModel))::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_didSelectCellWithIdxEvent, put = __set_didSelectCellWithIdxEvent))::System::Action_1<int32_t>* didSelectCellWithIdxEvent;

  /// @brief Field _initialized, offset 0x30, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _quickPlaySongPacksOverride, offset 0x38, size 0x8
  __declspec(property(get = __get__quickPlaySongPacksOverride,
                      put = __set__quickPlaySongPacksOverride))::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* _quickPlaySongPacksOverride;

  /// @brief Field _data, offset 0x40, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>* _data;

  constexpr ::HMUI::SimpleTextDropdown*& __get__simpleTextDropdown();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> const& __get__simpleTextDropdown() const;

  constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown* value);

  constexpr ::GlobalNamespace::SongPackMasksModel*& __get__songPackMasksModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& __get__songPackMasksModel() const;

  constexpr void __set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr ::System::Action_1<int32_t>*& __get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_didSelectCellWithIdxEvent() const;

  constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*& __get__quickPlaySongPacksOverride();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*> const& __get__quickPlaySongPacksOverride() const;

  constexpr void __set__quickPlaySongPacksOverride(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*& __get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*> const& __get__data() const;

  constexpr void __set__data(::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>* value);

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x22a5848, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x22a58f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method Start, addr 0x22a59a8, size 0x8c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x22a5a34, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetOverrideSongPacks, addr 0x22a5b08, size 0x8, virtual false, abstract: false, final false
  inline void SetOverrideSongPacks(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* quickPlaySongPacksOverride);

  /// @brief Method GetSelectedSerializedName, addr 0x22a5b10, size 0x70, virtual false, abstract: false, final false
  inline ::StringW GetSelectedSerializedName();

  /// @brief Method SelectCellWithSerializedName, addr 0x22a5f5c, size 0x150, virtual false, abstract: false, final false
  inline void SelectCellWithSerializedName(::StringW serializedName);

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x22a60b4, size 0x24, virtual false, abstract: false, final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  /// @brief Method LazyInit, addr 0x22a5b80, size 0x3dc, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::GlobalNamespace::QuickPlaySongPacksDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x22a60d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <LazyInit>b__15_0, addr 0x22a60e0, size 0xb0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* _LazyInit_b__15_0(::StringW serializedName);

  /// @brief Method <LazyInit>b__15_1, addr 0x22a6198, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* _LazyInit_b__15_1(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack* pack);

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuickPlaySongPacksDropdown(QuickPlaySongPacksDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuickPlaySongPacksDropdown(QuickPlaySongPacksDropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuickPlaySongPacksDropdown();

public:
  /// @brief Field _simpleTextDropdown, offset: 0x18, size: 0x8, def value: None
  ::HMUI::SimpleTextDropdown* ____simpleTextDropdown;

  /// @brief Field _songPackMasksModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field _initialized, offset: 0x30, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _quickPlaySongPacksOverride, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* ____quickPlaySongPacksOverride;

  /// @brief Field _data, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySongPacksDropdown, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____simpleTextDropdown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____songPackMasksModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ___didSelectCellWithIdxEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____quickPlaySongPacksOverride) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuickPlaySongPacksDropdown, ____data) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksDropdown*, "", "QuickPlaySongPacksDropdown");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, "", "QuickPlaySongPacksDropdown/SongPackMaskItem");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySongPacksDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySongPacksDropdown____c*, "", "QuickPlaySongPacksDropdown/<>c");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0*, "", "QuickPlaySongPacksDropdown/<>c__DisplayClass13_0");
