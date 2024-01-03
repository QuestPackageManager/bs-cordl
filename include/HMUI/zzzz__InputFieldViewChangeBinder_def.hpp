#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputFieldViewChangeBinder)
namespace HMUI {
class InputFieldView;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HMUI {
class InputFieldViewChangeBinder;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::InputFieldViewChangeBinder);
// Type: HMUI::InputFieldViewChangeBinder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13515))
// CS Name: ::HMUI::InputFieldViewChangeBinder*
class CORDL_TYPE InputFieldViewChangeBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindings, offset 0x10, size 0x8
  __declspec(
      property(get = __get__bindings,
               put = __set__bindings))::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>* _bindings;

  /// @brief Field _enabled, offset 0x18, size 0x1
  __declspec(property(get = __get__enabled, put = __set__enabled)) bool _enabled;

  constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>*& __get__bindings();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>*> const&
  __get__bindings() const;

  constexpr void __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>* value);

  constexpr bool& __get__enabled();

  constexpr bool const& __get__enabled() const;

  constexpr void __set__enabled(bool value);

  static inline ::HMUI::InputFieldViewChangeBinder* New_ctor();

  /// @brief Method .ctor, addr 0x2118c18, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x2118c3c, size 0x74, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method AddBindings, addr 0x2118cb0, size 0x164, virtual false, abstract: false, final false
  inline void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::System::Action_1<::HMUI::InputFieldView*>*>*>* bindings);

  /// @brief Method AddBinding, addr 0x2118e14, size 0xd8, virtual false, abstract: false, final false
  inline void AddBinding(::HMUI::InputFieldView* inputField, ::System::Action_1<::HMUI::InputFieldView*>* action);

  /// @brief Method ClearBindings, addr 0x2118eec, size 0x234, virtual false, abstract: false, final false
  inline void ClearBindings();

  /// @brief Method Disable, addr 0x2119120, size 0x204, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x2119324, size 0x208, virtual false, abstract: false, final false
  inline void Enable();

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewChangeBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldViewChangeBinder(InputFieldViewChangeBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewChangeBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldViewChangeBinder(InputFieldViewChangeBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldViewChangeBinder();

public:
  /// @brief Field _bindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Tuple_2<::HMUI::InputFieldView*, ::UnityEngine::Events::UnityAction_1<::HMUI::InputFieldView*>*>*>* ____bindings;

  /// @brief Field _enabled, offset: 0x18, size: 0x1, def value: None
  bool ____enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldViewChangeBinder, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewChangeBinder, ____bindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewChangeBinder, ____enabled) == 0x18, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::InputFieldViewChangeBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldViewChangeBinder*, "HMUI", "InputFieldViewChangeBinder");
