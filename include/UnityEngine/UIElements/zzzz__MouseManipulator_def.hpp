#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ManipulatorActivationFilter_def.hpp"
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
CORDL_MODULE_EXPORT(MouseManipulator)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseManipulator);
// Dependencies UnityEngine.UIElements.Manipulator, UnityEngine.UIElements.ManipulatorActivationFilter
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseManipulator
class CORDL_TYPE MouseManipulator : public ::UnityEngine::UIElements::Manipulator {
public:
  // Declarations
  /// @brief Field <activators>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__activators_k__BackingField,
      put = __cordl_internal_set__activators_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* _activators_k__BackingField;

  __declspec(property(get = get_activators, put = set_activators)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* activators;

  /// @brief Field m_currentActivator, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_m_currentActivator, put = __cordl_internal_set_m_currentActivator)) ::UnityEngine::UIElements::ManipulatorActivationFilter m_currentActivator;

  /// @brief Method CanStartManipulation, addr 0x4a41fe4, size 0x174, virtual false, abstract: false, final false
  inline bool CanStartManipulation(::UnityEngine::UIElements::IMouseEvent* e);

  /// @brief Method CanStopManipulation, addr 0x4a42158, size 0xb8, virtual false, abstract: false, final false
  inline bool CanStopManipulation(::UnityEngine::UIElements::IMouseEvent* e);

  static inline ::UnityEngine::UIElements::MouseManipulator* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* const& __cordl_internal_get__activators_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*& __cordl_internal_get__activators_k__BackingField();

  constexpr ::UnityEngine::UIElements::ManipulatorActivationFilter const& __cordl_internal_get_m_currentActivator() const;

  constexpr ::UnityEngine::UIElements::ManipulatorActivationFilter& __cordl_internal_get_m_currentActivator();

  constexpr void __cordl_internal_set__activators_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* value);

  constexpr void __cordl_internal_set_m_currentActivator(::UnityEngine::UIElements::ManipulatorActivationFilter value);

  /// @brief Method .ctor, addr 0x4a41f64, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activators, addr 0x4a41f54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* get_activators();

  /// @brief Method set_activators, addr 0x4a41f5c, size 0x8, virtual false, abstract: false, final false
  inline void set_activators(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseManipulator(MouseManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseManipulator(MouseManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5993 };

  /// @brief Field <activators>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* ____activators_k__BackingField;

  /// @brief Field m_currentActivator, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::UIElements::ManipulatorActivationFilter ___m_currentActivator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MouseManipulator, ____activators_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MouseManipulator, ___m_currentActivator) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseManipulator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseManipulator*, "UnityEngine.UIElements", "MouseManipulator");
