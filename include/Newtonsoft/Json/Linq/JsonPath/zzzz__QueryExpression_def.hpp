#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/QueryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(QueryExpression)
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::QueryExpression);
// Dependencies Newtonsoft.Json.Linq.JsonPath.QueryOperator, System.Object
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.QueryExpression
class CORDL_TYPE QueryExpression : public ::System::Object {
public:
  // Declarations
  /// @brief Field Operator, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Operator, put = __cordl_internal_set_Operator)) ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Operator;

  /// @brief Method IsMatch, addr 0x3f38bb4, size 0x10, virtual false, abstract: false, final false
  inline bool IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t);

  /// @brief Method IsMatch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JsonPath::QueryExpression* New_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator);

  constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator const& __cordl_internal_get_Operator() const;

  constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator& __cordl_internal_get_Operator();

  constexpr void __cordl_internal_set_Operator(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value);

  /// @brief Method .ctor, addr 0x3f38b8c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QueryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QueryExpression(QueryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QueryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QueryExpression(QueryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10450 };

  /// @brief Field Operator, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::JsonPath::QueryOperator ___Operator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::QueryExpression, ___Operator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::QueryExpression, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::QueryExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryExpression*, "Newtonsoft.Json.Linq.JsonPath", "QueryExpression");
