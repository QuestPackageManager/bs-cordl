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
struct StringEscapeHandling;
}
namespace System {
class Object;
}
namespace System::Xml {
class XmlDocument;
}
namespace System {
class Uri;
}
namespace System::Xml::Linq {
class XDocument;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace System {
struct Guid;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Xml::Linq {
class XObject;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11762))
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

  /// @brief Method get_DefaultSettings addr 0x24ea364 size 0x58 virtual false final false
  static inline ::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* get_DefaultSettings();

  /// @brief Method set_DefaultSettings addr 0x24ea3bc size 0x5c virtual false final false
  static inline void set_DefaultSettings(::System::Func_1<::Newtonsoft::Json::JsonSerializerSettings*>* value);

  /// @brief Method GetDefaultSettings addr 0x24ea5fc size 0x58 virtual false final false
  static inline ::Newtonsoft::Json::JsonSerializerSettings* GetDefaultSettings();

  /// @brief Method ToString addr 0x24ea654 size 0x5c virtual false final false
  static inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString addr 0x24ea6b0 size 0x270 virtual false final false
  static inline ::StringW ToString(::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling);

  /// @brief Method ToString addr 0x24ea920 size 0x68 virtual false final false
  static inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString addr 0x24ea988 size 0x250 virtual false final false
  static inline ::StringW ToString(::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method ToString addr 0x24e6ec4 size 0x6c virtual false final false
  static inline ::StringW ToString(bool value);

  /// @brief Method ToString addr 0x24e7024 size 0x8c virtual false final false
  static inline ::StringW ToString(char16_t value);

  /// @brief Method ToString addr 0x24eac30 size 0x54 virtual false final false
  static inline ::StringW ToString(::bs_hook::EnumPtr value);

  /// @brief Method ToString addr 0x24eac84 size 0x6c virtual false final false
  static inline ::StringW ToString(int32_t value);

  /// @brief Method ToString addr 0x24eacf0 size 0x6c virtual false final false
  static inline ::StringW ToString(int16_t value);

  /// @brief Method ToString addr 0x24ead5c size 0x6c virtual false final false
  static inline ::StringW ToString(uint16_t value);

  /// @brief Method ToString addr 0x24eadc8 size 0x6c virtual false final false
  static inline ::StringW ToString(uint32_t value);

  /// @brief Method ToString addr 0x24eae34 size 0x6c virtual false final false
  static inline ::StringW ToString(int64_t value);

  /// @brief Method ToString addr 0x24eaea0 size 0x6c virtual false final false
  static inline ::StringW ToString(uint64_t value);

  /// @brief Method ToString addr 0x24eaf0c size 0xcc virtual false final false
  static inline ::StringW ToString(float_t value);

  /// @brief Method ToString addr 0x24e69c0 size 0xf0 virtual false final false
  static inline ::StringW ToString(float_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method EnsureFloatFormat addr 0x24eb128 size 0x184 virtual false final false
  static inline ::StringW EnsureFloatFormat(double_t value, ::StringW text, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method ToString addr 0x24eb2ac size 0xc8 virtual false final false
  static inline ::StringW ToString(double_t value);

  /// @brief Method ToString addr 0x24e6c48 size 0xec virtual false final false
  static inline ::StringW ToString(double_t value, ::Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable);

  /// @brief Method EnsureDecimalPlace addr 0x24eafd8 size 0x150 virtual false final false
  static inline ::StringW EnsureDecimalPlace(double_t value, ::StringW text);

  /// @brief Method EnsureDecimalPlace addr 0x24eb374 size 0x7c virtual false final false
  static inline ::StringW EnsureDecimalPlace(::StringW text);

  /// @brief Method ToString addr 0x24eb3f0 size 0x6c virtual false final false
  static inline ::StringW ToString(uint8_t value);

  /// @brief Method ToString addr 0x24eb45c size 0x6c virtual false final false
  static inline ::StringW ToString(int8_t value);

  /// @brief Method ToString addr 0x24e71ac size 0xc8 virtual false final false
  static inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString addr 0x24eb4c8 size 0x68 virtual false final false
  static inline ::StringW ToString(::System::Guid value);

  /// @brief Method ToString addr 0x24eb530 size 0xb8 virtual false final false
  static inline ::StringW ToString(::System::Guid value, char16_t quoteChar);

  /// @brief Method ToString addr 0x24eb5e8 size 0x58 virtual false final false
  static inline ::StringW ToString(::System::TimeSpan value);

  /// @brief Method ToString addr 0x24eb640 size 0x7c virtual false final false
  static inline ::StringW ToString(::System::TimeSpan value, char16_t quoteChar);

  /// @brief Method ToString addr 0x24eb724 size 0xb4 virtual false final false
  static inline ::StringW ToString(::System::Uri* value);

  /// @brief Method ToString addr 0x24eb7d8 size 0x78 virtual false final false
  static inline ::StringW ToString(::System::Uri* value, char16_t quoteChar);

  /// @brief Method ToString addr 0x24eabd8 size 0x58 virtual false final false
  static inline ::StringW ToString(::StringW value);

  /// @brief Method ToString addr 0x24eb6bc size 0x68 virtual false final false
  static inline ::StringW ToString(::StringW value, char16_t delimiter);

  /// @brief Method ToString addr 0x24eb850 size 0xe8 virtual false final false
  static inline ::StringW ToString(::StringW value, char16_t delimiter, ::Newtonsoft::Json::StringEscapeHandling stringEscapeHandling);

  /// @brief Method ToString addr 0x24eb938 size 0x7a8 virtual false final false
  static inline ::StringW ToString(::System::Object* value);

  /// @brief Method SerializeObject addr 0x24ec0e0 size 0x5c virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value);

  /// @brief Method SerializeObject addr 0x24ec1b8 size 0x68 virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeObject addr 0x24ec290 size 0xa4 virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method SerializeObject addr 0x24ec334 size 0xb4 virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting,
                                          ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method SerializeObject addr 0x24ec480 size 0x68 virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject addr 0x24ec13c size 0x7c virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject addr 0x24ec220 size 0x70 virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObject addr 0x24ec3e8 size 0x98 virtual false final false
  static inline ::StringW SerializeObject(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::Formatting formatting, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeObjectInternal addr 0x24ec51c size 0x284 virtual false final false
  static inline ::StringW SerializeObjectInternal(::System::Object* value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method DeserializeObject addr 0x24ec7b0 size 0x5c virtual false final false
  static inline ::System::Object* DeserializeObject(::StringW value);

  /// @brief Method DeserializeObject addr 0x24eca5c size 0x68 virtual false final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject addr 0x24ecac4 size 0x68 virtual false final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type);

  /// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeObject(::StringW value);

  /// @brief Method DeserializeAnonymousType addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject);

  /// @brief Method DeserializeAnonymousType addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeAnonymousType(::StringW value, T anonymousTypeObject, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeObject(::StringW value, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeObject(::StringW value, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method DeserializeObject addr 0x24ecb2c size 0xb0 virtual false final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method DeserializeObject addr 0x24ec80c size 0x250 virtual false final false
  static inline ::System::Object* DeserializeObject(::StringW value, ::System::Type* type, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method PopulateObject addr 0x24ecc28 size 0x68 virtual false final false
  static inline void PopulateObject(::StringW value, ::System::Object* target);

  /// @brief Method PopulateObject addr 0x24ecc90 size 0x26c virtual false final false
  static inline void PopulateObject(::StringW value, ::System::Object* target, ::Newtonsoft::Json::JsonSerializerSettings* settings);

  /// @brief Method SerializeXmlNode addr 0x24ecf10 size 0x58 virtual false final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node);

  /// @brief Method SerializeXmlNode addr 0x24ecf68 size 0xf0 virtual false final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXmlNode addr 0x24ed058 size 0xfc virtual false final false
  static inline ::StringW SerializeXmlNode(::System::Xml::XmlNode* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method DeserializeXmlNode addr 0x24ed154 size 0x58 virtual false final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value);

  /// @brief Method DeserializeXmlNode addr 0x24ed1ac size 0x68 virtual false final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName);

  /// @brief Method DeserializeXmlNode addr 0x24ed214 size 0x1a4 virtual false final false
  static inline ::System::Xml::XmlDocument* DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute);

  /// @brief Method SerializeXNode addr 0x24ed3b8 size 0x58 virtual false final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node);

  /// @brief Method SerializeXNode addr 0x24ed410 size 0x68 virtual false final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting);

  /// @brief Method SerializeXNode addr 0x24ed478 size 0xfc virtual false final false
  static inline ::StringW SerializeXNode(::System::Xml::Linq::XObject* node, ::Newtonsoft::Json::Formatting formatting, bool omitRootObject);

  /// @brief Method DeserializeXNode addr 0x24ed574 size 0x58 virtual false final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value);

  /// @brief Method DeserializeXNode addr 0x24ed5cc size 0x68 virtual false final false
  static inline ::System::Xml::Linq::XDocument* DeserializeXNode(::StringW value, ::StringW deserializeRootElementName);

  /// @brief Method DeserializeXNode addr 0x24ed634 size 0x1a4 virtual false final false
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
