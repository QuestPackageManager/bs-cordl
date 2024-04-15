#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JTokenType_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonValidatingReader)
namespace GlobalNamespace {
class __JsonValidatingReader__SchemaScope____c;
}
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
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace Newtonsoft::Json {
class __JsonValidatingReader__SchemaScope;
}
namespace Newtonsoft::Json {
class __JsonValidatingReader____c;
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
namespace GlobalNamespace {
class __JsonValidatingReader__SchemaScope____c;
}
namespace Newtonsoft::Json {
class JsonValidatingReader;
}
namespace Newtonsoft::Json {
class __JsonValidatingReader__SchemaScope;
}
namespace Newtonsoft::Json {
class __JsonValidatingReader____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__JsonValidatingReader__SchemaScope____c);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonValidatingReader);
MARK_REF_PTR_T(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope);
MARK_REF_PTR_T(::Newtonsoft::Json::__JsonValidatingReader____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::JsonValidatingReader::SchemaScope::<>c*
class CORDL_TYPE __JsonValidatingReader__SchemaScope____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__JsonValidatingReader__SchemaScope____c* __9;

  /// @brief Field <>9__27_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_0, put = setStaticF___9__27_0))::System::Func_2<::StringW, ::StringW>* __9__27_0;

  /// @brief Field <>9__27_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_1, put = setStaticF___9__27_1))::System::Func_2<::StringW, bool>* __9__27_1;

  /// @brief Field <>9__27_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__27_2, put = setStaticF___9__27_2))::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__27_2;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__28_0,
                             put = setStaticF___9__28_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, bool>* __9__28_0;

  /// @brief Field <>9__28_1, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__28_1,
               put = setStaticF___9__28_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, ::StringW>* __9__28_1;

  static inline ::GlobalNamespace::__JsonValidatingReader__SchemaScope____c* New_ctor();

  /// @brief Method <GetRequiredProperties>b__28_0, addr 0x28fac20, size 0x44, virtual false, abstract: false, final false
  inline bool _GetRequiredProperties_b__28_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*> p);

  /// @brief Method <GetRequiredProperties>b__28_1, addr 0x28fac64, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _GetRequiredProperties_b__28_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*> p);

  /// @brief Method <.ctor>b__27_0, addr 0x28fabf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW __ctor_b__27_0(::StringW p);

  /// @brief Method <.ctor>b__27_1, addr 0x28fac00, size 0x8, virtual false, abstract: false, final false
  inline bool __ctor_b__27_1(::StringW p);

  /// @brief Method <.ctor>b__27_2, addr 0x28fac08, size 0x18, virtual false, abstract: false, final false
  inline bool __ctor_b__27_2(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method .ctor, addr 0x28fabf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__JsonValidatingReader__SchemaScope____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__27_0();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__27_1();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__27_2();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, bool>* getStaticF___9__28_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, ::StringW>* getStaticF___9__28_1();

  static inline void setStaticF___9(::GlobalNamespace::__JsonValidatingReader__SchemaScope____c* value);

  static inline void setStaticF___9__27_0(::System::Func_2<::StringW, ::StringW>* value);

  static inline void setStaticF___9__27_1(::System::Func_2<::StringW, bool>* value);

  static inline void setStaticF___9__27_2(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__28_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, bool>* value);

  static inline void setStaticF___9__28_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonValidatingReader__SchemaScope____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonValidatingReader__SchemaScope____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonValidatingReader__SchemaScope____c(__JsonValidatingReader__SchemaScope____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonValidatingReader__SchemaScope____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonValidatingReader__SchemaScope____c(__JsonValidatingReader__SchemaScope____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__JsonValidatingReader__SchemaScope____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SchemaScope
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::JsonValidatingReader::SchemaScope*
class CORDL_TYPE __JsonValidatingReader__SchemaScope : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__JsonValidatingReader__SchemaScope____c;

  __declspec(property(get = get_ArrayItemCount, put = set_ArrayItemCount)) int32_t ArrayItemCount;

  __declspec(property(get = get_CurrentItemWriter, put = set_CurrentItemWriter))::Newtonsoft::Json::Linq::JTokenWriter* CurrentItemWriter;

  __declspec(property(get = get_CurrentPropertyName, put = set_CurrentPropertyName))::StringW CurrentPropertyName;

  __declspec(property(get = get_IsUniqueArray)) bool IsUniqueArray;

  __declspec(property(get = get_RequiredProperties))::System::Collections::Generic::Dictionary_2<::StringW, bool>* RequiredProperties;

  __declspec(property(get = get_Schemas))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* Schemas;

  __declspec(property(get = get_TokenType))::Newtonsoft::Json::Linq::JTokenType TokenType;

  __declspec(property(get = get_UniqueArrayItems))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* UniqueArrayItems;

  /// @brief Field <ArrayItemCount>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__ArrayItemCount_k__BackingField, put = __cordl_internal_set__ArrayItemCount_k__BackingField)) int32_t _ArrayItemCount_k__BackingField;

  /// @brief Field <CurrentItemWriter>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentItemWriter_k__BackingField,
                      put = __cordl_internal_set__CurrentItemWriter_k__BackingField))::Newtonsoft::Json::Linq::JTokenWriter* _CurrentItemWriter_k__BackingField;

  /// @brief Field <CurrentPropertyName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentPropertyName_k__BackingField, put = __cordl_internal_set__CurrentPropertyName_k__BackingField))::StringW _CurrentPropertyName_k__BackingField;

  /// @brief Field <IsUniqueArray>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__IsUniqueArray_k__BackingField, put = __cordl_internal_set__IsUniqueArray_k__BackingField)) bool _IsUniqueArray_k__BackingField;

  /// @brief Field <UniqueArrayItems>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__UniqueArrayItems_k__BackingField,
                      put = __cordl_internal_set__UniqueArrayItems_k__BackingField))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* _UniqueArrayItems_k__BackingField;

  /// @brief Field _requiredProperties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__requiredProperties,
                      put = __cordl_internal_set__requiredProperties))::System::Collections::Generic::Dictionary_2<::StringW, bool>* _requiredProperties;

  /// @brief Field _schemas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__schemas, put = __cordl_internal_set__schemas))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* _schemas;

  /// @brief Field _tokenType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__tokenType, put = __cordl_internal_set__tokenType))::Newtonsoft::Json::Linq::JTokenType _tokenType;

  /// @brief Method GetRequiredProperties, addr 0x28fa968, size 0x224, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetRequiredProperties(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  static inline ::Newtonsoft::Json::__JsonValidatingReader__SchemaScope* New_ctor(::Newtonsoft::Json::Linq::JTokenType tokenType,
                                                                                  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* schemas);

  constexpr int32_t const& __cordl_internal_get__ArrayItemCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ArrayItemCount_k__BackingField();

  constexpr ::Newtonsoft::Json::Linq::JTokenWriter*& __cordl_internal_get__CurrentItemWriter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JTokenWriter*> const& __cordl_internal_get__CurrentItemWriter_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__CurrentPropertyName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__CurrentPropertyName_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsUniqueArray_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsUniqueArray_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__UniqueArrayItems_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get__UniqueArrayItems_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& __cordl_internal_get__requiredProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const& __cordl_internal_get__requiredProperties() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*& __cordl_internal_get__schemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*> const& __cordl_internal_get__schemas() const;

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

  /// @brief Method .ctor, addr 0x28f7480, size 0x35c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JTokenType tokenType, ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* schemas);

  /// @brief Method get_ArrayItemCount, addr 0x28fa920, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ArrayItemCount();

  /// @brief Method get_CurrentItemWriter, addr 0x28fa940, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenWriter* get_CurrentItemWriter();

  /// @brief Method get_CurrentPropertyName, addr 0x28fa910, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CurrentPropertyName();

  /// @brief Method get_IsUniqueArray, addr 0x28fa930, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsUniqueArray();

  /// @brief Method get_RequiredProperties, addr 0x28fa958, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, bool>* get_RequiredProperties();

  /// @brief Method get_Schemas, addr 0x28fa950, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_Schemas();

  /// @brief Method get_TokenType, addr 0x28fa960, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_TokenType();

  /// @brief Method get_UniqueArrayItems, addr 0x28fa938, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_UniqueArrayItems();

  /// @brief Method set_ArrayItemCount, addr 0x28fa928, size 0x8, virtual false, abstract: false, final false
  inline void set_ArrayItemCount(int32_t value);

  /// @brief Method set_CurrentItemWriter, addr 0x28fa948, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentItemWriter(::Newtonsoft::Json::Linq::JTokenWriter* value);

  /// @brief Method set_CurrentPropertyName, addr 0x28fa918, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentPropertyName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonValidatingReader__SchemaScope();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonValidatingReader__SchemaScope", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonValidatingReader__SchemaScope(__JsonValidatingReader__SchemaScope&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonValidatingReader__SchemaScope", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonValidatingReader__SchemaScope(__JsonValidatingReader__SchemaScope const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____tokenType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____schemas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____requiredProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____CurrentPropertyName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____ArrayItemCount_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____IsUniqueArray_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____UniqueArrayItems_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope, ____CurrentItemWriter_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::JsonValidatingReader::<>c*
class CORDL_TYPE __JsonValidatingReader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::__JsonValidatingReader____c* __9;

  /// @brief Field <>9__50_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__50_0, put = setStaticF___9__50_0))::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__50_0;

  /// @brief Field <>9__50_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__50_1, put = setStaticF___9__50_1))::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__50_1;

  /// @brief Field <>9__50_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__50_2, put = setStaticF___9__50_2))::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* __9__50_2;

  /// @brief Field <>9__51_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_0, put = setStaticF___9__51_0))::System::Func_2<bool, bool>* __9__51_0;

  /// @brief Field <>9__51_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_1, put = setStaticF___9__51_1))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, bool>* __9__51_1;

  /// @brief Field <>9__51_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_2, put = setStaticF___9__51_2))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, ::StringW>* __9__51_2;

  static inline ::Newtonsoft::Json::__JsonValidatingReader____c* New_ctor();

  /// @brief Method <ValidateEndObject>b__51_0, addr 0x28fad64, size 0xc, virtual false, abstract: false, final false
  inline bool _ValidateEndObject_b__51_0(bool v);

  /// @brief Method <ValidateEndObject>b__51_1, addr 0x28fad70, size 0x40, virtual false, abstract: false, final false
  inline bool _ValidateEndObject_b__51_1(::System::Collections::Generic::KeyValuePair_2<::StringW, bool> kv);

  /// @brief Method <ValidateEndObject>b__51_2, addr 0x28fadb0, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW _ValidateEndObject_b__51_2(::System::Collections::Generic::KeyValuePair_2<::StringW, bool> kv);

  /// @brief Method <WriteToken>b__50_0, addr 0x28fad0c, size 0x20, virtual false, abstract: false, final false
  inline bool _WriteToken_b__50_0(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method <WriteToken>b__50_1, addr 0x28fad2c, size 0x18, virtual false, abstract: false, final false
  inline bool _WriteToken_b__50_1(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method <WriteToken>b__50_2, addr 0x28fad44, size 0x20, virtual false, abstract: false, final false
  inline bool _WriteToken_b__50_2(::Newtonsoft::Json::Schema::JsonSchemaModel* s);

  /// @brief Method .ctor, addr 0x28fad04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::__JsonValidatingReader____c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__50_0();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__50_1();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* getStaticF___9__50_2();

  static inline ::System::Func_2<bool, bool>* getStaticF___9__51_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, bool>* getStaticF___9__51_1();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, ::StringW>* getStaticF___9__51_2();

  static inline void setStaticF___9(::Newtonsoft::Json::__JsonValidatingReader____c* value);

  static inline void setStaticF___9__50_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__50_1(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__50_2(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaModel*, bool>* value);

  static inline void setStaticF___9__51_0(::System::Func_2<bool, bool>* value);

  static inline void setStaticF___9__51_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, bool>* value);

  static inline void setStaticF___9__51_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, bool>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonValidatingReader____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonValidatingReader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonValidatingReader____c(__JsonValidatingReader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonValidatingReader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonValidatingReader____c(__JsonValidatingReader____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonValidatingReader____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Type: Newtonsoft.Json::JsonValidatingReader
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonValidatingReader*
class CORDL_TYPE JsonValidatingReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  using SchemaScope = ::Newtonsoft::Json::__JsonValidatingReader__SchemaScope;

  using __c = ::Newtonsoft::Json::__JsonValidatingReader____c;

  __declspec(property(get = get_CurrentMemberSchemas))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* CurrentMemberSchemas;

  __declspec(property(get = get_CurrentSchemas))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* CurrentSchemas;

  __declspec(property(get = get_Depth)) int32_t Depth;

  /// @brief Field EmptySchemaList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptySchemaList, put = setStaticF_EmptySchemaList))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* EmptySchemaList;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t Newtonsoft_Json_IJsonLineInfo_LineNumber;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t Newtonsoft_Json_IJsonLineInfo_LinePosition;

  __declspec(property(get = get_Path))::StringW Path;

  __declspec(property(get = get_QuoteChar, put = set_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_Reader))::Newtonsoft::Json::JsonReader* Reader;

  __declspec(property(get = get_Schema, put = set_Schema))::Newtonsoft::Json::Schema::JsonSchema* Schema;

  __declspec(property(get = get_TokenType))::Newtonsoft::Json::JsonToken TokenType;

  /// @brief Field ValidationEventHandler, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_ValidationEventHandler, put = __cordl_internal_set_ValidationEventHandler))::Newtonsoft::Json::Schema::ValidationEventHandler* ValidationEventHandler;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  /// @brief Field _currentScope, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__currentScope, put = __cordl_internal_set__currentScope))::Newtonsoft::Json::__JsonValidatingReader__SchemaScope* _currentScope;

  /// @brief Field _model, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__model, put = __cordl_internal_set__model))::Newtonsoft::Json::Schema::JsonSchemaModel* _model;

  /// @brief Field _reader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader))::Newtonsoft::Json::JsonReader* _reader;

  /// @brief Field _schema, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__schema, put = __cordl_internal_set__schema))::Newtonsoft::Json::Schema::JsonSchema* _schema;

  /// @brief Field _stack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack))::System::Collections::Generic::Stack_1<::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*>* _stack;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  /// @brief Method Close, addr 0x28f56c8, size 0x3c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method FloatingPointRemainder, addr 0x28fa190, size 0x6c, virtual false, abstract: false, final false
  static inline double_t FloatingPointRemainder(double_t dividend, double_t divisor);

  /// @brief Method GetCurrentNodeSchemaType, addr 0x28f5840, size 0x100, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> GetCurrentNodeSchemaType();

  /// @brief Method IsPropertyDefinied, addr 0x28fa1fc, size 0x43c, virtual false, abstract: false, final false
  inline bool IsPropertyDefinied(::Newtonsoft::Json::Schema::JsonSchemaModel* schema, ::StringW propertyName);

  /// @brief Method IsZero, addr 0x28fa124, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsZero(double_t value);

  static inline ::Newtonsoft::Json::JsonValidatingReader* New_ctor(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo, addr 0x28fa660, size 0xb4, virtual true, abstract: false, final true
  inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber, addr 0x28fa714, size 0xb8, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition, addr 0x28fa7cc, size 0xb8, virtual true, abstract: false, final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition();

  /// @brief Method OnValidationEvent, addr 0x28f54e0, size 0xa0, virtual false, abstract: false, final false
  inline void OnValidationEvent(::Newtonsoft::Json::Schema::JsonSchemaException* exception);

  /// @brief Method Pop, addr 0x28f3f70, size 0xa4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::__JsonValidatingReader__SchemaScope* Pop();

  /// @brief Method ProcessValue, addr 0x28f77dc, size 0x464, virtual false, abstract: false, final false
  inline void ProcessValue();

  /// @brief Method Push, addr 0x28f3f10, size 0x60, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope* scope);

  /// @brief Method RaiseError, addr 0x28f518c, size 0x354, virtual false, abstract: false, final false
  inline void RaiseError(::StringW message, ::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method Read, addr 0x28f741c, size 0x64, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAsBoolean, addr 0x28f72ec, size 0x44, virtual true, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ReadAsBytes, addr 0x28f71e0, size 0x44, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadAsDateTime, addr 0x28f7374, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadAsDateTimeOffset, addr 0x28f73c0, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method ReadAsDecimal, addr 0x28f7224, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadAsDouble, addr 0x28f72a0, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method ReadAsInt32, addr 0x28f5940, size 0x44, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadAsString, addr 0x28f7330, size 0x44, virtual true, abstract: false, final false
  inline ::StringW ReadAsString();

  /// @brief Method TestType, addr 0x28f9fe0, size 0x144, virtual false, abstract: false, final false
  inline bool TestType(::Newtonsoft::Json::Schema::JsonSchemaModel* currentSchema, ::Newtonsoft::Json::Schema::JsonSchemaType currentType);

  /// @brief Method ValidateArray, addr 0x28fa638, size 0x14, virtual false, abstract: false, final false
  inline bool ValidateArray(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateBoolean, addr 0x28f999c, size 0x40, virtual false, abstract: false, final false
  inline void ValidateBoolean(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateCurrentToken, addr 0x28f5984, size 0x185c, virtual false, abstract: false, final false
  inline void ValidateCurrentToken();

  /// @brief Method ValidateEndArray, addr 0x28f9d7c, size 0x1e4, virtual false, abstract: false, final false
  inline void ValidateEndArray(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateEndObject, addr 0x28f9a1c, size 0x360, virtual false, abstract: false, final false
  inline void ValidateEndObject(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateFloat, addr 0x28f8fa8, size 0x4c8, virtual false, abstract: false, final false
  inline void ValidateFloat(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateInteger, addr 0x28f89a0, size 0x608, virtual false, abstract: false, final false
  inline void ValidateInteger(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateNotDisallowed, addr 0x28f5704, size 0x13c, virtual false, abstract: false, final false
  inline void ValidateNotDisallowed(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateNull, addr 0x28f99dc, size 0x40, virtual false, abstract: false, final false
  inline void ValidateNull(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateObject, addr 0x28fa64c, size 0x14, virtual false, abstract: false, final false
  inline bool ValidateObject(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidatePropertyName, addr 0x28f87f8, size 0x1a8, virtual false, abstract: false, final false
  inline void ValidatePropertyName(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method ValidateString, addr 0x28f9470, size 0x52c, virtual false, abstract: false, final false
  inline void ValidateString(::Newtonsoft::Json::Schema::JsonSchemaModel* schema);

  /// @brief Method WriteToken, addr 0x28f7c40, size 0xbb8, virtual false, abstract: false, final false
  inline void WriteToken(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* schemas);

  constexpr ::Newtonsoft::Json::Schema::ValidationEventHandler*& __cordl_internal_get_ValidationEventHandler();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::ValidationEventHandler*> const& __cordl_internal_get_ValidationEventHandler() const;

  constexpr ::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*& __cordl_internal_get__currentScope();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*> const& __cordl_internal_get__currentScope() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel*& __cordl_internal_get__model();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchemaModel*> const& __cordl_internal_get__model() const;

  constexpr ::Newtonsoft::Json::JsonReader*& __cordl_internal_get__reader();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonReader*> const& __cordl_internal_get__reader() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchema*& __cordl_internal_get__schema();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchema*> const& __cordl_internal_get__schema() const;

  constexpr ::System::Collections::Generic::Stack_1<::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*>*& __cordl_internal_get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*>*> const& __cordl_internal_get__stack() const;

  constexpr void __cordl_internal_set_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set__currentScope(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope* value);

  constexpr void __cordl_internal_set__model(::Newtonsoft::Json::Schema::JsonSchemaModel* value);

  constexpr void __cordl_internal_set__reader(::Newtonsoft::Json::JsonReader* value);

  constexpr void __cordl_internal_set__schema(::Newtonsoft::Json::Schema::JsonSchema* value);

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::Stack_1<::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*>* value);

  /// @brief Method .ctor, addr 0x28f5580, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method add_ValidationEventHandler, addr 0x28f3cfc, size 0x9c, virtual false, abstract: false, final false
  inline void add_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* value);

  static inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* getStaticF_EmptySchemaList();

  /// @brief Method get_CurrentMemberSchemas, addr 0x28f4030, size 0x115c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_CurrentMemberSchemas();

  /// @brief Method get_CurrentSchemas, addr 0x28f4014, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_CurrentSchemas();

  /// @brief Method get_Depth, addr 0x28f3e58, size 0x24, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_Path, addr 0x28f3e7c, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_QuoteChar, addr 0x28f3ea0, size 0x24, virtual true, abstract: false, final false
  inline char16_t get_QuoteChar();

  /// @brief Method get_Reader, addr 0x28f56c0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReader* get_Reader();

  /// @brief Method get_Schema, addr 0x28f5634, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* get_Schema();

  /// @brief Method get_TokenType, addr 0x28f3ec8, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::JsonToken get_TokenType();

  /// @brief Method get_Value, addr 0x28f3e34, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* get_Value();

  /// @brief Method get_ValueType, addr 0x28f3eec, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

  /// @brief Method remove_ValidationEventHandler, addr 0x28f3d98, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ValidationEventHandler(::Newtonsoft::Json::Schema::ValidationEventHandler* value);

  static inline void setStaticF_EmptySchemaList(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  /// @brief Method set_QuoteChar, addr 0x28f3ec4, size 0x4, virtual true, abstract: false, final false
  inline void set_QuoteChar(char16_t value);

  /// @brief Method set_Schema, addr 0x28f563c, size 0x84, virtual false, abstract: false, final false
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

  /// @brief Field _reader, offset: 0x78, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* ____reader;

  /// @brief Field _stack, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*>* ____stack;

  /// @brief Field _schema, offset: 0x88, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchema* ____schema;

  /// @brief Field _model, offset: 0x90, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaModel* ____model;

  /// @brief Field _currentScope, offset: 0x98, size: 0x8, def value: None
  ::Newtonsoft::Json::__JsonValidatingReader__SchemaScope* ____currentScope;

  /// @brief Field ValidationEventHandler, offset: 0xa0, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::ValidationEventHandler* ___ValidationEventHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonValidatingReader, 0xa8>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____reader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____stack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____schema) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____model) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ____currentScope) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonValidatingReader, ___ValidationEventHandler) == 0xa0, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::GlobalNamespace::__JsonValidatingReader__SchemaScope____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__JsonValidatingReader__SchemaScope____c*, "Newtonsoft.Json", "JsonValidatingReader/SchemaScope/<>c");
NEED_NO_BOX(::Newtonsoft::Json::JsonValidatingReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonValidatingReader*, "Newtonsoft.Json", "JsonValidatingReader");
NEED_NO_BOX(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonValidatingReader__SchemaScope*, "Newtonsoft.Json", "JsonValidatingReader/SchemaScope");
NEED_NO_BOX(::Newtonsoft::Json::__JsonValidatingReader____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonValidatingReader____c*, "Newtonsoft.Json", "JsonValidatingReader/<>c");
