#pragma once
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
// Type: Newtonsoft.Json.Serialization::JsonContractType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11936))
// CS Name: ::Newtonsoft.Json.Serialization::JsonContractType
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonContractType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonContractType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Serialization::JsonContractType const None;

  /// @brief Field Object value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Object;

  /// @brief Field Array value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Array;

  /// @brief Field Primitive value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Primitive;

  /// @brief Field String value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::Serialization::JsonContractType const String;

  /// @brief Field Dictionary value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Dictionary;

  /// @brief Field Dynamic value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Dynamic;

  /// @brief Field Serializable value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Serializable;

  /// @brief Field Linq value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::Serialization::JsonContractType const Linq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonContractType, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContractType, "Newtonsoft.Json.Serialization", "JsonContractType");
