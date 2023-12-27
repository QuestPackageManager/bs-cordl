#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceJsonReader)
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace System {
class Type;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace System {
class Object;
}
namespace System::IO {
class StringWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class TraceJsonReader;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::TraceJsonReader);
// Type: Newtonsoft.Json.Serialization::TraceJsonReader
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11910))
// CS Name: ::Newtonsoft.Json.Serialization::TraceJsonReader*
class CORDL_TYPE TraceJsonReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  /// @brief Field _innerReader, offset 0x78, size 0x8
  __declspec(property(get = __get__innerReader, put = __set__innerReader))::Newtonsoft::Json::JsonReader* _innerReader;

  /// @brief Field _textWriter, offset 0x80, size 0x8
  __declspec(property(get = __get__textWriter, put = __set__textWriter))::Newtonsoft::Json::JsonTextWriter* _textWriter;

  /// @brief Field _sw, offset 0x88, size 0x8
  __declspec(property(get = __get__sw, put = __set__sw))::System::IO::StringWriter* _sw;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_Path))::StringW Path;

  __declspec(property(get = get_QuoteChar, put = set_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_TokenType))::Newtonsoft::Json::JsonToken TokenType;

  __declspec(property(get = get_Value))::System::Object* Value;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LineNumber)) int32_t Newtonsoft_Json_IJsonLineInfo_LineNumber;

  __declspec(property(get = Newtonsoft_Json_IJsonLineInfo_get_LinePosition)) int32_t Newtonsoft_Json_IJsonLineInfo_LinePosition;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  constexpr ::Newtonsoft::Json::JsonReader*& __get__innerReader();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonReader*> const& __get__innerReader() const;

  constexpr void __set__innerReader(::Newtonsoft::Json::JsonReader* value);

  constexpr ::Newtonsoft::Json::JsonTextWriter*& __get__textWriter();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonTextWriter*> const& __get__textWriter() const;

  constexpr void __set__textWriter(::Newtonsoft::Json::JsonTextWriter* value);

  constexpr ::System::IO::StringWriter*& __get__sw();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StringWriter*> const& __get__sw() const;

  constexpr void __set__sw(::System::IO::StringWriter* value);

  static inline ::Newtonsoft::Json::Serialization::TraceJsonReader* New_ctor(::Newtonsoft::Json::JsonReader* innerReader);

  /// @brief Method .ctor addr 0x266af98 size 0x13c virtual false final false
  inline void _ctor(::Newtonsoft::Json::JsonReader* innerReader);

  /// @brief Method GetDeserializedJsonMessage addr 0x266b0d4 size 0x20 virtual false final false
  inline ::StringW GetDeserializedJsonMessage();

  /// @brief Method Read addr 0x266b0f4 size 0x64 virtual true final false
  inline bool Read();

  /// @brief Method ReadAsInt32 addr 0x266b158 size 0x68 virtual true final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadAsString addr 0x266b1c0 size 0x68 virtual true final false
  inline ::StringW ReadAsString();

  /// @brief Method ReadAsBytes addr 0x266b228 size 0x68 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadAsDecimal addr 0x266b290 size 0x9c virtual true final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadAsDouble addr 0x266b32c size 0x6c virtual true final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method ReadAsBoolean addr 0x266b398 size 0x60 virtual true final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ReadAsDateTime addr 0x266b3f8 size 0x6c virtual true final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadAsDateTimeOffset addr 0x266b464 size 0x7c virtual true final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method get_Depth addr 0x266b4e0 size 0x20 virtual true final false
  inline int32_t get_Depth();

  /// @brief Method get_Path addr 0x266b500 size 0x20 virtual true final false
  inline ::StringW get_Path();

  /// @brief Method get_QuoteChar addr 0x266b520 size 0x20 virtual true final false
  inline char16_t get_QuoteChar();

  /// @brief Method set_QuoteChar addr 0x266b540 size 0x20 virtual true final false
  inline void set_QuoteChar(char16_t value);

  /// @brief Method get_TokenType addr 0x266b560 size 0x20 virtual true final false
  inline ::Newtonsoft::Json::JsonToken get_TokenType();

  /// @brief Method get_Value addr 0x266b580 size 0x20 virtual true final false
  inline ::System::Object* get_Value();

  /// @brief Method get_ValueType addr 0x266b5a0 size 0x20 virtual true final false
  inline ::System::Type* get_ValueType();

  /// @brief Method Close addr 0x266b5c0 size 0x24 virtual true final false
  inline void Close();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.HasLineInfo addr 0x266b5e4 size 0xb4 virtual true final true
  inline bool Newtonsoft_Json_IJsonLineInfo_HasLineInfo();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LineNumber addr 0x266b698 size 0xb8 virtual true final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LineNumber();

  /// @brief Method Newtonsoft.Json.IJsonLineInfo.get_LinePosition addr 0x266b750 size 0xb8 virtual true final true
  inline int32_t Newtonsoft_Json_IJsonLineInfo_get_LinePosition();

  // Ctor Parameters [CppParam { name: "", ty: "TraceJsonReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceJsonReader(TraceJsonReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceJsonReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceJsonReader(TraceJsonReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceJsonReader();

public:
  /// @brief Field _innerReader, offset: 0x78, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* ____innerReader;

  /// @brief Field _textWriter, offset: 0x80, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextWriter* ____textWriter;

  /// @brief Field _sw, offset: 0x88, size: 0x8, def value: None
  ::System::IO::StringWriter* ____sw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::TraceJsonReader, 0x90>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::TraceJsonReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::TraceJsonReader*, "Newtonsoft.Json.Serialization", "TraceJsonReader");
