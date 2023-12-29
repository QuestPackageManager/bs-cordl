#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongPacksDropdown)
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
class __SongPacksDropdown____c;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPacksDropdown;
}
namespace GlobalNamespace {
class __SongPacksDropdown____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPacksDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__SongPacksDropdown____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5670))
// CS Name: ::SongPacksDropdown::<>c*
class CORDL_TYPE __SongPacksDropdown____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__SongPacksDropdown____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::StringW, ::StringW>* __9__7_0;

  static inline void setStaticF___9(::GlobalNamespace::__SongPacksDropdown____c* value);

  static inline ::GlobalNamespace::__SongPacksDropdown____c* getStaticF___9();

  static inline void setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__7_0();

  static inline ::GlobalNamespace::__SongPacksDropdown____c* New_ctor();

  /// @brief Method .ctor addr 0x21617e4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LazyInit>b__7_0 addr 0x21617ec size 0xc virtual false final false
  inline ::StringW _LazyInit_b__7_0(::StringW serializedName);

  // Ctor Parameters [CppParam { name: "", ty: "__SongPacksDropdown____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPacksDropdown____c(__SongPacksDropdown____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPacksDropdown____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPacksDropdown____c(__SongPacksDropdown____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPacksDropdown____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPacksDropdown____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPacksDropdown
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5671))
// CS Name: ::SongPacksDropdown*
class CORDL_TYPE SongPacksDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__SongPacksDropdown____c;

  /// @brief Field _simpleTextDropdown, offset 0x18, size 0x8
  __declspec(property(get = __get__simpleTextDropdown, put = __set__simpleTextDropdown))::HMUI::SimpleTextDropdown* _simpleTextDropdown;

  /// @brief Field _songPackMaskModel, offset 0x20, size 0x8
  __declspec(property(get = __get__songPackMaskModel, put = __set__songPackMaskModel))::GlobalNamespace::SongPackMaskModelSO* _songPackMaskModel;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_didSelectCellWithIdxEvent, put = __set_didSelectCellWithIdxEvent))::System::Action_1<int32_t>* didSelectCellWithIdxEvent;

  /// @brief Field _initialized, offset 0x30, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _songPackSerializedNames, offset 0x38, size 0x8
  __declspec(property(get = __get__songPackSerializedNames, put = __set__songPackSerializedNames))::System::Collections::Generic::List_1<::StringW>* _songPackSerializedNames;

  constexpr ::HMUI::SimpleTextDropdown*& __get__simpleTextDropdown();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> const& __get__simpleTextDropdown() const;

  constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown* value);

  constexpr ::GlobalNamespace::SongPackMaskModelSO*& __get__songPackMaskModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMaskModelSO*> const& __get__songPackMaskModel() const;

  constexpr void __set__songPackMaskModel(::GlobalNamespace::SongPackMaskModelSO* value);

  constexpr ::System::Action_1<int32_t>*& __get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_didSelectCellWithIdxEvent() const;

  constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__songPackSerializedNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__songPackSerializedNames() const;

  constexpr void __set__songPackSerializedNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method add_didSelectCellWithIdxEvent addr 0x2161144 size 0xb0 virtual false final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent addr 0x21611f4 size 0xb0 virtual false final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method LazyInit addr 0x21612a4 size 0x164 virtual false final false
  inline void LazyInit();

  /// @brief Method Start addr 0x2161408 size 0x94 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x216149c size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method SetOverrideSongPacks addr 0x2161570 size 0x8 virtual false final false
  inline void SetOverrideSongPacks(::System::Collections::Generic::List_1<::StringW>* songPackSerializedNames);

  /// @brief Method GetSelectedSongPackMask addr 0x2161578 size 0x7c virtual false final false
  inline ::GlobalNamespace::SongPackMask GetSelectedSongPackMask();

  /// @brief Method SelectCellWithSongPackMask addr 0x21615f4 size 0xb0 virtual false final false
  inline void SelectCellWithSongPackMask(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method GetIdxForSongPackMask addr 0x21616a4 size 0xb0 virtual false final false
  inline int32_t GetIdxForSongPackMask(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x2161754 size 0x24 virtual false final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  static inline ::GlobalNamespace::SongPacksDropdown* New_ctor();

  /// @brief Method .ctor addr 0x2161778 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongPacksDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPacksDropdown(SongPacksDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPacksDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPacksDropdown(SongPacksDropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPacksDropdown();

public:
  /// @brief Field _simpleTextDropdown, offset: 0x18, size: 0x8, def value: None
  ::HMUI::SimpleTextDropdown* ____simpleTextDropdown;

  /// @brief Field _songPackMaskModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMaskModelSO* ____songPackMaskModel;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field _initialized, offset: 0x30, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _songPackSerializedNames, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____songPackSerializedNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPacksDropdown, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____simpleTextDropdown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____songPackMaskModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ___didSelectCellWithIdxEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____songPackSerializedNames) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPacksDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPacksDropdown*, "", "SongPacksDropdown");
NEED_NO_BOX(::GlobalNamespace::__SongPacksDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPacksDropdown____c*, "", "SongPacksDropdown/<>c");
