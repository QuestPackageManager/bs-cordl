#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/IntegerControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegerControl)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::IntegerControl);
// Type: UnityEngine.InputSystem.Controls::IntegerControl
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 257, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::IntegerControl*
class CORDL_TYPE IntegerControl : public ::UnityEngine::InputSystem::InputControl_1<int32_t> {
public:
  // Declarations
  /// @brief Method CalculateOptimizedControlDataType, addr 0x319f39c, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC CalculateOptimizedControlDataType();

  static inline ::UnityEngine::InputSystem::Controls::IntegerControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x319f338, size 0x2c, virtual true, abstract: false, final false
  inline int32_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x319f364, size 0x38, virtual true, abstract: false, final false
  inline void WriteValueIntoState(int32_t value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method .ctor, addr 0x319f2b0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerControl(IntegerControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerControl(IntegerControl const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::IntegerControl, 0x108>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::IntegerControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::IntegerControl*, "UnityEngine.InputSystem.Controls", "IntegerControl");
