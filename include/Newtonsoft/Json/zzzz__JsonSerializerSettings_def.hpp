#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonSerializerSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameAssemblyFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerSettings)
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
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings___c__DisplayClass93_0;
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
namespace System::Collections::Generic {
template <typename T> class IList_1;
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
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings___c__DisplayClass93_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonSerializerSettings);
MARK_REF_PTR_T(::Newtonsoft::Json::JsonSerializerSettings___c__DisplayClass93_0);
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonSerializerSettings/<>c__DisplayClass93_0
class CORDL_TYPE JsonSerializerSettings___c__DisplayClass93_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::Newtonsoft::Json::Serialization::IReferenceResolver* value;

  static inline ::Newtonsoft::Json::JsonSerializerSettings___c__DisplayClass93_0* New_ctor();

  constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver* const& __cordl_internal_get_value() const;

  constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::Newtonsoft::Json::Serialization::IReferenceResolver* value);

  /// @brief Method .ctor, addr 0x3e870a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_ReferenceResolver>b__0, addr 0x3e87b84, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IReferenceResolver* _set_ReferenceResolver_b__0();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerSettings___c__DisplayClass93_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings___c__DisplayClass93_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerSettings___c__DisplayClass93_0(JsonSerializerSettings___c__DisplayClass93_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings___c__DisplayClass93_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerSettings___c__DisplayClass93_0(JsonSerializerSettings___c__DisplayClass93_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10088 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IReferenceResolver* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings___c__DisplayClass93_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonSerializerSettings___c__DisplayClass93_0, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json
// Dependencies Newtonsoft.Json.ConstructorHandling, Newtonsoft.Json.DateFormatHandling, Newtonsoft.Json.DateParseHandling, Newtonsoft.Json.DateTimeZoneHandling, Newtonsoft.Json.DefaultValueHandling,
// Newtonsoft.Json.FloatFormatHandling, Newtonsoft.Json.FloatParseHandling, Newtonsoft.Json.Formatting, Newtonsoft.Json.MetadataPropertyHandling, Newtonsoft.Json.MissingMemberHandling,
// Newtonsoft.Json.NullValueHandling, Newtonsoft.Json.ObjectCreationHandling, Newtonsoft.Json.PreserveReferencesHandling, Newtonsoft.Json.ReferenceLoopHandling, Newtonsoft.Json.StringEscapeHandling,
// Newtonsoft.Json.TypeNameAssemblyFormatHandling, Newtonsoft.Json.TypeNameHandling, System.Nullable`1<T>, System.Object, System.Runtime.Serialization.StreamingContext
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonSerializerSettings
class CORDL_TYPE JsonSerializerSettings : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass93_0 = ::Newtonsoft::Json::JsonSerializerSettings___c__DisplayClass93_0;

  __declspec(property(get = get_Binder, put = set_Binder)) ::System::Runtime::Serialization::SerializationBinder* Binder;

  __declspec(property(get = get_CheckAdditionalContent, put = set_CheckAdditionalContent)) bool CheckAdditionalContent;

  __declspec(property(get = get_ConstructorHandling, put = set_ConstructorHandling)) ::Newtonsoft::Json::ConstructorHandling ConstructorHandling;

  __declspec(property(get = get_Context, put = set_Context)) ::System::Runtime::Serialization::StreamingContext Context;

  __declspec(property(get = get_ContractResolver, put = set_ContractResolver)) ::Newtonsoft::Json::Serialization::IContractResolver* ContractResolver;

  __declspec(property(get = get_Converters, put = set_Converters)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* Converters;

  __declspec(property(get = get_Culture, put = set_Culture)) ::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_DateFormatHandling, put = set_DateFormatHandling)) ::Newtonsoft::Json::DateFormatHandling DateFormatHandling;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString)) ::StringW DateFormatString;

  __declspec(property(get = get_DateParseHandling, put = set_DateParseHandling)) ::Newtonsoft::Json::DateParseHandling DateParseHandling;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling)) ::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  /// @brief Field DefaultContext, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DefaultContext, put = setStaticF_DefaultContext)) ::System::Runtime::Serialization::StreamingContext DefaultContext;

  /// @brief Field DefaultCulture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultCulture, put = setStaticF_DefaultCulture)) ::System::Globalization::CultureInfo* DefaultCulture;

  __declspec(property(get = get_DefaultValueHandling, put = set_DefaultValueHandling)) ::Newtonsoft::Json::DefaultValueHandling DefaultValueHandling;

  __declspec(property(get = get_EqualityComparer, put = set_EqualityComparer)) ::System::Collections::IEqualityComparer* EqualityComparer;

  __declspec(property(get = get_Error, put = set_Error)) ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Error;

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

  __declspec(property(get = get_ReferenceResolverProvider, put = set_ReferenceResolverProvider)) ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* ReferenceResolverProvider;

  __declspec(property(get = get_SerializationBinder, put = set_SerializationBinder)) ::Newtonsoft::Json::Serialization::ISerializationBinder* SerializationBinder;

  __declspec(property(get = get_StringEscapeHandling, put = set_StringEscapeHandling)) ::Newtonsoft::Json::StringEscapeHandling StringEscapeHandling;

  __declspec(property(get = get_TraceWriter, put = set_TraceWriter)) ::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter;

  __declspec(property(get = get_TypeNameAssemblyFormat, put = set_TypeNameAssemblyFormat)) ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle TypeNameAssemblyFormat;

  __declspec(property(get = get_TypeNameAssemblyFormatHandling, put = set_TypeNameAssemblyFormatHandling)) ::Newtonsoft::Json::TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling;

  __declspec(property(get = get_TypeNameHandling, put = set_TypeNameHandling)) ::Newtonsoft::Json::TypeNameHandling TypeNameHandling;

  /// @brief Field <ContractResolver>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__ContractResolver_k__BackingField,
                      put = __cordl_internal_set__ContractResolver_k__BackingField)) ::Newtonsoft::Json::Serialization::IContractResolver* _ContractResolver_k__BackingField;

  /// @brief Field <Converters>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__Converters_k__BackingField,
                      put = __cordl_internal_set__Converters_k__BackingField)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* _Converters_k__BackingField;

  /// @brief Field <EqualityComparer>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__EqualityComparer_k__BackingField,
                      put = __cordl_internal_set__EqualityComparer_k__BackingField)) ::System::Collections::IEqualityComparer* _EqualityComparer_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__Error_k__BackingField,
                      put = __cordl_internal_set__Error_k__BackingField)) ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* _Error_k__BackingField;

  /// @brief Field <ReferenceResolverProvider>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__ReferenceResolverProvider_k__BackingField,
      put = __cordl_internal_set__ReferenceResolverProvider_k__BackingField)) ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* _ReferenceResolverProvider_k__BackingField;

  /// @brief Field <SerializationBinder>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__SerializationBinder_k__BackingField,
                      put = __cordl_internal_set__SerializationBinder_k__BackingField)) ::Newtonsoft::Json::Serialization::ISerializationBinder* _SerializationBinder_k__BackingField;

  /// @brief Field <TraceWriter>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__TraceWriter_k__BackingField,
                      put = __cordl_internal_set__TraceWriter_k__BackingField)) ::Newtonsoft::Json::Serialization::ITraceWriter* _TraceWriter_k__BackingField;

  /// @brief Field _checkAdditionalContent, offset 0x50, size 0x2
  __declspec(property(get = __cordl_internal_get__checkAdditionalContent, put = __cordl_internal_set__checkAdditionalContent)) ::System::Nullable_1<bool> _checkAdditionalContent;

  /// @brief Field _constructorHandling, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__constructorHandling, put = __cordl_internal_set__constructorHandling)) ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling>
      _constructorHandling;

  /// @brief Field _context, offset 0xa8, size 0x18
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> _context;

  /// @brief Field _culture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__culture, put = __cordl_internal_set__culture)) ::System::Globalization::CultureInfo* _culture;

  /// @brief Field _dateFormatHandling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dateFormatHandling, put = __cordl_internal_set__dateFormatHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling;

  /// @brief Field _dateFormatString, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__dateFormatString, put = __cordl_internal_set__dateFormatString)) ::StringW _dateFormatString;

  /// @brief Field _dateFormatStringSet, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__dateFormatStringSet, put = __cordl_internal_set__dateFormatStringSet)) bool _dateFormatStringSet;

  /// @brief Field _dateParseHandling, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dateParseHandling, put = __cordl_internal_set__dateParseHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling;

  /// @brief Field _dateTimeZoneHandling, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dateTimeZoneHandling, put = __cordl_internal_set__dateTimeZoneHandling)) ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>
      _dateTimeZoneHandling;

  /// @brief Field _defaultValueHandling, offset 0x74, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValueHandling, put = __cordl_internal_set__defaultValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>
      _defaultValueHandling;

  /// @brief Field _floatFormatHandling, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__floatFormatHandling, put = __cordl_internal_set__floatFormatHandling)) ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>
      _floatFormatHandling;

  /// @brief Field _floatParseHandling, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__floatParseHandling, put = __cordl_internal_set__floatParseHandling)) ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling;

  /// @brief Field _formatting, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__formatting, put = __cordl_internal_set__formatting)) ::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting;

  /// @brief Field _maxDepth, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get__maxDepth, put = __cordl_internal_set__maxDepth)) ::System::Nullable_1<int32_t> _maxDepth;

  /// @brief Field _maxDepthSet, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__maxDepthSet, put = __cordl_internal_set__maxDepthSet)) bool _maxDepthSet;

  /// @brief Field _metadataPropertyHandling, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__metadataPropertyHandling, put = __cordl_internal_set__metadataPropertyHandling)) ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling>
      _metadataPropertyHandling;

  /// @brief Field _missingMemberHandling, offset 0x94, size 0x8
  __declspec(property(get = __cordl_internal_get__missingMemberHandling, put = __cordl_internal_set__missingMemberHandling)) ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>
      _missingMemberHandling;

  /// @brief Field _nullValueHandling, offset 0x84, size 0x8
  __declspec(property(get = __cordl_internal_get__nullValueHandling, put = __cordl_internal_set__nullValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling;

  /// @brief Field _objectCreationHandling, offset 0x8c, size 0x8
  __declspec(property(get = __cordl_internal_get__objectCreationHandling, put = __cordl_internal_set__objectCreationHandling)) ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>
      _objectCreationHandling;

  /// @brief Field _preserveReferencesHandling, offset 0x7c, size 0x8
  __declspec(property(get = __cordl_internal_get__preserveReferencesHandling,
                      put = __cordl_internal_set__preserveReferencesHandling)) ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling>
      _preserveReferencesHandling;

  /// @brief Field _referenceLoopHandling, offset 0x9c, size 0x8
  __declspec(property(get = __cordl_internal_get__referenceLoopHandling, put = __cordl_internal_set__referenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>
      _referenceLoopHandling;

  /// @brief Field _stringEscapeHandling, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__stringEscapeHandling, put = __cordl_internal_set__stringEscapeHandling)) ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>
      _stringEscapeHandling;

  /// @brief Field _typeNameAssemblyFormatHandling, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get__typeNameAssemblyFormatHandling,
                      put = __cordl_internal_set__typeNameAssemblyFormatHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling>
      _typeNameAssemblyFormatHandling;

  /// @brief Field _typeNameHandling, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__typeNameHandling, put = __cordl_internal_set__typeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling;

  static inline ::Newtonsoft::Json::JsonSerializerSettings* New_ctor();

  static inline ::Newtonsoft::Json::JsonSerializerSettings* New_ctor(::Newtonsoft::Json::JsonSerializerSettings* original);

  constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& __cordl_internal_get__ContractResolver_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& __cordl_internal_get__ContractResolver_k__BackingField();

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* const& __cordl_internal_get__Converters_k__BackingField() const;

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*& __cordl_internal_get__Converters_k__BackingField();

  constexpr ::System::Collections::IEqualityComparer* const& __cordl_internal_get__EqualityComparer_k__BackingField() const;

  constexpr ::System::Collections::IEqualityComparer*& __cordl_internal_get__EqualityComparer_k__BackingField();

  constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* const& __cordl_internal_get__Error_k__BackingField() const;

  constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& __cordl_internal_get__Error_k__BackingField();

  constexpr ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* const& __cordl_internal_get__ReferenceResolverProvider_k__BackingField() const;

  constexpr ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*& __cordl_internal_get__ReferenceResolverProvider_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* const& __cordl_internal_get__SerializationBinder_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder*& __cordl_internal_get__SerializationBinder_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* const& __cordl_internal_get__TraceWriter_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& __cordl_internal_get__TraceWriter_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__checkAdditionalContent() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__checkAdditionalContent();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> const& __cordl_internal_get__constructorHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling>& __cordl_internal_get__constructorHandling();

  constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> const& __cordl_internal_get__context() const;

  constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext>& __cordl_internal_get__context();

  constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__culture() const;

  constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__culture();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& __cordl_internal_get__dateFormatHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& __cordl_internal_get__dateFormatHandling();

  constexpr ::StringW const& __cordl_internal_get__dateFormatString() const;

  constexpr ::StringW& __cordl_internal_get__dateFormatString();

  constexpr bool const& __cordl_internal_get__dateFormatStringSet() const;

  constexpr bool& __cordl_internal_get__dateFormatStringSet();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& __cordl_internal_get__dateParseHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& __cordl_internal_get__dateParseHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& __cordl_internal_get__dateTimeZoneHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& __cordl_internal_get__dateTimeZoneHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& __cordl_internal_get__defaultValueHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& __cordl_internal_get__defaultValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& __cordl_internal_get__floatFormatHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& __cordl_internal_get__floatFormatHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& __cordl_internal_get__floatParseHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& __cordl_internal_get__floatParseHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& __cordl_internal_get__formatting() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& __cordl_internal_get__formatting();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxDepth() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxDepth();

  constexpr bool const& __cordl_internal_get__maxDepthSet() const;

  constexpr bool& __cordl_internal_get__maxDepthSet();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> const& __cordl_internal_get__metadataPropertyHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling>& __cordl_internal_get__metadataPropertyHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& __cordl_internal_get__missingMemberHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& __cordl_internal_get__missingMemberHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __cordl_internal_get__nullValueHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __cordl_internal_get__nullValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& __cordl_internal_get__objectCreationHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& __cordl_internal_get__objectCreationHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> const& __cordl_internal_get__preserveReferencesHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling>& __cordl_internal_get__preserveReferencesHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __cordl_internal_get__referenceLoopHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __cordl_internal_get__referenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& __cordl_internal_get__stringEscapeHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& __cordl_internal_get__stringEscapeHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling> const& __cordl_internal_get__typeNameAssemblyFormatHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling>& __cordl_internal_get__typeNameAssemblyFormatHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __cordl_internal_get__typeNameHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __cordl_internal_get__typeNameHandling();

  constexpr void __cordl_internal_set__ContractResolver_k__BackingField(::Newtonsoft::Json::Serialization::IContractResolver* value);

  constexpr void __cordl_internal_set__Converters_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* value);

  constexpr void __cordl_internal_set__EqualityComparer_k__BackingField(::System::Collections::IEqualityComparer* value);

  constexpr void __cordl_internal_set__Error_k__BackingField(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  constexpr void __cordl_internal_set__ReferenceResolverProvider_k__BackingField(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* value);

  constexpr void __cordl_internal_set__SerializationBinder_k__BackingField(::Newtonsoft::Json::Serialization::ISerializationBinder* value);

  constexpr void __cordl_internal_set__TraceWriter_k__BackingField(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  constexpr void __cordl_internal_set__checkAdditionalContent(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__constructorHandling(::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> value);

  constexpr void __cordl_internal_set__context(::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> value);

  constexpr void __cordl_internal_set__culture(::System::Globalization::CultureInfo* value);

  constexpr void __cordl_internal_set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> value);

  constexpr void __cordl_internal_set__dateFormatString(::StringW value);

  constexpr void __cordl_internal_set__dateFormatStringSet(bool value);

  constexpr void __cordl_internal_set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> value);

  constexpr void __cordl_internal_set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> value);

  constexpr void __cordl_internal_set__defaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value);

  constexpr void __cordl_internal_set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> value);

  constexpr void __cordl_internal_set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> value);

  constexpr void __cordl_internal_set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting> value);

  constexpr void __cordl_internal_set__maxDepth(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__maxDepthSet(bool value);

  constexpr void __cordl_internal_set__metadataPropertyHandling(::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> value);

  constexpr void __cordl_internal_set__missingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value);

  constexpr void __cordl_internal_set__nullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  constexpr void __cordl_internal_set__objectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value);

  constexpr void __cordl_internal_set__preserveReferencesHandling(::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> value);

  constexpr void __cordl_internal_set__referenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr void __cordl_internal_set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> value);

  constexpr void __cordl_internal_set__typeNameAssemblyFormatHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling> value);

  constexpr void __cordl_internal_set__typeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  /// @brief Method .ctor, addr 0x3e7a318, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e87a34, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializerSettings* original);

  static inline ::System::Runtime::Serialization::StreamingContext getStaticF_DefaultContext();

  static inline ::System::Globalization::CultureInfo* getStaticF_DefaultCulture();

  /// @brief Method get_Binder, addr 0x3e870c8, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationBinder* get_Binder();

  /// @brief Method get_CheckAdditionalContent, addr 0x3e7b0d8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_CheckAdditionalContent();

  /// @brief Method get_ConstructorHandling, addr 0x3e85630, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling();

  /// @brief Method get_Context, addr 0x3e8566c, size 0x90, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::StreamingContext get_Context();

  /// @brief Method get_ContractResolver, addr 0x3e86fa4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver();

  /// @brief Method get_Converters, addr 0x3e86d4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* get_Converters();

  /// @brief Method get_Culture, addr 0x3e878e0, size 0x64, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method get_DateFormatHandling, addr 0x3e874dc, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling();

  /// @brief Method get_DateFormatString, addr 0x3e872a8, size 0x50, virtual false, abstract: false, final false
  inline ::StringW get_DateFormatString();

  /// @brief Method get_DateParseHandling, addr 0x3e8763c, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling();

  /// @brief Method get_DateTimeZoneHandling, addr 0x3e87580, size 0x54, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method get_DefaultValueHandling, addr 0x3e855f4, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling();

  /// @brief Method get_EqualityComparer, addr 0x3e86fb4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IEqualityComparer* get_EqualityComparer();

  /// @brief Method get_Error, addr 0x3e87214, size 0x8, virtual false, abstract: false, final false
  inline ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* get_Error();

  /// @brief Method get_FloatFormatHandling, addr 0x3e876f4, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling();

  /// @brief Method get_FloatParseHandling, addr 0x3e87798, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling();

  /// @brief Method get_Formatting, addr 0x3e87438, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Formatting get_Formatting();

  /// @brief Method get_MaxDepth, addr 0x3e87308, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaxDepth();

  /// @brief Method get_MetadataPropertyHandling, addr 0x3e85450, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling();

  /// @brief Method get_MissingMemberHandling, addr 0x3e85540, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling();

  /// @brief Method get_NullValueHandling, addr 0x3e855b8, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling();

  /// @brief Method get_ObjectCreationHandling, addr 0x3e8557c, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling();

  /// @brief Method get_PreserveReferencesHandling, addr 0x3e854c8, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling();

  /// @brief Method get_ReferenceLoopHandling, addr 0x3e85504, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling();

  /// @brief Method get_ReferenceResolver, addr 0x3e86fc4, size 0x20, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver();

  /// @brief Method get_ReferenceResolverProvider, addr 0x3e870a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* get_ReferenceResolverProvider();

  /// @brief Method get_SerializationBinder, addr 0x3e87204, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ISerializationBinder* get_SerializationBinder();

  /// @brief Method get_StringEscapeHandling, addr 0x3e8783c, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling();

  /// @brief Method get_TraceWriter, addr 0x3e870b8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter();

  /// @brief Method get_TypeNameAssemblyFormat, addr 0x3e86e94, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat();

  /// @brief Method get_TypeNameAssemblyFormatHandling, addr 0x3e8548c, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameAssemblyFormatHandling get_TypeNameAssemblyFormatHandling();

  /// @brief Method get_TypeNameHandling, addr 0x3e85414, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling();

  static inline void setStaticF_DefaultContext(::System::Runtime::Serialization::StreamingContext value);

  static inline void setStaticF_DefaultCulture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_Binder, addr 0x3e87190, size 0x74, virtual false, abstract: false, final false
  inline void set_Binder(::System::Runtime::Serialization::SerializationBinder* value);

  /// @brief Method set_CheckAdditionalContent, addr 0x3e8794c, size 0x68, virtual false, abstract: false, final false
  inline void set_CheckAdditionalContent(bool value);

  /// @brief Method set_ConstructorHandling, addr 0x3e86f3c, size 0x68, virtual false, abstract: false, final false
  inline void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value);

  /// @brief Method set_Context, addr 0x3e87224, size 0x84, virtual false, abstract: false, final false
  inline void set_Context(::System::Runtime::Serialization::StreamingContext value);

  /// @brief Method set_ContractResolver, addr 0x3e86fac, size 0x8, virtual false, abstract: false, final false
  inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value);

  /// @brief Method set_Converters, addr 0x3e86d54, size 0x8, virtual false, abstract: false, final false
  inline void set_Converters(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* value);

  /// @brief Method set_Culture, addr 0x3e87944, size 0x8, virtual false, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_DateFormatHandling, addr 0x3e87518, size 0x68, virtual false, abstract: false, final false
  inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  /// @brief Method set_DateFormatString, addr 0x3e872f8, size 0x10, virtual false, abstract: false, final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method set_DateParseHandling, addr 0x3e8768c, size 0x68, virtual false, abstract: false, final false
  inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  /// @brief Method set_DateTimeZoneHandling, addr 0x3e875d4, size 0x68, virtual false, abstract: false, final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method set_DefaultValueHandling, addr 0x3e86ce4, size 0x68, virtual false, abstract: false, final false
  inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value);

  /// @brief Method set_EqualityComparer, addr 0x3e86fbc, size 0x8, virtual false, abstract: false, final false
  inline void set_EqualityComparer(::System::Collections::IEqualityComparer* value);

  /// @brief Method set_Error, addr 0x3e8721c, size 0x8, virtual false, abstract: false, final false
  inline void set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  /// @brief Method set_FloatFormatHandling, addr 0x3e87730, size 0x68, virtual false, abstract: false, final false
  inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  /// @brief Method set_FloatParseHandling, addr 0x3e877d4, size 0x68, virtual false, abstract: false, final false
  inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  /// @brief Method set_Formatting, addr 0x3e87474, size 0x68, virtual false, abstract: false, final false
  inline void set_Formatting(::Newtonsoft::Json::Formatting value);

  /// @brief Method set_MaxDepth, addr 0x3e87374, size 0xc4, virtual false, abstract: false, final false
  inline void set_MaxDepth(::System::Nullable_1<int32_t> value);

  /// @brief Method set_MetadataPropertyHandling, addr 0x3e86e2c, size 0x68, virtual false, abstract: false, final false
  inline void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value);

  /// @brief Method set_MissingMemberHandling, addr 0x3e86bac, size 0x68, virtual false, abstract: false, final false
  inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value);

  /// @brief Method set_NullValueHandling, addr 0x3e86c7c, size 0x68, virtual false, abstract: false, final false
  inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  /// @brief Method set_ObjectCreationHandling, addr 0x3e86c14, size 0x68, virtual false, abstract: false, final false
  inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value);

  /// @brief Method set_PreserveReferencesHandling, addr 0x3e86d5c, size 0x68, virtual false, abstract: false, final false
  inline void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value);

  /// @brief Method set_ReferenceLoopHandling, addr 0x3e86b44, size 0x68, virtual false, abstract: false, final false
  inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method set_ReferenceResolver, addr 0x3e86fe4, size 0xbc, virtual false, abstract: false, final false
  inline void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value);

  /// @brief Method set_ReferenceResolverProvider, addr 0x3e870b0, size 0x8, virtual false, abstract: false, final false
  inline void set_ReferenceResolverProvider(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* value);

  /// @brief Method set_SerializationBinder, addr 0x3e8720c, size 0x8, virtual false, abstract: false, final false
  inline void set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* value);

  /// @brief Method set_StringEscapeHandling, addr 0x3e87878, size 0x68, virtual false, abstract: false, final false
  inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

  /// @brief Method set_TraceWriter, addr 0x3e870c0, size 0x8, virtual false, abstract: false, final false
  inline void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  /// @brief Method set_TypeNameAssemblyFormat, addr 0x3e86ed0, size 0x4, virtual false, abstract: false, final false
  inline void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  /// @brief Method set_TypeNameAssemblyFormatHandling, addr 0x3e86ed4, size 0x68, virtual false, abstract: false, final false
  inline void set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling value);

  /// @brief Method set_TypeNameHandling, addr 0x3e86dc4, size 0x68, virtual false, abstract: false, final false
  inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerSettings(JsonSerializerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerSettings(JsonSerializerSettings const&) = delete;

  /// @brief Field DefaultCheckAdditionalContent offset 0xffffffff size 0x1
  static constexpr bool DefaultCheckAdditionalContent{ false };

  /// @brief Field DefaultConstructorHandling value: I32(0)
  static ::Newtonsoft::Json::ConstructorHandling const DefaultConstructorHandling;

  /// @brief Field DefaultDateFormatHandling value: I32(0)
  static ::Newtonsoft::Json::DateFormatHandling const DefaultDateFormatHandling;

  /// @brief Field DefaultDateFormatString offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultDateFormatString{ u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK" };

  /// @brief Field DefaultDateParseHandling value: I32(1)
  static ::Newtonsoft::Json::DateParseHandling const DefaultDateParseHandling;

  /// @brief Field DefaultDateTimeZoneHandling value: I32(3)
  static ::Newtonsoft::Json::DateTimeZoneHandling const DefaultDateTimeZoneHandling;

  /// @brief Field DefaultDefaultValueHandling value: I32(0)
  static ::Newtonsoft::Json::DefaultValueHandling const DefaultDefaultValueHandling;

  /// @brief Field DefaultFloatFormatHandling value: I32(0)
  static ::Newtonsoft::Json::FloatFormatHandling const DefaultFloatFormatHandling;

  /// @brief Field DefaultFloatParseHandling value: I32(0)
  static ::Newtonsoft::Json::FloatParseHandling const DefaultFloatParseHandling;

  /// @brief Field DefaultFormatting value: I32(0)
  static ::Newtonsoft::Json::Formatting const DefaultFormatting;

  /// @brief Field DefaultMaxDepth offset 0xffffffff size 0x4
  static constexpr int32_t DefaultMaxDepth{ static_cast<int32_t>(0x40) };

  /// @brief Field DefaultMetadataPropertyHandling value: I32(0)
  static ::Newtonsoft::Json::MetadataPropertyHandling const DefaultMetadataPropertyHandling;

  /// @brief Field DefaultMissingMemberHandling value: I32(0)
  static ::Newtonsoft::Json::MissingMemberHandling const DefaultMissingMemberHandling;

  /// @brief Field DefaultNullValueHandling value: I32(0)
  static ::Newtonsoft::Json::NullValueHandling const DefaultNullValueHandling;

  /// @brief Field DefaultObjectCreationHandling value: I32(0)
  static ::Newtonsoft::Json::ObjectCreationHandling const DefaultObjectCreationHandling;

  /// @brief Field DefaultPreserveReferencesHandling value: I32(0)
  static ::Newtonsoft::Json::PreserveReferencesHandling const DefaultPreserveReferencesHandling;

  /// @brief Field DefaultReferenceLoopHandling value: I32(0)
  static ::Newtonsoft::Json::ReferenceLoopHandling const DefaultReferenceLoopHandling;

  /// @brief Field DefaultStringEscapeHandling value: I32(0)
  static ::Newtonsoft::Json::StringEscapeHandling const DefaultStringEscapeHandling;

  /// @brief Field DefaultTypeNameAssemblyFormatHandling value: I32(0)
  static ::Newtonsoft::Json::TypeNameAssemblyFormatHandling const DefaultTypeNameAssemblyFormatHandling;

  /// @brief Field DefaultTypeNameHandling value: I32(0)
  static ::Newtonsoft::Json::TypeNameHandling const DefaultTypeNameHandling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10089 };

  /// @brief Field _formatting, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Formatting> ____formatting;

  /// @brief Field _dateFormatHandling, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> ____dateFormatHandling;

  /// @brief Field _dateTimeZoneHandling, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> ____dateTimeZoneHandling;

  /// @brief Field _dateParseHandling, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> ____dateParseHandling;

  /// @brief Field _floatFormatHandling, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> ____floatFormatHandling;

  /// @brief Field _floatParseHandling, offset: 0x38, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> ____floatParseHandling;

  /// @brief Field _stringEscapeHandling, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> ____stringEscapeHandling;

  /// @brief Field _culture, offset: 0x48, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _checkAdditionalContent, offset: 0x50, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____checkAdditionalContent;

  /// @brief Field _maxDepth, offset: 0x54, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxDepth;

  /// @brief Field _maxDepthSet, offset: 0x5c, size: 0x1, def value: None
  bool ____maxDepthSet;

  /// @brief Field _dateFormatString, offset: 0x60, size: 0x8, def value: None
  ::StringW ____dateFormatString;

  /// @brief Field _dateFormatStringSet, offset: 0x68, size: 0x1, def value: None
  bool ____dateFormatStringSet;

  /// @brief Field _typeNameAssemblyFormatHandling, offset: 0x6c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling> ____typeNameAssemblyFormatHandling;

  /// @brief Field _defaultValueHandling, offset: 0x74, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> ____defaultValueHandling;

  /// @brief Field _preserveReferencesHandling, offset: 0x7c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> ____preserveReferencesHandling;

  /// @brief Field _nullValueHandling, offset: 0x84, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> ____nullValueHandling;

  /// @brief Field _objectCreationHandling, offset: 0x8c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> ____objectCreationHandling;

  /// @brief Field _missingMemberHandling, offset: 0x94, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> ____missingMemberHandling;

  /// @brief Field _referenceLoopHandling, offset: 0x9c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> ____referenceLoopHandling;

  /// @brief Field _context, offset: 0xa8, size: 0x18, def value: None
  ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> ____context;

  /// @brief Field _constructorHandling, offset: 0xc0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> ____constructorHandling;

  /// @brief Field _typeNameHandling, offset: 0xc8, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> ____typeNameHandling;

  /// @brief Field _metadataPropertyHandling, offset: 0xd0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> ____metadataPropertyHandling;

  /// @brief Field <Converters>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* ____Converters_k__BackingField;

  /// @brief Field <ContractResolver>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IContractResolver* ____ContractResolver_k__BackingField;

  /// @brief Field <EqualityComparer>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::IEqualityComparer* ____EqualityComparer_k__BackingField;

  /// @brief Field <ReferenceResolverProvider>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* ____ReferenceResolverProvider_k__BackingField;

  /// @brief Field <TraceWriter>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ITraceWriter* ____TraceWriter_k__BackingField;

  /// @brief Field <SerializationBinder>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ISerializationBinder* ____SerializationBinder_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* ____Error_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____formatting) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____dateFormatHandling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____dateTimeZoneHandling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____dateParseHandling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____floatFormatHandling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____floatParseHandling) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____stringEscapeHandling) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____culture) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____checkAdditionalContent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____maxDepth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____maxDepthSet) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____dateFormatString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____dateFormatStringSet) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____typeNameAssemblyFormatHandling) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____defaultValueHandling) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____preserveReferencesHandling) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____nullValueHandling) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____objectCreationHandling) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____missingMemberHandling) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____referenceLoopHandling) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____context) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____constructorHandling) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____typeNameHandling) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____metadataPropertyHandling) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____Converters_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____ContractResolver_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____EqualityComparer_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____ReferenceResolverProvider_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____TraceWriter_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____SerializationBinder_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____Error_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonSerializerSettings, 0x110>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonSerializerSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonSerializerSettings*, "Newtonsoft.Json", "JsonSerializerSettings");
NEED_NO_BOX(::Newtonsoft::Json::JsonSerializerSettings___c__DisplayClass93_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonSerializerSettings___c__DisplayClass93_0*, "Newtonsoft.Json", "JsonSerializerSettings/<>c__DisplayClass93_0");
