#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerProxy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerProxy)
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace Newtonsoft::Json::Serialization {
class ISerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalBase;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalReader;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalWriter;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct TypeNameAssemblyFormatHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
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
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerProxy);
// Dependencies Newtonsoft.Json.JsonSerializer
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerProxy
class CORDL_TYPE JsonSerializerProxy : public ::Newtonsoft::Json::JsonSerializer {
public:
  // Declarations
  __declspec(property(get = get_Binder, put = set_Binder)) ::System::Runtime::Serialization::SerializationBinder* Binder;

  __declspec(property(get = get_CheckAdditionalContent, put = set_CheckAdditionalContent)) bool CheckAdditionalContent;

  __declspec(property(get = get_ConstructorHandling, put = set_ConstructorHandling)) ::Newtonsoft::Json::ConstructorHandling ConstructorHandling;

  __declspec(property(get = get_Context, put = set_Context)) ::System::Runtime::Serialization::StreamingContext Context;

  __declspec(property(get = get_ContractResolver, put = set_ContractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver* ContractResolver;

  __declspec(property(get = get_Converters)) ::Newtonsoft::Json::JsonConverterCollection* Converters;

  __declspec(property(get = get_Culture, put = set_Culture)) ::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_DateFormatHandling, put = set_DateFormatHandling)) ::Newtonsoft::Json::DateFormatHandling DateFormatHandling;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString)) ::StringW DateFormatString;

  __declspec(property(get = get_DateParseHandling, put = set_DateParseHandling)) ::Newtonsoft::Json::DateParseHandling DateParseHandling;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  __declspec(property(get = get_DefaultValueHandling, put = set_DefaultValueHandling)) ::Newtonsoft::Json::DefaultValueHandling DefaultValueHandling;

  __declspec(property(get = get_EqualityComparer, put = set_EqualityComparer)) ::System::Collections::IEqualityComparer* EqualityComparer;

  __declspec(property(get = get_FloatFormatHandling, put = set_FloatFormatHandling)) ::Newtonsoft::Json::FloatFormatHandling FloatFormatHandling;

  __declspec(property(get = get_FloatParseHandling, put = set_FloatParseHandling)) ::Newtonsoft::Json::FloatParseHandling FloatParseHandling;

  __declspec(property(get = get_Formatting, put = set_Formatting)) ::Newtonsoft::Json::Formatting Formatting;

  __declspec(property(get = get_MaxDepth, put = set_MaxDepth)) ::System::Nullable_1<int32_t> MaxDepth;

  __declspec(property(get = get_MetadataPropertyHandling, put = set_MetadataPropertyHandling)) ::Newtonsoft::Json::MetadataPropertyHandling MetadataPropertyHandling;

  __declspec(property(get = get_MissingMemberHandling, put = set_MissingMemberHandling)) ::Newtonsoft::Json::MissingMemberHandling MissingMemberHandling;

  __declspec(property(get = get_NullValueHandling, put = set_NullValueHandling)) ::Newtonsoft::Json::NullValueHandling NullValueHandling;

  __declspec(property(get = get_ObjectCreationHandling, put = set_ObjectCreationHandling)) ::Newtonsoft::Json::ObjectCreationHandling ObjectCreationHandling;

  __declspec(property(get = get_PreserveReferencesHandling, put = set_PreserveReferencesHandling)) ::Newtonsoft::Json::PreserveReferencesHandling PreserveReferencesHandling;

  __declspec(property(get = get_ReferenceLoopHandling, put = set_ReferenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling ReferenceLoopHandling;

  __declspec(property(get = get_ReferenceResolver, put = set_ReferenceResolver)) ::Newtonsoft::Json::Serialization::IReferenceResolver* ReferenceResolver;

  __declspec(property(get = get_SerializationBinder, put = set_SerializationBinder)) ::Newtonsoft::Json::Serialization::ISerializationBinder* SerializationBinder;

  __declspec(property(get = get_StringEscapeHandling, put = set_StringEscapeHandling)) ::Newtonsoft::Json::StringEscapeHandling StringEscapeHandling;

  __declspec(property(get = get_TraceWriter, put = set_TraceWriter)) ::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter;

  __declspec(property(get = get_TypeNameAssemblyFormat, put = set_TypeNameAssemblyFormat)) ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle TypeNameAssemblyFormat;

  __declspec(property(get = get_TypeNameAssemblyFormatHandling, put = set_TypeNameAssemblyFormatHandling)) ::Newtonsoft::Json::TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling;

  __declspec(property(get = get_TypeNameHandling, put = set_TypeNameHandling)) ::Newtonsoft::Json::TypeNameHandling TypeNameHandling;

  /// @brief Field _serializer, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__serializer, put = __cordl_internal_set__serializer)) ::Newtonsoft::Json::JsonSerializer* _serializer;

  /// @brief Field _serializerReader, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__serializerReader, put = __cordl_internal_set__serializerReader)) ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _serializerReader;

  /// @brief Field _serializerWriter, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__serializerWriter, put = __cordl_internal_set__serializerWriter)) ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* _serializerWriter;

  /// @brief Method DeserializeInternal, addr 0x3efc484, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType);

  /// @brief Method GetInternalSerializer, addr 0x3efc3ec, size 0x1c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* GetInternalSerializer();

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* serializerReader);

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* serializerWriter);

  /// @brief Method PopulateInternal, addr 0x3efc4bc, size 0x34, virtual true, abstract: false, final false
  inline void PopulateInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method SerializeInternal, addr 0x3efc4f0, size 0x30, virtual true, abstract: false, final false
  inline void SerializeInternal(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* rootType);

  constexpr ::Newtonsoft::Json::JsonSerializer* const& __cordl_internal_get__serializer() const;

  constexpr ::Newtonsoft::Json::JsonSerializer*& __cordl_internal_get__serializer();

  constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* const& __cordl_internal_get__serializerReader() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*& __cordl_internal_get__serializerReader();

  constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* const& __cordl_internal_get__serializerWriter() const;

  constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*& __cordl_internal_get__serializerWriter();

  constexpr void __cordl_internal_set__serializer(::Newtonsoft::Json::JsonSerializer* value);

  constexpr void __cordl_internal_set__serializerReader(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* value);

  constexpr void __cordl_internal_set__serializerWriter(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* value);

  /// @brief Method .ctor, addr 0x3efc408, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* serializerReader);

  /// @brief Method .ctor, addr 0x3ef5f7c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* serializerWriter);

  /// @brief Method add_Error, addr 0x3efbb78, size 0x20, virtual true, abstract: false, final false
  inline void add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  /// @brief Method get_Binder, addr 0x3efc008, size 0x20, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationBinder* get_Binder();

  /// @brief Method get_CheckAdditionalContent, addr 0x3efc3a0, size 0x24, virtual true, abstract: false, final false
  inline bool get_CheckAdditionalContent();

  /// @brief Method get_ConstructorHandling, addr 0x3efbfc0, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling();

  /// @brief Method get_Context, addr 0x3efc088, size 0x24, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::StreamingContext get_Context();

  /// @brief Method get_ContractResolver, addr 0x3efbcf0, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver();

  /// @brief Method get_Converters, addr 0x3efbc84, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverterCollection* get_Converters();

  /// @brief Method get_Culture, addr 0x3efc310, size 0x24, virtual true, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_DateFormatHandling, addr 0x3efc118, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling();

  /// @brief Method get_DateFormatString, addr 0x3efc2c8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_DateFormatString();

  /// @brief Method get_DateParseHandling, addr 0x3efc1a8, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling();

  /// @brief Method get_DateTimeZoneHandling, addr 0x3efc160, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method get_DefaultValueHandling, addr 0x3efbca8, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling();

  /// @brief Method get_EqualityComparer, addr 0x3efbc3c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Collections::IEqualityComparer* get_EqualityComparer();

  /// @brief Method get_FloatFormatHandling, addr 0x3efc1f0, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling();

  /// @brief Method get_FloatParseHandling, addr 0x3efc238, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling();

  /// @brief Method get_Formatting, addr 0x3efc0d0, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Formatting get_Formatting();

  /// @brief Method get_MaxDepth, addr 0x3efc358, size 0x24, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaxDepth();

  /// @brief Method get_MetadataPropertyHandling, addr 0x3efbee8, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling();

  /// @brief Method get_MissingMemberHandling, addr 0x3efbd38, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling();

  /// @brief Method get_NullValueHandling, addr 0x3efbd80, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling();

  /// @brief Method get_ObjectCreationHandling, addr 0x3efbdc8, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling();

  /// @brief Method get_PreserveReferencesHandling, addr 0x3efbe58, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling();

  /// @brief Method get_ReferenceLoopHandling, addr 0x3efbe10, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling();

  /// @brief Method get_ReferenceResolver, addr 0x3efbbb8, size 0x20, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver();

  /// @brief Method get_SerializationBinder, addr 0x3efc048, size 0x20, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ISerializationBinder* get_SerializationBinder();

  /// @brief Method get_StringEscapeHandling, addr 0x3efc280, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling();

  /// @brief Method get_TraceWriter, addr 0x3efbbf8, size 0x20, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter();

  /// @brief Method get_TypeNameAssemblyFormat, addr 0x3efbf30, size 0x24, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat();

  /// @brief Method get_TypeNameAssemblyFormatHandling, addr 0x3efbf78, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameAssemblyFormatHandling get_TypeNameAssemblyFormatHandling();

  /// @brief Method get_TypeNameHandling, addr 0x3efbea0, size 0x24, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling();

  /// @brief Method remove_Error, addr 0x3efbb98, size 0x20, virtual true, abstract: false, final false
  inline void remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  /// @brief Method set_Binder, addr 0x3efc028, size 0x20, virtual true, abstract: false, final false
  inline void set_Binder(::System::Runtime::Serialization::SerializationBinder* value);

  /// @brief Method set_CheckAdditionalContent, addr 0x3efc3c4, size 0x28, virtual true, abstract: false, final false
  inline void set_CheckAdditionalContent(bool value);

  /// @brief Method set_ConstructorHandling, addr 0x3efbfe4, size 0x24, virtual true, abstract: false, final false
  inline void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value);

  /// @brief Method set_Context, addr 0x3efc0ac, size 0x24, virtual true, abstract: false, final false
  inline void set_Context(::System::Runtime::Serialization::StreamingContext value);

  /// @brief Method set_ContractResolver, addr 0x3efbd14, size 0x24, virtual true, abstract: false, final false
  inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value);

  /// @brief Method set_Culture, addr 0x3efc334, size 0x24, virtual true, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_DateFormatHandling, addr 0x3efc13c, size 0x24, virtual true, abstract: false, final false
  inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  /// @brief Method set_DateFormatString, addr 0x3efc2ec, size 0x24, virtual true, abstract: false, final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method set_DateParseHandling, addr 0x3efc1cc, size 0x24, virtual true, abstract: false, final false
  inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  /// @brief Method set_DateTimeZoneHandling, addr 0x3efc184, size 0x24, virtual true, abstract: false, final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method set_DefaultValueHandling, addr 0x3efbccc, size 0x24, virtual true, abstract: false, final false
  inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value);

  /// @brief Method set_EqualityComparer, addr 0x3efbc60, size 0x24, virtual true, abstract: false, final false
  inline void set_EqualityComparer(::System::Collections::IEqualityComparer* value);

  /// @brief Method set_FloatFormatHandling, addr 0x3efc214, size 0x24, virtual true, abstract: false, final false
  inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  /// @brief Method set_FloatParseHandling, addr 0x3efc25c, size 0x24, virtual true, abstract: false, final false
  inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  /// @brief Method set_Formatting, addr 0x3efc0f4, size 0x24, virtual true, abstract: false, final false
  inline void set_Formatting(::Newtonsoft::Json::Formatting value);

  /// @brief Method set_MaxDepth, addr 0x3efc37c, size 0x24, virtual true, abstract: false, final false
  inline void set_MaxDepth(::System::Nullable_1<int32_t> value);

  /// @brief Method set_MetadataPropertyHandling, addr 0x3efbf0c, size 0x24, virtual true, abstract: false, final false
  inline void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value);

  /// @brief Method set_MissingMemberHandling, addr 0x3efbd5c, size 0x24, virtual true, abstract: false, final false
  inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value);

  /// @brief Method set_NullValueHandling, addr 0x3efbda4, size 0x24, virtual true, abstract: false, final false
  inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  /// @brief Method set_ObjectCreationHandling, addr 0x3efbdec, size 0x24, virtual true, abstract: false, final false
  inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value);

  /// @brief Method set_PreserveReferencesHandling, addr 0x3efbe7c, size 0x24, virtual true, abstract: false, final false
  inline void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value);

  /// @brief Method set_ReferenceLoopHandling, addr 0x3efbe34, size 0x24, virtual true, abstract: false, final false
  inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method set_ReferenceResolver, addr 0x3efbbd8, size 0x20, virtual true, abstract: false, final false
  inline void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value);

  /// @brief Method set_SerializationBinder, addr 0x3efc068, size 0x20, virtual true, abstract: false, final false
  inline void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* value);

  /// @brief Method set_StringEscapeHandling, addr 0x3efc2a4, size 0x24, virtual true, abstract: false, final false
  inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

  /// @brief Method set_TraceWriter, addr 0x3efbc18, size 0x24, virtual true, abstract: false, final false
  inline void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  /// @brief Method set_TypeNameAssemblyFormat, addr 0x3efbf54, size 0x24, virtual true, abstract: false, final false
  inline void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  /// @brief Method set_TypeNameAssemblyFormatHandling, addr 0x3efbf9c, size 0x24, virtual true, abstract: false, final false
  inline void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling value);

  /// @brief Method set_TypeNameHandling, addr 0x3efbec4, size 0x24, virtual true, abstract: false, final false
  inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerProxy(JsonSerializerProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerProxy(JsonSerializerProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10338 };

  /// @brief Field _serializerReader, offset: 0xe0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* ____serializerReader;

  /// @brief Field _serializerWriter, offset: 0xe8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* ____serializerWriter;

  /// @brief Field _serializer, offset: 0xf0, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonSerializer* ____serializer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerProxy, ____serializerReader) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerProxy, ____serializerWriter) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerProxy, ____serializer) == 0xf0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerProxy, 0xf8>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerProxy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerProxy*, "Newtonsoft.Json.Serialization", "JsonSerializerProxy");
