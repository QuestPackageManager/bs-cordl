#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Schema/zzzz__UndefinedSchemaIdHandling_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaGenerator)
namespace Newtonsoft::Json::Schema {
class JsonSchemaGenerator_TypeSchema;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaGenerator___c__DisplayClass23_0;
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
struct UndefinedSchemaIdHandling;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaGenerator;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaGenerator_TypeSchema;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaGenerator___c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaGenerator);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0);
// Dependencies System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaGenerator/TypeSchema
class CORDL_TYPE JsonSchemaGenerator_TypeSchema : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Schema)) ::Newtonsoft::Json::Schema::JsonSchema* Schema;

  __declspec(property(get = get_Type)) ::System::Type* Type;

  /// @brief Field <Schema>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Schema_k__BackingField, put = __cordl_internal_set__Schema_k__BackingField)) ::Newtonsoft::Json::Schema::JsonSchema* _Schema_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  static inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* New_ctor(::System::Type* type, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& __cordl_internal_get__Schema_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchema*& __cordl_internal_get__Schema_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Schema_k__BackingField(::Newtonsoft::Json::Schema::JsonSchema* value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x3f076a0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method get_Schema, addr 0x3f07e80, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* get_Schema();

  /// @brief Method get_Type, addr 0x3f07e78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaGenerator_TypeSchema();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaGenerator_TypeSchema", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaGenerator_TypeSchema(JsonSchemaGenerator_TypeSchema&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaGenerator_TypeSchema", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaGenerator_TypeSchema(JsonSchemaGenerator_TypeSchema const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10357 };

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <Schema>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchema* ____Schema_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema, ____Schema_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
// Dependencies System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaGenerator/<>c__DisplayClass23_0
class CORDL_TYPE JsonSchemaGenerator___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0* New_ctor();

  /// @brief Method <GenerateInternal>b__0, addr 0x3f07e88, size 0x70, virtual false, abstract: false, final false
  inline bool _GenerateInternal_b__0(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* tc);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3f075c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaGenerator___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaGenerator___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaGenerator___c__DisplayClass23_0(JsonSchemaGenerator___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaGenerator___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaGenerator___c__DisplayClass23_0(JsonSchemaGenerator___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10358 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
// Dependencies Newtonsoft.Json.Schema.UndefinedSchemaIdHandling, System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaGenerator
class CORDL_TYPE JsonSchemaGenerator : public ::System::Object {
public:
  // Declarations
  using TypeSchema = ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema;

  using __c__DisplayClass23_0 = ::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0;

  __declspec(property(get = get_ContractResolver, put = set_ContractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver* ContractResolver;

  __declspec(property(get = get_CurrentSchema)) ::Newtonsoft::Json::Schema::JsonSchema* CurrentSchema;

  __declspec(property(get = get_UndefinedSchemaIdHandling, put = set_UndefinedSchemaIdHandling)) ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling UndefinedSchemaIdHandling;

  /// @brief Field <UndefinedSchemaIdHandling>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__UndefinedSchemaIdHandling_k__BackingField,
                      put = __cordl_internal_set__UndefinedSchemaIdHandling_k__BackingField)) ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling _UndefinedSchemaIdHandling_k__BackingField;

  /// @brief Field _contractResolver, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__contractResolver, put = __cordl_internal_set__contractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver* _contractResolver;

  /// @brief Field _currentSchema, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__currentSchema, put = __cordl_internal_set__currentSchema)) ::Newtonsoft::Json::Schema::JsonSchema* _currentSchema;

  /// @brief Field _resolver, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__resolver, put = __cordl_internal_set__resolver)) ::Newtonsoft::Json::Schema::JsonSchemaResolver* _resolver;

  /// @brief Field _stack, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__stack,
                      put = __cordl_internal_set__stack)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>* _stack;

  /// @brief Method AddNullType, addr 0x3f0773c, size 0x10, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaType AddNullType(::Newtonsoft::Json::Schema::JsonSchemaType type, ::Newtonsoft::Json::Required valueRequired);

  /// @brief Method Generate, addr 0x3f06518, size 0x6c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* type);

  /// @brief Method Generate, addr 0x3f06630, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* type, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

  /// @brief Method Generate, addr 0x3f06584, size 0xac, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* type, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver, bool rootSchemaNullable);

  /// @brief Method Generate, addr 0x3f06638, size 0x70, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* Generate(::System::Type* type, bool rootSchemaNullable);

  /// @brief Method GenerateISerializableContract, addr 0x3f07dd0, size 0x20, virtual false, abstract: false, final false
  inline void GenerateISerializableContract(::System::Type* type, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract);

  /// @brief Method GenerateInternal, addr 0x3f066a8, size 0xc68, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* GenerateInternal(::System::Type* type, ::Newtonsoft::Json::Required valueRequired, bool required);

  /// @brief Method GenerateObjectSchema, addr 0x3f0774c, size 0x4c4, virtual false, abstract: false, final false
  inline void GenerateObjectSchema(::System::Type* type, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract);

  /// @brief Method GetDescription, addr 0x3f073c0, size 0xfc, virtual false, abstract: false, final false
  inline ::StringW GetDescription(::System::Type* type);

  /// @brief Method GetJsonSchemaType, addr 0x3f07c10, size 0x1c0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaType GetJsonSchemaType(::System::Type* type, ::Newtonsoft::Json::Required valueRequired);

  /// @brief Method GetTitle, addr 0x3f07310, size 0xb0, virtual false, abstract: false, final false
  inline ::StringW GetTitle(::System::Type* type);

  /// @brief Method GetTypeId, addr 0x3f074bc, size 0x104, virtual false, abstract: false, final false
  inline ::StringW GetTypeId(::System::Type* type, bool explicitOnly);

  /// @brief Method HasFlag, addr 0x3f07df0, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag);

  /// @brief Method HasFlag, addr 0x3f075c8, size 0xd8, virtual false, abstract: false, final false
  static inline bool HasFlag(::System::Nullable_1<::Newtonsoft::Json::Schema::JsonSchemaType> value, ::Newtonsoft::Json::Schema::JsonSchemaType flag);

  static inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator* New_ctor();

  /// @brief Method Pop, addr 0x3f062f8, size 0x220, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* Pop();

  /// @brief Method Push, addr 0x3f061b8, size 0x140, virtual false, abstract: false, final false
  inline void Push(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema* typeSchema);

  constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling const& __cordl_internal_get__UndefinedSchemaIdHandling_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling& __cordl_internal_get__UndefinedSchemaIdHandling_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& __cordl_internal_get__contractResolver() const;

  constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& __cordl_internal_get__contractResolver();

  constexpr ::Newtonsoft::Json::Schema::JsonSchema* const& __cordl_internal_get__currentSchema() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchema*& __cordl_internal_get__currentSchema();

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver* const& __cordl_internal_get__resolver() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver*& __cordl_internal_get__resolver();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>* const& __cordl_internal_get__stack() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>*& __cordl_internal_get__stack();

  constexpr void __cordl_internal_set__UndefinedSchemaIdHandling_k__BackingField(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling value);

  constexpr void __cordl_internal_set__contractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value);

  constexpr void __cordl_internal_set__currentSchema(::Newtonsoft::Json::Schema::JsonSchema* value);

  constexpr void __cordl_internal_set__resolver(::Newtonsoft::Json::Schema::JsonSchemaResolver* value);

  constexpr void __cordl_internal_set__stack(::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>* value);

  /// @brief Method .ctor, addr 0x3f07dfc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ContractResolver, addr 0x3f06114, size 0x94, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver();

  /// @brief Method get_CurrentSchema, addr 0x3f061b0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchema* get_CurrentSchema();

  /// @brief Method get_UndefinedSchemaIdHandling, addr 0x3f06104, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling get_UndefinedSchemaIdHandling();

  /// @brief Method set_ContractResolver, addr 0x3f061a8, size 0x8, virtual false, abstract: false, final false
  inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value);

  /// @brief Method set_UndefinedSchemaIdHandling, addr 0x3f0610c, size 0x8, virtual false, abstract: false, final false
  inline void set_UndefinedSchemaIdHandling(::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaGenerator(JsonSchemaGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaGenerator(JsonSchemaGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10359 };

  /// @brief Field <UndefinedSchemaIdHandling>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Schema::UndefinedSchemaIdHandling ____UndefinedSchemaIdHandling_k__BackingField;

  /// @brief Field _contractResolver, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IContractResolver* ____contractResolver;

  /// @brief Field _resolver, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaResolver* ____resolver;

  /// @brief Field _stack, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*>* ____stack;

  /// @brief Field _currentSchema, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchema* ____currentSchema;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator, ____UndefinedSchemaIdHandling_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator, ____contractResolver) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator, ____resolver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator, ____stack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaGenerator, ____currentSchema) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaGenerator, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaGenerator*, "Newtonsoft.Json.Schema", "JsonSchemaGenerator");
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaGenerator_TypeSchema*, "Newtonsoft.Json.Schema", "JsonSchemaGenerator/TypeSchema");
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaGenerator___c__DisplayClass23_0*, "Newtonsoft.Json.Schema", "JsonSchemaGenerator/<>c__DisplayClass23_0");
