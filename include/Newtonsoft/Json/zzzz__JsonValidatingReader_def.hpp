#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonValidatingReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonValidatingReader)
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JTokenWriter;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaException;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaModel;
}
namespace Newtonsoft::Json::Schema {
struct JsonSchemaType;
}
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace Newtonsoft::Json::Schema {
class ValidationEventHandler;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
class JsonValidatingReader_SchemaScope;
}
namespace Newtonsoft::Json {
class JsonValidatingReader___c;
}
namespace Newtonsoft::Json {
class SchemaScope_JsonValidatingReader___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonValidatingReader;
}
namespace Newtonsoft::Json {
class JsonValidatingReader_SchemaScope;
}
namespace Newtonsoft::Json {
class JsonValidatingReader___c;
}
namespace Newtonsoft::Json {
class SchemaScope_JsonValidatingReader___c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonValidatingReader);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonValidatingReader_SchemaScope);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonValidatingReader___c);
MARK_REF_PTR_T(::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c);
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c
class CORDL_TYPE SchemaScope_JsonValidatingReader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c* __9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0)) ::System::Func_2<::StringW, ::StringW>* __9__27_0;

  /// @brief Field <>9__27_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_1, put = setStaticF___9__27_1)) ::System::Func_2<::StringW, bool>* __9__27_1;

  /// @brief Field <>9__27_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__27_2, put = setStaticF___9__27_2)) ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__27_2;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_0,
                      put = setStaticF___9__28_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, bool>* __9__28_0;

  /// @brief Field <>9__28_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_1,
                      put = setStaticF___9__28_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, ::StringW>* __9__28_1;

  static inline ::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c* New_ctor();

  /// @brief Method <GetRequiredProperties>b__28_0, addr 0x3eb1124, size 0x44, virtual false, abstract: false, final false
  inline bool _GetRequiredProperties_b__28_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*> p);

  /// @brief Method <GetRequiredProperties>b__28_1, addr 0x3eb1168, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _GetRequiredProperties_b__28_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*> p);

  /// @brief Method <.ctor>b__27_0, addr 0x3eb10fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__27_0(::StringW p);

  /// @brief Method <.ctor>b__27_1, addr 0x3eb1104, size 0x8, virtual false, abstract: false, final false
  inline bool __ctor_b__27_1(::StringW p);

  /// @brief Method <.ctor>b__27_2, addr 0x3eb110c, size 0x18, virtual false, abstract: false, final false
  inline bool __ctor_b__27_2(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method .ctor, addr 0x3eb10f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__27_0();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__27_1();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__27_2();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, bool>* getStaticF___9__28_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, ::StringW>* getStaticF___9__28_1();

  static inline void setStaticF___9(::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c* value);

  static inline void setStaticF___9__27_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline void setStaticF___9__27_1(::System::Func_2<::StringW, bool>* value);

  static inline void setStaticF___9__27_2(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__28_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, bool>* value);

  static inline void setStaticF___9__28_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaScope_JsonValidatingReader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaScope_JsonValidatingReader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaScope_JsonValidatingReader___c(SchemaScope_JsonValidatingReader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaScope_JsonValidatingReader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaScope_JsonValidatingReader___c(SchemaScope_JsonValidatingReader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10152 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.Linq.JTokenType, System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonValidatingReader/SchemaScope
class CORDL_TYPE JsonValidatingReader_SchemaScope : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c;

  __declspec(property(get = get_ArrayItemCount, put = set_ArrayItemCount)) int32_t ArrayItemCount;

  __declspec(property(get = get_CurrentItemWriter, put = set_CurrentItemWriter)) ::Newtonsoft::Json::Linq::JTokenWriter* CurrentItemWriter;

  __declspec(property(get = get_CurrentPropertyName, put = set_CurrentPropertyName)) ::StringW CurrentPropertyName;

  __declspec(property(get = get_IsUniqueArray)) bool IsUniqueArray;

  __declspec(property(get = get_RequiredProperties)) ::System::Collections::Generic::Dictionary_2<::StringW, bool>* RequiredProperties;

  __declspec(property(get = get_Schemas)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* Schemas;

  __declspec(property(get = get_TokenType)) ::Newtonsoft::Json::Linq::JTokenType TokenType;

  __declspec(property(get = get_UniqueArrayItems)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* UniqueArrayItems;

  /// @brief Field <ArrayItemCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__ArrayItemCount_k__BackingField, put = __cordl_internal_set__ArrayItemCount_k__BackingField)) int32_t _ArrayItemCount_k__BackingField;

  /// @brief Field <CurrentItemWriter>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentItemWriter_k__BackingField,
                      put = __cordl_internal_set__CurrentItemWriter_k__BackingField)) ::Newtonsoft::Json::Linq::JTokenWriter* _CurrentItemWriter_k__BackingField;

  /// @brief Field <CurrentPropertyName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentPropertyName_k__BackingField, put = __cordl_internal_set__CurrentPropertyName_k__BackingField)) ::StringW _CurrentPropertyName_k__BackingField;

  /// @brief Field <IsUniqueArray>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__IsUniqueArray_k__BackingField, put = __cordl_internal_set__IsUniqueArray_k__BackingField)) bool _IsUniqueArray_k__BackingField;

  /// @brief Field <UniqueArrayItems>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__UniqueArrayItems_k__BackingField,
                      put = __cordl_internal_set__UniqueArrayItems_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* _UniqueArrayItems_k__BackingField;

  /// @brief Field _requiredProperties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__requiredProperties,
                      put = __cordl_internal_set__requiredProperties)) ::System::Collections::Generic::Dictionary_2<::StringW, bool>* _requiredProperties;

  /// @brief Field _schemas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__schemas, put = __cordl_internal_set__schemas)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* _schemas;

  /// @brief Field _tokenType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__tokenType, put = __cordl_internal_set__tokenType)) ::Newtonsoft::Json::Linq::JTokenType _tokenType;

  /// @brief Method GetRequiredProperties, addr 0x3eb0e70, size 0x228, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetRequiredProperties(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  static inline ::Newtonsoft::Json::JsonValidatingReader_SchemaScope* New_ctor(::Newtonsoft::Json::Linq::JTokenType tokenType,
                                                                               ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* schemas);

  constexpr int32_t const& __cordl_internal_get__ArrayItemCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ArrayItemCount_k__BackingField();

  constexpr ::Newtonsoft::Json::Linq::JTokenWriter* const& __cordl_internal_get__CurrentItemWriter_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Linq::JTokenWriter*& __cordl_internal_get__CurrentItemWriter_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__CurrentPropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CurrentPropertyName_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsUniqueArray_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsUniqueArray_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get__UniqueArrayItems_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__UniqueArrayItems_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>* const& __cordl_internal_get__requiredProperties() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& __cordl_internal_get__requiredProperties();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* const& __cordl_internal_get__schemas() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*& __cordl_internal_get__schemas();

  constexpr ::Newtonsoft::Json::Linq::JTokenType const& __cordl_internal_get__tokenType() const;

  constexpr ::Newtonsoft::Json::Linq::JTokenType& __cordl_internal_get__tokenType();

  constexpr void __cordl_internal_set__ArrayItemCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__CurrentItemWriter_k__BackingField(::Newtonsoft::Json::Linq::JTokenWriter* value);

  constexpr void __cordl_internal_set__CurrentPropertyName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsUniqueArray_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UniqueArrayItems_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set__requiredProperties(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set__schemas(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  constexpr void __cordl_internal_set__tokenType(::Newtonsoft::Json::Linq::JTokenType value);

  /// @brief Method .ctor, addr 0x3ead9e0, size 0x344, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JTokenType tokenType, ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* schemas);

  /// @brief Method get_ArrayItemCount, addr 0x3eb0e28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ArrayItemCount();

  /// @brief Method get_CurrentItemWriter, addr 0x3eb0e48, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenWriter* get_CurrentItemWriter();

  /// @brief Method get_CurrentPropertyName, addr 0x3eb0e18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CurrentPropertyName();

  /// @brief Method get_IsUniqueArray, addr 0x3eb0e38, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsUniqueArray();

  /// @brief Method get_RequiredProperties, addr 0x3eb0e60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, bool>* get_RequiredProperties();

  /// @brief Method get_Schemas, addr 0x3eb0e58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_Schemas();

  /// @brief Method get_TokenType, addr 0x3eb0e68, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_TokenType();

  /// @brief Method get_UniqueArrayItems, addr 0x3eb0e40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_UniqueArrayItems();

  /// @brief Method set_ArrayItemCount, addr 0x3eb0e30, size 0x8, virtual false, abstract: false, final false
  inline void set_ArrayItemCount(int32_t value);

  /// @brief Method set_CurrentItemWriter, addr 0x3eb0e50, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentItemWriter(::Newtonsoft::Json::Linq::JTokenWriter* value);

  /// @brief Method set_CurrentPropertyName, addr 0x3eb0e20, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentPropertyName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonValidatingReader_SchemaScope();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonValidatingReader_SchemaScope", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonValidatingReader_SchemaScope(JsonValidatingReader_SchemaScope&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonValidatingReader_SchemaScope", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonValidatingReader_SchemaScope(JsonValidatingReader_SchemaScope const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10153 };

  /// @brief Field _tokenType, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::JTokenType ____tokenType;

  /// @brief Field _schemas, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* ____schemas;

  /// @brief Field _requiredProperties, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, bool>* ____requiredProperties;

  /// @brief Field <CurrentPropertyName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____CurrentPropertyName_k__BackingField;

  /// @brief Field <ArrayItemCount>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____ArrayItemCount_k__BackingField;

  /// @brief Field <IsUniqueArray>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____IsUniqueArray_k__BackingField;

  /// @brief Field <UniqueArrayItems>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ____UniqueArrayItems_k__BackingField;

  /// @brief Field <CurrentItemWriter>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JTokenWriter* ____CurrentItemWriter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____tokenType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____schemas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____requiredProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____CurrentPropertyName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____ArrayItemCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____IsUniqueArray_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____UniqueArrayItems_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader_SchemaScope, ____CurrentItemWriter_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonValidatingReader_SchemaScope, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonValidatingReader/<>c
class CORDL_TYPE JsonValidatingReader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::JsonValidatingReader___c* __9;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__50_0, put = setStaticF___9__50_0)) ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__50_0;

  /// @brief Field <>9__50_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__50_1, put = setStaticF___9__50_1)) ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__50_1;

  /// @brief Field <>9__50_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__50_2, put = setStaticF___9__50_2)) ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__50_2;

  /// @brief Field <>9__51_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__51_0, put = setStaticF___9__51_0)) ::System::Func_2<bool, bool>* __9__51_0;

  /// @brief Field <>9__51_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__51_1, put = setStaticF___9__51_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, bool>* __9__51_1;

  /// @brief Field <>9__51_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__51_2, put = setStaticF___9__51_2)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, ::StringW>* __9__51_2;

  static inline ::Newtonsoft::Json::JsonValidatingReader___c* New_ctor();

  /// @brief Method <ValidateEndObject>b__51_0, addr 0x3eb1260, size 0xc, virtual false, abstract: false, final false
  inline bool _ValidateEndObject_b__51_0(bool v);

  /// @brief Method <ValidateEndObject>b__51_1, addr 0x3eb126c, size 0x40, virtual false, abstract: false, final false
  inline bool _ValidateEndObject_b__51_1(::System::Collections::Generic::KeyValuePair_2<::StringW, bool> kv);

  /// @brief Method <ValidateEndObject>b__51_2, addr 0x3eb12ac, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _ValidateEndObject_b__51_2(::System::Collections::Generic::KeyValuePair_2<::StringW, bool> kv);

  /// @brief Method <WriteToken>b__50_0, addr 0x3eb1208, size 0x20, virtual false, abstract: false, final false
  inline bool _WriteToken_b__50_0(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method <WriteToken>b__50_1, addr 0x3eb1228, size 0x18, virtual false, abstract: false, final false
  inline bool _WriteToken_b__50_1(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method <WriteToken>b__50_2, addr 0x3eb1240, size 0x20, virtual false, abstract: false, final false
  inline bool _WriteToken_b__50_2(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method .ctor, addr 0x3eb1200, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::JsonValidatingReader___c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__50_0();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__50_1();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__50_2();

  static inline ::System::Func_2<bool, bool>* getStaticF___9__51_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, bool>* getStaticF___9__51_1();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, ::StringW>* getStaticF___9__51_2();

  static inline void setStaticF___9(::Newtonsoft::Json::JsonValidatingReader___c* value);

  static inline void setStaticF___9__50_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__50_1(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__50_2(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__51_0(::System::Func_2<bool, bool>* value);

  static inline void setStaticF___9__51_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, bool>* value);

  static inline void setStaticF___9__51_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonValidatingReader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonValidatingReader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonValidatingReader___c(JsonValidatingReader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonValidatingReader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonValidatingReader___c(JsonValidatingReader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonValidatingReader___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.IJsonLineInfo, Newtonsoft.Json.JsonReader
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonValidatingReader
class CORDL_TYPE JsonValidatingReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  using SchemaScope = ::Newtonsoft::Json::JsonValidatingReader_SchemaScope;

  using __c = ::Newtonsoft::Json::JsonValidatingReader___c;

  __declspec(property(get = get_CurrentMemberSchemas)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* CurrentMemberSchemas;

  __declspec(property(get = get_CurrentSchemas)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* CurrentSchemas;

  __declspec(property(get = get_Depth)) int32_t Depth;

  /// @brief Field EmptySchemaList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptySchemaList, put = setStaticF_EmptySchemaList)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* EmptySchemaList;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t Newtonsoft_Json_IJsonLineInfo_LineNumber;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t Newtonsoft_Json_IJsonLineInfo_LinePosition;

  __declspec(property(get = get_Path)) ::StringW Path;

  __declspec(property(get = get_QuoteChar, put = set_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_Reader)) ::Newtonsoft::Json::JsonReader* Reader;

  __declspec(property(get = get_Schema, put = set_Schema)) ::Newtonsoft::Json::Schema::JsonSchema* Schema;

  __declspec(property(get = get_TokenType)) ::Newtonsoft::Json::JsonToken TokenType;

  /// @brief Field ValidationEventHandler, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_ValidationEventHandler, put = __cordl_internal_set_ValidationEventHandler)) ::Newtonsoft::Json::Schema::ValidationEventHandler* ValidationEventHandler;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  /// @brief Field _currentScope, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__currentScope, put = __cordl_internal_set__currentScope)) ::Newtonsoft::Json::JsonValidatingReader_SchemaScope* _currentScope;

  /// @brief Field _model, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__model, put = __cordl_internal_set__model)) ::Newtonsoft::Json::Schema::JsonSchemaModel* _model;

  /// @brief Field _reader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader)) ::Newtonsoft::Json::JsonReader* _reader;

  /// @brief Field _schema, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__schema, put = __cordl_internal_set__schema)) ::Newtonsoft::Json::Schema::JsonSchema* _schema;

  /// @brief Field _stack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack)) ::System::Collections::Generic::Stack_1<::Newtonsoft::Json::JsonValidatingReader_SchemaScope*>* _stack;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  /// @brief Method Close, addr 0x3eabc48, size 0x3c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method FloatingPointRemainder, addr 0x3eb06b0, size 0x6c, virtual false, abstract: false, final false
  static inline double_t FloatingPointRemainder(double_t dividend, double_t divisor);

  /// @brief Method GetCurrentNodeSchemaType, addr 0x3eabdb8, size 0x118, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> GetCurrentNodeSchemaType();

  /// @brief Method IsPropertyDefinied, addr 0x3eb071c, size 0x424, virtual false, abstract: false, final false
  inline bool IsPropertyDefinied(::Newtonsoft::Json::Schema::JsonSchemaModel* schema, ::StringW propertyName);

  /// @brief Method IsZero, addr 0x3eb0644, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsZero(double_t value);

  static inline ::Newtonsoft::Json::JsonValidatingReader* New_ctor(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo, addr 0x3eb0b68, size 0xb4, virtual true, abstract: false, final true
  inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber, addr 0x3eb0c1c, size 0xb8, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition, addr 0x3eb0cd4, size 0xb8, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition();

  /// @brief Method OnValidationEvent, addr 0x3eaba6c, size 0x98, virtual false, abstract: false, final false
  inline void OnValidationEvent(::Newtonsoft::Json::Schema::JsonSchemaException* exception);

  /// @brief Method Pop, addr 0x3eaa4b8, size 0xa4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonValidatingReader_SchemaScope* Pop();

  /// @brief Method ProcessValue, addr 0x3eadd24, size 0x45c, virtual false, abstract: false, final false
  inline void ProcessValue();

  /// @brief Method Push, addr 0x3eaa458, size 0x60, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::JsonValidatingReader_SchemaScope* scope);

  /// @brief Method RaiseError, addr 0x3eab724, size 0x348, virtual false, abstract: false, final false
  inline void RaiseError(::StringW message, ::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method Read, addr 0x3ead97c, size 0x64, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAsBoolean, addr 0x3ead84c, size 0x44, virtual true, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ReadAsBytes, addr 0x3ead740, size 0x44, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadAsDateTime, addr 0x3ead8d4, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadAsDateTimeOffset, addr 0x3ead920, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method ReadAsDecimal, addr 0x3ead784, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadAsDouble, addr 0x3ead800, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method ReadAsInt32, addr 0x3eabed0, size 0x44, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadAsString, addr 0x3ead890, size 0x44, virtual true, abstract: false, final false
  inline ::StringW ReadAsString();

  /// @brief Method TestType, addr 0x3eb0504, size 0x140, virtual false, abstract: false, final false
  inline bool TestType(::Newtonsoft::Json::Schema::JsonSchemaModel* currentSchema, ::Newtonsoft::Json::Schema::JsonSchemaType currentType);

  /// @brief Method ValidateArray, addr 0x3eb0b40, size 0x14, virtual false, abstract: false, final false
  inline bool ValidateArray(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateBoolean, addr 0x3eafec4, size 0x40, virtual false, abstract: false, final false
  inline void ValidateBoolean(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateCurrentToken, addr 0x3eabf14, size 0x182c, virtual false, abstract: false, final false
  inline void ValidateCurrentToken();

  /// @brief Method ValidateEndArray, addr 0x3eb0298, size 0x1ec, virtual false, abstract: false, final false
  inline void ValidateEndArray(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateEndObject, addr 0x3eaff44, size 0x354, virtual false, abstract: false, final false
  inline void ValidateEndObject(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateFloat, addr 0x3eaf484, size 0x4f8, virtual false, abstract: false, final false
  inline void ValidateFloat(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateInteger, addr 0x3eaee58, size 0x62c, virtual false, abstract: false, final false
  inline void ValidateInteger(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateNotDisallowed, addr 0x3eabc84, size 0x134, virtual false, abstract: false, final false
  inline void ValidateNotDisallowed(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateNull, addr 0x3eaff04, size 0x40, virtual false, abstract: false, final false
  inline void ValidateNull(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateObject, addr 0x3eb0b54, size 0x14, virtual false, abstract: false, final false
  inline bool ValidateObject(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidatePropertyName, addr 0x3eaecb0, size 0x1a8, virtual false, abstract: false, final false
  inline void ValidatePropertyName(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateString, addr 0x3eaf97c, size 0x548, virtual false, abstract: false, final false
  inline void ValidateString(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method WriteToken, addr 0x3eae180, size 0xb30, virtual false, abstract: false, final false
  inline void WriteToken(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* schemas);

  constexpr ::Newtonsoft::Json::Schema::ValidationEventHandler* const& __cordl_internal_get_ValidationEventHandler() const;

  constexpr ::Newtonsoft::Json::Schema::ValidationEventHandler*& __cordl_internal_get_ValidationEventHandler();

  constexpr ::Newtonsoft::Json::JsonValidatingReader_SchemaScope* const& __cordl_internal_get__currentScope() const;

  constexpr ::Newtonsoft::Json::JsonValidatingReader_SchemaScope*& __cordl_internal_get__currentScope();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel* const& __cordl_internal_get__model() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel*& __cordl_internal_get__model();

  constexpr ::Newtonsoft::Json::JsonReader* const& __cordl_internal_get__reader() const;

  constexpr ::Newtonsoft::Json::JsonReader*& __cordl_internal_get__reader();

  constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& __cordl_internal_get__schema() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchema*& __cordl_internal_get__schema();

  constexpr ::System::Collections::Generic::Stack_1<::Newtonsoft::Json::JsonValidatingReader_SchemaScope*>* const& __cordl_internal_get__stack() const;

  constexpr ::System::Collections::Generic::Stack_1<::Newtonsoft::Json::JsonValidatingReader_SchemaScope*>*& __cordl_internal_get__stack();

  constexpr void __cordl_internal_set_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set__currentScope(::Newtonsoft::Json::JsonValidatingReader_SchemaScope* value);

  constexpr void __cordl_internal_set__model(::Newtonsoft::Json::Schema::JsonSchemaModel* value);

  constexpr void __cordl_internal_set__reader(::Newtonsoft::Json::JsonReader* value);

  constexpr void __cordl_internal_set__schema(::Newtonsoft::Json::Schema::JsonSchema* value);

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::Stack_1<::Newtonsoft::Json::JsonValidatingReader_SchemaScope*>* value);

  /// @brief Method .ctor, addr 0x3eabb04, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method add_ValidationEventHandler, addr 0x3eaa244, size 0x9c, virtual false, abstract: false, final false
  inline void add_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* value);

  static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* getStaticF_EmptySchemaList();

  /// @brief Method get_CurrentMemberSchemas, addr 0x3eaa578, size 0x11ac, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_CurrentMemberSchemas();

  /// @brief Method get_CurrentSchemas, addr 0x3eaa55c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_CurrentSchemas();

  /// @brief Method get_Depth, addr 0x3eaa3a0, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_Path, addr 0x3eaa3c4, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_QuoteChar, addr 0x3eaa3e8, size 0x24, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_Reader, addr 0x3eabc40, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReader* get_Reader();

  /// @brief Method get_Schema, addr 0x3eabbb8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* get_Schema();

  /// @brief Method get_TokenType, addr 0x3eaa410, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken get_TokenType();

  /// @brief Method get_Value, addr 0x3eaa37c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method get_ValueType, addr 0x3eaa434, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

  /// @brief Method remove_ValidationEventHandler, addr 0x3eaa2e0, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* value);

  static inline void setStaticF_EmptySchemaList(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  /// @brief Method set_QuoteChar, addr 0x3eaa40c, size 0x4, virtual true, abstract: false, final false
  inline void set_QuoteChar(char16_t value);

  /// @brief Method set_Schema, addr 0x3eabbc0, size 0x80, virtual false, abstract: false, final false
  inline void set_Schema(::Newtonsoft::Json::Schema::JsonSchema* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonValidatingReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonValidatingReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonValidatingReader(JsonValidatingReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonValidatingReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonValidatingReader(JsonValidatingReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10155 };

  /// @brief Field _reader, offset: 0x78, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* ____reader;

  /// @brief Field _stack, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::Newtonsoft::Json::JsonValidatingReader_SchemaScope*>* ____stack;

  /// @brief Field _schema, offset: 0x88, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchema* ____schema;

  /// @brief Field _model, offset: 0x90, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaModel* ____model;

  /// @brief Field _currentScope, offset: 0x98, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonValidatingReader_SchemaScope* ____currentScope;

  /// @brief Field ValidationEventHandler, offset: 0xa0, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::ValidationEventHandler* ___ValidationEventHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____reader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____stack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____schema) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____model) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____currentScope) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ___ValidationEventHandler) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonValidatingReader, 0xa8>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonValidatingReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonValidatingReader*, "Newtonsoft.Json", "JsonValidatingReader");
NEED_NO_BOX(::Newtonsoft::Json::JsonValidatingReader_SchemaScope);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonValidatingReader_SchemaScope*, "Newtonsoft.Json", "JsonValidatingReader/SchemaScope");
NEED_NO_BOX(::Newtonsoft::Json::JsonValidatingReader___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonValidatingReader___c*, "Newtonsoft.Json", "JsonValidatingReader/<>c");
NEED_NO_BOX(::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::SchemaScope_JsonValidatingReader___c*, "Newtonsoft.Json", "JsonValidatingReader/SchemaScope/<>c");
