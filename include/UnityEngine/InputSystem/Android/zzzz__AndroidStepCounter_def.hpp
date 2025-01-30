#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidStepCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__StepCounter_def.hpp"
CORDL_MODULE_EXPORT(AndroidStepCounter)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidStepCounter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidStepCounter);
// Dependencies UnityEngine.InputSystem.StepCounter
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidStepCounter
class CORDL_TYPE AndroidStepCounter : public ::UnityEngine::InputSystem::StepCounter {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidStepCounter* New_ctor();

  /// @brief Method .ctor, addr 0x4607694, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidStepCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidStepCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidStepCounter(AndroidStepCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidStepCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidStepCounter(AndroidStepCounter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidStepCounter, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidStepCounter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidStepCounter*, "UnityEngine.InputSystem.Android", "AndroidStepCounter");
