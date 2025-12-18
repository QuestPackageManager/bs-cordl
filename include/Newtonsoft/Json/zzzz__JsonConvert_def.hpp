#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConvert.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConvert);
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

  /// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject);

  /// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject, addr 0x5b2757c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value);

  /// @brief Method DeserializeObject, addr 0x5b27800, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject, addr 0x5b2786c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type);

  /// @brief Method DeserializeObject, addr 0x5b278d8, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method DeserializeObject, addr 0x5b275dc, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value);

  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeXNode, addr 0x5b28524, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value);

  /// @brief Method DeserializeXNode, addr 0x5b28580, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value, ::StringW deserializeRootElementName);

  /// @brief Method DeserializeXNode, addr 0x5b285ec, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute);

  /// @brief Method DeserializeXNode, addr 0x5b28660, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters);

  /// @brief Method DeserializeXmlNode, addr 0x5b28074, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value);

  /// @brief Method DeserializeXmlNode, addr 0x5b280d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName);

  /// @brief Method DeserializeXmlNode, addr 0x5b2813c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute);

  /// @brief Method DeserializeXmlNode, addr 0x5b281b0, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute, bool encodeSpecialCharacters);

  /// @brief Method EnsureDecimalPlace, addr 0x5b26008, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW EnsureDecimalPlace(::StringW text);

  /// @brief Method EnsureDecimalPlace, addr 0x5b25b68, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW EnsureDecimalPlace(double_t value, ::StringW text);

  /// @brief Method EnsureFloatFormat, addr 0x5b25d28, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW EnsureFloatFormat(double_t value, ::StringW text, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method PopulateObject, addr 0x5b27ad8, size 0x6c, virtual false, abstract: false, final false
  static inline void PopulateObject(::StringW value, ::System::Object* target);

  /// @brief Method PopulateObject, addr 0x5b27b44, size 0x280, virtual false, abstract: false, final false
  static inline void PopulateObject(::StringW value, ::System::Object* target, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x5b26e20, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value);

  /// @brief Method SerializeObject, addr 0x5b26fe0, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method SerializeObject, addr 0x5b26f00, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeObject, addr 0x5b27108, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting,
                                          ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method SerializeObject, addr 0x5b26f6c, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x5b27268, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x5b271c4, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x5b26e80, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObjectInternal, addr 0x5b27308, size 0x264, virtual false, abstract: false, final false
  static inline ::StringW SerializeObjectInternal(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method SerializeXNode, addr 0x5b2835c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node);

  /// @brief Method SerializeXNode, addr 0x5b283b8, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXNode, addr 0x5b28424, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method SerializeXmlNode, addr 0x5b27e20, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node);

  /// @brief Method SerializeXmlNode, addr 0x5b27e7c, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXmlNode, addr 0x5b27f74, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method ToString, addr 0x5b2568c, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::StringW value);

  /// @brief Method ToString, addr 0x5b264a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::StringW value, char16_t delimiter);

  /// @brief Method ToString, addr 0x5b26644, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::StringW value, char16_t delimiter, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);

  /// @brief Method ToString, addr 0x5b25064, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x5b250c4, size 0x23c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling);

  /// @brief Method ToString, addr 0x5b25300, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x5b2536c, size 0x21c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method ToString, addr 0x5b26160, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x5b256e8, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Enum* value);

  /// @brief Method ToString, addr 0x5b2625c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x5b262c8, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x5b2672c, size 0x6f4, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value);

  /// @brief Method ToString, addr 0x5b263a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x5b263fc, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x5b2650c, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Uri* value);

  /// @brief Method ToString, addr 0x5b265b4, size 0x90, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Uri* value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x5b25588, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x5b25608, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString, addr 0x5b25e44, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x5b25f14, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method ToString, addr 0x5b25a94, size 0xd4, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x5b25c30, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method ToString, addr 0x5b257b0, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x5b25740, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x5b25900, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x5b260f0, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// @brief Method ToString, addr 0x5b25820, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// @brief Method ToString, addr 0x5b25890, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// @brief Method ToString, addr 0x5b25a24, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x5b26080, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToStringInternal, addr 0x5b25970, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ToStringInternal(::System::Numerics::BigInteger value);

  static inline ::StringW getStaticF_False();

  static inline ::StringW getStaticF_NaN();

  static inline ::StringW getStaticF_NegativeInfinity();

  static inline ::StringW getStaticF_Null();

  static inline ::StringW getStaticF_PositiveInfinity();

  static inline ::StringW getStaticF_True();

  static inline ::StringW getStaticF_Undefined();

  static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* getStaticF__DefaultSettings_k__BackingField();

  /// @brief Method get_DefaultSettings, addr 0x5b24fa8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings();

  static inline void setStaticF_False(::StringW value);

  static inline void setStaticF_NaN(::StringW value);

  static inline void setStaticF_NegativeInfinity(::StringW value);

  static inline void setStaticF_Null(::StringW value);

  static inline void setStaticF_PositiveInfinity(::StringW value);

  static inline void setStaticF_True(::StringW value);

  static inline void setStaticF_Undefined(::StringW value);

  static inline void setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value);

  /// @brief Method set_DefaultSettings, addr 0x5b25004, size 0x60, virtual false, abstract: false, final false
  static inline void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConvert();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConvert(JsonConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConvert(JsonConvert const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConvert, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConvert);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConvert*, "Newtonsoft.Json", "JsonConvert");
