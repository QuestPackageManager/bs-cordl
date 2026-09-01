#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Android\AndroidHingeAngle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__HingeAngle_def.hpp"
CORDL_MODULE_EXPORT(AndroidHingeAngle)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidHingeAngle;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Android::AndroidHingeAngle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Android::AndroidHingeAngle*, "UnityEngine.InputSystem.Android", "AndroidHingeAngle");
// Dependencies UnityEngine.InputSystem.HingeAngle
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.AndroidHingeAngle
class CORDL_TYPE AndroidHingeAngle : public ::UnityEngine::InputSystem::HingeAngle {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidHingeAngle* New_ctor();

  /// @brief Method .ctor, addr 0x65abc90, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidHingeAngle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidHingeAngle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidHingeAngle(AndroidHingeAngle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidHingeAngle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidHingeAngle(AndroidHingeAngle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8938 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Android::AndroidHingeAngle) == 0x190, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
