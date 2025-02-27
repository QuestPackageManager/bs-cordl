#pragma once
// IWYU pragma private; include "HMUI/InputFieldDataBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputFieldDataBinder)
namespace GlobalNamespace {
class IObservableChange;
}
namespace HMUI {
template <typename T> class InputFieldDataBinder___c__3_1;
}
namespace HMUI {
template <typename T0, typename T1> class InputFieldDataBinder___c__DisplayClass2_0_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Tuple_4;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::UI {
class InputField;
}
// Forward declare root types
namespace HMUI {
class InputFieldDataBinder;
}
namespace HMUI {
template <typename T> class InputFieldDataBinder___c__3_1;
}
namespace HMUI {
template <typename T0, typename T1> class InputFieldDataBinder___c__DisplayClass2_0_2;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::InputFieldDataBinder);
MARK_GEN_REF_PTR_T(::HMUI::InputFieldDataBinder___c__3_1);
MARK_GEN_REF_PTR_T(::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2);
// Dependencies System.Object
namespace HMUI {
// cpp template
template <typename T>
// Is value type: false
// CS Name: HMUI.InputFieldDataBinder/<>c__3`1<T>
class CORDL_TYPE InputFieldDataBinder___c__3_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HMUI::InputFieldDataBinder___c__3_1<T>* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::StringW, ::StringW>* __9__3_0;

  static inline ::HMUI::InputFieldDataBinder___c__3_1<T>* New_ctor();

  /// @brief Method <AddStringBindings>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _AddStringBindings_b__3_0(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HMUI::InputFieldDataBinder___c__3_1<T>* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9(::HMUI::InputFieldDataBinder___c__3_1<T>* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldDataBinder___c__3_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder___c__3_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldDataBinder___c__3_1(InputFieldDataBinder___c__3_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder___c__3_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldDataBinder___c__3_1(InputFieldDataBinder___c__3_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16023 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// cpp template
template <typename T0, typename T1>
// Is value type: false
// CS Name: HMUI.InputFieldDataBinder/<>c__DisplayClass2_0`2<T0,T1>
class CORDL_TYPE InputFieldDataBinder___c__DisplayClass2_0_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inputField, put = __cordl_internal_set_inputField)) ::UnityW<::UnityEngine::UI::InputField> inputField;

  /// @brief Field toStringConvertor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_toStringConvertor, put = __cordl_internal_set_toStringConvertor)) ::System::Func_2<T1, ::StringW>* toStringConvertor;

  /// @brief Field toValueConvertor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_toValueConvertor, put = __cordl_internal_set_toValueConvertor)) ::System::Func_2<::StringW, T1>* toValueConvertor;

  /// @brief Field valueItem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_valueItem, put = __cordl_internal_set_valueItem)) T0 valueItem;

  static inline ::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>* New_ctor();

  /// @brief Method <AddBindings>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _AddBindings_b__0(::StringW value);

  /// @brief Method <AddBindings>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _AddBindings_b__1();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_inputField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_inputField();

  constexpr ::System::Func_2<T1, ::StringW>* const& __cordl_internal_get_toStringConvertor() const;

  constexpr ::System::Func_2<T1, ::StringW>*& __cordl_internal_get_toStringConvertor();

  constexpr ::System::Func_2<::StringW, T1>* const& __cordl_internal_get_toValueConvertor() const;

  constexpr ::System::Func_2<::StringW, T1>*& __cordl_internal_get_toValueConvertor();

  constexpr T0 const& __cordl_internal_get_valueItem() const;

  constexpr T0& __cordl_internal_get_valueItem();

  constexpr void __cordl_internal_set_inputField(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_toStringConvertor(::System::Func_2<T1, ::StringW>* value);

  constexpr void __cordl_internal_set_toValueConvertor(::System::Func_2<::StringW, T1>* value);

  constexpr void __cordl_internal_set_valueItem(T0 value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldDataBinder___c__DisplayClass2_0_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder___c__DisplayClass2_0_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldDataBinder___c__DisplayClass2_0_2(InputFieldDataBinder___c__DisplayClass2_0_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder___c__DisplayClass2_0_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldDataBinder___c__DisplayClass2_0_2(InputFieldDataBinder___c__DisplayClass2_0_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16024 };

  /// @brief Field toValueConvertor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::StringW, T1>* ___toValueConvertor;

  /// @brief Field valueItem, offset: 0x18, size: 0x8, def value: None
  T0 ___valueItem;

  /// @brief Field inputField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___inputField;

  /// @brief Field toStringConvertor, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<T1, ::StringW>* ___toStringConvertor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.InputFieldDataBinder
class CORDL_TYPE InputFieldDataBinder : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__3_1 = ::HMUI::InputFieldDataBinder___c__3_1<T>;

  template <typename T0, typename T1> using __c__DisplayClass2_0_2 = ::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2<T0, T1>;

  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bindings, put = __cordl_internal_set__bindings)) ::System::Collections::Generic::List_1<
      ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>* _bindings;

  /// @brief Method AddBindings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T0, typename T1>
  inline void
  AddBindings(::System::Collections::Generic::List_1<::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, T0, ::System::Func_2<::StringW, T1>*, ::System::Func_2<T1, ::StringW>*>*>* bindingData);

  /// @brief Method AddStringBindings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void AddStringBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityW<::UnityEngine::UI::InputField>, T>*>* bindingData);

  /// @brief Method ClearBindings, addr 0x39f7e70, size 0x2c4, virtual false, abstract: false, final false
  inline void ClearBindings();

  static inline ::HMUI::InputFieldDataBinder* New_ctor();

  constexpr ::System::Collections::Generic::List_1<
      ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>* const&
  __cordl_internal_get__bindings() const;

  constexpr ::System::Collections::Generic::List_1<
      ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>*&
  __cordl_internal_get__bindings();

  constexpr void __cordl_internal_set__bindings(::System::Collections::Generic::List_1<::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*,
                                                                                                         ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>* value);

  /// @brief Method .ctor, addr 0x39f7df0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldDataBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldDataBinder(InputFieldDataBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldDataBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldDataBinder(InputFieldDataBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16025 };

  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<
      ::System::Tuple_4<::UnityW<::UnityEngine::UI::InputField>, ::GlobalNamespace::IObservableChange*, ::UnityEngine::Events::UnityAction_1<::StringW>*, ::System::Action*>*>* ____bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::InputFieldDataBinder, ____bindings) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldDataBinder, 0x18>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::InputFieldDataBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldDataBinder*, "HMUI", "InputFieldDataBinder");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::InputFieldDataBinder___c__3_1, "HMUI", "InputFieldDataBinder/<>c__3`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::InputFieldDataBinder___c__DisplayClass2_0_2, "HMUI", "InputFieldDataBinder/<>c__DisplayClass2_0`2");
