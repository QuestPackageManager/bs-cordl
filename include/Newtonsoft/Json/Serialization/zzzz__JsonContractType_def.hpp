#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonContractType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonContractType)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
struct JsonContractType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Serialization::JsonContractType);
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// CS Name: Newtonsoft.Json.Serialization.JsonContractType
struct CORDL_TYPE JsonContractType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JsonContractType_Unwrapped
  enum struct __JsonContractType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_Array = static_cast<int32_t>(0x2),
    __E_Primitive = static_cast<int32_t>(0x3),
    __E_String = static_cast<int32_t>(0x4),
    __E_Dictionary = static_cast<int32_t>(0x5),
    __E_Dynamic = static_cast<int32_t>(0x6),
    __E_Serializable = static_cast<int32_t>(0x7),
    __E_Linq = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JsonContractType_Unwrapped() const noexcept {
    return static_cast<__JsonContractType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonContractType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonContractType(int32_t value__) noexcept;

  /// @brief Field Array value: I32(2)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Array;

  /// @brief Field Dictionary value: I32(5)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Dictionary;

  /// @brief Field Dynamic value: I32(6)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Dynamic;

  /// @brief Field Linq value: I32(8)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Linq;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::Serialization::JsonContractType const None;

  /// @brief Field Object value: I32(1)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Object;

  /// @brief Field Primitive value: I32(3)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Primitive;

  /// @brief Field Serializable value: I32(7)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Serializable;

  /// @brief Field String value: I32(4)
  static ::Newtonsoft::Json::Serialization::JsonContractType const String;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10308 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContractType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonContractType, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContractType, "Newtonsoft.Json.Serialization", "JsonContractType");
