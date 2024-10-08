#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaNodeCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaNodeCollection)
namespace Newtonsoft::Json::Schema {
class JsonSchemaNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaNodeCollection;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaNodeCollection);
// Type: Newtonsoft.Json.Schema::JsonSchemaNodeCollection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::JsonSchemaNodeCollection*
class CORDL_TYPE JsonSchemaNodeCollection : public ::System::Collections::ObjectModel::KeyedCollection_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*> {
public:
  // Declarations
  /// @brief Method GetKeyForItem, addr 0x3e95b60, size 0x18, virtual true, abstract: false, final false
  inline ::StringW GetKeyForItem(::Newtonsoft::Json::Schema::JsonSchemaNode* item);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* New_ctor();

  /// @brief Method .ctor, addr 0x3e94074, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaNodeCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaNodeCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaNodeCollection(JsonSchemaNodeCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaNodeCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaNodeCollection(JsonSchemaNodeCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10334 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaNodeCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*, "Newtonsoft.Json.Schema", "JsonSchemaNodeCollection");
