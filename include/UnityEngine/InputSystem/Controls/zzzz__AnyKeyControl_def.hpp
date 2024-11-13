#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/AnyKeyControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnyKeyControl)
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class AnyKeyControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::AnyKeyControl);
// Type: UnityEngine.InputSystem.Controls::AnyKeyControl
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 304, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::AnyKeyControl*
class CORDL_TYPE AnyKeyControl : public ::UnityEngine::InputSystem::Controls::ButtonControl {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x44fe7e4, size 0x28, virtual true, abstract: false, final false
  inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method .ctor, addr 0x44fe6ec, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnyKeyControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnyKeyControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnyKeyControl(AnyKeyControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnyKeyControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnyKeyControl(AnyKeyControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7006 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::AnyKeyControl, 0x130>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::AnyKeyControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::AnyKeyControl*, "UnityEngine.InputSystem.Controls", "AnyKeyControl");
