#pragma once
// IWYU pragma private; include "Oculus/Platform/SdkAccountType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SdkAccountType)
// Forward declare root types
namespace Oculus::Platform {
struct SdkAccountType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::SdkAccountType);
// Type: Oculus.Platform::SdkAccountType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::SdkAccountType
struct CORDL_TYPE SdkAccountType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SdkAccountType_Unwrapped
  enum struct __SdkAccountType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Oculus = static_cast<int32_t>(0x1),
    __E_FacebookGameroom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SdkAccountType_Unwrapped() const noexcept {
    return static_cast<__SdkAccountType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SdkAccountType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SdkAccountType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FacebookGameroom value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::SdkAccountType const FacebookGameroom;

  /// @brief Field Oculus value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::SdkAccountType const Oculus;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::SdkAccountType const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::SdkAccountType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::SdkAccountType, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::SdkAccountType, "Oculus.Platform", "SdkAccountType");
