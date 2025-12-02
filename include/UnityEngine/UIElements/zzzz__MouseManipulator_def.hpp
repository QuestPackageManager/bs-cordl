#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
CORDL_MODULE_EXPORT(MouseManipulator)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies UnityEngine.UIElements.Manipulator
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

  static inline ::UnityEngine::UIElements::MouseManipulator* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* const& __cordl_internal_get__activators_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>*& __cordl_internal_get__activators_k__BackingField();

  constexpr void __cordl_internal_set__activators_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* value);

  /// @brief Method .ctor, addr 0x6b821ec, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activators, addr 0x6b821dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* get_activators();

  /// @brief Method set_activators, addr 0x6b821e4, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4623 };

  /// @brief Field <activators>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter>* ____activators_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MouseManipulator, ____activators_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseManipulator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseManipulator*, "UnityEngine.UIElements", "MouseManipulator");
