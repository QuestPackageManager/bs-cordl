#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Haptics/IHaptics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHaptics)
// Forward declare root types
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Haptics::IHaptics);
// Type: UnityEngine.InputSystem.Haptics::IHaptics
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Haptics {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Haptics::IHaptics*
class CORDL_TYPE IHaptics {
public:
  // Declarations
  /// @brief Method PauseHaptics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PauseHaptics();

  /// @brief Method ResetHaptics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResetHaptics();

  /// @brief Method ResumeHaptics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResumeHaptics();

  // Ctor Parameters [CppParam { name: "", ty: "IHaptics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IHaptics(IHaptics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IHaptics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHaptics(IHaptics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Haptics
NEED_NO_BOX(::UnityEngine::InputSystem::Haptics::IHaptics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Haptics::IHaptics*, "UnityEngine.InputSystem.Haptics", "IHaptics");
