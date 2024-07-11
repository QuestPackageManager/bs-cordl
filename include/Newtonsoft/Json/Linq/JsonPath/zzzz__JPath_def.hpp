#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/JPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPath)
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
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
namespace Newtonsoft::Json {
class JsonException;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
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
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::JPath*
class CORDL_TYPE JPath : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Filters))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* Filters;

  /// @brief Field FloatCharacters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FloatCharacters, put = setStaticF_FloatCharacters))::ArrayW<char16_t, ::Array<char16_t>*> FloatCharacters;

  /// @brief Field <Filters>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Filters_k__BackingField,
                      put = __cordl_internal_set__Filters_k__BackingField))::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* _Filters_k__BackingField;

  /// @brief Field _currentIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__currentIndex, put = __cordl_internal_set__currentIndex)) int32_t _currentIndex;

  /// @brief Field _expression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression))::StringW _expression;

  /// @brief Method CreatePathFilter, addr 0x2aaf4a4, size 0x88, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* CreatePathFilter(::StringW member, bool scan);

  /// @brief Method CreateUnexpectedCharacterException, addr 0x2ab0abc, size 0xbc, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonException* CreateUnexpectedCharacterException();

  /// @brief Method EatWhitespace, addr 0x2aaee48, size 0x54, virtual false, abstract: false, final false
  inline void EatWhitespace();

  /// @brief Method EnsureLength, addr 0x2aaf65c, size 0x74, virtual false, abstract: false, final false
  inline void EnsureLength(::StringW message);

  /// @brief Method Evaluate, addr 0x2ab1868, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*
  Evaluate(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, ::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t,
           ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  /// @brief Method Evaluate, addr 0x2ab17e8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Evaluate(::Newtonsoft::Json::Linq::JToken* root, ::Newtonsoft::Json::Linq::JToken* t,
                                                                                                    ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  /// @brief Method Match, addr 0x2ab129c, size 0xa0, virtual false, abstract: false, final false
  inline bool Match(::StringW s);

  static inline ::Newtonsoft::Json::Linq::JsonPath::JPath* New_ctor(::StringW expression);

  /// @brief Method ParseArrayIndexer, addr 0x2aafc28, size 0x798, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseArrayIndexer(char16_t indexerCloseChar);

  /// @brief Method ParseExpression, addr 0x2ab03c0, size 0x4b8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JsonPath::QueryExpression* ParseExpression();

  /// @brief Method ParseIndexer, addr 0x2aaf52c, size 0x108, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseIndexer(char16_t indexerOpenChar, bool scan);

  /// @brief Method ParseMain, addr 0x2aaece8, size 0x160, virtual false, abstract: false, final false
  inline void ParseMain();

  /// @brief Method ParseOperator, addr 0x2ab0ff8, size 0x268, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JsonPath::QueryOperator ParseOperator();

  /// @brief Method ParsePath, addr 0x2aaee9c, size 0x608, virtual false, abstract: false, final false
  inline bool ParsePath(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* filters, int32_t currentPartStartIndex, bool query);

  /// @brief Method ParseQuery, addr 0x2aafa54, size 0x1d4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuery(char16_t indexerCloseChar, bool scan);

  /// @brief Method ParseQuotedField, addr 0x2aaf6d0, size 0x384, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* ParseQuotedField(char16_t indexerCloseChar, bool scan);

  /// @brief Method ParseSide, addr 0x2ab0b78, size 0x114, virtual false, abstract: false, final false
  inline ::System::Object* ParseSide();

  /// @brief Method ReadQuotedString, addr 0x2ab13cc, size 0x284, virtual false, abstract: false, final false
  inline ::StringW ReadQuotedString();

  /// @brief Method ReadRegexString, addr 0x2ab1650, size 0x170, virtual false, abstract: false, final false
  inline ::StringW ReadRegexString();

  /// @brief Method TryParseExpression, addr 0x2ab08c8, size 0x1f4, virtual false, abstract: false, final false
  inline bool TryParseExpression(ByRef<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*> expressionPath);

  /// @brief Method TryParseValue, addr 0x2ab0c8c, size 0x36c, virtual false, abstract: false, final false
  inline bool TryParseValue(ByRef<::System::Object*> value);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*& __cordl_internal_get__Filters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>*> const& __cordl_internal_get__Filters_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__currentIndex() const;

  constexpr int32_t& __cordl_internal_get__currentIndex();

  constexpr ::StringW const& __cordl_internal_get__expression() const;

  constexpr ::StringW& __cordl_internal_get__expression();

  constexpr void __cordl_internal_set__Filters_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* value);

  constexpr void __cordl_internal_set__currentIndex(int32_t value);

  constexpr void __cordl_internal_set__expression(::StringW value);

  /// @brief Method .ctor, addr 0x2aaec30, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW expression);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_FloatCharacters();

  /// @brief Method get_Filters, addr 0x2aaec28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter*>* get_Filters();

  static inline void setStaticF_FloatCharacters(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPath(JPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPath(JPath const&) = delete;

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
