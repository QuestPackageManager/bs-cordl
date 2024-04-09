#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__PressBehavior_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PressInteraction)
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class PressInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::PressInteraction);
// Type: UnityEngine.InputSystem.Interactions::PressInteraction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Interactions::PressInteraction*
class CORDL_TYPE PressInteraction : public ::System::Object {
public:
  // Declarations
  /// @brief Field behavior, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_behavior, put = __cordl_internal_set_behavior))::UnityEngine::InputSystem::Interactions::PressBehavior behavior;

  /// @brief Field m_WaitingForRelease, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WaitingForRelease, put = __cordl_internal_set_m_WaitingForRelease)) bool m_WaitingForRelease;

  /// @brief Field pressPoint, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_pressPoint, put = __cordl_internal_set_pressPoint)) float_t pressPoint;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  __declspec(property(get = get_releasePointOrDefault)) float_t releasePointOrDefault;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

  static inline ::UnityEngine::InputSystem::Interactions::PressInteraction* New_ctor();

  /// @brief Method Process, addr 0x303a548, size 0x3c4, virtual true, abstract: false, final true
  inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);

  /// @brief Method Reset, addr 0x303a90c, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior const& __cordl_internal_get_behavior() const;

  constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior& __cordl_internal_get_behavior();

  constexpr bool const& __cordl_internal_get_m_WaitingForRelease() const;

  constexpr bool& __cordl_internal_get_m_WaitingForRelease();

  constexpr float_t const& __cordl_internal_get_pressPoint() const;

  constexpr float_t& __cordl_internal_get_pressPoint();

  constexpr void __cordl_internal_set_behavior(::UnityEngine::InputSystem::Interactions::PressBehavior value);

  constexpr void __cordl_internal_set_m_WaitingForRelease(bool value);

  constexpr void __cordl_internal_set_pressPoint(float_t value);

  /// @brief Method .ctor, addr 0x303a914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pressPointOrDefault, addr 0x303a468, size 0x58, virtual false, abstract: false, final false
  inline float_t get_pressPointOrDefault();

  /// @brief Method get_releasePointOrDefault, addr 0x303a4c0, size 0x88, virtual false, abstract: false, final false
  inline float_t get_releasePointOrDefault();

  /// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr ::UnityEngine::InputSystem::IInputInteraction* i___UnityEngine__InputSystem__IInputInteraction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PressInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PressInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PressInteraction(PressInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PressInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PressInteraction(PressInteraction const&) = delete;

  /// @brief Field pressPoint, offset: 0x10, size: 0x4, def value: None
  float_t ___pressPoint;

  /// @brief Field behavior, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Interactions::PressBehavior ___behavior;

  /// @brief Field m_WaitingForRelease, offset: 0x18, size: 0x1, def value: None
  bool ___m_WaitingForRelease;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::PressInteraction, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::PressInteraction, ___pressPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::PressInteraction, ___behavior) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::PressInteraction, ___m_WaitingForRelease) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::PressInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::PressInteraction*, "UnityEngine.InputSystem.Interactions", "PressInteraction");
