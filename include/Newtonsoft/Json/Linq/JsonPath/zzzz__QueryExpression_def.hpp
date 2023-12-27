#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QueryExpression)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::QueryExpression);
// Type: Newtonsoft.Json.Linq.JsonPath::QueryExpression
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12021))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12022))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::QueryExpression*
class CORDL_TYPE QueryExpression : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Operator>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__Operator_k__BackingField, put = __set__Operator_k__BackingField))::Newtonsoft::Json::Linq::JsonPath::QueryOperator _Operator_k__BackingField;

  __declspec(property(get = get_Operator, put = set_Operator))::Newtonsoft::Json::Linq::JsonPath::QueryOperator Operator;

  constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator& __get__Operator_k__BackingField();

  constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const& __get__Operator_k__BackingField() const;

  constexpr void __set__Operator_k__BackingField(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);

  /// @brief Method get_Operator addr 0x26b126c size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Linq::JsonPath::QueryOperator get_Operator();

  /// @brief Method set_Operator addr 0x26b1274 size 0x8 virtual false final false
  inline void set_Operator(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);

  /// @brief Method IsMatch addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsMatch(::Newtonsoft::Json::Linq::JToken* t);

  static inline ::Newtonsoft::Json::Linq::JsonPath::QueryExpression* New_ctor();

  /// @brief Method .ctor addr 0x26b127c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QueryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryExpression(QueryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryExpression(QueryExpression const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryExpression();

public:
  /// @brief Field <Operator>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::JsonPath::QueryOperator ____Operator_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::QueryExpression, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::QueryExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryExpression*, "Newtonsoft.Json.Linq.JsonPath", "QueryExpression");
