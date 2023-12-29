#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BsonRegex)
namespace Newtonsoft::Json::Bson {
class BsonString;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonRegex;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonRegex);
// Type: Newtonsoft.Json.Bson::BsonRegex
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12002))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12008))
// CS Name: ::Newtonsoft.Json.Bson::BsonRegex*
class CORDL_TYPE BsonRegex : public ::Newtonsoft::Json::Bson::BsonToken {
public:
  // Declarations
  /// @brief Field <Pattern>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Pattern_k__BackingField, put = __set__Pattern_k__BackingField))::Newtonsoft::Json::Bson::BsonString* _Pattern_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__Options_k__BackingField, put = __set__Options_k__BackingField))::Newtonsoft::Json::Bson::BsonString* _Options_k__BackingField;

  __declspec(property(get = get_Pattern, put = set_Pattern))::Newtonsoft::Json::Bson::BsonString* Pattern;

  __declspec(property(get = get_Options, put = set_Options))::Newtonsoft::Json::Bson::BsonString* Options;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Bson::BsonType Type;

  constexpr ::Newtonsoft::Json::Bson::BsonString*& __get__Pattern_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonString*> const& __get__Pattern_k__BackingField() const;

  constexpr void __set__Pattern_k__BackingField(::Newtonsoft::Json::Bson::BsonString* value);

  constexpr ::Newtonsoft::Json::Bson::BsonString*& __get__Options_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonString*> const& __get__Options_k__BackingField() const;

  constexpr void __set__Options_k__BackingField(::Newtonsoft::Json::Bson::BsonString* value);

  /// @brief Method get_Pattern addr 0x2564d24 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Bson::BsonString* get_Pattern();

  /// @brief Method set_Pattern addr 0x2564d2c size 0x8 virtual false final false
  inline void set_Pattern(::Newtonsoft::Json::Bson::BsonString* value);

  /// @brief Method get_Options addr 0x2564d34 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Bson::BsonString* get_Options();

  /// @brief Method set_Options addr 0x2564d3c size 0x8 virtual false final false
  inline void set_Options(::Newtonsoft::Json::Bson::BsonString* value);

  static inline ::Newtonsoft::Json::Bson::BsonRegex* New_ctor(::StringW pattern, ::StringW options);

  /// @brief Method .ctor addr 0x2564d44 size 0xbc virtual false final false
  inline void _ctor(::StringW pattern, ::StringW options);

  /// @brief Method get_Type addr 0x2564e00 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  // Ctor Parameters [CppParam { name: "", ty: "BsonRegex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonRegex(BsonRegex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonRegex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonRegex(BsonRegex const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonRegex();

public:
  /// @brief Field <Pattern>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonString* ____Pattern_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonString* ____Options_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonRegex, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonRegex, ____Pattern_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonRegex, ____Options_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonRegex);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonRegex*, "Newtonsoft.Json.Bson", "BsonRegex");
