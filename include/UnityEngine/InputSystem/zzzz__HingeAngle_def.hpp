#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HingeAngle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
CORDL_MODULE_EXPORT(HingeAngle)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class HingeAngle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::HingeAngle);
// Dependencies UnityEngine.InputSystem.Sensor
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HingeAngle
class CORDL_TYPE HingeAngle : public ::UnityEngine::InputSystem::Sensor {
public:
  // Declarations
  /// @brief Field <angle>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__angle_k__BackingField, put = __cordl_internal_set__angle_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _angle_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::HingeAngle* _current_k__BackingField;

  __declspec(property(get = get_angle, put = set_angle)) ::UnityEngine::InputSystem::Controls::AxisControl* angle;

  /// @brief Method FinishSetup, addr 0x63492d8, size 0x70, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x63491f8, size 0x50, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::HingeAngle* New_ctor();

  /// @brief Method OnRemoved, addr 0x6349248, size 0x90, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__angle_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__angle_k__BackingField();

  constexpr void __cordl_internal_set__angle_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x6349348, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::HingeAngle* getStaticF__current_k__BackingField();

  /// @brief Method get_angle, addr 0x634914c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_angle();

  /// @brief Method get_current, addr 0x634915c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::HingeAngle* get_current();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::HingeAngle* value);

  /// @brief Method set_angle, addr 0x6349154, size 0x8, virtual false, abstract: false, final false
  inline void set_angle(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_current, addr 0x63491a8, size 0x50, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::HingeAngle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HingeAngle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HingeAngle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HingeAngle(HingeAngle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HingeAngle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HingeAngle(HingeAngle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8748 };

  /// @brief Field <angle>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____angle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HingeAngle, ____angle_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HingeAngle, 0x190>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::HingeAngle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HingeAngle*, "UnityEngine.InputSystem", "HingeAngle");
