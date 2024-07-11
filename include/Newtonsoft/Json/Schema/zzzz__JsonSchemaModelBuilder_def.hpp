#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaModelBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSchemaModelBuilder)
namespace Newtonsoft::Json::Schema {
class JsonSchemaModel;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaNodeCollection;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaNode;
}
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaModelBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaModelBuilder);
// Type: Newtonsoft.Json.Schema::JsonSchemaModelBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::JsonSchemaModelBuilder*
class CORDL_TYPE JsonSchemaModelBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _node, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node))::Newtonsoft::Json::Schema::JsonSchemaNode* _node;

  /// @brief Field _nodeModels, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__nodeModels,
      put = __cordl_internal_set__nodeModels))::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* _nodeModels;

  /// @brief Field _nodes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nodes, put = __cordl_internal_set__nodes))::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* _nodes;

  /// @brief Method AddAdditionalItems, addr 0x2a86548, size 0x24, virtual false, abstract: false, final false
  inline void AddAdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaNode* parentNode, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method AddAdditionalProperties, addr 0x2a8656c, size 0x24, virtual false, abstract: false, final false
  inline void AddAdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaNode* parentNode, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method AddItem, addr 0x2a863ec, size 0x15c, virtual false, abstract: false, final false
  inline void AddItem(::Newtonsoft::Json::Schema::JsonSchemaNode* parentNode, int32_t index, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method AddProperties, addr 0x2a860f0, size 0x2fc, virtual false, abstract: false, final false
  inline void AddProperties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* source,
                            ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* target);

  /// @brief Method AddProperty, addr 0x2a86590, size 0x144, virtual false, abstract: false, final false
  inline void AddProperty(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* target, ::StringW propertyName,
                          ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method AddSchema, addr 0x2a84f6c, size 0x638, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaNode* AddSchema(::Newtonsoft::Json::Schema::JsonSchemaNode* existingNode, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method Build, addr 0x2a84e5c, size 0xc8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Build(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method BuildNodeModel, addr 0x2a855a4, size 0x704, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaModel* BuildNodeModel(::Newtonsoft::Json::Schema::JsonSchemaNode* node);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder* New_ctor();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& __cordl_internal_get__node();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchemaNode*> const& __cordl_internal_get__node() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*& __cordl_internal_get__nodeModels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*> const&
  __cordl_internal_get__nodeModels() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*& __cordl_internal_get__nodes();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*> const& __cordl_internal_get__nodes() const;

  constexpr void __cordl_internal_set__node(::Newtonsoft::Json::Schema::JsonSchemaNode* value);

  constexpr void __cordl_internal_set__nodeModels(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value);

  constexpr void __cordl_internal_set__nodes(::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* value);

  /// @brief Method .ctor, addr 0x2a866d4, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaModelBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaModelBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaModelBuilder(JsonSchemaModelBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaModelBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaModelBuilder(JsonSchemaModelBuilder const&) = delete;

  /// @brief Field _nodes, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* ____nodes;

  /// @brief Field _nodeModels, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* ____nodeModels;

  /// @brief Field _node, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaNode* ____node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModelBuilder, ____nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModelBuilder, ____nodeModels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaModelBuilder, ____node) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaModelBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*, "Newtonsoft.Json.Schema", "JsonSchemaModelBuilder");
