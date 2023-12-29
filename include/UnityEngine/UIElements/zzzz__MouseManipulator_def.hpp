#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ManipulatorActivationFilter_def.hpp"
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
CORDL_MODULE_EXPORT(MouseManipulator)
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseManipulator);
// Type: UnityEngine.UIElements::MouseManipulator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6991)), TypeDefinitionIndex(TypeDefinitionIndex(6869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6878))
// CS Name: ::UnityEngine.UIElements::MouseManipulator*
class CORDL_TYPE MouseManipulator : public ::UnityEngine::UIElements::Manipulator {
public:
  // Declarations
  /// @brief Field <activators>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__activators_k__BackingField,
                      put = __set__activators_k__BackingField))::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* _activators_k__BackingField;

  /// @brief Field m_currentActivator, offset 0x20, size 0xc
  __declspec(property(get = __get_m_currentActivator, put = __set_m_currentActivator))::UnityEngine::UIElements::ManipulatorActivationFilter m_currentActivator;

  __declspec(property(get = get_activators, put = set_activators))::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* activators;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*& __get__activators_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*> const& __get__activators_k__BackingField() const;

  constexpr void __set__activators_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* value);

  constexpr ::UnityEngine::UIElements::ManipulatorActivationFilter& __get_m_currentActivator();

  constexpr ::UnityEngine::UIElements::ManipulatorActivationFilter const& __get_m_currentActivator() const;

  constexpr void __set_m_currentActivator(::UnityEngine::UIElements::ManipulatorActivationFilter value);

  /// @brief Method get_activators addr 0x2c53b88 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* get_activators();

  /// @brief Method set_activators addr 0x2c53b90 size 0x8 virtual false final false
  inline void set_activators(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* value);

  static inline ::UnityEngine::UIElements::MouseManipulator* New_ctor();

  /// @brief Method .ctor addr 0x2c53b98 size 0x80 virtual false final false
  inline void _ctor();

  /// @brief Method CanStartManipulation addr 0x2c53c18 size 0x17c virtual false final false
  inline bool CanStartManipulation(::UnityEngine::UIElements::IMouseEvent* e);

  /// @brief Method CanStopManipulation addr 0x2c53d94 size 0xb8 virtual false final false
  inline bool CanStopManipulation(::UnityEngine::UIElements::IMouseEvent* e);

  // Ctor Parameters [CppParam { name: "", ty: "MouseManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseManipulator(MouseManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseManipulator(MouseManipulator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseManipulator();

public:
  /// @brief Field <activators>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* ____activators_k__BackingField;

  /// @brief Field m_currentActivator, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::UIElements::ManipulatorActivationFilter ___m_currentActivator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseManipulator, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MouseManipulator, ____activators_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MouseManipulator, ___m_currentActivator) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseManipulator*, "UnityEngine.UIElements", "MouseManipulator");
