#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
CORDL_MODULE_EXPORT(BsonValue)
namespace System {
class Object;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonValue;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonValue);
// Type: Newtonsoft.Json.Bson::BsonValue
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12010)), TypeDefinitionIndex(TypeDefinitionIndex(12002))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12005))
// CS Name: ::Newtonsoft.Json.Bson::BsonValue*
class CORDL_TYPE BsonValue : public ::Newtonsoft::Json::Bson::BsonToken {
public:
  // Declarations
  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::System::Object* _value;

  /// @brief Field _type, offset 0x28, size 0x1
  __declspec(property(get = __get__type, put = __set__type))::Newtonsoft::Json::Bson::BsonType _type;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Bson::BsonType Type;

  constexpr ::System::Object*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__value() const;

  constexpr void __set__value(::System::Object* value);

  constexpr ::Newtonsoft::Json::Bson::BsonType& __get__type();

  constexpr ::Newtonsoft::Json::Bson::BsonType const& __get__type() const;

  constexpr void __set__type(::Newtonsoft::Json::Bson::BsonType value);

  static inline ::Newtonsoft::Json::Bson::BsonValue* New_ctor(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type);

  /// @brief Method .ctor addr 0x2564c78 size 0x30 virtual false final false
  inline void _ctor(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type);

  /// @brief Method get_Value addr 0x2564ca8 size 0x8 virtual false final false
  inline ::System::Object* get_Value();

  /// @brief Method get_Type addr 0x2564cb0 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  // Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonValue(BsonValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonValue(BsonValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonValue();

public:
  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief Field _type, offset: 0x28, size: 0x1, def value: None
  ::Newtonsoft::Json::Bson::BsonType ____type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonValue, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonValue, ____value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonValue, ____type) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonValue);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonValue*, "Newtonsoft.Json.Bson", "BsonValue");
