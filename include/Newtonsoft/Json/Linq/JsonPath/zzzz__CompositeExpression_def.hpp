#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/CompositeExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
CORDL_MODULE_EXPORT(CompositeExpression)
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class CompositeExpression;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression);
// Dependencies Newtonsoft.Json.Linq.JsonPath.QueryExpression
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.CompositeExpression
class CORDL_TYPE CompositeExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression {
public:
  // Declarations
  __declspec(property(get = get_Expressions, put = set_Expressions)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* Expressions;

  /// @brief Field <Expressions>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Expressions_k__BackingField,
      put = __cordl_internal_set__Expressions_k__BackingField)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* _Expressions_k__BackingField;

  /// @brief Method IsMatch, addr 0x3f36e7c, size 0x2c0, virtual true, abstract: false, final false
  inline bool IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression* New_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* const& __cordl_internal_get__Expressions_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*& __cordl_internal_get__Expressions_k__BackingField();

  constexpr void __cordl_internal_set__Expressions_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value);

  /// @brief Method .ctor, addr 0x3f36610, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator);

  /// @brief Method get_Expressions, addr 0x3f36e6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* get_Expressions();

  /// @brief Method set_Expressions, addr 0x3f36e74, size 0x8, virtual false, abstract: false, final false
  inline void set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeExpression(CompositeExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeExpression(CompositeExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10453 };

  /// @brief Field <Expressions>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* ____Expressions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression, ____Expressions_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*, "Newtonsoft.Json.Linq.JsonPath", "CompositeExpression");
