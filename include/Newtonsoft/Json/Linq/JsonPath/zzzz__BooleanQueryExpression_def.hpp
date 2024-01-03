#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
CORDL_MODULE_EXPORT(BooleanQueryExpression)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class BooleanQueryExpression;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression);
// Type: Newtonsoft.Json.Linq.JsonPath::BooleanQueryExpression
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12022))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12024))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::BooleanQueryExpression*
class CORDL_TYPE BooleanQueryExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression {
public:
  // Declarations
  /// @brief Field <Path>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Path_k__BackingField,
                      put = __set__Path_k__BackingField))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* _Path_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Value_k__BackingField, put = __set__Value_k__BackingField))::Newtonsoft::Json::Linq::JValue* _Value_k__BackingField;

  __declspec(property(get = get_Path, put = set_Path))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* Path;

  __declspec(property(get = get_Value, put = set_Value))::Newtonsoft::Json::Linq::JValue* Value;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*& __get__Path_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*> const& __get__Path_k__BackingField() const;

  constexpr void __set__Path_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value);

  constexpr ::Newtonsoft::Json::Linq::JValue*& __get__Value_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JValue*> const& __get__Value_k__BackingField() const;

  constexpr void __set__Value_k__BackingField(::Newtonsoft::Json::Linq::JValue* value);

  /// @brief Method get_Path, addr 0x26b1510, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* get_Path();

  /// @brief Method set_Path, addr 0x26b1518, size 0x8, virtual false, abstract: false, final false
  inline void set_Path(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value);

  /// @brief Method get_Value, addr 0x26b1520, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JValue* get_Value();

  /// @brief Method set_Value, addr 0x26b1528, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::Newtonsoft::Json::Linq::JValue* value);

  /// @brief Method IsMatch, addr 0x26b1530, size 0x470, virtual true, abstract: false, final false
  inline bool IsMatch(::Newtonsoft::Json::Linq::JToken* t);

  /// @brief Method EqualsWithStringCoercion, addr 0x26b19a0, size 0x4d4, virtual false, abstract: false, final false
  inline bool EqualsWithStringCoercion(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::Linq::JValue* queryValue);

  static inline ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression* New_ctor();

  /// @brief Method .ctor, addr 0x26b0d20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BooleanQueryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BooleanQueryExpression(BooleanQueryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BooleanQueryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BooleanQueryExpression(BooleanQueryExpression const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BooleanQueryExpression();

public:
  /// @brief Field <Path>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* ____Path_k__BackingField;

  /// @brief Field <Value>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JValue* ____Value_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression, ____Path_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression, ____Value_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*, "Newtonsoft.Json.Linq.JsonPath", "BooleanQueryExpression");
