#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaNode)
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace Newtonsoft::Json::Schema {
class __JsonSchemaNode____c;
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
class __JsonSchemaNode____c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaNode);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::__JsonSchemaNode____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::JsonSchemaNode::<>c*
class CORDL_TYPE __JsonSchemaNode____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Schema::__JsonSchemaNode____c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* __9__26_0;

  /// @brief Field <>9__26_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_1, put = setStaticF___9__26_1))::System::Func_2<::StringW, ::StringW>* __9__26_1;

  static inline ::Newtonsoft::Json::Schema::__JsonSchemaNode____c* New_ctor();

  /// @brief Method <GetId>b__26_0, addr 0x29550f8, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _GetId_b__26_0(::Newtonsoft::Json::Schema::JsonSchema* s);

  /// @brief Method <GetId>b__26_1, addr 0x2955110, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _GetId_b__26_1(::StringW id);

  /// @brief Method .ctor, addr 0x29550f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Schema::__JsonSchemaNode____c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* getStaticF___9__26_0();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__26_1();

  static inline void setStaticF___9(::Newtonsoft::Json::Schema::__JsonSchemaNode____c* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* value);

  static inline void setStaticF___9__26_1(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSchemaNode____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonSchemaNode____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSchemaNode____c(__JsonSchemaNode____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSchemaNode____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSchemaNode____c(__JsonSchemaNode____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::__JsonSchemaNode____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
// Type: Newtonsoft.Json.Schema::JsonSchemaNode
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::JsonSchemaNode*
class CORDL_TYPE JsonSchemaNode : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Schema::__JsonSchemaNode____c;

  __declspec(property(get = get_AdditionalItems, put = set_AdditionalItems))::Newtonsoft::Json::Schema::JsonSchemaNode* AdditionalItems;

  __declspec(property(get = get_AdditionalProperties, put = set_AdditionalProperties))::Newtonsoft::Json::Schema::JsonSchemaNode* AdditionalProperties;

  __declspec(property(get = get_Id))::StringW Id;

  __declspec(property(get = get_Items))::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* Items;

  __declspec(property(get = get_PatternProperties))::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* PatternProperties;

  __declspec(property(get = get_Properties))::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* Properties;

  __declspec(property(get = get_Schemas))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* Schemas;

  /// @brief Field <AdditionalItems>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalItems_k__BackingField,
                      put = __cordl_internal_set__AdditionalItems_k__BackingField))::Newtonsoft::Json::Schema::JsonSchemaNode* _AdditionalItems_k__BackingField;

  /// @brief Field <AdditionalProperties>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__AdditionalProperties_k__BackingField,
                      put = __cordl_internal_set__AdditionalProperties_k__BackingField))::Newtonsoft::Json::Schema::JsonSchemaNode* _AdditionalProperties_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Id_k__BackingField, put = __cordl_internal_set__Id_k__BackingField))::StringW _Id_k__BackingField;

  /// @brief Field <Items>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Items_k__BackingField,
                      put = __cordl_internal_set__Items_k__BackingField))::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* _Items_k__BackingField;

  /// @brief Field <PatternProperties>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__PatternProperties_k__BackingField, put = __cordl_internal_set__PatternProperties_k__BackingField))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* _PatternProperties_k__BackingField;

  /// @brief Field <Properties>k__BackingField, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__Properties_k__BackingField,
      put = __cordl_internal_set__Properties_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* _Properties_k__BackingField;

  /// @brief Field <Schemas>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Schemas_k__BackingField,
                      put = __cordl_internal_set__Schemas_k__BackingField))::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* _Schemas_k__BackingField;

  /// @brief Method Combine, addr 0x2954730, size 0x70, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Combine(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method GetId, addr 0x2954358, size 0x23c, virtual false, abstract: false, final false
  static inline ::StringW GetId(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Schema::JsonSchema*>* schemata);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaNode* New_ctor(::Newtonsoft::Json::Schema::JsonSchema* schema);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaNode* New_ctor(::Newtonsoft::Json::Schema::JsonSchemaNode* source, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& __cordl_internal_get__AdditionalItems_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchemaNode*> const& __cordl_internal_get__AdditionalItems_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& __cordl_internal_get__AdditionalProperties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchemaNode*> const& __cordl_internal_get__AdditionalProperties_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Id_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>*& __cordl_internal_get__Items_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>*> const& __cordl_internal_get__Items_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*& __cordl_internal_get__PatternProperties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*> const&
  __cordl_internal_get__PatternProperties_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*> const&
  __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__Schemas_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>*> const&
  __cordl_internal_get__Schemas_k__BackingField() const;

  constexpr void __cordl_internal_set__AdditionalItems_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

  constexpr void __cordl_internal_set__AdditionalProperties_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

  constexpr void __cordl_internal_set__Id_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* value);

  constexpr void __cordl_internal_set__PatternProperties_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* value);

  constexpr void __cordl_internal_set__Properties_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* value);

  constexpr void __cordl_internal_set__Schemas_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* value);

  /// @brief Method .ctor, addr 0x2954594, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method .ctor, addr 0x2954e74, size 0x218, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Schema::JsonSchemaNode* source, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method get_AdditionalItems, addr 0x2954e64, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaNode* get_AdditionalItems();

  /// @brief Method get_AdditionalProperties, addr 0x2954e54, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaNode* get_AdditionalProperties();

  /// @brief Method get_Id, addr 0x2954e2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_Items, addr 0x2954e4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* get_Items();

  /// @brief Method get_PatternProperties, addr 0x2954e44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* get_PatternProperties();

  /// @brief Method get_Properties, addr 0x2954e3c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* get_Properties();

  /// @brief Method get_Schemas, addr 0x2954e34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* get_Schemas();

  /// @brief Method set_AdditionalItems, addr 0x2954e6c, size 0x8, virtual false, abstract: false, final false
  inline void set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

  /// @brief Method set_AdditionalProperties, addr 0x2954e5c, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaNode, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Schemas_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Properties_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____PatternProperties_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____Items_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____AdditionalProperties_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaNode, ____AdditionalItems_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaNode);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaNode*, "Newtonsoft.Json.Schema", "JsonSchemaNode");
NEED_NO_BOX(::Newtonsoft::Json::Schema::__JsonSchemaNode____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::__JsonSchemaNode____c*, "Newtonsoft.Json.Schema", "JsonSchemaNode/<>c");
