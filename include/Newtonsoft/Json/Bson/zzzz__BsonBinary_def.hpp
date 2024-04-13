#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonBinary)
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonBinary;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonBinary);
// Type: Newtonsoft.Json.Bson::BsonBinary
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Bson::BsonBinary*
class CORDL_TYPE BsonBinary : public ::Newtonsoft::Json::Bson::BsonValue {
public:
  // Declarations
  __declspec(property(get = get_BinaryType, put = set_BinaryType))::Newtonsoft::Json::Bson::BsonBinaryType BinaryType;

  /// @brief Field <BinaryType>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__BinaryType_k__BackingField,
                      put = __cordl_internal_set__BinaryType_k__BackingField))::Newtonsoft::Json::Bson::BsonBinaryType _BinaryType_k__BackingField;

  static inline ::Newtonsoft::Json::Bson::BsonBinary* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType);

  constexpr ::Newtonsoft::Json::Bson::BsonBinaryType const& __cordl_internal_get__BinaryType_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Bson::BsonBinaryType& __cordl_internal_get__BinaryType_k__BackingField();

  constexpr void __cordl_internal_set__BinaryType_k__BackingField(::Newtonsoft::Json::Bson::BsonBinaryType value);

  /// @brief Method .ctor, addr 0x299e438, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value, ::Newtonsoft::Json::Bson::BsonBinaryType binaryType);

  /// @brief Method get_BinaryType, addr 0x299e428, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonBinaryType get_BinaryType();

  /// @brief Method set_BinaryType, addr 0x299e430, size 0x8, virtual false, abstract: false, final false
  inline void set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonBinary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonBinary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonBinary(BsonBinary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonBinary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonBinary(BsonBinary const&) = delete;

  /// @brief Field <BinaryType>k__BackingField, offset: 0x29, size: 0x1, def value: None
  ::Newtonsoft::Json::Bson::BsonBinaryType ____BinaryType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonBinary, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonBinary, ____BinaryType_k__BackingField) == 0x29, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonBinary);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinary*, "Newtonsoft.Json.Bson", "BsonBinary");
