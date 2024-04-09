#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
CORDL_MODULE_EXPORT(BsonEmpty)
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonEmpty;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonEmpty);
// Type: Newtonsoft.Json.Bson::BsonEmpty
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 29, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Bson::BsonEmpty*
class CORDL_TYPE BsonEmpty : public ::Newtonsoft::Json::Bson::BsonToken {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::Newtonsoft::Json::Bson::BsonToken* Null;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Bson::BsonType Type;

  /// @brief Field Undefined, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Undefined, put = setStaticF_Undefined))::Newtonsoft::Json::Bson::BsonToken* Undefined;

  /// @brief Field <Type>k__BackingField, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::Newtonsoft::Json::Bson::BsonType _Type_k__BackingField;

  static inline ::Newtonsoft::Json::Bson::BsonEmpty* New_ctor(::Newtonsoft::Json::Bson::BsonType type);

  constexpr ::Newtonsoft::Json::Bson::BsonType const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Bson::BsonType& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Type_k__BackingField(::Newtonsoft::Json::Bson::BsonType value);

  /// @brief Method .ctor, addr 0x299c20c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Bson::BsonType type);

  static inline ::Newtonsoft::Json::Bson::BsonToken* getStaticF_Null();

  static inline ::Newtonsoft::Json::Bson::BsonToken* getStaticF_Undefined();

  /// @brief Method get_Type, addr 0x299c234, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  static inline void setStaticF_Null(::Newtonsoft::Json::Bson::BsonToken* value);

  static inline void setStaticF_Undefined(::Newtonsoft::Json::Bson::BsonToken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonEmpty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonEmpty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonEmpty(BsonEmpty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonEmpty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonEmpty(BsonEmpty const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x1c, size: 0x1, def value: None
  ::Newtonsoft::Json::Bson::BsonType ____Type_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonEmpty, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonEmpty, ____Type_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonEmpty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonEmpty*, "Newtonsoft.Json.Bson", "BsonEmpty");
