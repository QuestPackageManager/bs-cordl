#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaNode)
namespace Newtonsoft::Json::Schema {
class JsonSchemaNode___c;
}
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaNode;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaNode___c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaNode);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaNode___c);
// Dependencies System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaNode/<>c
class CORDL_TYPE JsonSchemaNode___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Schema::JsonSchemaNode___c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* __9__26_0;

  /// @brief Field <>9__26_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_1, put = setStaticF___9__26_1)) ::System::Func_2<::StringW, ::StringW>* __9__26_1;

  static inline ::Newtonsoft::Json::Schema::JsonSchemaNode___c* New_ctor();

  /// @brief Method <GetId>b__26_0, addr 0x3f06bf4, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _GetId_b__26_0(::Newtonsoft::Json::Schema::JsonSchema* s);

  /// @brief Method <GetId>b__26_1, addr 0x3f06c0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _GetId_b__26_1(::StringW id);

  /// @brief Method .ctor, addr 0x3f06bec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Schema::JsonSchemaNode___c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* getStaticF___9__26_0();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__26_1();

  static inline void setStaticF___9(::Newtonsoft::Json::Schema::JsonSchemaNode___c* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* value);

  static inline void setStaticF___9__26_1(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaNode___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaNode___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaNode___c(JsonSchemaNode___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaNode___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaNode___c(JsonSchemaNode___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaNode___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
// Dependencies System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaNode
class CORDL_TYPE JsonSchemaNode : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Schema::JsonSchemaNode___c;

  __declspec(property(get = get_AdditionalItems, put = set_AdditionalItems)) ::Newtonsoft::Json::Schema::JsonSchemaNode* AdditionalItems;

  __declspec(property(get = get_AdditionalProperties, put = set_AdditionalProperties)) ::Newtonsoft::Json::Schema::JsonSchemaNode* AdditionalProperties;

  __declspec(property(get = get_Id)) ::StringW Id;

  __declspec(property(get = get_Items)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* Items;

  __declspec(property(get = get_PatternProperties)) ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* PatternProperties;

  __declspec(property(get = get_Properties)) ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* Properties;

  __declspec(property(get = get_Schemas)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* Schemas;

  /// @brief Field <AdditionalItems>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalItems_k__BackingField,
                      put = __cordl_internal_set__AdditionalItems_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchemaNode* _AdditionalItems_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalProperties_k__BackingField,
                      put = __cordl_internal_set__AdditionalProperties_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchemaNode* _AdditionalProperties_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField)) ::StringW _Id_k__BackingField;

  /// @brief Field <Items>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Items_k__BackingField,
                      put = __cordl_internal_set__Items_k__BackingField)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* _Items_k__BackingField;

  /// @brief Field <PatternProperties>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__PatternProperties_k__BackingField,
                      put = __cordl_internal_set__PatternProperties_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*
      _PatternProperties_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Properties_k__BackingField,
      put = __cordl_internal_set__Properties_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* _Properties_k__BackingField;

  /// @brief Field <Schemas>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Schemas_k__BackingField,
                      put = __cordl_internal_set__Schemas_k__BackingField)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* _Schemas_k__BackingField;

  /// @brief Method Combine, addr 0x3f06248, size 0x68, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Combine(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method GetId, addr 0x3f05e74, size 0x238, virtual false, abstract: false, final false
  static inline ::StringW GetId(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Schema::JsonSchema*>* schemata);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaNode* New_ctor(::Newtonsoft::Json::Schema::JsonSchema* schema);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaNode* New_ctor(::Newtonsoft::Json::Schema::JsonSchemaNode* source, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode* const& __cordl_internal_get__AdditionalItems_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& __cordl_internal_get__AdditionalItems_k__BackingField();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode* const& __cordl_internal_get__AdditionalProperties_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& __cordl_internal_get__AdditionalProperties_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Id_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* const& __cordl_internal_get__Items_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>*& __cordl_internal_get__Items_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* const& __cordl_internal_get__PatternProperties_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*& __cordl_internal_get__PatternProperties_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* const& __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* const& __cordl_internal_get__Schemas_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__Schemas_k__BackingField();

  constexpr void __cordl_internal_set__AdditionalItems_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

  constexpr void __cordl_internal_set__AdditionalProperties_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

  constexpr void __cordl_internal_set__Id_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* value);

  constexpr void __cordl_internal_set__PatternProperties_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* value);

  constexpr void __cordl_internal_set__Properties_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* value);

  constexpr void __cordl_internal_set__Schemas_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* value);

  /// @brief Method .ctor, addr 0x3f060ac, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method .ctor, addr 0x3f06978, size 0x218, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Schema::JsonSchemaNode* source, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method get_AdditionalItems, addr 0x3f06968, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaNode* get_AdditionalItems();

  /// @brief Method get_AdditionalProperties, addr 0x3f06958, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaNode* get_AdditionalProperties();

  /// @brief Method get_Id, addr 0x3f06930, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_Items, addr 0x3f06950, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* get_Items();

  /// @brief Method get_PatternProperties, addr 0x3f06948, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* get_PatternProperties();

  /// @brief Method get_Properties, addr 0x3f06940, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* get_Properties();

  /// @brief Method get_Schemas, addr 0x3f06938, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* get_Schemas();

  /// @brief Method set_AdditionalItems, addr 0x3f06970, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

  /// @brief Method set_AdditionalProperties, addr 0x3f06960, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaNode(JsonSchemaNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaNode(JsonSchemaNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10368 };

  /// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Id_k__BackingField;

  /// @brief Field <Schemas>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* ____Schemas_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* ____Properties_k__BackingField;

  /// @brief Field <PatternProperties>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* ____PatternProperties_k__BackingField;

  /// @brief Field <Items>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* ____Items_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaNode* ____AdditionalProperties_k__BackingField;

  /// @brief Field <AdditionalItems>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaNode* ____AdditionalItems_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Schemas_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Properties_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____PatternProperties_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Items_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____AdditionalProperties_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____AdditionalItems_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaNode, 0x48>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaNode);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaNode*, "Newtonsoft.Json.Schema", "JsonSchemaNode");
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaNode___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaNode___c*, "Newtonsoft.Json.Schema", "JsonSchemaNode/<>c");
