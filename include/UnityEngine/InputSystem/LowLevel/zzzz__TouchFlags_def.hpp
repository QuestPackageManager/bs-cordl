#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchFlags)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchFlags);
// Type: UnityEngine.InputSystem.LowLevel::TouchFlags
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6599))
// CS Name: ::UnityEngine.InputSystem.LowLevel::TouchFlags
struct CORDL_TYPE TouchFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TouchFlags_Unwrapped
  enum struct __TouchFlags_Unwrapped : uint8_t {
    __E_IndirectTouch = static_cast<uint8_t>(0x1u),
    __E_PrimaryTouch = static_cast<uint8_t>(0x8u),
    __E_TapPress = static_cast<uint8_t>(0x10u),
    __E_TapRelease = static_cast<uint8_t>(0x20u),
    __E_OrphanedPrimaryTouch = static_cast<uint8_t>(0x40u),
    __E_BeganInSameFrame = static_cast<uint8_t>(0x80u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TouchFlags_Unwrapped() const noexcept {
    return static_cast<__TouchFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TouchFlags(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchFlags();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field IndirectTouch value: static_cast<uint8_t>(0x1u)
  static ::UnityEngine::InputSystem::LowLevel::TouchFlags const IndirectTouch;

  /// @brief Field PrimaryTouch value: static_cast<uint8_t>(0x8u)
  static ::UnityEngine::InputSystem::LowLevel::TouchFlags const PrimaryTouch;

  /// @brief Field TapPress value: static_cast<uint8_t>(0x10u)
  static ::UnityEngine::InputSystem::LowLevel::TouchFlags const TapPress;

  /// @brief Field TapRelease value: static_cast<uint8_t>(0x20u)
  static ::UnityEngine::InputSystem::LowLevel::TouchFlags const TapRelease;

  /// @brief Field OrphanedPrimaryTouch value: static_cast<uint8_t>(0x40u)
  static ::UnityEngine::InputSystem::LowLevel::TouchFlags const OrphanedPrimaryTouch;

  /// @brief Field BeganInSameFrame value: static_cast<uint8_t>(0x80u)
  static ::UnityEngine::InputSystem::LowLevel::TouchFlags const BeganInSameFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchFlags, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::TouchFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchFlags, "UnityEngine.InputSystem.LowLevel", "TouchFlags");
