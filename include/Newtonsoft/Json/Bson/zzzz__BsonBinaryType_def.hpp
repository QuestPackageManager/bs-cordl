#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonBinaryType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BsonBinaryType)
// Forward declare root types
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Bson::BsonBinaryType);
// Type: Newtonsoft.Json.Bson::BsonBinaryType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: true
// CS Name: ::Newtonsoft.Json.Bson::BsonBinaryType
struct CORDL_TYPE BsonBinaryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __BsonBinaryType_Unwrapped
  enum struct __BsonBinaryType_Unwrapped : uint8_t {
    __E_Binary = static_cast<uint8_t>(0x0u),
    __E_Function = static_cast<uint8_t>(0x1u),
    __E_BinaryOld = static_cast<uint8_t>(0x2u),
    __E_UuidOld = static_cast<uint8_t>(0x3u),
    __E_Uuid = static_cast<uint8_t>(0x4u),
    __E_Md5 = static_cast<uint8_t>(0x5u),
    __E_UserDefined = static_cast<uint8_t>(0x80u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BsonBinaryType_Unwrapped() const noexcept {
    return static_cast<__BsonBinaryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonBinaryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr BsonBinaryType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Binary value: static_cast<uint8_t>(0x0u)
  static ::Newtonsoft::Json::Bson::BsonBinaryType const Binary;

  /// @brief Field BinaryOld value: static_cast<uint8_t>(0x2u)
  static ::Newtonsoft::Json::Bson::BsonBinaryType const BinaryOld;

  /// @brief Field Function value: static_cast<uint8_t>(0x1u)
  static ::Newtonsoft::Json::Bson::BsonBinaryType const Function;

  /// @brief Field Md5 value: static_cast<uint8_t>(0x5u)
  static ::Newtonsoft::Json::Bson::BsonBinaryType const Md5;

  /// @brief Field UserDefined value: static_cast<uint8_t>(0x80u)
  static ::Newtonsoft::Json::Bson::BsonBinaryType const UserDefined;

  /// @brief Field Uuid value: static_cast<uint8_t>(0x4u)
  static ::Newtonsoft::Json::Bson::BsonBinaryType const Uuid;

  /// @brief Field UuidOld value: static_cast<uint8_t>(0x3u)
  static ::Newtonsoft::Json::Bson::BsonBinaryType const UuidOld;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonBinaryType, 0x1>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonBinaryType, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinaryType, "Newtonsoft.Json.Bson", "BsonBinaryType");
