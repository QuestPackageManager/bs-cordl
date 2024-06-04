#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidCompensateDirectionProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateDirectionProcessor_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AndroidCompensateDirectionProcessor)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidCompensateDirectionProcessor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor);
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateDirectionProcessor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidCompensateDirectionProcessor*
class CORDL_TYPE AndroidCompensateDirectionProcessor : public ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor* New_ctor();

  /// @brief Method Process, addr 0x317a0cc, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 vector, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method .ctor, addr 0x317a0e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidCompensateDirectionProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateDirectionProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidCompensateDirectionProcessor(AndroidCompensateDirectionProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidCompensateDirectionProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidCompensateDirectionProcessor(AndroidCompensateDirectionProcessor const&) = delete;

  /// @brief Field kAccelerationMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kAccelerationMultiplier{ -0.10197162 };

  /// @brief Field kSensorStandardGravity offset 0xffffffff size 0x4
  static constexpr float_t kSensorStandardGravity{ 9.80665 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidCompensateDirectionProcessor");
