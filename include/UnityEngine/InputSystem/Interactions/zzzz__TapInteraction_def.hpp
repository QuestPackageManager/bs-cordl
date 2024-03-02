#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TapInteraction)
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class TapInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::TapInteraction);
// Type: UnityEngine.InputSystem.Interactions::TapInteraction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Interactions::TapInteraction*
class CORDL_TYPE TapInteraction : public ::System::Object {
public:
  // Declarations
  /// @brief Field duration, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  __declspec(property(get = get_durationOrDefault)) float_t durationOrDefault;

  /// @brief Field m_TapStartTime, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TapStartTime, put = __cordl_internal_set_m_TapStartTime)) double_t m_TapStartTime;

  /// @brief Field pressPoint, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_pressPoint, put = __cordl_internal_set_pressPoint)) float_t pressPoint;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  __declspec(property(get = get_releasePointOrDefault)) float_t releasePointOrDefault;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

  static inline ::UnityEngine::InputSystem::Interactions::TapInteraction* New_ctor();

  /// @brief Method Process, addr 0x2bf2fc4, size 0x160, virtual true, abstract: false, final true
  inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);

  /// @brief Method Reset, addr 0x2bf3124, size 0x8, virtual true, abstract: false, final true
  inline void Reset();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr double_t const& __cordl_internal_get_m_TapStartTime() const;

  constexpr double_t& __cordl_internal_get_m_TapStartTime();

  constexpr float_t const& __cordl_internal_get_pressPoint() const;

  constexpr float_t& __cordl_internal_get_pressPoint();

  constexpr void __cordl_internal_set_duration(float_t value);

  constexpr void __cordl_internal_set_m_TapStartTime(double_t value);

  constexpr void __cordl_internal_set_pressPoint(float_t value);

  /// @brief Method .ctor, addr 0x2bf312c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_durationOrDefault, addr 0x2bf2e74, size 0x70, virtual false, abstract: false, final false
  inline float_t get_durationOrDefault();

  /// @brief Method get_pressPointOrDefault, addr 0x2bf2ee4, size 0x58, virtual false, abstract: false, final false
  inline float_t get_pressPointOrDefault();

  /// @brief Method get_releasePointOrDefault, addr 0x2bf2f3c, size 0x88, virtual false, abstract: false, final false
  inline float_t get_releasePointOrDefault();

  /// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr ::UnityEngine::InputSystem::IInputInteraction* i___UnityEngine__InputSystem__IInputInteraction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TapInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TapInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TapInteraction(TapInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TapInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TapInteraction(TapInteraction const&) = delete;

  /// @brief Field duration, offset: 0x10, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field pressPoint, offset: 0x14, size: 0x4, def value: None
  float_t ___pressPoint;

  /// @brief Field m_TapStartTime, offset: 0x18, size: 0x8, def value: None
  double_t ___m_TapStartTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::TapInteraction, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::TapInteraction, ___duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::TapInteraction, ___pressPoint) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::TapInteraction, ___m_TapStartTime) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::TapInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::TapInteraction*, "UnityEngine.InputSystem.Interactions", "TapInteraction");
