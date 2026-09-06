#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Haptics/IHaptics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHaptics)
// Forward declare root types
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Haptics::IHaptics*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Haptics::IHaptics*, "UnityEngine.InputSystem.Haptics", "IHaptics");
// Dependencies
namespace UnityEngine::InputSystem::Haptics {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Haptics.IHaptics
class CORDL_TYPE IHaptics {
public:
  // Declarations
  /// @brief Method PauseHaptics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PauseHaptics();

  /// @brief Method ResetHaptics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResetHaptics();

  /// @brief Method ResumeHaptics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResumeHaptics();

  // Ctor Parameters [CppParam { name: "", ty: "IHaptics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHaptics(IHapticsconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8957 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Haptics
