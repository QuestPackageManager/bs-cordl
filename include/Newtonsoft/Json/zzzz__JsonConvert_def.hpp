#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Newtonsoft.Json::JsonConvert
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11834))
// CS Name: ::Newtonsoft.Json::JsonConvert*
class CORDL_TYPE JsonConvert : public ::System::Object {
public:
  // Declarations
  /// @brief Field <DefaultSettings>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__DefaultSettings_k__BackingField,
                             put = setStaticF__DefaultSettings_k__BackingField))::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* _DefaultSettings_k__BackingField;

  /// @brief Field True, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_True, put = setStaticF_True))::StringW True;

  /// @brief Field False, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_False, put = setStaticF_False))::StringW False;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::StringW Null;

  /// @brief Field Undefined, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Undefined, put = setStaticF_Undefined))::StringW Undefined;

  /// @brief Field PositiveInfinity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PositiveInfinity, put = setStaticF_PositiveInfinity))::StringW PositiveInfinity;

  /// @brief Field NegativeInfinity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NegativeInfinity, put = setStaticF_NegativeInfinity))::StringW NegativeInfinity;

  /// @brief Field NaN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NaN, put = setStaticF_NaN))::StringW NaN;

  /// @brief Field InitialSerializerSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InitialSerializerSettings, put = setStaticF_InitialSerializerSettings))::Newtonsoft::Json::JsonSerializerSettings* InitialSerializerSettings;

  static inline void setStaticF__DefaultSettings_k__BackingField(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value);

  static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* getStaticF__DefaultSettings_k__BackingField();

  static inline void setStaticF_True(::StringW value);

  static inline ::StringW getStaticF_True();

  static inline void setStaticF_False(::StringW value);

  static inline ::StringW getStaticF_False();

  static inline void setStaticF_Null(::StringW value);

  static inline ::StringW getStaticF_Null();

  static inline void setStaticF_Undefined(::StringW value);

  static inline ::StringW getStaticF_Undefined();

  static inline void setStaticF_PositiveInfinity(::StringW value);

  static inline ::StringW getStaticF_PositiveInfinity();

  static inline void setStaticF_NegativeInfinity(::StringW value);

  static inline ::StringW getStaticF_NegativeInfinity();

  static inline void setStaticF_NaN(::StringW value);

  static inline ::StringW getStaticF_NaN();

  static inline void setStaticF_InitialSerializerSettings(::Newtonsoft::Json::JsonSerializerSettings* value);

  static inline ::Newtonsoft::Json::JsonSerializerSettings* getStaticF_InitialSerializerSettings();

  /// @brief Method get_DefaultSettings, addr 0x264caa8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings();

  /// @brief Method set_DefaultSettings, addr 0x264cb00, size 0x5c, virtual false, abstract: false, final false
  static inline void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value);

  /// @brief Method GetDefaultSettings, addr 0x264cd40, size 0x58, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::JsonSerializerSettings* GetDefaultSettings();

  /// @brief Method ToString, addr 0x264cd98, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x264cdf4, size 0x270, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling);

  /// @brief Method ToString, addr 0x264d064, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x264d0cc, size 0x250, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method ToString, addr 0x2649608, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x2649768, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString, addr 0x264d374, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW ToString(::bs_hook::EnumPtr value);

  /// @brief Method ToString, addr 0x264d3c8, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x264d434, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString, addr 0x264d4a0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint16_t value);

  /// @brief Method ToString, addr 0x264d50c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint32_t value);

  /// @brief Method ToString, addr 0x264d578, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x264d5e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString, addr 0x264d650, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x2649104, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW ToString(float_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method EnsureFloatFormat, addr 0x264d86c, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW EnsureFloatFormat(double_t value, ::StringW text, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method ToString, addr 0x264d9f0, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x264938c, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW ToString(double_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method EnsureDecimalPlace, addr 0x264d71c, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW EnsureDecimalPlace(double_t value, ::StringW text);

  /// @brief Method EnsureDecimalPlace, addr 0x264dab8, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW EnsureDecimalPlace(::StringW text);

  /// @brief Method ToString, addr 0x264db34, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToString, addr 0x264dba0, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int8_t value);

  /// @brief Method ToString, addr 0x26498f0, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x264dc0c, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString, addr 0x264dc74, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Guid value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x264dd2c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString, addr 0x264dd84, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::TimeSpan value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x264de68, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Uri* value);

  /// @brief Method ToString, addr 0x264df1c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Uri* value, char16_t quoteChar);

  /// @brief Method ToString, addr 0x264d31c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ToString(::StringW value);

  /// @brief Method ToString, addr 0x264de00, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW ToString(::StringW value, char16_t delimiter);

  /// @brief Method ToString, addr 0x264df94, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::StringW value, char16_t delimiter, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);

  /// @brief Method ToString, addr 0x264e07c, size 0x7a8, virtual false, abstract: false, final false
  static inline ::StringW ToString(::System::Object* value);

  /// @brief Method SerializeObject, addr 0x264e824, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value);

  /// @brief Method SerializeObject, addr 0x264e8fc, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeObject, addr 0x264e9d4, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method SerializeObject, addr 0x264ea78, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting,
                                          ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method SerializeObject, addr 0x264ebc4, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x264e880, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x264e964, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject, addr 0x264eb2c, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObjectInternal, addr 0x264ec60, size 0x284, virtual false, abstract: false, final false
  static inline ::StringW SerializeObjectInternal(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method DeserializeObject, addr 0x264eef4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value);

  /// @brief Method DeserializeObject, addr 0x264f1a0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject, addr 0x264f208, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type);

  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value);

  /// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject);

  /// @brief Method DeserializeAnonymousType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject, addr 0x264f270, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method DeserializeObject, addr 0x264ef50, size 0x250, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method PopulateObject, addr 0x264f36c, size 0x68, virtual false, abstract: false, final false
  static inline void PopulateObject(::StringW value, ::System::Object* target);

  /// @brief Method PopulateObject, addr 0x264f3d4, size 0x26c, virtual false, abstract: false, final false
  static inline void PopulateObject(::StringW value, ::System::Object* target, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeXmlNode, addr 0x264f654, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node);

  /// @brief Method SerializeXmlNode, addr 0x264f6ac, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXmlNode, addr 0x264f79c, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method DeserializeXmlNode, addr 0x264f898, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value);

  /// @brief Method DeserializeXmlNode, addr 0x264f8f0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName);

  /// @brief Method DeserializeXmlNode, addr 0x264f958, size 0x1a4, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute);

  /// @brief Method SerializeXNode, addr 0x264fafc, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node);

  /// @brief Method SerializeXNode, addr 0x264fb54, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXNode, addr 0x264fbbc, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method DeserializeXNode, addr 0x264fcb8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value);

  /// @brief Method DeserializeXNode, addr 0x264fd10, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value, ::StringW deserializeRootElementName);

  /// @brief Method DeserializeXNode, addr 0x264fd78, size 0x1a4, virtual false, abstract: false, final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute);

  // Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConvert(JsonConvert&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConvert(JsonConvert const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConvert();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConvert, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConvert);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConvert*, "Newtonsoft.Json", "JsonConvert");
