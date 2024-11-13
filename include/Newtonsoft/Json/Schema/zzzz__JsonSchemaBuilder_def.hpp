#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaBuilder)
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaResolver;
}
namespace Newtonsoft::Json::Schema {
struct JsonSchemaType;
}
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace Newtonsoft::Json::Schema {
class __JsonSchemaBuilder____c__DisplayClass23_0;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaBuilder;
}
namespace Newtonsoft::Json::Schema {
class __JsonSchemaBuilder____c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaBuilder);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::__JsonSchemaBuilder____c__DisplayClass23_0);
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::JsonSchemaBuilder::<>c__DisplayClass23_0*
class CORDL_TYPE __JsonSchemaBuilder____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::Newtonsoft::Json::Schema::JsonSchemaType type;

  static inline ::Newtonsoft::Json::Schema::__JsonSchemaBuilder____c__DisplayClass23_0* New_ctor();

  /// @brief Method <MapType>b__0, addr 0x3ea5d9c, size 0x48, virtual false, abstract: false, final false
  inline bool _MapType_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaType> kv);

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaType const& __cordl_internal_get_type() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::Newtonsoft::Json::Schema::JsonSchemaType value);

  /// @brief Method .ctor, addr 0x3ea5d94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSchemaBuilder____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JsonSchemaBuilder____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSchemaBuilder____c__DisplayClass23_0(__JsonSchemaBuilder____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSchemaBuilder____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSchemaBuilder____c__DisplayClass23_0(__JsonSchemaBuilder____c__DisplayClass23_0 const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaType ___type;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10328 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::__JsonSchemaBuilder____c__DisplayClass23_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::__JsonSchemaBuilder____c__DisplayClass23_0, ___type) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Schema
// Type: Newtonsoft.Json.Schema::JsonSchemaBuilder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::JsonSchemaBuilder*
class CORDL_TYPE JsonSchemaBuilder : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass23_0 = ::Newtonsoft::Json::Schema::__JsonSchemaBuilder____c__DisplayClass23_0;

  __declspec(property(get = get_CurrentSchema)) ::Newtonsoft::Json::Schema::JsonSchema* CurrentSchema;

  /// @brief Field _currentSchema, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__currentSchema, put = __cordl_internal_set__currentSchema)) ::Newtonsoft::Json::Schema::JsonSchema* _currentSchema;

  /// @brief Field _documentSchemas, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__documentSchemas,
                      put = __cordl_internal_set__documentSchemas)) ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* _documentSchemas;

  /// @brief Field _resolver, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__resolver, put = __cordl_internal_set__resolver)) ::Newtonsoft::Json::Schema::JsonSchemaResolver* _resolver;

  /// @brief Field _rootSchema, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rootSchema, put = __cordl_internal_set__rootSchema)) ::Newtonsoft::Json::Linq::JObject* _rootSchema;

  /// @brief Field _stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stack, put = __cordl_internal_set__stack)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* _stack;

  /// @brief Method BuildSchema, addr 0x3ea1f30, size 0x3a0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* BuildSchema(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method MapType, addr 0x3ea5b20, size 0x164, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Schema::JsonSchemaType MapType(::StringW type);

  /// @brief Method MapType, addr 0x3ea5c84, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW MapType(::Newtonsoft::Json::Schema::JsonSchemaType type);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaBuilder* New_ctor(::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

  /// @brief Method Pop, addr 0x3ea1dd8, size 0x150, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* Pop();

  /// @brief Method ProcessAdditionalItems, addr 0x3ea5110, size 0xac, virtual false, abstract: false, final false
  inline void ProcessAdditionalItems(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method ProcessAdditionalProperties, addr 0x3ea5064, size 0xac, virtual false, abstract: false, final false
  inline void ProcessAdditionalProperties(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method ProcessEnum, addr 0x3ea51bc, size 0x4a0, virtual false, abstract: false, final false
  inline void ProcessEnum(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method ProcessExtends, addr 0x3ea565c, size 0x4c4, virtual false, abstract: false, final false
  inline void ProcessExtends(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method ProcessItems, addr 0x3ea4b08, size 0x55c, virtual false, abstract: false, final false
  inline void ProcessItems(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method ProcessProperties, addr 0x3ea4520, size 0x5e8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* ProcessProperties(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method ProcessSchemaProperties, addr 0x3ea2d14, size 0x123c, virtual false, abstract: false, final false
  inline void ProcessSchemaProperties(::Newtonsoft::Json::Linq::JObject* schemaObject);

  /// @brief Method ProcessType, addr 0x3ea3f50, size 0x5d0, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> ProcessType(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method Push, addr 0x3ea1c28, size 0x1b0, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::Schema::JsonSchema* value);

  /// @brief Method Read, addr 0x3ea061c, size 0xd8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* Read(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ResolveReferences, addr 0x3ea22d0, size 0x974, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* ResolveReferences(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method UnescapeReference, addr 0x3ea2c44, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW UnescapeReference(::StringW reference);

  constexpr ::Newtonsoft::Json::Schema::JsonSchema*& __cordl_internal_get__currentSchema();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchema*> const& __cordl_internal_get__currentSchema() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__documentSchemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*> const&
  __cordl_internal_get__documentSchemas() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver*& __cordl_internal_get__resolver();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Schema::JsonSchemaResolver*> const& __cordl_internal_get__resolver() const;

  constexpr ::Newtonsoft::Json::Linq::JObject*& __cordl_internal_get__rootSchema();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JObject*> const& __cordl_internal_get__rootSchema() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*& __cordl_internal_get__stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>*> const& __cordl_internal_get__stack() const;

  constexpr void __cordl_internal_set__currentSchema(::Newtonsoft::Json::Schema::JsonSchema* value);

  constexpr void __cordl_internal_set__documentSchemas(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* value);

  constexpr void __cordl_internal_set__resolver(::Newtonsoft::Json::Schema::JsonSchemaResolver* value);

  constexpr void __cordl_internal_set__rootSchema(::Newtonsoft::Json::Linq::JObject* value);

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* value);

  /// @brief Method .ctor, addr 0x3ea0550, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

  /// @brief Method get_CurrentSchema, addr 0x3ea1f28, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* get_CurrentSchema();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaBuilder(JsonSchemaBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaBuilder(JsonSchemaBuilder const&) = delete;

  /// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchema*>* ____stack;

  /// @brief Field _resolver, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaResolver* ____resolver;

  /// @brief Field _documentSchemas, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* ____documentSchemas;

  /// @brief Field _currentSchema, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchema* ____currentSchema;

  /// @brief Field _rootSchema, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JObject* ____rootSchema;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaBuilder, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaBuilder, ____stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaBuilder, ____resolver) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaBuilder, ____documentSchemas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaBuilder, ____currentSchema) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaBuilder, ____rootSchema) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaBuilder*, "Newtonsoft.Json.Schema", "JsonSchemaBuilder");
NEED_NO_BOX(::Newtonsoft::Json::Schema::__JsonSchemaBuilder____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::__JsonSchemaBuilder____c__DisplayClass23_0*, "Newtonsoft.Json.Schema", "JsonSchemaBuilder/<>c__DisplayClass23_0");
