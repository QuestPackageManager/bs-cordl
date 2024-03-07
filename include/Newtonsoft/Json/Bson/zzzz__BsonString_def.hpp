#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonString)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonString;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonString);
// Type: Newtonsoft.Json.Bson::BsonString
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Bson::BsonString*
class CORDL_TYPE BsonString : public ::Newtonsoft::Json::Bson::BsonValue {
public:
  // Declarations
  __declspec(property(get = get_ByteCount, put = set_ByteCount)) int32_t ByteCount;

  __declspec(property(get = get_IncludeLength, put = set_IncludeLength)) bool IncludeLength;

  /// @brief Field <ByteCount>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__ByteCount_k__BackingField, put = __cordl_internal_set__ByteCount_k__BackingField)) int32_t _ByteCount_k__BackingField;

  /// @brief Field <IncludeLength>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__IncludeLength_k__BackingField, put = __cordl_internal_set__IncludeLength_k__BackingField)) bool _IncludeLength_k__BackingField;

  static inline ::Newtonsoft::Json::Bson::BsonString* New_ctor(::System::Object* value, bool includeLength);

  constexpr int32_t const& __cordl_internal_get__ByteCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ByteCount_k__BackingField();

  constexpr bool const& __cordl_internal_get__IncludeLength_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IncludeLength_k__BackingField();

  constexpr void __cordl_internal_set__ByteCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__IncludeLength_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2819d90, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, bool includeLength);

  /// @brief Method get_ByteCount, addr 0x2819fcc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ByteCount();

  /// @brief Method get_IncludeLength, addr 0x2819fdc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IncludeLength();

  /// @brief Method set_ByteCount, addr 0x2819fd4, size 0x8, virtual false, abstract: false, final false
  inline void set_ByteCount(int32_t value);

  /// @brief Method set_IncludeLength, addr 0x2819fe4, size 0xc, virtual false, abstract: false, final false
  inline void set_IncludeLength(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonString(BsonString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonString(BsonString const&) = delete;

  /// @brief Field <ByteCount>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____ByteCount_k__BackingField;

  /// @brief Field <IncludeLength>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____IncludeLength_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonString, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonString, ____ByteCount_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonString, ____IncludeLength_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonString);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonString*, "Newtonsoft.Json.Bson", "BsonString");
