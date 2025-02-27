#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/BooleanQueryExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
CORDL_MODULE_EXPORT(BooleanQueryExpression)
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class BooleanQueryExpression;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression);
// Dependencies Newtonsoft.Json.Linq.JsonPath.QueryExpression
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression
class CORDL_TYPE BooleanQueryExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression {
public:
  // Declarations
  /// @brief Field Left, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Left, put = __cordl_internal_set_Left)) ::System::Object* Left;

  /// @brief Field Right, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Right, put = __cordl_internal_set_Right)) ::System::Object* Right;

  /// @brief Method EqualsWithStrictMatch, addr 0x3f45ba4, size 0x114, virtual false, abstract: false, final false
  static inline bool EqualsWithStrictMatch(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::Linq::JValue* queryValue);

  /// @brief Method EqualsWithStringCoercion, addr 0x3f45630, size 0x574, virtual false, abstract: false, final false
  static inline bool EqualsWithStringCoercion(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::Linq::JValue* queryValue);

  /// @brief Method GetResult, addr 0x3f449f0, size 0x1c4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* GetResult(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t, ::System::Object* o);

  /// @brief Method IsMatch, addr 0x3f44bb4, size 0x6f4, virtual true, abstract: false, final false
  inline bool IsMatch(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  /// @brief Method MatchTokens, addr 0x3f452a8, size 0x1ac, virtual false, abstract: false, final false
  inline bool MatchTokens(::Newtonsoft::Json::Linq::JToken* leftResult, ::Newtonsoft::Json::Linq::JToken* rightResult, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression* New_ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator, ::System::Object* left,
                                                                                     ::System::Object* right);

  /// @brief Method RegexEquals, addr 0x3f45454, size 0x1dc, virtual false, abstract: false, final false
  static inline bool RegexEquals(::Newtonsoft::Json::Linq::JValue* input, ::Newtonsoft::Json::Linq::JValue* pattern, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  constexpr ::System::Object* const& __cordl_internal_get_Left() const;

  constexpr ::System::Object*& __cordl_internal_get_Left();

  constexpr ::System::Object* const& __cordl_internal_get_Right() const;

  constexpr ::System::Object*& __cordl_internal_get_Right();

  constexpr void __cordl_internal_set_Left(::System::Object* value);

  constexpr void __cordl_internal_set_Right(::System::Object* value);

  /// @brief Method .ctor, addr 0x3f43dd8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JsonPath::QueryOperator _cordl_operator, ::System::Object* left, ::System::Object* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BooleanQueryExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BooleanQueryExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BooleanQueryExpression(BooleanQueryExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BooleanQueryExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BooleanQueryExpression(BooleanQueryExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10454 };

  /// @brief Field Left, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___Left;

  /// @brief Field Right, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression, ___Left) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression, ___Right) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression*, "Newtonsoft.Json.Linq.JsonPath", "BooleanQueryExpression");
