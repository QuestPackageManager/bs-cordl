#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValueDropdownController_1)
namespace GlobalNamespace {
template <typename T> class __ValueDropdownController_1____c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ValueDropdownController_1;
}
namespace GlobalNamespace {
template <typename T> class __ValueDropdownController_1____c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ValueDropdownController_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__ValueDropdownController_1____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5601))
// CS Name: ::ValueDropdownController`1::<>c<T>*
class CORDL_TYPE __ValueDropdownController_1____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ValueDropdownController_1____c<T>* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* __9__9_0;

  static inline void setStaticF___9(::GlobalNamespace::__ValueDropdownController_1____c<T>* value);

  static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* getStaticF___9();

  static inline void setStaticF___9__9_0(::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* value);

  static inline ::System::Func_2<::System::Tuple_2<T, ::StringW>*, ::StringW>* getStaticF___9__9_0();

  static inline ::GlobalNamespace::__ValueDropdownController_1____c<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _Start_b__9_0(::System::Tuple_2<T, ::StringW>* x);

  // Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ValueDropdownController_1____c(__ValueDropdownController_1____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ValueDropdownController_1____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ValueDropdownController_1____c(__ValueDropdownController_1____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ValueDropdownController_1____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::ValueDropdownController`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5602))
// CS Name: ::ValueDropdownController`1<T>*
class CORDL_TYPE ValueDropdownController_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ValueDropdownController_1____c<T>;

  /// @brief Field _simpleTextDropdown, offset 0x18, size 0x8
  __declspec(property(get = __get__simpleTextDropdown, put = __set__simpleTextDropdown))::HMUI::SimpleTextDropdown* _simpleTextDropdown;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_didSelectCellWithIdxEvent, put = __set_didSelectCellWithIdxEvent))::System::Action_2<int32_t, T>* didSelectCellWithIdxEvent;

  /// @brief Field _namedValues, offset 0x28, size 0x8
  __declspec(property(get = __get__namedValues, put = __set__namedValues))::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* _namedValues;

  __declspec(property(get = get_innerDropdown))::HMUI::SimpleTextDropdown* innerDropdown;

  __declspec(property(get = get_namedValues))::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* namedValues;

  constexpr ::HMUI::SimpleTextDropdown*& __get__simpleTextDropdown();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> const& __get__simpleTextDropdown() const;

  constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown* value);

  constexpr ::System::Action_2<int32_t, T>*& __get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, T>*> const& __get_didSelectCellWithIdxEvent() const;

  constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*& __get__namedValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>*> const& __get__namedValues() const;

  constexpr void __set__namedValues(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* value);

  /// @brief Method get_innerDropdown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::HMUI::SimpleTextDropdown* get_innerDropdown();

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<int32_t, T>* value);

  /// @brief Method get_namedValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* get_namedValues();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method GetNamedValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* GetNamedValues();

  /// @brief Method GetSelectedItemValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetSelectedItemValue();

  /// @brief Method SelectCellWithValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SelectCellWithValue(T value);

  /// @brief Method GetIdxForValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetIdxForValue(T value);

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  static inline ::GlobalNamespace::ValueDropdownController_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueDropdownController_1(ValueDropdownController_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueDropdownController_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueDropdownController_1(ValueDropdownController_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueDropdownController_1();

public:
  /// @brief Field _simpleTextDropdown, offset: 0x18, size: 0x8, def value: None
  ::HMUI::SimpleTextDropdown* ____simpleTextDropdown;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<int32_t, T>* ___didSelectCellWithIdxEvent;

  /// @brief Field _namedValues, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<T, ::StringW>*>* ____namedValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ValueDropdownController_1, "", "ValueDropdownController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__ValueDropdownController_1____c, "", "ValueDropdownController`1/<>c");
