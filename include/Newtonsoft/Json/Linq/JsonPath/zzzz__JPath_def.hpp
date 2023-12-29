#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPath)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class JPath;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::JPath);
// Type: Newtonsoft.Json.Linq.JsonPath::JPath
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11947))
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::JPath*
class CORDL_TYPE JPath : public ::System::Object {
public:
  // Declarations
  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __get__expression, put = __set__expression))::StringW _expression;

  /// @brief Field <Filters>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Filters_k__BackingField,
                      put = __set__Filters_k__BackingField))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* _Filters_k__BackingField;

  /// @brief Field _currentIndex, offset 0x20, size 0x4
  __declspec(property(get = __get__currentIndex, put = __set__currentIndex)) int32_t _currentIndex;

  __declspec(property(get = get_Filters, put = set_Filters))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* Filters;

  constexpr ::StringW& __get__expression();

  constexpr ::StringW const& __get__expression() const;

  constexpr void __set__expression(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*& __get__Filters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*> const& __get__Filters_k__BackingField() const;

  constexpr void __set__Filters_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value);

  constexpr int32_t& __get__currentIndex();

  constexpr int32_t const& __get__currentIndex() const;

  constexpr void __set__currentIndex(int32_t value);

  /// @brief Method get_Filters addr 0x254a34c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* get_Filters();

  /// @brief Method set_Filters addr 0x254a354 size 0x8 virtual false final false
  inline void set_Filters(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value);

  static inline ::Newtonsoft::Json::Linq::JsonPath::JPath* New_ctor(::StringW expression);

  /// @brief Method .ctor addr 0x254a35c size 0xb8 virtual false final false
  inline void _ctor(::StringW expression);

  /// @brief Method ParseMain addr 0x254a414 size 0x160 virtual false final false
  inline void ParseMain();

  /// @brief Method ParsePath addr 0x254a5c8 size 0x608 virtual false final false
  inline bool ParsePath(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, int32_t currentPartStartIndex, bool query);

  /// @brief Method ParseIndexer addr 0x254abd8 size 0xf4 virtual false final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseIndexer(char16_t indexerOpenChar);

  /// @brief Method ParseArrayIndexer addr 0x254b23c size 0x798 virtual false final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseArrayIndexer(char16_t indexerCloseChar);

  /// @brief Method EatWhitespace addr 0x254a574 size 0x54 virtual false final false
  inline void EatWhitespace();

  /// @brief Method ParseQuery addr 0x254b094 size 0x1a8 virtual false final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuery(char16_t indexerCloseChar);

  /// @brief Method ParseExpression addr 0x254b9d4 size 0x690 virtual false final false
  inline ::Newtonsoft::Json::Linq::JsonPath::QueryExpression* ParseExpression();

  /// @brief Method ParseValue addr 0x254c250 size 0x38c virtual false final false
  inline ::System::Object* ParseValue();

  /// @brief Method ReadQuotedString addr 0x254c70c size 0x244 virtual false final false
  inline ::StringW ReadQuotedString();

  /// @brief Method Match addr 0x254c5e4 size 0xa8 virtual false final false
  inline bool Match(::StringW s);

  /// @brief Method ParseOperator addr 0x254c06c size 0x1e4 virtual false final false
  inline ::Newtonsoft::Json::Linq::JsonPath::QueryOperator ParseOperator();

  /// @brief Method ParseQuotedField addr 0x254ad40 size 0x354 virtual false final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuotedField(char16_t indexerCloseChar);

  /// @brief Method EnsureLength addr 0x254accc size 0x74 virtual false final false
  inline void EnsureLength(::StringW message);

  /// @brief Method Evaluate addr 0x254c950 size 0xc virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Evaluate(::Newtonsoft::Json::Linq::JToken* t, bool errorWhenNoMatch);

  /// @brief Method Evaluate addr 0x254c95c size 0x1cc virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
  Evaluate(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, ::Newtonsoft::Json::Linq::JToken* t, bool errorWhenNoMatch);

  // Ctor Parameters [CppParam { name: "", ty: "JPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPath(JPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPath(JPath const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPath();

public:
  /// @brief Field _expression, offset: 0x10, size: 0x8, def value: None
  ::StringW ____expression;

  /// @brief Field <Filters>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* ____Filters_k__BackingField;

  /// @brief Field _currentIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____currentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::JPath, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::JPath, ____expression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::JPath, ____Filters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonPath::JPath, ____currentIndex) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::JPath);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::JPath*, "Newtonsoft.Json.Linq.JsonPath", "JPath");
