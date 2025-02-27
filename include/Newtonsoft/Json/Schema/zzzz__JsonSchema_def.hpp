#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchema.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSchema)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaResolver;
}
namespace Newtonsoft::Json::Schema {
struct JsonSchemaType;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchema);
// Dependencies Newtonsoft.Json.Schema.JsonSchemaType, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchema
class CORDL_TYPE JsonSchema : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AdditionalItems, put = set_AdditionalItems)) ::Newtonsoft::Json::Schema::JsonSchema* AdditionalItems;

  __declspec(property(get = get_AdditionalProperties, put = set_AdditionalProperties)) ::Newtonsoft::Json::Schema::JsonSchema* AdditionalProperties;

  __declspec(property(get = get_AllowAdditionalItems, put = set_AllowAdditionalItems)) bool AllowAdditionalItems;

  __declspec(property(get = get_AllowAdditionalProperties, put = set_AllowAdditionalProperties)) bool AllowAdditionalProperties;

  __declspec(property(get = get_Default, put = set_Default)) ::Newtonsoft::Json::Linq::JToken* Default;

  __declspec(property(get = get_DeferredReference, put = set_DeferredReference)) ::StringW DeferredReference;

  __declspec(property(get = get_Description, put = set_Description)) ::StringW Description;

  __declspec(property(get = get_Disallow, put = set_Disallow)) ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> Disallow;

  __declspec(property(get = get_DivisibleBy, put = set_DivisibleBy)) ::System::Nullable_1<double_t> DivisibleBy;

  __declspec(property(get = get_Enum, put = set_Enum)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Enum;

  __declspec(property(get = get_ExclusiveMaximum, put = set_ExclusiveMaximum)) ::System::Nullable_1<bool> ExclusiveMaximum;

  __declspec(property(get = get_ExclusiveMinimum, put = set_ExclusiveMinimum)) ::System::Nullable_1<bool> ExclusiveMinimum;

  __declspec(property(get = get_Extends, put = set_Extends)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* Extends;

  __declspec(property(get = get_Format, put = set_Format)) ::StringW Format;

  __declspec(property(get = get_Hidden, put = set_Hidden)) ::System::Nullable_1<bool> Hidden;

  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  __declspec(property(get = get_InternalId)) ::StringW InternalId;

  __declspec(property(get = get_Items, put = set_Items)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* Items;

  __declspec(property(get = get_Location, put = set_Location)) ::StringW Location;

  __declspec(property(get = get_Maximum, put = set_Maximum)) ::System::Nullable_1<double_t> Maximum;

  __declspec(property(get = get_MaximumItems, put = set_MaximumItems)) ::System::Nullable_1<int32_t> MaximumItems;

  __declspec(property(get = get_MaximumLength, put = set_MaximumLength)) ::System::Nullable_1<int32_t> MaximumLength;

  __declspec(property(get = get_Minimum, put = set_Minimum)) ::System::Nullable_1<double_t> Minimum;

  __declspec(property(get = get_MinimumItems, put = set_MinimumItems)) ::System::Nullable_1<int32_t> MinimumItems;

  __declspec(property(get = get_MinimumLength, put = set_MinimumLength)) ::System::Nullable_1<int32_t> MinimumLength;

  __declspec(property(get = get_Pattern, put = set_Pattern)) ::StringW Pattern;

  __declspec(property(get = get_PatternProperties, put = set_PatternProperties)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* PatternProperties;

  __declspec(property(get = get_PositionalItemsValidation, put = set_PositionalItemsValidation)) bool PositionalItemsValidation;

  __declspec(property(get = get_Properties, put = set_Properties)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* Properties;

  __declspec(property(get = get_ReadOnly, put = set_ReadOnly)) ::System::Nullable_1<bool> ReadOnly;

  __declspec(property(get = get_ReferencesResolved, put = set_ReferencesResolved)) bool ReferencesResolved;

  __declspec(property(get = get_Required, put = set_Required)) ::System::Nullable_1<bool> Required;

  __declspec(property(get = get_Requires, put = set_Requires)) ::StringW Requires;

  __declspec(property(get = get_Title, put = set_Title)) ::StringW Title;

  __declspec(property(get = get_Transient, put = set_Transient)) ::System::Nullable_1<bool> Transient;

  __declspec(property(get = get_Type, put = set_Type)) ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> Type;

  __declspec(property(get = get_UniqueItems, put = set_UniqueItems)) bool UniqueItems;

  /// @brief Field <AdditionalItems>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalItems_k__BackingField,
                      put = __cordl_internal_set__AdditionalItems_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchema* _AdditionalItems_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalProperties_k__BackingField,
                      put = __cordl_internal_set__AdditionalProperties_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchema* _AdditionalProperties_k__BackingField;

  /// @brief Field <AllowAdditionalItems>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowAdditionalItems_k__BackingField, put = __cordl_internal_set__AllowAdditionalItems_k__BackingField)) bool _AllowAdditionalItems_k__BackingField;

  /// @brief Field <AllowAdditionalProperties>k__BackingField, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowAdditionalProperties_k__BackingField,
                      put = __cordl_internal_set__AllowAdditionalProperties_k__BackingField)) bool _AllowAdditionalProperties_k__BackingField;

  /// @brief Field <Default>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__Default_k__BackingField, put = __cordl_internal_set__Default_k__BackingField)) ::Newtonsoft::Json::Linq::JToken* _Default_k__BackingField;

  /// @brief Field <DeferredReference>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__DeferredReference_k__BackingField, put = __cordl_internal_set__DeferredReference_k__BackingField)) ::StringW _DeferredReference_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Description_k__BackingField, put = __cordl_internal_set__Description_k__BackingField)) ::StringW _Description_k__BackingField;

  /// @brief Field <Disallow>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__Disallow_k__BackingField, put = __cordl_internal_set__Disallow_k__BackingField)) ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>
      _Disallow_k__BackingField;

  /// @brief Field <DivisibleBy>k__BackingField, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__DivisibleBy_k__BackingField, put = __cordl_internal_set__DivisibleBy_k__BackingField)) ::System::Nullable_1<double_t> _DivisibleBy_k__BackingField;

  /// @brief Field <Enum>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__Enum_k__BackingField,
                      put = __cordl_internal_set__Enum_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* _Enum_k__BackingField;

  /// @brief Field <ExclusiveMaximum>k__BackingField, offset 0x82, size 0x2
  __declspec(property(get = __cordl_internal_get__ExclusiveMaximum_k__BackingField, put = __cordl_internal_set__ExclusiveMaximum_k__BackingField)) ::System::Nullable_1<bool>
      _ExclusiveMaximum_k__BackingField;

  /// @brief Field <ExclusiveMinimum>k__BackingField, offset 0x80, size 0x2
  __declspec(property(get = __cordl_internal_get__ExclusiveMinimum_k__BackingField, put = __cordl_internal_set__ExclusiveMinimum_k__BackingField)) ::System::Nullable_1<bool>
      _ExclusiveMinimum_k__BackingField;

  /// @brief Field <Extends>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__Extends_k__BackingField,
                      put = __cordl_internal_set__Extends_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* _Extends_k__BackingField;

  /// @brief Field <Format>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__Format_k__BackingField, put = __cordl_internal_set__Format_k__BackingField)) ::StringW _Format_k__BackingField;

  /// @brief Field <Hidden>k__BackingField, offset 0x24, size 0x2
  __declspec(property(get = __cordl_internal_get__Hidden_k__BackingField, put = __cordl_internal_set__Hidden_k__BackingField)) ::System::Nullable_1<bool> _Hidden_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField)) ::StringW _Id_k__BackingField;

  /// @brief Field <Items>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__Items_k__BackingField,
                      put = __cordl_internal_set__Items_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* _Items_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__Location_k__BackingField, put = __cordl_internal_set__Location_k__BackingField)) ::StringW _Location_k__BackingField;

  /// @brief Field <MaximumItems>k__BackingField, offset 0x8c, size 0x8
  __declspec(property(get = __cordl_internal_get__MaximumItems_k__BackingField, put = __cordl_internal_set__MaximumItems_k__BackingField)) ::System::Nullable_1<int32_t> _MaximumItems_k__BackingField;

  /// @brief Field <MaximumLength>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__MaximumLength_k__BackingField, put = __cordl_internal_set__MaximumLength_k__BackingField)) ::System::Nullable_1<int32_t>
      _MaximumLength_k__BackingField;

  /// @brief Field <Maximum>k__BackingField, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__Maximum_k__BackingField, put = __cordl_internal_set__Maximum_k__BackingField)) ::System::Nullable_1<double_t> _Maximum_k__BackingField;

  /// @brief Field <MinimumItems>k__BackingField, offset 0x84, size 0x8
  __declspec(property(get = __cordl_internal_get__MinimumItems_k__BackingField, put = __cordl_internal_set__MinimumItems_k__BackingField)) ::System::Nullable_1<int32_t> _MinimumItems_k__BackingField;

  /// @brief Field <MinimumLength>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__MinimumLength_k__BackingField, put = __cordl_internal_set__MinimumLength_k__BackingField)) ::System::Nullable_1<int32_t>
      _MinimumLength_k__BackingField;

  /// @brief Field <Minimum>k__BackingField, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__Minimum_k__BackingField, put = __cordl_internal_set__Minimum_k__BackingField)) ::System::Nullable_1<double_t> _Minimum_k__BackingField;

  /// @brief Field <PatternProperties>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__PatternProperties_k__BackingField,
                      put = __cordl_internal_set__PatternProperties_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*
      _PatternProperties_k__BackingField;

  /// @brief Field <Pattern>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Pattern_k__BackingField, put = __cordl_internal_set__Pattern_k__BackingField)) ::StringW _Pattern_k__BackingField;

  /// @brief Field <PositionalItemsValidation>k__BackingField, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__PositionalItemsValidation_k__BackingField,
                      put = __cordl_internal_set__PositionalItemsValidation_k__BackingField)) bool _PositionalItemsValidation_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Properties_k__BackingField,
      put = __cordl_internal_set__Properties_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* _Properties_k__BackingField;

  /// @brief Field <ReadOnly>k__BackingField, offset 0x22, size 0x2
  __declspec(property(get = __cordl_internal_get__ReadOnly_k__BackingField, put = __cordl_internal_set__ReadOnly_k__BackingField)) ::System::Nullable_1<bool> _ReadOnly_k__BackingField;

  /// @brief Field <ReferencesResolved>k__BackingField, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get__ReferencesResolved_k__BackingField, put = __cordl_internal_set__ReferencesResolved_k__BackingField)) bool _ReferencesResolved_k__BackingField;

  /// @brief Field <Required>k__BackingField, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__Required_k__BackingField, put = __cordl_internal_set__Required_k__BackingField)) ::System::Nullable_1<bool> _Required_k__BackingField;

  /// @brief Field <Requires>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__Requires_k__BackingField, put = __cordl_internal_set__Requires_k__BackingField)) ::StringW _Requires_k__BackingField;

  /// @brief Field <Title>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Title_k__BackingField, put = __cordl_internal_set__Title_k__BackingField)) ::StringW _Title_k__BackingField;

  /// @brief Field <Transient>k__BackingField, offset 0x26, size 0x2
  __declspec(property(get = __cordl_internal_get__Transient_k__BackingField, put = __cordl_internal_set__Transient_k__BackingField)) ::System::Nullable_1<bool> _Transient_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>
      _Type_k__BackingField;

  /// @brief Field <UniqueItems>k__BackingField, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get__UniqueItems_k__BackingField, put = __cordl_internal_set__UniqueItems_k__BackingField)) bool _UniqueItems_k__BackingField;

  /// @brief Field _internalId, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__internalId, put = __cordl_internal_set__internalId)) ::StringW _internalId;

  static inline ::Newtonsoft::Json::Schema::JsonSchema* New_ctor();

  /// @brief Method Parse, addr 0x3f0f560, size 0x58, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Schema::JsonSchema* Parse(::StringW json);

  /// @brief Method Parse, addr 0x3f0f5b8, size 0x1f8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Schema::JsonSchema* Parse(::StringW json, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

  /// @brief Method Read, addr 0x3f0f224, size 0x58, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Schema::JsonSchema* Read(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Read, addr 0x3f0f2fc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Schema::JsonSchema* Read(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

  /// @brief Method ToString, addr 0x3f109a0, size 0xf4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method WriteTo, addr 0x3f0f7b0, size 0x68, virtual false, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer);

  /// @brief Method WriteTo, addr 0x3f0f818, size 0xc8, virtual false, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

  constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& __cordl_internal_get__AdditionalItems_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchema*& __cordl_internal_get__AdditionalItems_k__BackingField();

  constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& __cordl_internal_get__AdditionalProperties_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchema*& __cordl_internal_get__AdditionalProperties_k__BackingField();

  constexpr bool const& __cordl_internal_get__AllowAdditionalItems_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowAdditionalItems_k__BackingField();

  constexpr bool const& __cordl_internal_get__AllowAdditionalProperties_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowAdditionalProperties_k__BackingField();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__Default_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__Default_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__DeferredReference_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__DeferredReference_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Description_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> const& __cordl_internal_get__Disallow_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>& __cordl_internal_get__Disallow_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__DivisibleBy_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__DivisibleBy_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get__Enum_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__Enum_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__ExclusiveMaximum_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__ExclusiveMaximum_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__ExclusiveMinimum_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__ExclusiveMinimum_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* const& __cordl_internal_get__Extends_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__Extends_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Format_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Format_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__Hidden_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__Hidden_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Id_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* const& __cordl_internal_get__Items_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__Items_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Location_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Location_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__MaximumItems_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__MaximumItems_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__MaximumLength_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__MaximumLength_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__Maximum_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__Maximum_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__MinimumItems_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__MinimumItems_k__BackingField();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__MinimumLength_k__BackingField() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__MinimumLength_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__Minimum_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__Minimum_k__BackingField();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* const& __cordl_internal_get__PatternProperties_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__PatternProperties_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Pattern_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Pattern_k__BackingField();

  constexpr bool const& __cordl_internal_get__PositionalItemsValidation_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PositionalItemsValidation_k__BackingField();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* const& __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__ReadOnly_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__ReadOnly_k__BackingField();

  constexpr bool const& __cordl_internal_get__ReferencesResolved_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ReferencesResolved_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__Required_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__Required_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Requires_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Requires_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Title_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Title_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__Transient_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__Transient_k__BackingField();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType>& __cordl_internal_get__Type_k__BackingField();

  constexpr bool const& __cordl_internal_get__UniqueItems_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UniqueItems_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__internalId() const;

  constexpr ::StringW& __cordl_internal_get__internalId();

  constexpr void __cordl_internal_set__AdditionalItems_k__BackingField(::Newtonsoft::Json::Schema::JsonSchema* value);

  constexpr void __cordl_internal_set__AdditionalProperties_k__BackingField(::Newtonsoft::Json::Schema::JsonSchema* value);

  constexpr void __cordl_internal_set__AllowAdditionalItems_k__BackingField(bool value);

  constexpr void __cordl_internal_set__AllowAdditionalProperties_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Default_k__BackingField(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set__DeferredReference_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Description_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Disallow_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> value);

  constexpr void __cordl_internal_set__DivisibleBy_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__Enum_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set__ExclusiveMaximum_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__ExclusiveMinimum_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__Extends_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* value);

  constexpr void __cordl_internal_set__Format_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Hidden_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__Id_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* value);

  constexpr void __cordl_internal_set__Location_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__MaximumItems_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__MaximumLength_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Maximum_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__MinimumItems_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__MinimumLength_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Minimum_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__PatternProperties_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* value);

  constexpr void __cordl_internal_set__Pattern_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__PositionalItemsValidation_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Properties_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* value);

  constexpr void __cordl_internal_set__ReadOnly_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__ReferencesResolved_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Required_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__Requires_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Title_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Transient_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> value);

  constexpr void __cordl_internal_set__UniqueItems_k__BackingField(bool value);

  constexpr void __cordl_internal_set__internalId(::StringW value);

  /// @brief Method .ctor, addr 0x3f0f1a0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AdditionalItems, addr 0x3f0f088, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* get_AdditionalItems();

  /// @brief Method get_AdditionalProperties, addr 0x3f0f0d0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* get_AdditionalProperties();

  /// @brief Method get_AllowAdditionalItems, addr 0x3f0f098, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowAdditionalItems();

  /// @brief Method get_AllowAdditionalProperties, addr 0x3f0f0f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowAdditionalProperties();

  /// @brief Method get_Default, addr 0x3f0f134, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Default();

  /// @brief Method get_DeferredReference, addr 0x3f0f17c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DeferredReference();

  /// @brief Method get_Description, addr 0x3f0ef98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Disallow, addr 0x3f0f124, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> get_Disallow();

  /// @brief Method get_DivisibleBy, addr 0x3f0efe8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_DivisibleBy();

  /// @brief Method get_Enum, addr 0x3f0f114, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_Enum();

  /// @brief Method get_ExclusiveMaximum, addr 0x3f0f034, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ExclusiveMaximum();

  /// @brief Method get_ExclusiveMinimum, addr 0x3f0f024, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ExclusiveMinimum();

  /// @brief Method get_Extends, addr 0x3f0f144, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* get_Extends();

  /// @brief Method get_Format, addr 0x3f0f154, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Format();

  /// @brief Method get_Hidden, addr 0x3f0ef78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_Hidden();

  /// @brief Method get_Id, addr 0x3f0ef38, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_InternalId, addr 0x3f0f174, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InternalId();

  /// @brief Method get_Items, addr 0x3f0f064, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* get_Items();

  /// @brief Method get_Location, addr 0x3f0f164, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Location();

  /// @brief Method get_Maximum, addr 0x3f0f010, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_Maximum();

  /// @brief Method get_MaximumItems, addr 0x3f0f054, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaximumItems();

  /// @brief Method get_MaximumLength, addr 0x3f0efd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaximumLength();

  /// @brief Method get_Minimum, addr 0x3f0effc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_Minimum();

  /// @brief Method get_MinimumItems, addr 0x3f0f044, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MinimumItems();

  /// @brief Method get_MinimumLength, addr 0x3f0efc8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MinimumLength();

  /// @brief Method get_Pattern, addr 0x3f0efb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Pattern();

  /// @brief Method get_PatternProperties, addr 0x3f0f0e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* get_PatternProperties();

  /// @brief Method get_PositionalItemsValidation, addr 0x3f0f074, size 0x8, virtual false, abstract: false, final false
  inline bool get_PositionalItemsValidation();

  /// @brief Method get_Properties, addr 0x3f0f0c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* get_Properties();

  /// @brief Method get_ReadOnly, addr 0x3f0ef68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_ReadOnly();

  /// @brief Method get_ReferencesResolved, addr 0x3f0f18c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReferencesResolved();

  /// @brief Method get_Required, addr 0x3f0ef58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_Required();

  /// @brief Method get_Requires, addr 0x3f0f104, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Requires();

  /// @brief Method get_Title, addr 0x3f0ef48, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Title();

  /// @brief Method get_Transient, addr 0x3f0ef88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_Transient();

  /// @brief Method get_Type, addr 0x3f0efa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> get_Type();

  /// @brief Method get_UniqueItems, addr 0x3f0f0ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_UniqueItems();

  /// @brief Method set_AdditionalItems, addr 0x3f0f090, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchema* value);

  /// @brief Method set_AdditionalProperties, addr 0x3f0f0d8, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchema* value);

  /// @brief Method set_AllowAdditionalItems, addr 0x3f0f0a0, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowAdditionalItems(bool value);

  /// @brief Method set_AllowAdditionalProperties, addr 0x3f0f0f8, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowAdditionalProperties(bool value);

  /// @brief Method set_Default, addr 0x3f0f13c, size 0x8, virtual false, abstract: false, final false
  inline void set_Default(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method set_DeferredReference, addr 0x3f0f184, size 0x8, virtual false, abstract: false, final false
  inline void set_DeferredReference(::StringW value);

  /// @brief Method set_Description, addr 0x3f0efa0, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

  /// @brief Method set_Disallow, addr 0x3f0f12c, size 0x8, virtual false, abstract: false, final false
  inline void set_Disallow(::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> value);

  /// @brief Method set_DivisibleBy, addr 0x3f0eff4, size 0x8, virtual false, abstract: false, final false
  inline void set_DivisibleBy(::System::Nullable_1<double_t> value);

  /// @brief Method set_Enum, addr 0x3f0f11c, size 0x8, virtual false, abstract: false, final false
  inline void set_Enum(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method set_ExclusiveMaximum, addr 0x3f0f03c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveMaximum(::System::Nullable_1<bool> value);

  /// @brief Method set_ExclusiveMinimum, addr 0x3f0f02c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveMinimum(::System::Nullable_1<bool> value);

  /// @brief Method set_Extends, addr 0x3f0f14c, size 0x8, virtual false, abstract: false, final false
  inline void set_Extends(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* value);

  /// @brief Method set_Format, addr 0x3f0f15c, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::StringW value);

  /// @brief Method set_Hidden, addr 0x3f0ef80, size 0x8, virtual false, abstract: false, final false
  inline void set_Hidden(::System::Nullable_1<bool> value);

  /// @brief Method set_Id, addr 0x3f0ef40, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_Items, addr 0x3f0f06c, size 0x8, virtual false, abstract: false, final false
  inline void set_Items(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* value);

  /// @brief Method set_Location, addr 0x3f0f16c, size 0x8, virtual false, abstract: false, final false
  inline void set_Location(::StringW value);

  /// @brief Method set_Maximum, addr 0x3f0f01c, size 0x8, virtual false, abstract: false, final false
  inline void set_Maximum(::System::Nullable_1<double_t> value);

  /// @brief Method set_MaximumItems, addr 0x3f0f05c, size 0x8, virtual false, abstract: false, final false
  inline void set_MaximumItems(::System::Nullable_1<int32_t> value);

  /// @brief Method set_MaximumLength, addr 0x3f0efe0, size 0x8, virtual false, abstract: false, final false
  inline void set_MaximumLength(::System::Nullable_1<int32_t> value);

  /// @brief Method set_Minimum, addr 0x3f0f008, size 0x8, virtual false, abstract: false, final false
  inline void set_Minimum(::System::Nullable_1<double_t> value);

  /// @brief Method set_MinimumItems, addr 0x3f0f04c, size 0x8, virtual false, abstract: false, final false
  inline void set_MinimumItems(::System::Nullable_1<int32_t> value);

  /// @brief Method set_MinimumLength, addr 0x3f0efd0, size 0x8, virtual false, abstract: false, final false
  inline void set_MinimumLength(::System::Nullable_1<int32_t> value);

  /// @brief Method set_Pattern, addr 0x3f0efc0, size 0x8, virtual false, abstract: false, final false
  inline void set_Pattern(::StringW value);

  /// @brief Method set_PatternProperties, addr 0x3f0f0e8, size 0x8, virtual false, abstract: false, final false
  inline void set_PatternProperties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* value);

  /// @brief Method set_PositionalItemsValidation, addr 0x3f0f07c, size 0xc, virtual false, abstract: false, final false
  inline void set_PositionalItemsValidation(bool value);

  /// @brief Method set_Properties, addr 0x3f0f0c8, size 0x8, virtual false, abstract: false, final false
  inline void set_Properties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* value);

  /// @brief Method set_ReadOnly, addr 0x3f0ef70, size 0x8, virtual false, abstract: false, final false
  inline void set_ReadOnly(::System::Nullable_1<bool> value);

  /// @brief Method set_ReferencesResolved, addr 0x3f0f194, size 0xc, virtual false, abstract: false, final false
  inline void set_ReferencesResolved(bool value);

  /// @brief Method set_Required, addr 0x3f0ef60, size 0x8, virtual false, abstract: false, final false
  inline void set_Required(::System::Nullable_1<bool> value);

  /// @brief Method set_Requires, addr 0x3f0f10c, size 0x8, virtual false, abstract: false, final false
  inline void set_Requires(::StringW value);

  /// @brief Method set_Title, addr 0x3f0ef50, size 0x8, virtual false, abstract: false, final false
  inline void set_Title(::StringW value);

  /// @brief Method set_Transient, addr 0x3f0ef90, size 0x8, virtual false, abstract: false, final false
  inline void set_Transient(::System::Nullable_1<bool> value);

  /// @brief Method set_Type, addr 0x3f0efb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> value);

  /// @brief Method set_UniqueItems, addr 0x3f0f0b4, size 0xc, virtual false, abstract: false, final false
  inline void set_UniqueItems(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchema();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchema", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchema(JsonSchema&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchema", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchema(JsonSchema const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10357 };

  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Id_k__BackingField;

  /// @brief Field <Title>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Title_k__BackingField;

  /// @brief Field <Required>k__BackingField, offset: 0x20, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____Required_k__BackingField;

  /// @brief Field <ReadOnly>k__BackingField, offset: 0x22, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____ReadOnly_k__BackingField;

  /// @brief Field <Hidden>k__BackingField, offset: 0x24, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____Hidden_k__BackingField;

  /// @brief Field <Transient>k__BackingField, offset: 0x26, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____Transient_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Description_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> ____Type_k__BackingField;

  /// @brief Field <Pattern>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____Pattern_k__BackingField;

  /// @brief Field <MinimumLength>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MinimumLength_k__BackingField;

  /// @brief Field <MaximumLength>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MaximumLength_k__BackingField;

  /// @brief Field <DivisibleBy>k__BackingField, offset: 0x50, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____DivisibleBy_k__BackingField;

  /// @brief Field <Minimum>k__BackingField, offset: 0x60, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____Minimum_k__BackingField;

  /// @brief Field <Maximum>k__BackingField, offset: 0x70, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____Maximum_k__BackingField;

  /// @brief Field <ExclusiveMinimum>k__BackingField, offset: 0x80, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____ExclusiveMinimum_k__BackingField;

  /// @brief Field <ExclusiveMaximum>k__BackingField, offset: 0x82, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____ExclusiveMaximum_k__BackingField;

  /// @brief Field <MinimumItems>k__BackingField, offset: 0x84, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MinimumItems_k__BackingField;

  /// @brief Field <MaximumItems>k__BackingField, offset: 0x8c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MaximumItems_k__BackingField;

  /// @brief Field <Items>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* ____Items_k__BackingField;

  /// @brief Field <PositionalItemsValidation>k__BackingField, offset: 0xa0, size: 0x1, def value: None
  bool ____PositionalItemsValidation_k__BackingField;

  /// @brief Field <AdditionalItems>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchema* ____AdditionalItems_k__BackingField;

  /// @brief Field <AllowAdditionalItems>k__BackingField, offset: 0xb0, size: 0x1, def value: None
  bool ____AllowAdditionalItems_k__BackingField;

  /// @brief Field <UniqueItems>k__BackingField, offset: 0xb1, size: 0x1, def value: None
  bool ____UniqueItems_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* ____Properties_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchema* ____AdditionalProperties_k__BackingField;

  /// @brief Field <PatternProperties>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* ____PatternProperties_k__BackingField;

  /// @brief Field <AllowAdditionalProperties>k__BackingField, offset: 0xd0, size: 0x1, def value: None
  bool ____AllowAdditionalProperties_k__BackingField;

  /// @brief Field <Requires>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::StringW ____Requires_k__BackingField;

  /// @brief Field <Enum>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ____Enum_k__BackingField;

  /// @brief Field <Disallow>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> ____Disallow_k__BackingField;

  /// @brief Field <Default>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____Default_k__BackingField;

  /// @brief Field <Extends>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* ____Extends_k__BackingField;

  /// @brief Field <Format>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::StringW ____Format_k__BackingField;

  /// @brief Field <Location>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::StringW ____Location_k__BackingField;

  /// @brief Field _internalId, offset: 0x110, size: 0x8, def value: None
  ::StringW ____internalId;

  /// @brief Field <DeferredReference>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::StringW ____DeferredReference_k__BackingField;

  /// @brief Field <ReferencesResolved>k__BackingField, offset: 0x120, size: 0x1, def value: None
  bool ____ReferencesResolved_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Title_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Required_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____ReadOnly_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Hidden_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Transient_k__BackingField) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Description_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Type_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Pattern_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____MinimumLength_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____MaximumLength_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____DivisibleBy_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Minimum_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Maximum_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____ExclusiveMinimum_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____ExclusiveMaximum_k__BackingField) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____MinimumItems_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____MaximumItems_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Items_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____PositionalItemsValidation_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____AdditionalItems_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____AllowAdditionalItems_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____UniqueItems_k__BackingField) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Properties_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____AdditionalProperties_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____PatternProperties_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____AllowAdditionalProperties_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Requires_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Enum_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Disallow_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Default_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Extends_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Format_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____Location_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____internalId) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____DeferredReference_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchema, ____ReferencesResolved_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchema, 0x128>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchema);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchema*, "Newtonsoft.Json.Schema", "JsonSchema");
