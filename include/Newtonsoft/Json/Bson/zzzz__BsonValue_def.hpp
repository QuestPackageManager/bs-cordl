#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
CORDL_MODULE_EXPORT(BsonValue)
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace System {
class Object;
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
// CS Name: ::Newtonsoft.Json.Bson::BsonValue*
class CORDL_TYPE BsonValue : public ::Newtonsoft::Json::Bson::BsonToken {
public:
  // Declarations
  __declspec(property(get = get_Type))::Newtonsoft::Json::Bson::BsonType Type;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Field _type, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::Newtonsoft::Json::Bson::BsonType _type;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::System::Object* _value;

  static inline ::Newtonsoft::Json::Bson::BsonValue* New_ctor(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type);

  constexpr ::Newtonsoft::Json::Bson::BsonType const& __cordl_internal_get__type() const;

  constexpr ::Newtonsoft::Json::Bson::BsonType& __cordl_internal_get__type();

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__type(::Newtonsoft::Json::Bson::BsonType value);

  constexpr void __cordl_internal_set__value(::System::Object* value);

  /// @brief Method .ctor, addr 0x2a9bb80, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type);

  /// @brief Method get_Type, addr 0x2a9bbb8, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  /// @brief Method get_Value, addr 0x2a9bbb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonValue(BsonValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonValue(BsonValue const&) = delete;

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
