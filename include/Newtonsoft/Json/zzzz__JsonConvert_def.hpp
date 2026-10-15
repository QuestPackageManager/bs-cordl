#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonConvert)
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::Numerics {
struct BigInteger;
}
namespace System::Xml::Linq {
class XDocument;
}
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Enum;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConvert;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::JsonConvert*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::JsonConvert*, "Newtonsoft.Json", "JsonConvert");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonConvert
class CORDL_TYPE JsonConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Field False, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_False, put = setStaticF_False)) ::StringW False;

  /// @brief Field NaN, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NaN, put = setStaticF_NaN)) ::StringW NaN;

  /// @brief Field NegativeInfinity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NegativeInfinity, put = setStaticF_NegativeInfinity)) ::StringW NegativeInfinity;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::StringW Null;

  /// @brief Field PositiveInfinity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PositiveInfinity, put = setStaticF_PositiveInfinity)) ::StringW PositiveInfinity;

  /// @brief Field True, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_True, put = setStaticF_True)) ::StringW True;

  /// @brief Field Undefined, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Undefined, put = setStaticF_Undefined)) ::StringW Undefined;

  /// @brief Field <DefaultSettings>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__DefaultSettings_k__BackingField,
                      put = setStaticF__DefaultSettings_k__BackingField)) ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* _DefaultSettings_k__BackingField;

  /// [DebuggerStepThrough]
  /// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject);

  /// [DebuggerStepThrough]
  /// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [DebuggerStepThrough]
  /// @brief Method DeserializeObject, addr 0x612c064, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value);

  /// [DebuggerStepThrough]
  /// @brief Method DeserializeObject, addr 0x612c2e8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [DebuggerStepThrough]
  /// @brief Method DeserializeObject, addr 0x612c354, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type);

  /// [DebuggerStepThrough]
  /// @brief Method DeserializeObject, addr 0x612c3c0, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters);

  /// [NullableContext(2)]
  /// @brief Method DeserializeObject, addr 0x612c0c4, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(/* [Nullable(1)] */ ::StringW value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [DebuggerStepThrough]
  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters);

  /// [NullableContext(2)]
  /// [DebuggerStepThrough]
  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(/* [Nullable(1)] */ ::StringW value);

  /// [NullableContext(2)]
  /// [DebuggerStepThrough]
  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(/* [Nullable(1)] */ ::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeXNode, addr 0x612d00c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value);

  /// [NullableContext(2)]
  /// @brief Method DeserializeXNode, addr 0x612d068, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(/* [Nullable(1)] */ ::StringW value, ::StringW deserializeRootElementName);

  /// [NullableContext(2)]
  /// @brief Method DeserializeXNode, addr 0x612d0d4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(/* [Nullable(1)] */ ::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute);

  /// [NullableContext(2)]
  /// @brief Method DeserializeXNode, addr 0x612d148, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(/* [Nullable(1)] */ ::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters);

  /// @brief Method DeserializeXmlNode, addr 0x612cb5c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value);

  /// [NullableContext(2)]
  /// @brief Method DeserializeXmlNode, addr 0x612cbb8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(/* [Nullable(1)] */ ::StringW value, ::StringW deserializeRootElementName);

  /// [NullableContext(2)]
  /// @brief Method DeserializeXmlNode, addr 0x612cc24, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(/* [Nullable(1)] */ ::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute);

  /// [NullableContext(2)]
  /// @brief Method DeserializeXmlNode, addr 0x612cc98, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(/* [Nullable(1)] */ ::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters);

  /// @brief Method EnsureDecimalPlace, addr 0x612aaf0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW EnsureDecimalPlace(::StringW text);

  /// @brief Method EnsureDecimalPlace, addr 0x612a650, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW EnsureDecimalPlace(double_t value, ::StringW text);

  /// @brief Method EnsureFloatFormat, addr 0x612a810, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW EnsureFloatFormat(double_t value, ::StringW text, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// [DebuggerStepThrough]
  /// @brief Method PopulateObject, addr 0x612c5c0, size 0x6c, virtual false, abstract: false, final false
  static inline void PopulateObject(::StringW value, ::System::Object* target);

  /// @brief Method PopulateObject, addr 0x612c62c, size 0x280, virtual false, abstract: false, final false
  static inline void PopulateObject(::StringW value, ::System::Object* target, /* [Nullable(2)] */ ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [NullableContext(2)]
  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612ba54, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [NullableContext(2)]
  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612bd50, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [NullableContext(2)]
  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612bcac, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [NullableContext(2)]
  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612b968, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612b908, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(/* [Nullable(2)] */ ::System::Object* value);

  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612bac8, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(/* [Nullable(2)] */ ::System::Object* value, /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters);

  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612b9e8, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(/* [Nullable(2)] */ ::System::Object* value, ::Newtonsoft::Json::Formatting formatting);

  /// [DebuggerStepThrough]
  /// @brief Method SerializeObject, addr 0x612bbf0, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(/* [Nullable(2)] */ ::System::Object* value, ::Newtonsoft::Json::Formatting formatting,
                                          /* [ParamArray] */ ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters);

  /// @brief Method SerializeObjectInternal, addr 0x612bdf0, size 0x264, virtual false, abstract: false, final false
  static inline ::StringW SerializeObjectInternal(/* [Nullable(2)] */ ::System::Object* value, /* [Nullable(2)] */ ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method SerializeXNode, addr 0x612ce44, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(/* [Nullable(2)] */ ::System::Xml::Linq::XObject* node);

  /// @brief Method SerializeXNode, addr 0x612cea0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(/* [Nullable(2)] */ ::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXNode, addr 0x612cf0c, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(/* [Nullable(2)] */ ::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method SerializeXmlNode, addr 0x612c908, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(/* [Nullable(2)] */ ::System::Xml::XmlNode* node);

  /// @brief Method SerializeXmlNode, addr 0x612c964, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(/* [Nullable(2)] */ ::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXmlNode, addr 0x612ca5c, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(/* [Nullable(2)] */ ::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method ToString, addr 0x612a174, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToString(/* [Nullable(2)] */ ::StringW value);

  /// @brief Method ToString, addr 0x612af88, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(/* [Nullable(2)] */ ::StringW value, char16_t delimiter);

  /// @brief Method ToString, addr 0x612b12c, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW ToString(/* [Nullable(2)] */ ::StringW value, char16_t delimiter, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);

  /// @brief Method ToString, addr 0x6129b4c, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x6129bac, size 0x23c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling);

  /// @brief Method ToString, addr 0x6129de8, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x6129e54, size 0x21c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method ToString, addr 0x612ac48, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x612a1d0, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Enum* value);

  /// @brief Method ToString, addr 0x612ad44, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x612adb0, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x612b214, size 0x6f4, virtual false, abstract: false, final false
  static inline ::StringW ToString(/* [Nullable(2)] */ ::System::Object* value);

  /// @brief Method ToString, addr 0x612ae88, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x612aee4, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x612b09c, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Uri* value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x612aff4, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW ToString(/* [Nullable(2)] */ ::System::Uri* value);

  /// @brief Method ToString, addr 0x612a070, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x612a0f0, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString, addr 0x612a92c, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x612a9fc, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method ToString, addr 0x612a57c, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x612a718, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method ToString, addr 0x612a298, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x612a228, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x612a3e8, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x612abd8, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x612a308, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x612a378, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// [CLSCompliant(false)]
  /// @brief Method ToString, addr 0x612a50c, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x612ab68, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToStringInternal, addr 0x612a458, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ToStringInternal(::System::Numerics::BigInteger value);

  static inline ::StringW getStaticF_False();

  static inline ::StringW getStaticF_NaN();

  static inline ::StringW getStaticF_NegativeInfinity();

  static inline ::StringW getStaticF_Null();

  static inline ::StringW getStaticF_PositiveInfinity();

  static inline ::StringW getStaticF_True();

  static inline ::StringW getStaticF_Undefined();

  static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* getStaticF__DefaultSettings_k__BackingField();

  /// [CompilerGenerated]
  /// @brief Method get_DefaultSettings, addr 0x6129a90, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings();

  static inline void setStaticF_False(::StringW value);

  static inline void setStaticF_NaN(::StringW value);

  static inline void setStaticF_NegativeInfinity(::StringW value);

  static inline void setStaticF_Null(::StringW value);

  static inline void setStaticF_PositiveInfinity(::StringW value);

  static inline void setStaticF_True(::StringW value);

  static inline void setStaticF_Undefined(::StringW value);

  static inline void setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value);

  /// [CompilerGenerated]
  /// @brief Method set_DefaultSettings, addr 0x6129aec, size 0x60, virtual false, abstract: false, final false
  static inline void set_DefaultSettings(/* [Nullable(new[] { 2, 1 })] */ ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConvert(JsonConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConvert(JsonConvert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13494 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::JsonConvert) == 0x10, "Size mismatch!");

} // namespace Newtonsoft::Json
