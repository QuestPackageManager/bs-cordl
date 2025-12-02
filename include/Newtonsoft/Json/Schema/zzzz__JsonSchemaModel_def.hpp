#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSchemaModel)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Schema {
struct JsonSchemaType;
}
namespace Newtonsoft::Json::Schema {
class JsonSchema;
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
class JsonSchemaModel;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaModel);
// Dependencies Newtonsoft.Json.Schema.JsonSchemaType, System.Nullable`1<T>, System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaModel
class CORDL_TYPE JsonSchemaModel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AdditionalItems, put = set_AdditionalItems)) ::Newtonsoft::Json::Schema::JsonSchemaModel* AdditionalItems;

  __declspec(property(get = get_AdditionalProperties, put = set_AdditionalProperties)) ::Newtonsoft::Json::Schema::JsonSchemaModel* AdditionalProperties;

  __declspec(property(get = get_AllowAdditionalItems, put = set_AllowAdditionalItems)) bool AllowAdditionalItems;

  __declspec(property(get = get_AllowAdditionalProperties, put = set_AllowAdditionalProperties)) bool AllowAdditionalProperties;

  __declspec(property(get = get_Disallow, put = set_Disallow)) ::Newtonsoft::Json::Schema::JsonSchemaType Disallow;

  __declspec(property(get = get_DivisibleBy, put = set_DivisibleBy)) ::System::Nullable_1<double_t> DivisibleBy;

  __declspec(property(get = get_Enum, put = set_Enum)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* Enum;

  __declspec(property(get = get_ExclusiveMaximum, put = set_ExclusiveMaximum)) bool ExclusiveMaximum;

  __declspec(property(get = get_ExclusiveMinimum, put = set_ExclusiveMinimum)) bool ExclusiveMinimum;

  __declspec(property(get = get_Items, put = set_Items)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* Items;

  __declspec(property(get = get_Maximum, put = set_Maximum)) ::System::Nullable_1<double_t> Maximum;

  __declspec(property(get = get_MaximumItems, put = set_MaximumItems)) ::System::Nullable_1<int32_t> MaximumItems;

  __declspec(property(get = get_MaximumLength, put = set_MaximumLength)) ::System::Nullable_1<int32_t> MaximumLength;

  __declspec(property(get = get_Minimum, put = set_Minimum)) ::System::Nullable_1<double_t> Minimum;

  __declspec(property(get = get_MinimumItems, put = set_MinimumItems)) ::System::Nullable_1<int32_t> MinimumItems;

  __declspec(property(get = get_MinimumLength, put = set_MinimumLength)) ::System::Nullable_1<int32_t> MinimumLength;

  __declspec(property(get = get_PatternProperties,
                      put = set_PatternProperties)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* PatternProperties;

  __declspec(property(get = get_Patterns, put = set_Patterns)) ::System::Collections::Generic::IList_1<::StringW>* Patterns;

  __declspec(property(get = get_PositionalItemsValidation, put = set_PositionalItemsValidation)) bool PositionalItemsValidation;

  __declspec(property(get = get_Properties, put = set_Properties)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* Properties;

  __declspec(property(get = get_Required, put = set_Required)) bool Required;

  __declspec(property(get = get_Type, put = set_Type)) ::Newtonsoft::Json::Schema::JsonSchemaType Type;

  __declspec(property(get = get_UniqueItems, put = set_UniqueItems)) bool UniqueItems;

  /// @brief Field <AdditionalItems>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalItems_k__BackingField,
                      put = __cordl_internal_set__AdditionalItems_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchemaModel* _AdditionalItems_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalProperties_k__BackingField,
                      put = __cordl_internal_set__AdditionalProperties_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchemaModel* _AdditionalProperties_k__BackingField;

  /// @brief Field <AllowAdditionalItems>k__BackingField, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowAdditionalItems_k__BackingField, put = __cordl_internal_set__AllowAdditionalItems_k__BackingField)) bool _AllowAdditionalItems_k__BackingField;

  /// @brief Field <AllowAdditionalProperties>k__BackingField, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__AllowAdditionalProperties_k__BackingField,
                      put = __cordl_internal_set__AllowAdditionalProperties_k__BackingField)) bool _AllowAdditionalProperties_k__BackingField;

  /// @brief Field <Disallow>k__BackingField, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__Disallow_k__BackingField, put = __cordl_internal_set__Disallow_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchemaType _Disallow_k__BackingField;

  /// @brief Field <DivisibleBy>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__DivisibleBy_k__BackingField, put = __cordl_internal_set__DivisibleBy_k__BackingField)) ::System::Nullable_1<double_t> _DivisibleBy_k__BackingField;

  /// @brief Field <Enum>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__Enum_k__BackingField,
                      put = __cordl_internal_set__Enum_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* _Enum_k__BackingField;

  /// @brief Field <ExclusiveMaximum>k__BackingField, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__ExclusiveMaximum_k__BackingField, put = __cordl_internal_set__ExclusiveMaximum_k__BackingField)) bool _ExclusiveMaximum_k__BackingField;

  /// @brief Field <ExclusiveMinimum>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__ExclusiveMinimum_k__BackingField, put = __cordl_internal_set__ExclusiveMinimum_k__BackingField)) bool _ExclusiveMinimum_k__BackingField;

  /// @brief Field <Items>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__Items_k__BackingField,
                      put = __cordl_internal_set__Items_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* _Items_k__BackingField;

  /// @brief Field <MaximumItems>k__BackingField, offset 0x64, size 0x8
  __declspec(property(get = __cordl_internal_get__MaximumItems_k__BackingField, put = __cordl_internal_set__MaximumItems_k__BackingField)) ::System::Nullable_1<int32_t> _MaximumItems_k__BackingField;

  /// @brief Field <MaximumLength>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__MaximumLength_k__BackingField, put = __cordl_internal_set__MaximumLength_k__BackingField)) ::System::Nullable_1<int32_t>
      _MaximumLength_k__BackingField;

  /// @brief Field <Maximum>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__Maximum_k__BackingField, put = __cordl_internal_set__Maximum_k__BackingField)) ::System::Nullable_1<double_t> _Maximum_k__BackingField;

  /// @brief Field <MinimumItems>k__BackingField, offset 0x5c, size 0x8
  __declspec(property(get = __cordl_internal_get__MinimumItems_k__BackingField, put = __cordl_internal_set__MinimumItems_k__BackingField)) ::System::Nullable_1<int32_t> _MinimumItems_k__BackingField;

  /// @brief Field <MinimumLength>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__MinimumLength_k__BackingField, put = __cordl_internal_set__MinimumLength_k__BackingField)) ::System::Nullable_1<int32_t>
      _MinimumLength_k__BackingField;

  /// @brief Field <Minimum>k__BackingField, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__Minimum_k__BackingField, put = __cordl_internal_set__Minimum_k__BackingField)) ::System::Nullable_1<double_t> _Minimum_k__BackingField;

  /// @brief Field <PatternProperties>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__PatternProperties_k__BackingField,
                      put = __cordl_internal_set__PatternProperties_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*
      _PatternProperties_k__BackingField;

  /// @brief Field <Patterns>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__Patterns_k__BackingField,
                      put = __cordl_internal_set__Patterns_k__BackingField)) ::System::Collections::Generic::IList_1<::StringW>* _Patterns_k__BackingField;

  /// @brief Field <PositionalItemsValidation>k__BackingField, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__PositionalItemsValidation_k__BackingField,
                      put = __cordl_internal_set__PositionalItemsValidation_k__BackingField)) bool _PositionalItemsValidation_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Properties_k__BackingField,
      put = __cordl_internal_set__Properties_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* _Properties_k__BackingField;

  /// @brief Field <Required>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Required_k__BackingField, put = __cordl_internal_set__Required_k__BackingField)) bool _Required_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchemaType _Type_k__BackingField;

  /// @brief Field <UniqueItems>k__BackingField, offset 0xa3, size 0x1
  __declspec(property(get = __cordl_internal_get__UniqueItems_k__BackingField, put = __cordl_internal_set__UniqueItems_k__BackingField)) bool _UniqueItems_k__BackingField;

  /// @brief Method Combine, addr 0x5b50390, size 0x37c, virtual false, abstract: false, final false
  static inline void Combine(::Newtonsoft::Json::Schema::JsonSchemaModel* model, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method Create, addr 0x5b500ac, size 0x2e4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Create(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* schemata);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaModel* New_ctor();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel* const& __cordl_internal_get__AdditionalItems_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel*& __cordl_internal_get__AdditionalItems_k__BackingField();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel* const& __cordl_internal_get__AdditionalProperties_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaModel*& __cordl_internal_get__AdditionalProperties_k__BackingField();

  constexpr bool const& __cordl_internal_get__AllowAdditionalItems_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowAdditionalItems_k__BackingField();

  constexpr bool const& __cordl_internal_get__AllowAdditionalProperties_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllowAdditionalProperties_k__BackingField();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaType const& __cordl_internal_get__Disallow_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaType& __cordl_internal_get__Disallow_k__BackingField();

  constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get__DivisibleBy_k__BackingField() const;

  constexpr ::System::Nullable_1<double_t>& __cordl_internal_get__DivisibleBy_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get__Enum_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__Enum_k__BackingField();

  constexpr bool const& __cordl_internal_get__ExclusiveMaximum_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ExclusiveMaximum_k__BackingField();

  constexpr bool const& __cordl_internal_get__ExclusiveMinimum_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ExclusiveMinimum_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* const& __cordl_internal_get__Items_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>*& __cordl_internal_get__Items_k__BackingField();

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

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* const& __cordl_internal_get__PatternProperties_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*& __cordl_internal_get__PatternProperties_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::StringW>* const& __cordl_internal_get__Patterns_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::StringW>*& __cordl_internal_get__Patterns_k__BackingField();

  constexpr bool const& __cordl_internal_get__PositionalItemsValidation_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PositionalItemsValidation_k__BackingField();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* const& __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*& __cordl_internal_get__Properties_k__BackingField();

  constexpr bool const& __cordl_internal_get__Required_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Required_k__BackingField();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaType const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaType& __cordl_internal_get__Type_k__BackingField();

  constexpr bool const& __cordl_internal_get__UniqueItems_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UniqueItems_k__BackingField();

  constexpr void __cordl_internal_set__AdditionalItems_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaModel* value);

  constexpr void __cordl_internal_set__AdditionalProperties_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaModel* value);

  constexpr void __cordl_internal_set__AllowAdditionalItems_k__BackingField(bool value);

  constexpr void __cordl_internal_set__AllowAdditionalProperties_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Disallow_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaType value);

  constexpr void __cordl_internal_set__DivisibleBy_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__Enum_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set__ExclusiveMaximum_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ExclusiveMinimum_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  constexpr void __cordl_internal_set__MaximumItems_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__MaximumLength_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Maximum_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__MinimumItems_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__MinimumLength_k__BackingField(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__Minimum_k__BackingField(::System::Nullable_1<double_t> value);

  constexpr void __cordl_internal_set__PatternProperties_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  constexpr void __cordl_internal_set__Patterns_k__BackingField(::System::Collections::Generic::IList_1<::StringW>* value);

  constexpr void __cordl_internal_set__PositionalItemsValidation_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Properties_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  constexpr void __cordl_internal_set__Required_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaType value);

  constexpr void __cordl_internal_set__UniqueItems_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x5b50094, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AdditionalItems, addr 0x5b50024, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaModel* get_AdditionalItems();

  /// @brief Method get_AdditionalProperties, addr 0x5b50014, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaModel* get_AdditionalProperties();

  /// @brief Method get_AllowAdditionalItems, addr 0x5b50054, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowAdditionalItems();

  /// @brief Method get_AllowAdditionalProperties, addr 0x5b50044, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowAdditionalProperties();

  /// @brief Method get_Disallow, addr 0x5b50084, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaType get_Disallow();

  /// @brief Method get_DivisibleBy, addr 0x5b4ff58, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_DivisibleBy();

  /// @brief Method get_Enum, addr 0x5b50074, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_Enum();

  /// @brief Method get_ExclusiveMaximum, addr 0x5b4ffa4, size 0x8, virtual false, abstract: false, final false
  inline bool get_ExclusiveMaximum();

  /// @brief Method get_ExclusiveMinimum, addr 0x5b4ff94, size 0x8, virtual false, abstract: false, final false
  inline bool get_ExclusiveMinimum();

  /// @brief Method get_Items, addr 0x5b4ffe4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_Items();

  /// @brief Method get_Maximum, addr 0x5b4ff80, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_Maximum();

  /// @brief Method get_MaximumItems, addr 0x5b4ffc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaximumItems();

  /// @brief Method get_MaximumLength, addr 0x5b4ff48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaximumLength();

  /// @brief Method get_Minimum, addr 0x5b4ff6c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<double_t> get_Minimum();

  /// @brief Method get_MinimumItems, addr 0x5b4ffb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MinimumItems();

  /// @brief Method get_MinimumLength, addr 0x5b4ff38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MinimumLength();

  /// @brief Method get_PatternProperties, addr 0x5b50004, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_PatternProperties();

  /// @brief Method get_Patterns, addr 0x5b4ffd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::StringW>* get_Patterns();

  /// @brief Method get_PositionalItemsValidation, addr 0x5b50034, size 0x8, virtual false, abstract: false, final false
  inline bool get_PositionalItemsValidation();

  /// @brief Method get_Properties, addr 0x5b4fff4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* get_Properties();

  /// @brief Method get_Required, addr 0x5b4ff18, size 0x8, virtual false, abstract: false, final false
  inline bool get_Required();

  /// @brief Method get_Type, addr 0x5b4ff28, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaType get_Type();

  /// @brief Method get_UniqueItems, addr 0x5b50064, size 0x8, virtual false, abstract: false, final false
  inline bool get_UniqueItems();

  /// @brief Method set_AdditionalItems, addr 0x5b5002c, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaModel* value);

  /// @brief Method set_AdditionalProperties, addr 0x5b5001c, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaModel* value);

  /// @brief Method set_AllowAdditionalItems, addr 0x5b5005c, size 0x8, virtual false, abstract: false, final false
  inline void set_AllowAdditionalItems(bool value);

  /// @brief Method set_AllowAdditionalProperties, addr 0x5b5004c, size 0x8, virtual false, abstract: false, final false
  inline void set_AllowAdditionalProperties(bool value);

  /// @brief Method set_Disallow, addr 0x5b5008c, size 0x8, virtual false, abstract: false, final false
  inline void set_Disallow(::Newtonsoft::Json::Schema::JsonSchemaType value);

  /// @brief Method set_DivisibleBy, addr 0x5b4ff64, size 0x8, virtual false, abstract: false, final false
  inline void set_DivisibleBy(::System::Nullable_1<double_t> value);

  /// @brief Method set_Enum, addr 0x5b5007c, size 0x8, virtual false, abstract: false, final false
  inline void set_Enum(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method set_ExclusiveMaximum, addr 0x5b4ffac, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveMaximum(bool value);

  /// @brief Method set_ExclusiveMinimum, addr 0x5b4ff9c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExclusiveMinimum(bool value);

  /// @brief Method set_Items, addr 0x5b4ffec, size 0x8, virtual false, abstract: false, final false
  inline void set_Items(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  /// @brief Method set_Maximum, addr 0x5b4ff8c, size 0x8, virtual false, abstract: false, final false
  inline void set_Maximum(::System::Nullable_1<double_t> value);

  /// @brief Method set_MaximumItems, addr 0x5b4ffcc, size 0x8, virtual false, abstract: false, final false
  inline void set_MaximumItems(::System::Nullable_1<int32_t> value);

  /// @brief Method set_MaximumLength, addr 0x5b4ff50, size 0x8, virtual false, abstract: false, final false
  inline void set_MaximumLength(::System::Nullable_1<int32_t> value);

  /// @brief Method set_Minimum, addr 0x5b4ff78, size 0x8, virtual false, abstract: false, final false
  inline void set_Minimum(::System::Nullable_1<double_t> value);

  /// @brief Method set_MinimumItems, addr 0x5b4ffbc, size 0x8, virtual false, abstract: false, final false
  inline void set_MinimumItems(::System::Nullable_1<int32_t> value);

  /// @brief Method set_MinimumLength, addr 0x5b4ff40, size 0x8, virtual false, abstract: false, final false
  inline void set_MinimumLength(::System::Nullable_1<int32_t> value);

  /// @brief Method set_PatternProperties, addr 0x5b5000c, size 0x8, virtual false, abstract: false, final false
  inline void set_PatternProperties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  /// @brief Method set_Patterns, addr 0x5b4ffdc, size 0x8, virtual false, abstract: false, final false
  inline void set_Patterns(::System::Collections::Generic::IList_1<::StringW>* value);

  /// @brief Method set_PositionalItemsValidation, addr 0x5b5003c, size 0x8, virtual false, abstract: false, final false
  inline void set_PositionalItemsValidation(bool value);

  /// @brief Method set_Properties, addr 0x5b4fffc, size 0x8, virtual false, abstract: false, final false
  inline void set_Properties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  /// @brief Method set_Required, addr 0x5b4ff20, size 0x8, virtual false, abstract: false, final false
  inline void set_Required(bool value);

  /// @brief Method set_Type, addr 0x5b4ff30, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::Newtonsoft::Json::Schema::JsonSchemaType value);

  /// @brief Method set_UniqueItems, addr 0x5b5006c, size 0x8, virtual false, abstract: false, final false
  inline void set_UniqueItems(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaModel(JsonSchemaModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaModel(JsonSchemaModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13519 };

  /// @brief Field <Required>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Required_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaType ____Type_k__BackingField;

  /// @brief Field <MinimumLength>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MinimumLength_k__BackingField;

  /// @brief Field <MaximumLength>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MaximumLength_k__BackingField;

  /// @brief Field <DivisibleBy>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____DivisibleBy_k__BackingField;

  /// @brief Field <Minimum>k__BackingField, offset: 0x38, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____Minimum_k__BackingField;

  /// @brief Field <Maximum>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::System::Nullable_1<double_t> ____Maximum_k__BackingField;

  /// @brief Field <ExclusiveMinimum>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____ExclusiveMinimum_k__BackingField;

  /// @brief Field <ExclusiveMaximum>k__BackingField, offset: 0x59, size: 0x1, def value: None
  bool ____ExclusiveMaximum_k__BackingField;

  /// @brief Field <MinimumItems>k__BackingField, offset: 0x5c, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MinimumItems_k__BackingField;

  /// @brief Field <MaximumItems>k__BackingField, offset: 0x64, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____MaximumItems_k__BackingField;

  /// @brief Field <Patterns>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::StringW>* ____Patterns_k__BackingField;

  /// @brief Field <Items>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaModel*>* ____Items_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* ____Properties_k__BackingField;

  /// @brief Field <PatternProperties>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* ____PatternProperties_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaModel* ____AdditionalProperties_k__BackingField;

  /// @brief Field <AdditionalItems>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaModel* ____AdditionalItems_k__BackingField;

  /// @brief Field <PositionalItemsValidation>k__BackingField, offset: 0xa0, size: 0x1, def value: None
  bool ____PositionalItemsValidation_k__BackingField;

  /// @brief Field <AllowAdditionalProperties>k__BackingField, offset: 0xa1, size: 0x1, def value: None
  bool ____AllowAdditionalProperties_k__BackingField;

  /// @brief Field <AllowAdditionalItems>k__BackingField, offset: 0xa2, size: 0x1, def value: None
  bool ____AllowAdditionalItems_k__BackingField;

  /// @brief Field <UniqueItems>k__BackingField, offset: 0xa3, size: 0x1, def value: None
  bool ____UniqueItems_k__BackingField;

  /// @brief Field <Enum>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ____Enum_k__BackingField;

  /// @brief Field <Disallow>k__BackingField, offset: 0xb0, size: 0x4, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaType ____Disallow_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Required_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Type_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____MinimumLength_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____MaximumLength_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____DivisibleBy_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Minimum_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Maximum_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____ExclusiveMinimum_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____ExclusiveMaximum_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____MinimumItems_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____MaximumItems_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Patterns_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Items_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Properties_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____PatternProperties_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____AdditionalProperties_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____AdditionalItems_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____PositionalItemsValidation_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____AllowAdditionalProperties_k__BackingField) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____AllowAdditionalItems_k__BackingField) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____UniqueItems_k__BackingField) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Enum_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModel, ____Disallow_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaModel, 0xb8>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaModel);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaModel*, "Newtonsoft.Json.Schema", "JsonSchemaModel");
