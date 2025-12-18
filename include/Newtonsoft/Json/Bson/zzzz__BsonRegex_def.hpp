#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonRegex.hpp"
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
// Dependencies Newtonsoft.Json.Bson.BsonToken
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: Newtonsoft.Json.Bson.BsonRegex
class CORDL_TYPE BsonRegex : public ::Newtonsoft::Json::Bson::BsonToken {
public:
  // Declarations
  __declspec(property(get = get_Options, put = set_Options)) ::Newtonsoft::Json::Bson::BsonString* Options;

  __declspec(property(get = get_Pattern, put = set_Pattern)) ::Newtonsoft::Json::Bson::BsonString* Pattern;

  __declspec(property(get = get_Type)) ::Newtonsoft::Json::Bson::BsonType Type;

  /// @brief Field <Options>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField, put = __cordl_internal_set__Options_k__BackingField)) ::Newtonsoft::Json::Bson::BsonString* _Options_k__BackingField;

  /// @brief Field <Pattern>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Pattern_k__BackingField, put = __cordl_internal_set__Pattern_k__BackingField)) ::Newtonsoft::Json::Bson::BsonString* _Pattern_k__BackingField;

  static inline ::Newtonsoft::Json::Bson::BsonRegex* New_ctor(::StringW pattern, ::StringW options);

  constexpr ::Newtonsoft::Json::Bson::BsonString* const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Bson::BsonString*& __cordl_internal_get__Options_k__BackingField();

  constexpr ::Newtonsoft::Json::Bson::BsonString* const& __cordl_internal_get__Pattern_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Bson::BsonString*& __cordl_internal_get__Pattern_k__BackingField();

  constexpr void __cordl_internal_set__Options_k__BackingField(::Newtonsoft::Json::Bson::BsonString* value);

  constexpr void __cordl_internal_set__Pattern_k__BackingField(::Newtonsoft::Json::Bson::BsonString* value);

  /// @brief Method .ctor, addr 0x5c00408, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW pattern, ::StringW options);

  /// @brief Method get_Options, addr 0x5c003f8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonString* get_Options();

  /// @brief Method get_Pattern, addr 0x5c003e8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonString* get_Pattern();

  /// @brief Method get_Type, addr 0x5c00494, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Bson::BsonType get_Type();

  /// @brief Method set_Options, addr 0x5c00400, size 0x8, virtual false, abstract: false, final false
  inline void set_Options(::Newtonsoft::Json::Bson::BsonString* value);

  /// @brief Method set_Pattern, addr 0x5c003f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Pattern(::Newtonsoft::Json::Bson::BsonString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonRegex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonRegex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonRegex(BsonRegex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonRegex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonRegex(BsonRegex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13677 };

  /// @brief Field <Pattern>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonString* ____Pattern_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonString* ____Options_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonRegex, ____Pattern_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonRegex, ____Options_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonRegex, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonRegex);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonRegex*, "Newtonsoft.Json.Bson", "BsonRegex");
