#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AchievementType)
// Forward declare root types
namespace Oculus::Platform {
struct AchievementType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AchievementType);
// Type: Oculus.Platform::AchievementType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::AchievementType
struct CORDL_TYPE AchievementType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AchievementType_Unwrapped
  enum struct __AchievementType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Simple = static_cast<int32_t>(0x1),
    __E_Bitfield = static_cast<int32_t>(0x2),
    __E_Count = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AchievementType_Unwrapped() const noexcept {
    return static_cast<__AchievementType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AchievementType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bitfield value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::AchievementType const Bitfield;

  /// @brief Field Count value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::AchievementType const Count;

  /// @brief Field Simple value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::AchievementType const Simple;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::AchievementType const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AchievementType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::AchievementType, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AchievementType, "Oculus.Platform", "AchievementType");
