#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Interactions/zzzz__MultiTapInteraction_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiTapInteraction)
namespace UnityEngine::InputSystem::Interactions {
struct __MultiTapInteraction__TapPhase;
}
namespace UnityEngine::InputSystem {
template <typename TValue> class IInputInteraction_1;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
struct __MultiTapInteraction__TapPhase;
}
namespace UnityEngine::InputSystem::Interactions {
class MultiTapInteraction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::MultiTapInteraction);
// Type: ::TapPhase
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6647))
// CS Name: ::MultiTapInteraction::TapPhase
struct CORDL_TYPE __MultiTapInteraction__TapPhase {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiTapInteraction__TapPhase_Unwrapped
  enum struct ____MultiTapInteraction__TapPhase_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_WaitingForNextRelease = static_cast<int32_t>(0x1),
    __E_WaitingForNextPress = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiTapInteraction__TapPhase_Unwrapped() const noexcept {
    return static_cast<____MultiTapInteraction__TapPhase_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiTapInteraction__TapPhase(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiTapInteraction__TapPhase();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const None;

  /// @brief Field WaitingForNextRelease value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const WaitingForNextRelease;

  /// @brief Field WaitingForNextPress value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const WaitingForNextPress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
// Type: UnityEngine.InputSystem.Interactions::MultiTapInteraction
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6647))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6648))
// CS Name: ::UnityEngine.InputSystem.Interactions::MultiTapInteraction*
class CORDL_TYPE MultiTapInteraction : public ::System::Object {
public:
  // Declarations
  using TapPhase = ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase;

  /// @brief Field tapTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tapTime, put = __cordl_internal_set_tapTime)) float_t tapTime;

  /// @brief Field tapDelay, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_tapDelay, put = __cordl_internal_set_tapDelay)) float_t tapDelay;

  /// @brief Field tapCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_tapCount, put = __cordl_internal_set_tapCount)) int32_t tapCount;

  /// @brief Field pressPoint, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pressPoint, put = __cordl_internal_set_pressPoint)) float_t pressPoint;

  /// @brief Field m_CurrentTapPhase, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentTapPhase,
                      put = __cordl_internal_set_m_CurrentTapPhase))::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase m_CurrentTapPhase;

  /// @brief Field m_CurrentTapCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentTapCount, put = __cordl_internal_set_m_CurrentTapCount)) int32_t m_CurrentTapCount;

  /// @brief Field m_CurrentTapStartTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentTapStartTime, put = __cordl_internal_set_m_CurrentTapStartTime)) double_t m_CurrentTapStartTime;

  /// @brief Field m_LastTapReleaseTime, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastTapReleaseTime, put = __cordl_internal_set_m_LastTapReleaseTime)) double_t m_LastTapReleaseTime;

  __declspec(property(get = get_tapTimeOrDefault)) float_t tapTimeOrDefault;

  __declspec(property(get = get_tapDelayOrDefault)) float_t tapDelayOrDefault;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  __declspec(property(get = get_releasePointOrDefault)) float_t releasePointOrDefault;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction_1<float_t>"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction_1<float_t>*() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction_1<float_t>"
  constexpr ::UnityEngine::InputSystem::IInputInteraction_1<float_t>* i___UnityEngine__InputSystem__IInputInteraction_1_float_t_() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr ::UnityEngine::InputSystem::IInputInteraction* i___UnityEngine__InputSystem__IInputInteraction() noexcept;

  constexpr float_t& __cordl_internal_get_tapTime();

  constexpr float_t const& __cordl_internal_get_tapTime() const;

  constexpr void __cordl_internal_set_tapTime(float_t value);

  constexpr float_t& __cordl_internal_get_tapDelay();

  constexpr float_t const& __cordl_internal_get_tapDelay() const;

  constexpr void __cordl_internal_set_tapDelay(float_t value);

  constexpr int32_t& __cordl_internal_get_tapCount();

  constexpr int32_t const& __cordl_internal_get_tapCount() const;

  constexpr void __cordl_internal_set_tapCount(int32_t value);

  constexpr float_t& __cordl_internal_get_pressPoint();

  constexpr float_t const& __cordl_internal_get_pressPoint() const;

  constexpr void __cordl_internal_set_pressPoint(float_t value);

  constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase& __cordl_internal_get_m_CurrentTapPhase();

  constexpr ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase const& __cordl_internal_get_m_CurrentTapPhase() const;

  constexpr void __cordl_internal_set_m_CurrentTapPhase(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase value);

  constexpr int32_t& __cordl_internal_get_m_CurrentTapCount();

  constexpr int32_t const& __cordl_internal_get_m_CurrentTapCount() const;

  constexpr void __cordl_internal_set_m_CurrentTapCount(int32_t value);

  constexpr double_t& __cordl_internal_get_m_CurrentTapStartTime();

  constexpr double_t const& __cordl_internal_get_m_CurrentTapStartTime() const;

  constexpr void __cordl_internal_set_m_CurrentTapStartTime(double_t value);

  constexpr double_t& __cordl_internal_get_m_LastTapReleaseTime();

  constexpr double_t const& __cordl_internal_get_m_LastTapReleaseTime() const;

  constexpr void __cordl_internal_set_m_LastTapReleaseTime(double_t value);

  /// @brief Method get_tapTimeOrDefault, addr 0x2b0c6e4, size 0x70, virtual false, abstract: false, final false
  inline float_t get_tapTimeOrDefault();

  /// @brief Method get_tapDelayOrDefault, addr 0x2b0c754, size 0x70, virtual false, abstract: false, final false
  inline float_t get_tapDelayOrDefault();

  /// @brief Method get_pressPointOrDefault, addr 0x2b0c7c4, size 0x58, virtual false, abstract: false, final false
  inline float_t get_pressPointOrDefault();

  /// @brief Method get_releasePointOrDefault, addr 0x2b0c81c, size 0x88, virtual false, abstract: false, final false
  inline float_t get_releasePointOrDefault();

  /// @brief Method Process, addr 0x2b0c8a4, size 0x280, virtual true, abstract: false, final true
  inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);

  /// @brief Method Reset, addr 0x2b0cb24, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  static inline ::UnityEngine::InputSystem::Interactions::MultiTapInteraction* New_ctor();

  /// @brief Method .ctor, addr 0x2b0cb30, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiTapInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiTapInteraction(MultiTapInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiTapInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiTapInteraction(MultiTapInteraction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiTapInteraction();

public:
  /// @brief Field tapTime, offset: 0x10, size: 0x4, def value: None
  float_t ___tapTime;

  /// @brief Field tapDelay, offset: 0x14, size: 0x4, def value: None
  float_t ___tapDelay;

  /// @brief Field tapCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___tapCount;

  /// @brief Field pressPoint, offset: 0x1c, size: 0x4, def value: None
  float_t ___pressPoint;

  /// @brief Field m_CurrentTapPhase, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase ___m_CurrentTapPhase;

  /// @brief Field m_CurrentTapCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_CurrentTapCount;

  /// @brief Field m_CurrentTapStartTime, offset: 0x28, size: 0x8, def value: None
  double_t ___m_CurrentTapStartTime;

  /// @brief Field m_LastTapReleaseTime, offset: 0x30, size: 0x8, def value: None
  double_t ___m_LastTapReleaseTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::MultiTapInteraction, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___tapTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___tapDelay) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___tapCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___pressPoint) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___m_CurrentTapPhase) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___m_CurrentTapCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___m_CurrentTapStartTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, ___m_LastTapReleaseTime) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::__MultiTapInteraction__TapPhase, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction/TapPhase");
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::MultiTapInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::MultiTapInteraction*, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction");
