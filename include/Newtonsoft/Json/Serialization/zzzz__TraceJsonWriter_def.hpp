#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceJsonWriter)
namespace Newtonsoft::Json {
class JsonTextWriter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::IO {
class StringWriter;
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
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class TraceJsonWriter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::TraceJsonWriter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::TraceJsonWriter*, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Newtonsoft.Json.JsonWriter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.TraceJsonWriter
class CORDL_TYPE TraceJsonWriter : public ::Newtonsoft::Json::JsonWriter {
public:
  // Declarations
  /// @brief Field _innerWriter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__innerWriter, put = __cordl_internal_set__innerWriter)) ::Newtonsoft::Json::JsonWriter* _innerWriter;

  /// @brief Field _sw, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sw, put = __cordl_internal_set__sw)) ::System::IO::StringWriter* _sw;

  /// @brief Field _textWriter, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__textWriter, put = __cordl_internal_set__textWriter)) ::Newtonsoft::Json::JsonTextWriter* _textWriter;

  /// @brief Method Close, addr 0x61b35dc, size 0x4c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x61b3628, size 0x40, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetSerializedJsonMessage, addr 0x61b1874, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetSerializedJsonMessage();

  static inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* New_ctor(::Newtonsoft::Json::JsonWriter* innerWriter);

  /// [NullableContext(2)]
  /// @brief Method WriteComment, addr 0x61b3210, size 0x5c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteEndArray, addr 0x61b32bc, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndArray();

  /// @brief Method WriteEndConstructor, addr 0x61b3368, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndConstructor();

  /// @brief Method WriteEndObject, addr 0x61b34d0, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndObject();

  /// @brief Method WriteNull, addr 0x61b2294, size 0x60, virtual true, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WritePropertyName, addr 0x61b33b4, size 0x60, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method WritePropertyName, addr 0x61b3414, size 0x6c, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name, bool escape);

  /// [NullableContext(2)]
  /// @brief Method WriteRaw, addr 0x61b358c, size 0x50, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW json);

  /// [NullableContext(2)]
  /// @brief Method WriteRawValue, addr 0x61b351c, size 0x70, virtual true, abstract: false, final false
  inline void WriteRawValue(::StringW json);

  /// @brief Method WriteStartArray, addr 0x61b326c, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartArray();

  /// @brief Method WriteStartConstructor, addr 0x61b3308, size 0x60, virtual true, abstract: false, final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteStartObject, addr 0x61b3480, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartObject();

  /// @brief Method WriteUndefined, addr 0x61b2234, size 0x60, virtual true, abstract: false, final false
  inline void WriteUndefined();

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x61b1dcc, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::ArrayW<uint8_t> value);

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x61b2b80, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x61b1e48, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x61b1f88, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue, addr 0x61b1890, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x61b2428, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x61b1eb8, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method WriteValue, addr 0x61b2000, size 0xf4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method WriteValue, addr 0x61b1908, size 0x124, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Decimal> value);

  /// @brief Method WriteValue, addr 0x61b24a0, size 0xf4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Guid> value);

  /// @brief Method WriteValue, addr 0x61b2c60, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method WriteValue, addr 0x61b1aa0, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<bool> value);

  /// @brief Method WriteValue, addr 0x61b1d08, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<char16_t> value);

  /// @brief Method WriteValue, addr 0x61b2164, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<double_t> value);

  /// @brief Method WriteValue, addr 0x61b2364, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<float_t> value);

  /// @brief Method WriteValue, addr 0x61b2abc, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int16_t> value);

  /// @brief Method WriteValue, addr 0x61b2604, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int32_t> value);

  /// @brief Method WriteValue, addr 0x61b2738, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int64_t> value);

  /// @brief Method WriteValue, addr 0x61b2988, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int8_t> value);

  /// @brief Method WriteValue, addr 0x61b30f0, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint16_t> value);

  /// @brief Method WriteValue, addr 0x61b2da0, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint32_t> value);

  /// @brief Method WriteValue, addr 0x61b2ed4, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint64_t> value);

  /// @brief Method WriteValue, addr 0x61b1bd4, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint8_t> value);

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x61b2808, size 0x110, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteValue, addr 0x61b2bf0, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x61b2fa4, size 0xdc, virtual true, abstract: false, final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteValue, addr 0x61b1a2c, size 0x74, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x61b1c98, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue, addr 0x61b20f4, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x61b22f4, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x61b2a4c, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue, addr 0x61b2594, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x61b26c8, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue, addr 0x61b2918, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue, addr 0x61b3080, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteValue, addr 0x61b2d30, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue, addr 0x61b2e64, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue, addr 0x61b1b64, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint8_t value);

  /// @brief Method WriteWhitespace, addr 0x61b31b4, size 0x5c, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr ::Newtonsoft::Json::JsonWriter* const& __cordl_internal_get__innerWriter() const;

  constexpr ::Newtonsoft::Json::JsonWriter*& __cordl_internal_get__innerWriter();

  constexpr ::System::IO::StringWriter* const& __cordl_internal_get__sw() const;

  constexpr ::System::IO::StringWriter*& __cordl_internal_get__sw();

  constexpr ::Newtonsoft::Json::JsonTextWriter* const& __cordl_internal_get__textWriter() const;

  constexpr ::Newtonsoft::Json::JsonTextWriter*& __cordl_internal_get__textWriter();

  constexpr void __cordl_internal_set__innerWriter(::Newtonsoft::Json::JsonWriter* value);

  constexpr void __cordl_internal_set__sw(::System::IO::StringWriter* value);

  constexpr void __cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter* value);

  /// @brief Method .ctor, addr 0x61b16a0, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonWriter* innerWriter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceJsonWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceJsonWriter(TraceJsonWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceJsonWriter(TraceJsonWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13784 };

  /// @brief Field _innerWriter, offset: 0x60, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonWriter* ____innerWriter;

  /// @brief Field _textWriter, offset: 0x68, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextWriter* ____textWriter;

  /// @brief Field _sw, offset: 0x70, size: 0x8, def value: None
  ::System::IO::StringWriter* ____sw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____innerWriter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____textWriter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____sw) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Serialization::TraceJsonWriter) == 0x78, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
