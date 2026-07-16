#pragma once
// IWYU pragma private; include "UnityEngine/VFX/PlayableTimeSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableTimeSpace)
// Forward declare root types
namespace UnityEngine::VFX {
struct PlayableTimeSpace;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::PlayableTimeSpace);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::PlayableTimeSpace, "UnityEngine.VFX", "PlayableTimeSpace");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.PlayableTimeSpace
struct CORDL_TYPE PlayableTimeSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayableTimeSpace_Unwrapped
  enum struct __PlayableTimeSpace_Unwrapped : int32_t {
    __E_AfterClipStart = static_cast<int32_t>(0x0),
    __E_BeforeClipEnd = static_cast<int32_t>(0x1),
    __E_Percentage = static_cast<int32_t>(0x2),
    __E_Absolute = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayableTimeSpace_Unwrapped() const noexcept {
    return static_cast<__PlayableTimeSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableTimeSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayableTimeSpace(int32_t value__) noexcept;

  /// @brief Field Absolute value: I32(3)
  static ::UnityEngine::VFX::PlayableTimeSpace const Absolute;

  /// @brief Field AfterClipStart value: I32(0)
  static ::UnityEngine::VFX::PlayableTimeSpace const AfterClipStart;

  /// @brief Field BeforeClipEnd value: I32(1)
  static ::UnityEngine::VFX::PlayableTimeSpace const BeforeClipEnd;

  /// @brief Field Percentage value: I32(2)
  static ::UnityEngine::VFX::PlayableTimeSpace const Percentage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::PlayableTimeSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::PlayableTimeSpace) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX
