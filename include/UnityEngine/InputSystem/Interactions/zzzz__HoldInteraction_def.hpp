#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HoldInteraction)
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class HoldInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::HoldInteraction);
// Type: UnityEngine.InputSystem.Interactions::HoldInteraction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6732))
// CS Name: ::UnityEngine.InputSystem.Interactions::HoldInteraction*
class CORDL_TYPE HoldInteraction : public ::System::Object {
public:
  // Declarations
  /// @brief Field duration, offset 0x10, size 0x4
  __declspec(property(get = __get_duration, put = __set_duration)) float_t duration;

  /// @brief Field pressPoint, offset 0x14, size 0x4
  __declspec(property(get = __get_pressPoint, put = __set_pressPoint)) float_t pressPoint;

  /// @brief Field m_TimePressed, offset 0x18, size 0x8
  __declspec(property(get = __get_m_TimePressed, put = __set_m_TimePressed)) double_t m_TimePressed;

  __declspec(property(get = get_durationOrDefault)) float_t durationOrDefault;

  __declspec(property(get = get_pressPointOrDefault)) float_t pressPointOrDefault;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
  constexpr operator ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

  constexpr float_t& __get_duration();

  constexpr float_t const& __get_duration() const;

  constexpr void __set_duration(float_t value);

  constexpr float_t& __get_pressPoint();

  constexpr float_t const& __get_pressPoint() const;

  constexpr void __set_pressPoint(float_t value);

  constexpr double_t& __get_m_TimePressed();

  constexpr double_t const& __get_m_TimePressed() const;

  constexpr void __set_m_TimePressed(double_t value);

  /// @brief Method get_durationOrDefault addr 0x298b714 size 0x70 virtual false final false
  inline float_t get_durationOrDefault();

  /// @brief Method get_pressPointOrDefault addr 0x298b784 size 0x58 virtual false final false
  inline float_t get_pressPointOrDefault();

  /// @brief Method Process addr 0x298b7dc size 0x1a4 virtual true final true
  inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);

  /// @brief Method Reset addr 0x298b980 size 0x8 virtual true final true
  inline void Reset();

  static inline ::UnityEngine::InputSystem::Interactions::HoldInteraction* New_ctor();

  /// @brief Method .ctor addr 0x298b988 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HoldInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoldInteraction(HoldInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoldInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoldInteraction(HoldInteraction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoldInteraction();

public:
  /// @brief Field duration, offset: 0x10, size: 0x4, def value: None
  float_t ___duration;

  /// @brief Field pressPoint, offset: 0x14, size: 0x4, def value: None
  float_t ___pressPoint;

  /// @brief Field m_TimePressed, offset: 0x18, size: 0x8, def value: None
  double_t ___m_TimePressed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::HoldInteraction, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::HoldInteraction, ___duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::HoldInteraction, ___pressPoint) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::HoldInteraction, ___m_TimePressed) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Interactions
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::HoldInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::HoldInteraction*, "UnityEngine.InputSystem.Interactions", "HoldInteraction");
