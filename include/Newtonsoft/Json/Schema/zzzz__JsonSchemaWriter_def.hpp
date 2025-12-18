#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonSchemaWriter)
namespace Newtonsoft::Json::Schema {
class JsonSchemaResolver;
}
namespace Newtonsoft::Json::Schema {
struct JsonSchemaType;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaWriter___c;
}
namespace Newtonsoft::Json::Schema {
class JsonSchema;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class JsonSchemaWriter;
}
namespace Newtonsoft::Json::Schema {
class JsonSchemaWriter___c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaWriter);
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::JsonSchemaWriter___c);
// Dependencies System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaWriter/<>c
class CORDL_TYPE JsonSchemaWriter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Schema::JsonSchemaWriter___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>* __9__7_0;

  static inline ::Newtonsoft::Json::Schema::JsonSchemaWriter___c* New_ctor();

  /// @brief Method <WriteType>b__7_0, addr 0x5bb9f6c, size 0xc, virtual false, abstract: false, final false
  inline bool _WriteType_b__7_0(::Newtonsoft::Json::Schema::JsonSchemaType v);

  /// @brief Method .ctor, addr 0x5bb9f68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Schema::JsonSchemaWriter___c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>* getStaticF___9__7_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Schema::JsonSchemaWriter___c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchemaType, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaWriter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaWriter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaWriter___c(JsonSchemaWriter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaWriter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaWriter___c(JsonSchemaWriter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaWriter___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
// Dependencies System.Object
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.JsonSchemaWriter
class CORDL_TYPE JsonSchemaWriter : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Schema::JsonSchemaWriter___c;

  /// @brief Field _resolver, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__resolver, put = __cordl_internal_set__resolver)) ::Newtonsoft::Json::Schema::JsonSchemaResolver* _resolver;

  /// @brief Field _writer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__writer, put = __cordl_internal_set__writer)) ::Newtonsoft::Json::JsonWriter* _writer;

  static inline ::Newtonsoft::Json::Schema::JsonSchemaWriter* New_ctor(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

  /// @brief Method ReferenceOrWriteSchema, addr 0x5bb9058, size 0xf4, virtual false, abstract: false, final false
  inline void ReferenceOrWriteSchema(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method WriteItems, addr 0x5bb9a74, size 0x4a0, virtual false, abstract: false, final false
  inline void WriteItems(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method WritePropertyIfNotNull, addr 0x5bb914c, size 0x64, virtual false, abstract: false, final false
  inline void WritePropertyIfNotNull(::Newtonsoft::Json::JsonWriter* writer, ::StringW propertyName, ::System::Object* value);

  /// @brief Method WriteSchema, addr 0x5baf994, size 0x1050, virtual false, abstract: false, final false
  inline void WriteSchema(::Newtonsoft::Json::Schema::JsonSchema* schema);

  /// @brief Method WriteSchemaDictionaryIfNotNull, addr 0x5bb9714, size 0x360, virtual false, abstract: false, final false
  inline void WriteSchemaDictionaryIfNotNull(::Newtonsoft::Json::JsonWriter* writer, ::StringW propertyName,
                                             ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* properties);

  /// @brief Method WriteType, addr 0x5bb91b0, size 0x564, virtual false, abstract: false, final false
  inline void WriteType(::StringW propertyName, ::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaType type);

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver* const& __cordl_internal_get__resolver() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaResolver*& __cordl_internal_get__resolver();

  constexpr ::Newtonsoft::Json::JsonWriter* const& __cordl_internal_get__writer() const;

  constexpr ::Newtonsoft::Json::JsonWriter*& __cordl_internal_get__writer();

  constexpr void __cordl_internal_set__resolver(::Newtonsoft::Json::Schema::JsonSchemaResolver* value);

  constexpr void __cordl_internal_set__writer(::Newtonsoft::Json::JsonWriter* value);

  /// @brief Method .ctor, addr 0x5baf92c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Schema::JsonSchemaResolver* resolver);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSchemaWriter(JsonSchemaWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSchemaWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSchemaWriter(JsonSchemaWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13532 };

  /// @brief Field _writer, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonWriter* ____writer;

  /// @brief Field _resolver, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaResolver* ____resolver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaWriter, ____writer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaWriter, ____resolver) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaWriter, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaWriter*, "Newtonsoft.Json.Schema", "JsonSchemaWriter");
NEED_NO_BOX(::Newtonsoft::Json::Schema::JsonSchemaWriter___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaWriter___c*, "Newtonsoft.Json.Schema", "JsonSchemaWriter/<>c");
