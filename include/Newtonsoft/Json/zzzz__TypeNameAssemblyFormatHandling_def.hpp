#pragma once
// IWYU pragma private; include "Newtonsoft/Json/TypeNameAssemblyFormatHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNameAssemblyFormatHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct TypeNameAssemblyFormatHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::TypeNameAssemblyFormatHandling);
// Type: Newtonsoft.Json::TypeNameAssemblyFormatHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::TypeNameAssemblyFormatHandling
struct CORDL_TYPE TypeNameAssemblyFormatHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeNameAssemblyFormatHandling_Unwrapped
  enum struct __TypeNameAssemblyFormatHandling_Unwrapped : int32_t {
    __E_Simple = static_cast<int32_t>(0x0),
    __E_Full = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeNameAssemblyFormatHandling_Unwrapped() const noexcept {
    return static_cast<__TypeNameAssemblyFormatHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeNameAssemblyFormatHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeNameAssemblyFormatHandling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Full value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::TypeNameAssemblyFormatHandling const Full;

  /// @brief Field Simple value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::TypeNameAssemblyFormatHandling const Simple;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::TypeNameAssemblyFormatHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::TypeNameAssemblyFormatHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::TypeNameAssemblyFormatHandling, "Newtonsoft.Json", "TypeNameAssemblyFormatHandling");
