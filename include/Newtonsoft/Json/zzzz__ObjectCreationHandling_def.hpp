#pragma once
// IWYU pragma private; include "Newtonsoft/Json/ObjectCreationHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectCreationHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::ObjectCreationHandling);
// Type: Newtonsoft.Json::ObjectCreationHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::ObjectCreationHandling
struct CORDL_TYPE ObjectCreationHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ObjectCreationHandling_Unwrapped
  enum struct __ObjectCreationHandling_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Reuse = static_cast<int32_t>(0x1),
    __E_Replace = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ObjectCreationHandling_Unwrapped() const noexcept {
    return static_cast<__ObjectCreationHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectCreationHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ObjectCreationHandling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::ObjectCreationHandling const Auto;

  /// @brief Field Replace value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::ObjectCreationHandling const Replace;

  /// @brief Field Reuse value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::ObjectCreationHandling const Reuse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10142 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::ObjectCreationHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::ObjectCreationHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ObjectCreationHandling, "Newtonsoft.Json", "ObjectCreationHandling");
