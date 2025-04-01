#pragma once
// IWYU pragma private; include "BeatSaber/Init/RuntimePlatformType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimePlatformType)
// Forward declare root types
namespace BeatSaber::Init {
struct RuntimePlatformType;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Init::RuntimePlatformType);
// Dependencies
namespace BeatSaber::Init {
// Is value type: true
// CS Name: BeatSaber.Init.RuntimePlatformType
struct CORDL_TYPE RuntimePlatformType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RuntimePlatformType_Unwrapped
  enum struct __RuntimePlatformType_Unwrapped : int32_t {
    __E_PS4 = static_cast<int32_t>(0x0),
    __E_PS5 = static_cast<int32_t>(0x1),
    __E_Quest = static_cast<int32_t>(0x2),
    __E_Rift = static_cast<int32_t>(0x3),
    __E_Steam = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RuntimePlatformType_Unwrapped() const noexcept {
    return static_cast<__RuntimePlatformType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePlatformType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RuntimePlatformType(int32_t value__) noexcept;

  /// @brief Field PS4 value: I32(0)
  static ::BeatSaber::Init::RuntimePlatformType const PS4;

  /// @brief Field PS5 value: I32(1)
  static ::BeatSaber::Init::RuntimePlatformType const PS5;

  /// @brief Field Quest value: I32(2)
  static ::BeatSaber::Init::RuntimePlatformType const Quest;

  /// @brief Field Rift value: I32(3)
  static ::BeatSaber::Init::RuntimePlatformType const Rift;

  /// @brief Field Steam value: I32(4)
  static ::BeatSaber::Init::RuntimePlatformType const Steam;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::RuntimePlatformType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::RuntimePlatformType, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Init
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::RuntimePlatformType, "BeatSaber.Init", "RuntimePlatformType");
