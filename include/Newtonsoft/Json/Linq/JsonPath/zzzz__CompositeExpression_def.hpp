#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
CORDL_MODULE_EXPORT(CompositeExpression)
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
namespace Newtonsoft::Json::Linq {
class JToken;
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
// Type: Newtonsoft.Json.Linq.JsonPath::CompositeExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12022))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12023))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::CompositeExpression*
class CORDL_TYPE CompositeExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression {
public:
  // Declarations
  /// @brief Field <Expressions>k__BackingField, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__Expressions_k__BackingField,
               put = __cordl_internal_set__Expressions_k__BackingField))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* _Expressions_k__BackingField;

  __declspec(property(get = get_Expressions, put = set_Expressions))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* Expressions;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*& __cordl_internal_get__Expressions_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>*> const&
  __cordl_internal_get__Expressions_k__BackingField() const;

  constexpr void __cordl_internal_set__Expressions_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value);

  /// @brief Method get_Expressions, addr 0x26b1284, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* get_Expressions();

  /// @brief Method set_Expressions, addr 0x26b128c, size 0x8, virtual false, abstract: false, final false
  inline void set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* value);

  static inline ::Newtonsoft::Json::Linq::JsonPath::CompositeExpression* New_ctor();

  /// @brief Method .ctor, addr 0x26b0dd0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method IsMatch, addr 0x26b1294, size 0x27c, virtual true, abstract: false, final false
  inline bool IsMatch(::Newtonsoft::Json::Linq::JToken* t);

  // Ctor Parameters [CppParam { name: "", ty: "CompositeExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeExpression(CompositeExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeExpression(CompositeExpression const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeExpression();

public:
  /// @brief Field <Expressions>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression*>* ____Expressions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::CompositeExpression, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression, ____Expressions_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression*, "Newtonsoft.Json.Linq.JsonPath", "CompositeExpression");
