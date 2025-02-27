#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonObjectId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonObjectId)
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonObjectId;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonObjectId);
// Dependencies System.Object
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonObjectId
class CORDL_TYPE BsonObjectId : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Value;

  /// @brief Field <Value>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Value_k__BackingField, put = __cordl_internal_set__Value_k__BackingField)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _Value_k__BackingField;

  static inline ::Newtonsoft::Json::Bson::BsonObjectId* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__Value_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__Value_k__BackingField();

  constexpr void __cordl_internal_set__Value_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3f5e764, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_Value, addr 0x3f5e75c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonObjectId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonObjectId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonObjectId(BsonObjectId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonObjectId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonObjectId(BsonObjectId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10507 };

  /// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonObjectId, ____Value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonObjectId, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonObjectId);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonObjectId*, "Newtonsoft.Json.Bson", "BsonObjectId");
