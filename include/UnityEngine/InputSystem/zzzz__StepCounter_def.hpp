#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/StepCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(StepCounter)
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class StepCounter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::StepCounter);
// Type: UnityEngine.InputSystem::StepCounter
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::StepCounter*
class CORDL_TYPE StepCounter : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::StepCounter* _current_k__BackingField;

  /// @brief Field <stepCounter>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__stepCounter_k__BackingField,
                      put = __cordl_internal_set__stepCounter_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _stepCounter_k__BackingField;

  __declspec(property(get = get_stepCounter, put = set_stepCounter)) ::UnityEngine::InputSystem::Controls::IntegerControl* stepCounter;

  /// @brief Method FinishSetup, addr 0x4551964, size 0x78, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x455188c, size 0x54, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::StepCounter* New_ctor();

  /// @brief Method OnRemoved, addr 0x45518e0, size 0x84, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__stepCounter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __cordl_internal_get__stepCounter_k__BackingField() const;

  constexpr void __cordl_internal_set__stepCounter_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method .ctor, addr 0x45519dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::StepCounter* getStaticF__current_k__BackingField();

  /// @brief Method get_current, addr 0x45517f8, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::StepCounter* get_current();

  /// @brief Method get_stepCounter, addr 0x45517e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_stepCounter();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::StepCounter* value);

  /// @brief Method set_current, addr 0x4551840, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::StepCounter* value);

  /// @brief Method set_stepCounter, addr 0x45517f0, size 0x8, virtual false, abstract: false, final false
  inline void set_stepCounter(::UnityEngine::InputSystem::Controls::IntegerControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StepCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StepCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StepCounter(StepCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StepCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StepCounter(StepCounter const&) = delete;

  /// @brief Field <stepCounter>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____stepCounter_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::StepCounter, 0x178>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::StepCounter, ____stepCounter_k__BackingField) == 0x170, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::StepCounter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::StepCounter*, "UnityEngine.InputSystem", "StepCounter");
