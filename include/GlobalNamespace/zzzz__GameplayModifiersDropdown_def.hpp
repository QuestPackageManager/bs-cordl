#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifiersDropdown)
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class __GameplayModifiersDropdown____c;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template <typename T> class Action_1;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersDropdown;
}
namespace GlobalNamespace {
class __GameplayModifiersDropdown____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersDropdown____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5570))
// CS Name: ::GameplayModifiersDropdown::<>c*
class CORDL_TYPE __GameplayModifiersDropdown____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__GameplayModifiersDropdown____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>* __9__8_0;

  static inline void setStaticF___9(::GlobalNamespace::__GameplayModifiersDropdown____c* value);

  static inline ::GlobalNamespace::__GameplayModifiersDropdown____c* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>* value);

  static inline ::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>* getStaticF___9__8_0();

  static inline ::GlobalNamespace::__GameplayModifiersDropdown____c* New_ctor();

  /// @brief Method .ctor addr 0x22a5644 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Start>b__8_0 addr 0x22a564c size 0x44 virtual false final false
  inline ::StringW _Start_b__8_0(::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>* x);

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersDropdown____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplayModifiersDropdown____c(__GameplayModifiersDropdown____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersDropdown____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplayModifiersDropdown____c(__GameplayModifiersDropdown____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplayModifiersDropdown____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersDropdown____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayModifiersDropdown
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5571))
// CS Name: ::GameplayModifiersDropdown*
class CORDL_TYPE GameplayModifiersDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__GameplayModifiersDropdown____c;

  /// @brief Field _simpleTextDropdown, offset 0x18, size 0x8
  __declspec(property(get = __get__simpleTextDropdown, put = __set__simpleTextDropdown))::HMUI::SimpleTextDropdown* _simpleTextDropdown;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_didSelectCellWithIdxEvent, put = __set_didSelectCellWithIdxEvent))::System::Action_1<int32_t>* didSelectCellWithIdxEvent;

  /// @brief Field _gameplayModifiersData, offset 0x30, size 0x8
  __declspec(
      property(get = __get__gameplayModifiersData,
               put = __set__gameplayModifiersData))::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* _gameplayModifiersData;

  __declspec(property(get = get_gameplayModifiersData))::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* gameplayModifiersData;

  constexpr ::HMUI::SimpleTextDropdown*& __get__simpleTextDropdown();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> const& __get__simpleTextDropdown() const;

  constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown* value);

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::System::Action_1<int32_t>*& __get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __get_didSelectCellWithIdxEvent() const;

  constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*& __get__gameplayModifiersData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*> const&
  __get__gameplayModifiersData() const;

  constexpr void __set__gameplayModifiersData(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* value);

  /// @brief Method add_didSelectCellWithIdxEvent addr 0x22a4c3c size 0xb0 virtual false final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent addr 0x22a4cec size 0xb0 virtual false final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method get_gameplayModifiersData addr 0x22a4d9c size 0x1c0 virtual false final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* get_gameplayModifiersData();

  /// @brief Method Start addr 0x22a4f5c size 0x1a0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x22a50fc size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method GetSelectedGameplayModifierMask addr 0x22a51d0 size 0xd0 virtual false final false
  inline ::GlobalNamespace::GameplayModifierMask GetSelectedGameplayModifierMask();

  /// @brief Method SelectCellWithGameplayModifierMask addr 0x22a52a0 size 0x30 virtual false final false
  inline void SelectCellWithGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask);

  /// @brief Method GetIdxForGameplayModifierMask addr 0x22a52d0 size 0x184 virtual false final false
  inline int32_t GetIdxForGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask);

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x22a5454 size 0x24 virtual false final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  static inline ::GlobalNamespace::GameplayModifiersDropdown* New_ctor();

  /// @brief Method .ctor addr 0x22a5478 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <get_gameplayModifiersData>b__7_0 addr 0x22a5480 size 0x160 virtual false final false
  inline ::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>* _get_gameplayModifiersData_b__7_0(::GlobalNamespace::GameplayModifierMask value);

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersDropdown(GameplayModifiersDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersDropdown(GameplayModifiersDropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersDropdown();

public:
  /// @brief Field _simpleTextDropdown, offset: 0x18, size: 0x8, def value: None
  ::HMUI::SimpleTextDropdown* ____simpleTextDropdown;

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field _gameplayModifiersData, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* ____gameplayModifiersData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersDropdown, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersDropdown*, "", "GameplayModifiersDropdown");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersDropdown____c*, "", "GameplayModifiersDropdown/<>c");
