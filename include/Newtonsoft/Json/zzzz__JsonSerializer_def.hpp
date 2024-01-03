#pragma once
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
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializer)
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace System {
class Type;
}
namespace System::IO {
class TextWriter;
}
namespace System::IO {
class TextReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonSerializer);
// Type: Newtonsoft.Json::JsonSerializer
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4732 }), TypeDefinitionIndex(TypeDefinitionIndex(11799)), GenericInstantiation(GenericInstantiation
// { tdi: TypeDefinitionIndex(2448), inst: 4733 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4759 }), TypeDefinitionIndex(TypeDefinitionIndex(11809)),
// TypeDefinitionIndex(TypeDefinitionIndex(11794)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4737 }), TypeDefinitionIndex(TypeDefinitionIndex(11798)),
// TypeDefinitionIndex(TypeDefinitionIndex(3241)), TypeDefinitionIndex(TypeDefinitionIndex(11797)), TypeDefinitionIndex(TypeDefinitionIndex(11796)), TypeDefinitionIndex(TypeDefinitionIndex(11810)),
// TypeDefinitionIndex(TypeDefinitionIndex(11816)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(11840)),
// TypeDefinitionIndex(TypeDefinitionIndex(11822)), TypeDefinitionIndex(TypeDefinitionIndex(3235)), TypeDefinitionIndex(TypeDefinitionIndex(11838)), TypeDefinitionIndex(TypeDefinitionIndex(11812)),
// TypeDefinitionIndex(TypeDefinitionIndex(11795)), TypeDefinitionIndex(TypeDefinitionIndex(11837)), TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2448), inst: 4740 }), TypeDefinitionIndex(TypeDefinitionIndex(11800)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4734 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11839)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4738 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11836)) CS Name: ::Newtonsoft.Json::JsonSerializer*
class CORDL_TYPE JsonSerializer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _typeNameHandling, offset 0x10, size 0x4
  __declspec(property(get = __get__typeNameHandling, put = __set__typeNameHandling))::Newtonsoft::Json::TypeNameHandling _typeNameHandling;

  /// @brief Field _typeNameAssemblyFormat, offset 0x14, size 0x4
  __declspec(property(get = __get__typeNameAssemblyFormat, put = __set__typeNameAssemblyFormat))::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _typeNameAssemblyFormat;

  /// @brief Field _preserveReferencesHandling, offset 0x18, size 0x4
  __declspec(property(get = __get__preserveReferencesHandling, put = __set__preserveReferencesHandling))::Newtonsoft::Json::PreserveReferencesHandling _preserveReferencesHandling;

  /// @brief Field _referenceLoopHandling, offset 0x1c, size 0x4
  __declspec(property(get = __get__referenceLoopHandling, put = __set__referenceLoopHandling))::Newtonsoft::Json::ReferenceLoopHandling _referenceLoopHandling;

  /// @brief Field _missingMemberHandling, offset 0x20, size 0x4
  __declspec(property(get = __get__missingMemberHandling, put = __set__missingMemberHandling))::Newtonsoft::Json::MissingMemberHandling _missingMemberHandling;

  /// @brief Field _objectCreationHandling, offset 0x24, size 0x4
  __declspec(property(get = __get__objectCreationHandling, put = __set__objectCreationHandling))::Newtonsoft::Json::ObjectCreationHandling _objectCreationHandling;

  /// @brief Field _nullValueHandling, offset 0x28, size 0x4
  __declspec(property(get = __get__nullValueHandling, put = __set__nullValueHandling))::Newtonsoft::Json::NullValueHandling _nullValueHandling;

  /// @brief Field _defaultValueHandling, offset 0x2c, size 0x4
  __declspec(property(get = __get__defaultValueHandling, put = __set__defaultValueHandling))::Newtonsoft::Json::DefaultValueHandling _defaultValueHandling;

  /// @brief Field _constructorHandling, offset 0x30, size 0x4
  __declspec(property(get = __get__constructorHandling, put = __set__constructorHandling))::Newtonsoft::Json::ConstructorHandling _constructorHandling;

  /// @brief Field _metadataPropertyHandling, offset 0x34, size 0x4
  __declspec(property(get = __get__metadataPropertyHandling, put = __set__metadataPropertyHandling))::Newtonsoft::Json::MetadataPropertyHandling _metadataPropertyHandling;

  /// @brief Field _converters, offset 0x38, size 0x8
  __declspec(property(get = __get__converters, put = __set__converters))::Newtonsoft::Json::JsonConverterCollection* _converters;

  /// @brief Field _contractResolver, offset 0x40, size 0x8
  __declspec(property(get = __get__contractResolver, put = __set__contractResolver))::Newtonsoft::Json::Serialization::IContractResolver* _contractResolver;

  /// @brief Field _traceWriter, offset 0x48, size 0x8
  __declspec(property(get = __get__traceWriter, put = __set__traceWriter))::Newtonsoft::Json::Serialization::ITraceWriter* _traceWriter;

  /// @brief Field _equalityComparer, offset 0x50, size 0x8
  __declspec(property(get = __get__equalityComparer, put = __set__equalityComparer))::System::Collections::IEqualityComparer* _equalityComparer;

  /// @brief Field _binder, offset 0x58, size 0x8
  __declspec(property(get = __get__binder, put = __set__binder))::System::Runtime::Serialization::SerializationBinder* _binder;

  /// @brief Field _context, offset 0x60, size 0x10
  __declspec(property(get = __get__context, put = __set__context))::System::Runtime::Serialization::StreamingContext _context;

  /// @brief Field _referenceResolver, offset 0x70, size 0x8
  __declspec(property(get = __get__referenceResolver, put = __set__referenceResolver))::Newtonsoft::Json::Serialization::IReferenceResolver* _referenceResolver;

  /// @brief Field _formatting, offset 0x78, size 0x8
  __declspec(property(get = __get__formatting, put = __set__formatting))::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting;

  /// @brief Field _dateFormatHandling, offset 0x80, size 0x8
  __declspec(property(get = __get__dateFormatHandling, put = __set__dateFormatHandling))::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling;

  /// @brief Field _dateTimeZoneHandling, offset 0x88, size 0x8
  __declspec(property(get = __get__dateTimeZoneHandling, put = __set__dateTimeZoneHandling))::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling;

  /// @brief Field _dateParseHandling, offset 0x90, size 0x8
  __declspec(property(get = __get__dateParseHandling, put = __set__dateParseHandling))::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling;

  /// @brief Field _floatFormatHandling, offset 0x98, size 0x8
  __declspec(property(get = __get__floatFormatHandling, put = __set__floatFormatHandling))::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling;

  /// @brief Field _floatParseHandling, offset 0xa0, size 0x8
  __declspec(property(get = __get__floatParseHandling, put = __set__floatParseHandling))::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling;

  /// @brief Field _stringEscapeHandling, offset 0xa8, size 0x8
  __declspec(property(get = __get__stringEscapeHandling, put = __set__stringEscapeHandling))::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling;

  /// @brief Field _culture, offset 0xb0, size 0x8
  __declspec(property(get = __get__culture, put = __set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field _maxDepth, offset 0xb8, size 0x8
  __declspec(property(get = __get__maxDepth, put = __set__maxDepth))::System::Nullable_1<int32_t> _maxDepth;

  /// @brief Field _maxDepthSet, offset 0xc0, size 0x1
  __declspec(property(get = __get__maxDepthSet, put = __set__maxDepthSet)) bool _maxDepthSet;

  /// @brief Field _checkAdditionalContent, offset 0xc1, size 0x2
  __declspec(property(get = __get__checkAdditionalContent, put = __set__checkAdditionalContent))::System::Nullable_1<bool> _checkAdditionalContent;

  /// @brief Field _dateFormatString, offset 0xc8, size 0x8
  __declspec(property(get = __get__dateFormatString, put = __set__dateFormatString))::StringW _dateFormatString;

  /// @brief Field _dateFormatStringSet, offset 0xd0, size 0x1
  __declspec(property(get = __get__dateFormatStringSet, put = __set__dateFormatStringSet)) bool _dateFormatStringSet;

  /// @brief Field Error, offset 0xd8, size 0x8
  __declspec(property(get = __get_Error, put = __set_Error))::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Error;

  __declspec(property(get = get_ReferenceResolver, put = set_ReferenceResolver))::Newtonsoft::Json::Serialization::IReferenceResolver* ReferenceResolver;

  __declspec(property(get = get_Binder, put = set_Binder))::System::Runtime::Serialization::SerializationBinder* Binder;

  __declspec(property(get = get_TraceWriter, put = set_TraceWriter))::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter;

  __declspec(property(get = get_EqualityComparer, put = set_EqualityComparer))::System::Collections::IEqualityComparer* EqualityComparer;

  __declspec(property(get = get_TypeNameHandling, put = set_TypeNameHandling))::Newtonsoft::Json::TypeNameHandling TypeNameHandling;

  __declspec(property(get = get_TypeNameAssemblyFormat, put = set_TypeNameAssemblyFormat))::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle TypeNameAssemblyFormat;

  __declspec(property(get = get_PreserveReferencesHandling, put = set_PreserveReferencesHandling))::Newtonsoft::Json::PreserveReferencesHandling PreserveReferencesHandling;

  __declspec(property(get = get_ReferenceLoopHandling, put = set_ReferenceLoopHandling))::Newtonsoft::Json::ReferenceLoopHandling ReferenceLoopHandling;

  __declspec(property(get = get_MissingMemberHandling, put = set_MissingMemberHandling))::Newtonsoft::Json::MissingMemberHandling MissingMemberHandling;

  __declspec(property(get = get_NullValueHandling, put = set_NullValueHandling))::Newtonsoft::Json::NullValueHandling NullValueHandling;

  __declspec(property(get = get_DefaultValueHandling, put = set_DefaultValueHandling))::Newtonsoft::Json::DefaultValueHandling DefaultValueHandling;

  __declspec(property(get = get_ObjectCreationHandling, put = set_ObjectCreationHandling))::Newtonsoft::Json::ObjectCreationHandling ObjectCreationHandling;

  __declspec(property(get = get_ConstructorHandling, put = set_ConstructorHandling))::Newtonsoft::Json::ConstructorHandling ConstructorHandling;

  __declspec(property(get = get_MetadataPropertyHandling, put = set_MetadataPropertyHandling))::Newtonsoft::Json::MetadataPropertyHandling MetadataPropertyHandling;

  __declspec(property(get = get_Converters))::Newtonsoft::Json::JsonConverterCollection* Converters;

  __declspec(property(get = get_ContractResolver, put = set_ContractResolver))::Newtonsoft::Json::Serialization::IContractResolver* ContractResolver;

  __declspec(property(get = get_Context, put = set_Context))::System::Runtime::Serialization::StreamingContext Context;

  __declspec(property(get = get_Formatting, put = set_Formatting))::Newtonsoft::Json::Formatting Formatting;

  __declspec(property(get = get_DateFormatHandling, put = set_DateFormatHandling))::Newtonsoft::Json::DateFormatHandling DateFormatHandling;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  __declspec(property(get = get_DateParseHandling, put = set_DateParseHandling))::Newtonsoft::Json::DateParseHandling DateParseHandling;

  __declspec(property(get = get_FloatParseHandling, put = set_FloatParseHandling))::Newtonsoft::Json::FloatParseHandling FloatParseHandling;

  __declspec(property(get = get_FloatFormatHandling, put = set_FloatFormatHandling))::Newtonsoft::Json::FloatFormatHandling FloatFormatHandling;

  __declspec(property(get = get_StringEscapeHandling, put = set_StringEscapeHandling))::Newtonsoft::Json::StringEscapeHandling StringEscapeHandling;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString))::StringW DateFormatString;

  __declspec(property(get = get_Culture, put = set_Culture))::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_MaxDepth, put = set_MaxDepth))::System::Nullable_1<int32_t> MaxDepth;

  __declspec(property(get = get_CheckAdditionalContent, put = set_CheckAdditionalContent)) bool CheckAdditionalContent;

  constexpr ::Newtonsoft::Json::TypeNameHandling& __get__typeNameHandling();

  constexpr ::Newtonsoft::Json::TypeNameHandling const& __get__typeNameHandling() const;

  constexpr void __set__typeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& __get__typeNameAssemblyFormat();

  constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const& __get__typeNameAssemblyFormat() const;

  constexpr void __set__typeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  constexpr ::Newtonsoft::Json::PreserveReferencesHandling& __get__preserveReferencesHandling();

  constexpr ::Newtonsoft::Json::PreserveReferencesHandling const& __get__preserveReferencesHandling() const;

  constexpr void __set__preserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value);

  constexpr ::Newtonsoft::Json::ReferenceLoopHandling& __get__referenceLoopHandling();

  constexpr ::Newtonsoft::Json::ReferenceLoopHandling const& __get__referenceLoopHandling() const;

  constexpr void __set__referenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  constexpr ::Newtonsoft::Json::MissingMemberHandling& __get__missingMemberHandling();

  constexpr ::Newtonsoft::Json::MissingMemberHandling const& __get__missingMemberHandling() const;

  constexpr void __set__missingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value);

  constexpr ::Newtonsoft::Json::ObjectCreationHandling& __get__objectCreationHandling();

  constexpr ::Newtonsoft::Json::ObjectCreationHandling const& __get__objectCreationHandling() const;

  constexpr void __set__objectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value);

  constexpr ::Newtonsoft::Json::NullValueHandling& __get__nullValueHandling();

  constexpr ::Newtonsoft::Json::NullValueHandling const& __get__nullValueHandling() const;

  constexpr void __set__nullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  constexpr ::Newtonsoft::Json::DefaultValueHandling& __get__defaultValueHandling();

  constexpr ::Newtonsoft::Json::DefaultValueHandling const& __get__defaultValueHandling() const;

  constexpr void __set__defaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value);

  constexpr ::Newtonsoft::Json::ConstructorHandling& __get__constructorHandling();

  constexpr ::Newtonsoft::Json::ConstructorHandling const& __get__constructorHandling() const;

  constexpr void __set__constructorHandling(::Newtonsoft::Json::ConstructorHandling value);

  constexpr ::Newtonsoft::Json::MetadataPropertyHandling& __get__metadataPropertyHandling();

  constexpr ::Newtonsoft::Json::MetadataPropertyHandling const& __get__metadataPropertyHandling() const;

  constexpr void __set__metadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value);

  constexpr ::Newtonsoft::Json::JsonConverterCollection*& __get__converters();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverterCollection*> const& __get__converters() const;

  constexpr void __set__converters(::Newtonsoft::Json::JsonConverterCollection* value);

  constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& __get__contractResolver();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IContractResolver*> const& __get__contractResolver() const;

  constexpr void __set__contractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value);

  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& __get__traceWriter();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ITraceWriter*> const& __get__traceWriter() const;

  constexpr void __set__traceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  constexpr ::System::Collections::IEqualityComparer*& __get__equalityComparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& __get__equalityComparer() const;

  constexpr void __set__equalityComparer(::System::Collections::IEqualityComparer* value);

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __get__binder();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const& __get__binder() const;

  constexpr void __set__binder(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get__context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get__context() const;

  constexpr void __set__context(::System::Runtime::Serialization::StreamingContext value);

  constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& __get__referenceResolver();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IReferenceResolver*> const& __get__referenceResolver() const;

  constexpr void __set__referenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& __get__formatting();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& __get__formatting() const;

  constexpr void __set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& __get__dateFormatHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& __get__dateFormatHandling() const;

  constexpr void __set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& __get__dateTimeZoneHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& __get__dateTimeZoneHandling() const;

  constexpr void __set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& __get__dateParseHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& __get__dateParseHandling() const;

  constexpr void __set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& __get__floatFormatHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& __get__floatFormatHandling() const;

  constexpr void __set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& __get__floatParseHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& __get__floatParseHandling() const;

  constexpr void __set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& __get__stringEscapeHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& __get__stringEscapeHandling() const;

  constexpr void __set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> value);

  constexpr ::System::Globalization::CultureInfo*& __get__culture();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& __get__culture() const;

  constexpr void __set__culture(::System::Globalization::CultureInfo* value);

  constexpr ::System::Nullable_1<int32_t>& __get__maxDepth();

  constexpr ::System::Nullable_1<int32_t> const& __get__maxDepth() const;

  constexpr void __set__maxDepth(::System::Nullable_1<int32_t> value);

  constexpr bool& __get__maxDepthSet();

  constexpr bool const& __get__maxDepthSet() const;

  constexpr void __set__maxDepthSet(bool value);

  constexpr ::System::Nullable_1<bool>& __get__checkAdditionalContent();

  constexpr ::System::Nullable_1<bool> const& __get__checkAdditionalContent() const;

  constexpr void __set__checkAdditionalContent(::System::Nullable_1<bool> value);

  constexpr ::StringW& __get__dateFormatString();

  constexpr ::StringW const& __get__dateFormatString() const;

  constexpr void __set__dateFormatString(::StringW value);

  constexpr bool& __get__dateFormatStringSet();

  constexpr bool const& __get__dateFormatStringSet() const;

  constexpr void __set__dateFormatStringSet(bool value);

  constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& __get_Error();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*> const& __get_Error() const;

  constexpr void __set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  /// @brief Method add_Error, addr 0x2650068, size 0xb0, virtual true, abstract: false, final false
  inline void add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  /// @brief Method remove_Error, addr 0x2650118, size 0xb0, virtual true, abstract: false, final false
  inline void remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  /// @brief Method get_ReferenceResolver, addr 0x26501c8, size 0x4, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver();

  /// @brief Method set_ReferenceResolver, addr 0x2650238, size 0x7c, virtual true, abstract: false, final false
  inline void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value);

  /// @brief Method get_Binder, addr 0x26502b4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationBinder* get_Binder();

  /// @brief Method set_Binder, addr 0x26502bc, size 0x7c, virtual true, abstract: false, final false
  inline void set_Binder(::System::Runtime::Serialization::SerializationBinder* value);

  /// @brief Method get_TraceWriter, addr 0x2650338, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter();

  /// @brief Method set_TraceWriter, addr 0x2650340, size 0x8, virtual true, abstract: false, final false
  inline void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  /// @brief Method get_EqualityComparer, addr 0x2650348, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IEqualityComparer* get_EqualityComparer();

  /// @brief Method set_EqualityComparer, addr 0x2650350, size 0x8, virtual true, abstract: false, final false
  inline void set_EqualityComparer(::System::Collections::IEqualityComparer* value);

  /// @brief Method get_TypeNameHandling, addr 0x2650358, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling();

  /// @brief Method set_TypeNameHandling, addr 0x2650360, size 0x64, virtual true, abstract: false, final false
  inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  /// @brief Method get_TypeNameAssemblyFormat, addr 0x26503c4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat();

  /// @brief Method set_TypeNameAssemblyFormat, addr 0x26503cc, size 0x64, virtual true, abstract: false, final false
  inline void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  /// @brief Method get_PreserveReferencesHandling, addr 0x2650430, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling();

  /// @brief Method set_PreserveReferencesHandling, addr 0x2650438, size 0x64, virtual true, abstract: false, final false
  inline void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value);

  /// @brief Method get_ReferenceLoopHandling, addr 0x265049c, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling();

  /// @brief Method set_ReferenceLoopHandling, addr 0x26504a4, size 0x64, virtual true, abstract: false, final false
  inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method get_MissingMemberHandling, addr 0x2650508, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling();

  /// @brief Method set_MissingMemberHandling, addr 0x2650510, size 0x64, virtual true, abstract: false, final false
  inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value);

  /// @brief Method get_NullValueHandling, addr 0x2650574, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling();

  /// @brief Method set_NullValueHandling, addr 0x265057c, size 0x64, virtual true, abstract: false, final false
  inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  /// @brief Method get_DefaultValueHandling, addr 0x26505e0, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling();

  /// @brief Method set_DefaultValueHandling, addr 0x26505e8, size 0x64, virtual true, abstract: false, final false
  inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value);

  /// @brief Method get_ObjectCreationHandling, addr 0x265064c, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling();

  /// @brief Method set_ObjectCreationHandling, addr 0x2650654, size 0x64, virtual true, abstract: false, final false
  inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value);

  /// @brief Method get_ConstructorHandling, addr 0x26506b8, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling();

  /// @brief Method set_ConstructorHandling, addr 0x26506c0, size 0x64, virtual true, abstract: false, final false
  inline void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value);

  /// @brief Method get_MetadataPropertyHandling, addr 0x2650724, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling();

  /// @brief Method set_MetadataPropertyHandling, addr 0x265072c, size 0x64, virtual true, abstract: false, final false
  inline void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value);

  /// @brief Method get_Converters, addr 0x2650790, size 0x68, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverterCollection* get_Converters();

  /// @brief Method get_ContractResolver, addr 0x26507f8, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver();

  /// @brief Method set_ContractResolver, addr 0x2650800, size 0xa8, virtual true, abstract: false, final false
  inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value);

  /// @brief Method get_Context, addr 0x26508a8, size 0xc, virtual true, abstract: false, final false
  inline ::System::Runtime::Serialization::StreamingContext get_Context();

  /// @brief Method set_Context, addr 0x26508b4, size 0x8, virtual true, abstract: false, final false
  inline void set_Context(::System::Runtime::Serialization::StreamingContext value);

  /// @brief Method get_Formatting, addr 0x26508bc, size 0x50, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Formatting get_Formatting();

  /// @brief Method set_Formatting, addr 0x265090c, size 0x68, virtual true, abstract: false, final false
  inline void set_Formatting(::Newtonsoft::Json::Formatting value);

  /// @brief Method get_DateFormatHandling, addr 0x2650974, size 0x50, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling();

  /// @brief Method set_DateFormatHandling, addr 0x26509c4, size 0x68, virtual true, abstract: false, final false
  inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  /// @brief Method get_DateTimeZoneHandling, addr 0x2650a2c, size 0x54, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method set_DateTimeZoneHandling, addr 0x2650a80, size 0x68, virtual true, abstract: false, final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method get_DateParseHandling, addr 0x2650ae8, size 0x50, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling();

  /// @brief Method set_DateParseHandling, addr 0x2650b38, size 0x68, virtual true, abstract: false, final false
  inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  /// @brief Method get_FloatParseHandling, addr 0x2650ba0, size 0x50, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling();

  /// @brief Method set_FloatParseHandling, addr 0x2650bf0, size 0x68, virtual true, abstract: false, final false
  inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  /// @brief Method get_FloatFormatHandling, addr 0x2650c58, size 0x50, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling();

  /// @brief Method set_FloatFormatHandling, addr 0x2650ca8, size 0x68, virtual true, abstract: false, final false
  inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  /// @brief Method get_StringEscapeHandling, addr 0x2650d10, size 0x50, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling();

  /// @brief Method set_StringEscapeHandling, addr 0x2650d60, size 0x68, virtual true, abstract: false, final false
  inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

  /// @brief Method get_DateFormatString, addr 0x2650dc8, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_DateFormatString();

  /// @brief Method set_DateFormatString, addr 0x2650e18, size 0x10, virtual true, abstract: false, final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method get_Culture, addr 0x2650e28, size 0x64, virtual true, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method set_Culture, addr 0x2650e8c, size 0x8, virtual true, abstract: false, final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method get_MaxDepth, addr 0x2650e94, size 0x8, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_MaxDepth();

  /// @brief Method set_MaxDepth, addr 0x2650e9c, size 0xc8, virtual true, abstract: false, final false
  inline void set_MaxDepth(::System::Nullable_1<int32_t> value);

  /// @brief Method get_CheckAdditionalContent, addr 0x2650f64, size 0x5c, virtual true, abstract: false, final false
  inline bool get_CheckAdditionalContent();

  /// @brief Method set_CheckAdditionalContent, addr 0x2650fc0, size 0x68, virtual true, abstract: false, final false
  inline void set_CheckAdditionalContent(bool value);

  /// @brief Method IsCheckAdditionalContentSet, addr 0x264f320, size 0x3c, virtual false, abstract: false, final false
  inline bool IsCheckAdditionalContentSet();

  static inline ::Newtonsoft::Json::JsonSerializer* New_ctor();

  /// @brief Method .ctor, addr 0x2651028, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Create, addr 0x2651158, size 0x58, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializer* Create();

  /// @brief Method Create, addr 0x26511b0, size 0x34, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializer* Create(::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method CreateDefault, addr 0x2651824, size 0xa4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializer* CreateDefault();

  /// @brief Method CreateDefault, addr 0x264ec2c, size 0x34, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializer* CreateDefault(::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method ApplySerializerSettings, addr 0x26511e4, size 0x640, virtual false, abstract: false, final false
  static inline void ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method Populate, addr 0x26518c8, size 0x84, virtual false, abstract: false, final false
  inline void Populate(::System::IO::TextReader* reader, ::System::Object* target);

  /// @brief Method Populate, addr 0x264f640, size 0x10, virtual false, abstract: false, final false
  inline void Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method PopulateInternal, addr 0x265194c, size 0x29c, virtual true, abstract: false, final false
  inline void PopulateInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target);

  /// @brief Method Deserialize, addr 0x26520ec, size 0x14, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Deserialize, addr 0x2652100, size 0x84, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::System::IO::TextReader* reader, ::System::Type* objectType);

  /// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Deserialize(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Deserialize, addr 0x264f35c, size 0x10, virtual false, abstract: false, final false
  inline ::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType);

  /// @brief Method DeserializeInternal, addr 0x2652184, size 0x298, virtual true, abstract: false, final false
  inline ::System::Object* DeserializeInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType);

  /// @brief Method SetupReader, addr 0x2651be8, size 0x388, virtual false, abstract: false, final false
  inline void SetupReader(::Newtonsoft::Json::JsonReader* reader, ByRef<::System::Globalization::CultureInfo*> previousCulture,
                          ByRef<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>> previousDateTimeZoneHandling,
                          ByRef<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>> previousDateParseHandling,
                          ByRef<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>> previousFloatParseHandling, ByRef<::System::Nullable_1<int32_t>> previousMaxDepth,
                          ByRef<::StringW> previousDateFormatString);

  /// @brief Method ResetReader, addr 0x2651f70, size 0x17c, virtual false, abstract: false, final false
  inline void ResetReader(::Newtonsoft::Json::JsonReader* reader, ::System::Globalization::CultureInfo* previousCulture,
                          ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> previousDateTimeZoneHandling,
                          ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> previousDateParseHandling,
                          ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> previousFloatParseHandling, ::System::Nullable_1<int32_t> previousMaxDepth, ::StringW previousDateFormatString);

  /// @brief Method Serialize, addr 0x265241c, size 0x88, virtual false, abstract: false, final false
  inline void Serialize(::System::IO::TextWriter* textWriter, ::System::Object* value);

  /// @brief Method Serialize, addr 0x264eee4, size 0x10, virtual false, abstract: false, final false
  inline void Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType);

  /// @brief Method Serialize, addr 0x26524b8, size 0x94, virtual false, abstract: false, final false
  inline void Serialize(::System::IO::TextWriter* textWriter, ::System::Object* value, ::System::Type* objectType);

  /// @brief Method Serialize, addr 0x26524a4, size 0x14, virtual false, abstract: false, final false
  inline void Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value);

  /// @brief Method SerializeInternal, addr 0x265254c, size 0x59c, virtual true, abstract: false, final false
  inline void SerializeInternal(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType);

  /// @brief Method GetReferenceResolver, addr 0x26501cc, size 0x6c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::IReferenceResolver* GetReferenceResolver();

  /// @brief Method GetMatchingConverter, addr 0x2652ae8, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Type* type);

  /// @brief Method GetMatchingConverter, addr 0x2652af0, size 0x15c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonConverter* GetMatchingConverter(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* converters, ::System::Type* objectType);

  /// @brief Method OnError, addr 0x2652c4c, size 0x1028, virtual false, abstract: false, final false
  inline void OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializer(JsonSerializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializer(JsonSerializer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializer();

public:
  /// @brief Field _typeNameHandling, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::TypeNameHandling ____typeNameHandling;

  /// @brief Field _typeNameAssemblyFormat, offset: 0x14, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle ____typeNameAssemblyFormat;

  /// @brief Field _preserveReferencesHandling, offset: 0x18, size: 0x4, def value: None
  ::Newtonsoft::Json::PreserveReferencesHandling ____preserveReferencesHandling;

  /// @brief Field _referenceLoopHandling, offset: 0x1c, size: 0x4, def value: None
  ::Newtonsoft::Json::ReferenceLoopHandling ____referenceLoopHandling;

  /// @brief Field _missingMemberHandling, offset: 0x20, size: 0x4, def value: None
  ::Newtonsoft::Json::MissingMemberHandling ____missingMemberHandling;

  /// @brief Field _objectCreationHandling, offset: 0x24, size: 0x4, def value: None
  ::Newtonsoft::Json::ObjectCreationHandling ____objectCreationHandling;

  /// @brief Field _nullValueHandling, offset: 0x28, size: 0x4, def value: None
  ::Newtonsoft::Json::NullValueHandling ____nullValueHandling;

  /// @brief Field _defaultValueHandling, offset: 0x2c, size: 0x4, def value: None
  ::Newtonsoft::Json::DefaultValueHandling ____defaultValueHandling;

  /// @brief Field _constructorHandling, offset: 0x30, size: 0x4, def value: None
  ::Newtonsoft::Json::ConstructorHandling ____constructorHandling;

  /// @brief Field _metadataPropertyHandling, offset: 0x34, size: 0x4, def value: None
  ::Newtonsoft::Json::MetadataPropertyHandling ____metadataPropertyHandling;

  /// @brief Field _converters, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonConverterCollection* ____converters;

  /// @brief Field _contractResolver, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IContractResolver* ____contractResolver;

  /// @brief Field _traceWriter, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ITraceWriter* ____traceWriter;

  /// @brief Field _equalityComparer, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::IEqualityComparer* ____equalityComparer;

  /// @brief Field _binder, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ____binder;

  /// @brief Field _context, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ____context;

  /// @brief Field _referenceResolver, offset: 0x70, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IReferenceResolver* ____referenceResolver;

  /// @brief Field _formatting, offset: 0x78, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Formatting> ____formatting;

  /// @brief Field _dateFormatHandling, offset: 0x80, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> ____dateFormatHandling;

  /// @brief Field _dateTimeZoneHandling, offset: 0x88, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> ____dateTimeZoneHandling;

  /// @brief Field _dateParseHandling, offset: 0x90, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> ____dateParseHandling;

  /// @brief Field _floatFormatHandling, offset: 0x98, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> ____floatFormatHandling;

  /// @brief Field _floatParseHandling, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> ____floatParseHandling;

  /// @brief Field _stringEscapeHandling, offset: 0xa8, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> ____stringEscapeHandling;

  /// @brief Field _culture, offset: 0xb0, size: 0x8, def value: None
  ::System::Globalization::CultureInfo* ____culture;

  /// @brief Field _maxDepth, offset: 0xb8, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxDepth;

  /// @brief Field _maxDepthSet, offset: 0xc0, size: 0x1, def value: None
  bool ____maxDepthSet;

  /// @brief Field _checkAdditionalContent, offset: 0xc1, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____checkAdditionalContent;

  /// @brief Field _dateFormatString, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____dateFormatString;

  /// @brief Field _dateFormatStringSet, offset: 0xd0, size: 0x1, def value: None
  bool ____dateFormatStringSet;

  /// @brief Field Error, offset: 0xd8, size: 0x8, def value: None
  ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* ___Error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonSerializer, 0xe0>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____typeNameHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____typeNameAssemblyFormat) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____preserveReferencesHandling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____referenceLoopHandling) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____missingMemberHandling) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____objectCreationHandling) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____nullValueHandling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____defaultValueHandling) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____constructorHandling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____metadataPropertyHandling) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____converters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____contractResolver) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____traceWriter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____equalityComparer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____binder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____context) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____referenceResolver) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____formatting) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatHandling) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateTimeZoneHandling) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateParseHandling) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____floatFormatHandling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____floatParseHandling) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____stringEscapeHandling) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____culture) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____maxDepth) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____maxDepthSet) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____checkAdditionalContent) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatString) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ____dateFormatStringSet) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializer, ___Error) == 0xd8, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonSerializer*, "Newtonsoft.Json", "JsonSerializer");
