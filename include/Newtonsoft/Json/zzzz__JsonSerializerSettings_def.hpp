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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerSettings)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
class __JsonSerializerSettings____c__DisplayClass90_0;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class __JsonSerializerSettings____c__DisplayClass90_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonSerializerSettings);
MARK_REF_PTR_T(::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0);
// Type: ::<>c__DisplayClass90_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11747))
// CS Name: ::JsonSerializerSettings::<>c__DisplayClass90_0*
class CORDL_TYPE __JsonSerializerSettings____c__DisplayClass90_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::Newtonsoft::Json::Serialization::IReferenceResolver* value;

  constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IReferenceResolver*> const& __get_value() const;

  constexpr void __set_value(::Newtonsoft::Json::Serialization::IReferenceResolver* value);

  static inline ::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0* New_ctor();

  /// @brief Method .ctor addr 0x24dd634 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <set_ReferenceResolver>b__0 addr 0x24de138 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::IReferenceResolver* _set_ReferenceResolver_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerSettings____c__DisplayClass90_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JsonSerializerSettings____c__DisplayClass90_0(__JsonSerializerSettings____c__DisplayClass90_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JsonSerializerSettings____c__DisplayClass90_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JsonSerializerSettings____c__DisplayClass90_0(__JsonSerializerSettings____c__DisplayClass90_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JsonSerializerSettings____c__DisplayClass90_0();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::IReferenceResolver* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0, ___value) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: Newtonsoft.Json::JsonSerializerSettings
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4641 }), TypeDefinitionIndex(TypeDefinitionIndex(2611)),
// TypeDefinitionIndex(TypeDefinitionIndex(11740)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4638 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4655 }), TypeDefinitionIndex(TypeDefinitionIndex(11750)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4632 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3234)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4645 }), TypeDefinitionIndex(TypeDefinitionIndex(11725)),
// TypeDefinitionIndex(TypeDefinitionIndex(11765)), TypeDefinitionIndex(TypeDefinitionIndex(11727)), TypeDefinitionIndex(TypeDefinitionIndex(3240)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4634 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4660 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4646 }), TypeDefinitionIndex(TypeDefinitionIndex(11722)), TypeDefinitionIndex(TypeDefinitionIndex(11767)), TypeDefinitionIndex(TypeDefinitionIndex(11737)),
// TypeDefinitionIndex(TypeDefinitionIndex(11744)), TypeDefinitionIndex(TypeDefinitionIndex(11723)), TypeDefinitionIndex(TypeDefinitionIndex(11738)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4640 }), TypeDefinitionIndex(TypeDefinitionIndex(2446)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4653 }),
// TypeDefinitionIndex(TypeDefinitionIndex(11726)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 112 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4651 }), TypeDefinitionIndex(TypeDefinitionIndex(11766)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4639 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4636 }), TypeDefinitionIndex(TypeDefinitionIndex(11768)), TypeDefinitionIndex(TypeDefinitionIndex(11728)),
// TypeDefinitionIndex(TypeDefinitionIndex(11724)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 101 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4633 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4654 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4663 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4659 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2446), inst: 4635 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11748)) CS Name: ::Newtonsoft.Json::JsonSerializerSettings*
class CORDL_TYPE JsonSerializerSettings : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass90_0 = ::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0;

  /// @brief Field _formatting, offset 0x10, size 0x8
  __declspec(property(get = __get__formatting, put = __set__formatting))::System::Nullable_1<::Newtonsoft::Json::Formatting> _formatting;

  /// @brief Field _dateFormatHandling, offset 0x18, size 0x8
  __declspec(property(get = __get__dateFormatHandling, put = __set__dateFormatHandling))::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> _dateFormatHandling;

  /// @brief Field _dateTimeZoneHandling, offset 0x20, size 0x8
  __declspec(property(get = __get__dateTimeZoneHandling, put = __set__dateTimeZoneHandling))::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> _dateTimeZoneHandling;

  /// @brief Field _dateParseHandling, offset 0x28, size 0x8
  __declspec(property(get = __get__dateParseHandling, put = __set__dateParseHandling))::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> _dateParseHandling;

  /// @brief Field _floatFormatHandling, offset 0x30, size 0x8
  __declspec(property(get = __get__floatFormatHandling, put = __set__floatFormatHandling))::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> _floatFormatHandling;

  /// @brief Field _floatParseHandling, offset 0x38, size 0x8
  __declspec(property(get = __get__floatParseHandling, put = __set__floatParseHandling))::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> _floatParseHandling;

  /// @brief Field _stringEscapeHandling, offset 0x40, size 0x8
  __declspec(property(get = __get__stringEscapeHandling, put = __set__stringEscapeHandling))::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> _stringEscapeHandling;

  /// @brief Field _culture, offset 0x48, size 0x8
  __declspec(property(get = __get__culture, put = __set__culture))::System::Globalization::CultureInfo* _culture;

  /// @brief Field _checkAdditionalContent, offset 0x50, size 0x2
  __declspec(property(get = __get__checkAdditionalContent, put = __set__checkAdditionalContent))::System::Nullable_1<bool> _checkAdditionalContent;

  /// @brief Field _maxDepth, offset 0x54, size 0x8
  __declspec(property(get = __get__maxDepth, put = __set__maxDepth))::System::Nullable_1<int32_t> _maxDepth;

  /// @brief Field _maxDepthSet, offset 0x5c, size 0x1
  __declspec(property(get = __get__maxDepthSet, put = __set__maxDepthSet)) bool _maxDepthSet;

  /// @brief Field _dateFormatString, offset 0x60, size 0x8
  __declspec(property(get = __get__dateFormatString, put = __set__dateFormatString))::StringW _dateFormatString;

  /// @brief Field _dateFormatStringSet, offset 0x68, size 0x1
  __declspec(property(get = __get__dateFormatStringSet, put = __set__dateFormatStringSet)) bool _dateFormatStringSet;

  /// @brief Field _typeNameAssemblyFormat, offset 0x6c, size 0x8
  __declspec(property(get = __get__typeNameAssemblyFormat,
                      put = __set__typeNameAssemblyFormat))::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> _typeNameAssemblyFormat;

  /// @brief Field _defaultValueHandling, offset 0x74, size 0x8
  __declspec(property(get = __get__defaultValueHandling, put = __set__defaultValueHandling))::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> _defaultValueHandling;

  /// @brief Field _preserveReferencesHandling, offset 0x7c, size 0x8
  __declspec(property(get = __get__preserveReferencesHandling,
                      put = __set__preserveReferencesHandling))::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> _preserveReferencesHandling;

  /// @brief Field _nullValueHandling, offset 0x84, size 0x8
  __declspec(property(get = __get__nullValueHandling, put = __set__nullValueHandling))::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> _nullValueHandling;

  /// @brief Field _objectCreationHandling, offset 0x8c, size 0x8
  __declspec(property(get = __get__objectCreationHandling, put = __set__objectCreationHandling))::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> _objectCreationHandling;

  /// @brief Field _missingMemberHandling, offset 0x94, size 0x8
  __declspec(property(get = __get__missingMemberHandling, put = __set__missingMemberHandling))::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> _missingMemberHandling;

  /// @brief Field _referenceLoopHandling, offset 0x9c, size 0x8
  __declspec(property(get = __get__referenceLoopHandling, put = __set__referenceLoopHandling))::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _referenceLoopHandling;

  /// @brief Field _context, offset 0xa8, size 0x18
  __declspec(property(get = __get__context, put = __set__context))::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> _context;

  /// @brief Field _constructorHandling, offset 0xc0, size 0x8
  __declspec(property(get = __get__constructorHandling, put = __set__constructorHandling))::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> _constructorHandling;

  /// @brief Field _typeNameHandling, offset 0xc8, size 0x8
  __declspec(property(get = __get__typeNameHandling, put = __set__typeNameHandling))::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _typeNameHandling;

  /// @brief Field _metadataPropertyHandling, offset 0xd0, size 0x8
  __declspec(property(get = __get__metadataPropertyHandling, put = __set__metadataPropertyHandling))::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> _metadataPropertyHandling;

  /// @brief Field <Converters>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __get__Converters_k__BackingField,
                      put = __set__Converters_k__BackingField))::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* _Converters_k__BackingField;

  /// @brief Field <ContractResolver>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __get__ContractResolver_k__BackingField,
                      put = __set__ContractResolver_k__BackingField))::Newtonsoft::Json::Serialization::IContractResolver* _ContractResolver_k__BackingField;

  /// @brief Field <EqualityComparer>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __get__EqualityComparer_k__BackingField, put = __set__EqualityComparer_k__BackingField))::System::Collections::IEqualityComparer* _EqualityComparer_k__BackingField;

  /// @brief Field <ReferenceResolverProvider>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __get__ReferenceResolverProvider_k__BackingField,
                      put = __set__ReferenceResolverProvider_k__BackingField))::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* _ReferenceResolverProvider_k__BackingField;

  /// @brief Field <TraceWriter>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __get__TraceWriter_k__BackingField, put = __set__TraceWriter_k__BackingField))::Newtonsoft::Json::Serialization::ITraceWriter* _TraceWriter_k__BackingField;

  /// @brief Field <Binder>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __get__Binder_k__BackingField, put = __set__Binder_k__BackingField))::System::Runtime::Serialization::SerializationBinder* _Binder_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __get__Error_k__BackingField, put = __set__Error_k__BackingField))::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* _Error_k__BackingField;

  /// @brief Field DefaultContext, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_DefaultContext, put = setStaticF_DefaultContext))::System::Runtime::Serialization::StreamingContext DefaultContext;

  /// @brief Field DefaultCulture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultCulture, put = setStaticF_DefaultCulture))::System::Globalization::CultureInfo* DefaultCulture;

  __declspec(property(get = get_ReferenceLoopHandling, put = set_ReferenceLoopHandling))::Newtonsoft::Json::ReferenceLoopHandling ReferenceLoopHandling;

  __declspec(property(get = get_MissingMemberHandling, put = set_MissingMemberHandling))::Newtonsoft::Json::MissingMemberHandling MissingMemberHandling;

  __declspec(property(get = get_ObjectCreationHandling, put = set_ObjectCreationHandling))::Newtonsoft::Json::ObjectCreationHandling ObjectCreationHandling;

  __declspec(property(get = get_NullValueHandling, put = set_NullValueHandling))::Newtonsoft::Json::NullValueHandling NullValueHandling;

  __declspec(property(get = get_DefaultValueHandling, put = set_DefaultValueHandling))::Newtonsoft::Json::DefaultValueHandling DefaultValueHandling;

  __declspec(property(get = get_Converters, put = set_Converters))::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* Converters;

  __declspec(property(get = get_PreserveReferencesHandling, put = set_PreserveReferencesHandling))::Newtonsoft::Json::PreserveReferencesHandling PreserveReferencesHandling;

  __declspec(property(get = get_TypeNameHandling, put = set_TypeNameHandling))::Newtonsoft::Json::TypeNameHandling TypeNameHandling;

  __declspec(property(get = get_MetadataPropertyHandling, put = set_MetadataPropertyHandling))::Newtonsoft::Json::MetadataPropertyHandling MetadataPropertyHandling;

  __declspec(property(get = get_TypeNameAssemblyFormat, put = set_TypeNameAssemblyFormat))::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle TypeNameAssemblyFormat;

  __declspec(property(get = get_ConstructorHandling, put = set_ConstructorHandling))::Newtonsoft::Json::ConstructorHandling ConstructorHandling;

  __declspec(property(get = get_ContractResolver, put = set_ContractResolver))::Newtonsoft::Json::Serialization::IContractResolver* ContractResolver;

  __declspec(property(get = get_EqualityComparer, put = set_EqualityComparer))::System::Collections::IEqualityComparer* EqualityComparer;

  __declspec(property(get = get_ReferenceResolver, put = set_ReferenceResolver))::Newtonsoft::Json::Serialization::IReferenceResolver* ReferenceResolver;

  __declspec(property(get = get_ReferenceResolverProvider, put = set_ReferenceResolverProvider))::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* ReferenceResolverProvider;

  __declspec(property(get = get_TraceWriter, put = set_TraceWriter))::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter;

  __declspec(property(get = get_Binder, put = set_Binder))::System::Runtime::Serialization::SerializationBinder* Binder;

  __declspec(property(get = get_Error, put = set_Error))::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Error;

  __declspec(property(get = get_Context, put = set_Context))::System::Runtime::Serialization::StreamingContext Context;

  __declspec(property(get = get_DateFormatString, put = set_DateFormatString))::StringW DateFormatString;

  __declspec(property(get = get_MaxDepth, put = set_MaxDepth))::System::Nullable_1<int32_t> MaxDepth;

  __declspec(property(get = get_Formatting, put = set_Formatting))::Newtonsoft::Json::Formatting Formatting;

  __declspec(property(get = get_DateFormatHandling, put = set_DateFormatHandling))::Newtonsoft::Json::DateFormatHandling DateFormatHandling;

  __declspec(property(get = get_DateTimeZoneHandling, put = set_DateTimeZoneHandling))::Newtonsoft::Json::DateTimeZoneHandling DateTimeZoneHandling;

  __declspec(property(get = get_DateParseHandling, put = set_DateParseHandling))::Newtonsoft::Json::DateParseHandling DateParseHandling;

  __declspec(property(get = get_FloatFormatHandling, put = set_FloatFormatHandling))::Newtonsoft::Json::FloatFormatHandling FloatFormatHandling;

  __declspec(property(get = get_FloatParseHandling, put = set_FloatParseHandling))::Newtonsoft::Json::FloatParseHandling FloatParseHandling;

  __declspec(property(get = get_StringEscapeHandling, put = set_StringEscapeHandling))::Newtonsoft::Json::StringEscapeHandling StringEscapeHandling;

  __declspec(property(get = get_Culture, put = set_Culture))::System::Globalization::CultureInfo* Culture;

  __declspec(property(get = get_CheckAdditionalContent, put = set_CheckAdditionalContent)) bool CheckAdditionalContent;

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

  constexpr ::System::Nullable_1<bool>& __get__checkAdditionalContent();

  constexpr ::System::Nullable_1<bool> const& __get__checkAdditionalContent() const;

  constexpr void __set__checkAdditionalContent(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<int32_t>& __get__maxDepth();

  constexpr ::System::Nullable_1<int32_t> const& __get__maxDepth() const;

  constexpr void __set__maxDepth(::System::Nullable_1<int32_t> value);

  constexpr bool& __get__maxDepthSet();

  constexpr bool const& __get__maxDepthSet() const;

  constexpr void __set__maxDepthSet(bool value);

  constexpr ::StringW& __get__dateFormatString();

  constexpr ::StringW const& __get__dateFormatString() const;

  constexpr void __set__dateFormatString(::StringW value);

  constexpr bool& __get__dateFormatStringSet();

  constexpr bool const& __get__dateFormatStringSet() const;

  constexpr void __set__dateFormatStringSet(bool value);

  constexpr ::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle>& __get__typeNameAssemblyFormat();

  constexpr ::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> const& __get__typeNameAssemblyFormat() const;

  constexpr void __set__typeNameAssemblyFormat(::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& __get__defaultValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& __get__defaultValueHandling() const;

  constexpr void __set__defaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling>& __get__preserveReferencesHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> const& __get__preserveReferencesHandling() const;

  constexpr void __set__preserveReferencesHandling(::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __get__nullValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __get__nullValueHandling() const;

  constexpr void __set__nullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& __get__objectCreationHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& __get__objectCreationHandling() const;

  constexpr void __set__objectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& __get__missingMemberHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& __get__missingMemberHandling() const;

  constexpr void __set__missingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __get__referenceLoopHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __get__referenceLoopHandling() const;

  constexpr void __set__referenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value);

  constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext>& __get__context();

  constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> const& __get__context() const;

  constexpr void __set__context(::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling>& __get__constructorHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> const& __get__constructorHandling() const;

  constexpr void __set__constructorHandling(::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __get__typeNameHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __get__typeNameHandling() const;

  constexpr void __set__typeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling>& __get__metadataPropertyHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> const& __get__metadataPropertyHandling() const;

  constexpr void __set__metadataPropertyHandling(::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> value);

  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*& __get__Converters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*> const& __get__Converters_k__BackingField() const;

  constexpr void __set__Converters_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* value);

  constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& __get__ContractResolver_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::IContractResolver*> const& __get__ContractResolver_k__BackingField() const;

  constexpr void __set__ContractResolver_k__BackingField(::Newtonsoft::Json::Serialization::IContractResolver* value);

  constexpr ::System::Collections::IEqualityComparer*& __get__EqualityComparer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEqualityComparer*> const& __get__EqualityComparer_k__BackingField() const;

  constexpr void __set__EqualityComparer_k__BackingField(::System::Collections::IEqualityComparer* value);

  constexpr ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*& __get__ReferenceResolverProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*> const& __get__ReferenceResolverProvider_k__BackingField() const;

  constexpr void __set__ReferenceResolverProvider_k__BackingField(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* value);

  constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& __get__TraceWriter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ITraceWriter*> const& __get__TraceWriter_k__BackingField() const;

  constexpr void __set__TraceWriter_k__BackingField(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __get__Binder_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> const& __get__Binder_k__BackingField() const;

  constexpr void __set__Binder_k__BackingField(::System::Runtime::Serialization::SerializationBinder* value);

  constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& __get__Error_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*> const& __get__Error_k__BackingField() const;

  constexpr void __set__Error_k__BackingField(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  static inline void setStaticF_DefaultContext(::System::Runtime::Serialization::StreamingContext value);

  static inline ::System::Runtime::Serialization::StreamingContext getStaticF_DefaultContext();

  static inline void setStaticF_DefaultCulture(::System::Globalization::CultureInfo* value);

  static inline ::System::Globalization::CultureInfo* getStaticF_DefaultCulture();

  /// @brief Method get_ReferenceLoopHandling addr 0x24dcdf4 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling();

  /// @brief Method set_ReferenceLoopHandling addr 0x24dce44 size 0x68 virtual false final false
  inline void set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value);

  /// @brief Method get_MissingMemberHandling addr 0x24dceac size 0x50 virtual false final false
  inline ::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling();

  /// @brief Method set_MissingMemberHandling addr 0x24dcefc size 0x68 virtual false final false
  inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value);

  /// @brief Method get_ObjectCreationHandling addr 0x24dcf64 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling();

  /// @brief Method set_ObjectCreationHandling addr 0x24dcfb4 size 0x68 virtual false final false
  inline void set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value);

  /// @brief Method get_NullValueHandling addr 0x24dd01c size 0x50 virtual false final false
  inline ::Newtonsoft::Json::NullValueHandling get_NullValueHandling();

  /// @brief Method set_NullValueHandling addr 0x24dd06c size 0x68 virtual false final false
  inline void set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  /// @brief Method get_DefaultValueHandling addr 0x24dd0d4 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling();

  /// @brief Method set_DefaultValueHandling addr 0x24dd124 size 0x68 virtual false final false
  inline void set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value);

  /// @brief Method get_Converters addr 0x24dd18c size 0x8 virtual false final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* get_Converters();

  /// @brief Method set_Converters addr 0x24dd194 size 0x8 virtual false final false
  inline void set_Converters(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* value);

  /// @brief Method get_PreserveReferencesHandling addr 0x24dd19c size 0x50 virtual false final false
  inline ::Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling();

  /// @brief Method set_PreserveReferencesHandling addr 0x24dd1ec size 0x68 virtual false final false
  inline void set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value);

  /// @brief Method get_TypeNameHandling addr 0x24dd254 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::TypeNameHandling get_TypeNameHandling();

  /// @brief Method set_TypeNameHandling addr 0x24dd2a4 size 0x68 virtual false final false
  inline void set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value);

  /// @brief Method get_MetadataPropertyHandling addr 0x24dd30c size 0x50 virtual false final false
  inline ::Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling();

  /// @brief Method set_MetadataPropertyHandling addr 0x24dd35c size 0x68 virtual false final false
  inline void set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value);

  /// @brief Method get_TypeNameAssemblyFormat addr 0x24dd3c4 size 0x50 virtual false final false
  inline ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat();

  /// @brief Method set_TypeNameAssemblyFormat addr 0x24dd414 size 0x68 virtual false final false
  inline void set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);

  /// @brief Method get_ConstructorHandling addr 0x24dd47c size 0x50 virtual false final false
  inline ::Newtonsoft::Json::ConstructorHandling get_ConstructorHandling();

  /// @brief Method set_ConstructorHandling addr 0x24dd4cc size 0x68 virtual false final false
  inline void set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value);

  /// @brief Method get_ContractResolver addr 0x24dd534 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::IContractResolver* get_ContractResolver();

  /// @brief Method set_ContractResolver addr 0x24dd53c size 0x8 virtual false final false
  inline void set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value);

  /// @brief Method get_EqualityComparer addr 0x24dd544 size 0x8 virtual false final false
  inline ::System::Collections::IEqualityComparer* get_EqualityComparer();

  /// @brief Method set_EqualityComparer addr 0x24dd54c size 0x8 virtual false final false
  inline void set_EqualityComparer(::System::Collections::IEqualityComparer* value);

  /// @brief Method get_ReferenceResolver addr 0x24dd554 size 0x20 virtual false final false
  inline ::Newtonsoft::Json::Serialization::IReferenceResolver* get_ReferenceResolver();

  /// @brief Method set_ReferenceResolver addr 0x24dd574 size 0xc0 virtual false final false
  inline void set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value);

  /// @brief Method get_ReferenceResolverProvider addr 0x24dd63c size 0x8 virtual false final false
  inline ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* get_ReferenceResolverProvider();

  /// @brief Method set_ReferenceResolverProvider addr 0x24dd644 size 0x8 virtual false final false
  inline void set_ReferenceResolverProvider(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* value);

  /// @brief Method get_TraceWriter addr 0x24dd64c size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::ITraceWriter* get_TraceWriter();

  /// @brief Method set_TraceWriter addr 0x24dd654 size 0x8 virtual false final false
  inline void set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value);

  /// @brief Method get_Binder addr 0x24dd65c size 0x8 virtual false final false
  inline ::System::Runtime::Serialization::SerializationBinder* get_Binder();

  /// @brief Method set_Binder addr 0x24dd664 size 0x8 virtual false final false
  inline void set_Binder(::System::Runtime::Serialization::SerializationBinder* value);

  /// @brief Method get_Error addr 0x24dd66c size 0x8 virtual false final false
  inline ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* get_Error();

  /// @brief Method set_Error addr 0x24dd674 size 0x8 virtual false final false
  inline void set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value);

  /// @brief Method get_Context addr 0x24dd67c size 0x90 virtual false final false
  inline ::System::Runtime::Serialization::StreamingContext get_Context();

  /// @brief Method set_Context addr 0x24dd70c size 0x84 virtual false final false
  inline void set_Context(::System::Runtime::Serialization::StreamingContext value);

  /// @brief Method get_DateFormatString addr 0x24dd790 size 0x50 virtual false final false
  inline ::StringW get_DateFormatString();

  /// @brief Method set_DateFormatString addr 0x24dd7e0 size 0x10 virtual false final false
  inline void set_DateFormatString(::StringW value);

  /// @brief Method get_MaxDepth addr 0x24dd7f0 size 0x8 virtual false final false
  inline ::System::Nullable_1<int32_t> get_MaxDepth();

  /// @brief Method set_MaxDepth addr 0x24dd7f8 size 0xc8 virtual false final false
  inline void set_MaxDepth(::System::Nullable_1<int32_t> value);

  /// @brief Method get_Formatting addr 0x24dd8c0 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::Formatting get_Formatting();

  /// @brief Method set_Formatting addr 0x24dd910 size 0x68 virtual false final false
  inline void set_Formatting(::Newtonsoft::Json::Formatting value);

  /// @brief Method get_DateFormatHandling addr 0x24dd978 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling();

  /// @brief Method set_DateFormatHandling addr 0x24dd9c8 size 0x68 virtual false final false
  inline void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value);

  /// @brief Method get_DateTimeZoneHandling addr 0x24dda30 size 0x54 virtual false final false
  inline ::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling();

  /// @brief Method set_DateTimeZoneHandling addr 0x24dda84 size 0x68 virtual false final false
  inline void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value);

  /// @brief Method get_DateParseHandling addr 0x24ddaec size 0x50 virtual false final false
  inline ::Newtonsoft::Json::DateParseHandling get_DateParseHandling();

  /// @brief Method set_DateParseHandling addr 0x24ddb3c size 0x68 virtual false final false
  inline void set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value);

  /// @brief Method get_FloatFormatHandling addr 0x24ddba4 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling();

  /// @brief Method set_FloatFormatHandling addr 0x24ddbf4 size 0x68 virtual false final false
  inline void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value);

  /// @brief Method get_FloatParseHandling addr 0x24ddc5c size 0x50 virtual false final false
  inline ::Newtonsoft::Json::FloatParseHandling get_FloatParseHandling();

  /// @brief Method set_FloatParseHandling addr 0x24ddcac size 0x68 virtual false final false
  inline void set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value);

  /// @brief Method get_StringEscapeHandling addr 0x24ddd14 size 0x50 virtual false final false
  inline ::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling();

  /// @brief Method set_StringEscapeHandling addr 0x24ddd64 size 0x68 virtual false final false
  inline void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value);

  /// @brief Method get_Culture addr 0x24dddcc size 0x64 virtual false final false
  inline ::System::Globalization::CultureInfo* get_Culture();

  /// @brief Method set_Culture addr 0x24dde30 size 0x8 virtual false final false
  inline void set_Culture(::System::Globalization::CultureInfo* value);

  /// @brief Method get_CheckAdditionalContent addr 0x24dde38 size 0x5c virtual false final false
  inline bool get_CheckAdditionalContent();

  /// @brief Method set_CheckAdditionalContent addr 0x24dde94 size 0x68 virtual false final false
  inline void set_CheckAdditionalContent(bool value);

  static inline ::Newtonsoft::Json::JsonSerializerSettings* New_ctor();

  /// @brief Method .ctor addr 0x24ddf7c size 0x1bc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerSettings(JsonSerializerSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerSettings(JsonSerializerSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerSettings();

public:
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

  /// @brief Field _typeNameAssemblyFormat, offset: 0x6c, size: 0x8, def value: None
  ::System::Nullable_1<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> ____typeNameAssemblyFormat;

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

  /// @brief Field <Binder>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ____Binder_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* ____Error_k__BackingField;

  /// @brief Field DefaultReferenceLoopHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::ReferenceLoopHandling const DefaultReferenceLoopHandling;

  /// @brief Field DefaultMissingMemberHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::MissingMemberHandling const DefaultMissingMemberHandling;

  /// @brief Field DefaultNullValueHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::NullValueHandling const DefaultNullValueHandling;

  /// @brief Field DefaultDefaultValueHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::DefaultValueHandling const DefaultDefaultValueHandling;

  /// @brief Field DefaultObjectCreationHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::ObjectCreationHandling const DefaultObjectCreationHandling;

  /// @brief Field DefaultPreserveReferencesHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::PreserveReferencesHandling const DefaultPreserveReferencesHandling;

  /// @brief Field DefaultConstructorHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::ConstructorHandling const DefaultConstructorHandling;

  /// @brief Field DefaultTypeNameHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::TypeNameHandling const DefaultTypeNameHandling;

  /// @brief Field DefaultMetadataPropertyHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::MetadataPropertyHandling const DefaultMetadataPropertyHandling;

  /// @brief Field DefaultTypeNameAssemblyFormat value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const DefaultTypeNameAssemblyFormat;

  /// @brief Field DefaultFormatting value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Formatting const DefaultFormatting;

  /// @brief Field DefaultDateFormatHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::DateFormatHandling const DefaultDateFormatHandling;

  /// @brief Field DefaultDateTimeZoneHandling value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::DateTimeZoneHandling const DefaultDateTimeZoneHandling;

  /// @brief Field DefaultDateParseHandling value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::DateParseHandling const DefaultDateParseHandling;

  /// @brief Field DefaultFloatParseHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::FloatParseHandling const DefaultFloatParseHandling;

  /// @brief Field DefaultFloatFormatHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::FloatFormatHandling const DefaultFloatFormatHandling;

  /// @brief Field DefaultStringEscapeHandling value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::StringEscapeHandling const DefaultStringEscapeHandling;

  /// @brief Field DefaultFormatterAssemblyStyle value: static_cast<int32_t>(0x0)
  static ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const DefaultFormatterAssemblyStyle;

  /// @brief Field DefaultCheckAdditionalContent offset 0xffffffff size 0x1
  static constexpr bool DefaultCheckAdditionalContent{ false };

  /// @brief Field DefaultDateFormatString offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultDateFormatString{ u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonSerializerSettings, 0x110>, "Size mismatch!");

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

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____typeNameAssemblyFormat) == 0x6c, "Offset mismatch!");

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

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____Binder_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonSerializerSettings, ____Error_k__BackingField) == 0x108, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonSerializerSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonSerializerSettings*, "Newtonsoft.Json", "JsonSerializerSettings");
NEED_NO_BOX(::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__JsonSerializerSettings____c__DisplayClass90_0*, "Newtonsoft.Json", "JsonSerializerSettings/<>c__DisplayClass90_0");
