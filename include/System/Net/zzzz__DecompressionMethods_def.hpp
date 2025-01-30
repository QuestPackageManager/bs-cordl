#pragma once
// IWYU pragma private; include "System/Net/DecompressionMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecompressionMethods)
// Forward declare root types
namespace System::Net {
struct DecompressionMethods;
}
// Write type traits
MARK_VAL_T(::System::Net::DecompressionMethods);
// Dependencies
namespace System::Net {
// Is value type: true
// CS Name: System.Net.DecompressionMethods
struct CORDL_TYPE DecompressionMethods {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DecompressionMethods_Unwrapped
  enum struct __DecompressionMethods_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_GZip = static_cast<int32_t>(0x1),
    __E_Deflate = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DecompressionMethods_Unwrapped() const noexcept {
    return static_cast<__DecompressionMethods_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecompressionMethods();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecompressionMethods(int32_t value__) noexcept;

  /// @brief Field Deflate value: I32(2)
  static ::System::Net::DecompressionMethods const Deflate;

  /// @brief Field GZip value: I32(1)
  static ::System::Net::DecompressionMethods const GZip;

  /// @brief Field None value: I32(0)
  static ::System::Net::DecompressionMethods const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9676 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DecompressionMethods, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::DecompressionMethods, 0x4>, "Size mismatch!");

} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DecompressionMethods, "System.Net", "DecompressionMethods");
