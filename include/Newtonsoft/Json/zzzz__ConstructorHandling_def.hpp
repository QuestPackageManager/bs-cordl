#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConstructorHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::ConstructorHandling);
// Type: Newtonsoft.Json::ConstructorHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11722))
// CS Name: ::Newtonsoft.Json::ConstructorHandling
struct CORDL_TYPE ConstructorHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConstructorHandling_Unwrapped
  enum struct __ConstructorHandling_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_AllowNonPublicDefaultConstructor = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConstructorHandling_Unwrapped() const noexcept {
    return static_cast<__ConstructorHandling_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConstructorHandling(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructorHandling();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::ConstructorHandling const Default;

  /// @brief Field AllowNonPublicDefaultConstructor value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::ConstructorHandling const AllowNonPublicDefaultConstructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::ConstructorHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::ConstructorHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ConstructorHandling, "Newtonsoft.Json", "ConstructorHandling");
