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

  /// @brief Method Close, addr 0x617690c, size 0x4c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x6176958, size 0x40, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetSerializedJsonMessage, addr 0x6174ba4, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW GetSerializedJsonMessage();

  static inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* New_ctor(::Newtonsoft::Json::JsonWriter* innerWriter);

  /// [NullableContext(2)]
  /// @brief Method WriteComment, addr 0x6176540, size 0x5c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteEndArray, addr 0x61765ec, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndArray();

  /// @brief Method WriteEndConstructor, addr 0x6176698, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndConstructor();

  /// @brief Method WriteEndObject, addr 0x6176800, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndObject();

  /// @brief Method WriteNull, addr 0x61755c4, size 0x60, virtual true, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WritePropertyName, addr 0x61766e4, size 0x60, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method WritePropertyName, addr 0x6176744, size 0x6c, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name, bool escape);

  /// [NullableContext(2)]
  /// @brief Method WriteRaw, addr 0x61768bc, size 0x50, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW json);

  /// [NullableContext(2)]
  /// @brief Method WriteRawValue, addr 0x617684c, size 0x70, virtual true, abstract: false, final false
  inline void WriteRawValue(::StringW json);

  /// @brief Method WriteStartArray, addr 0x617659c, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartArray();

  /// @brief Method WriteStartConstructor, addr 0x6176638, size 0x60, virtual true, abstract: false, final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteStartObject, addr 0x61767b0, size 0x50, virtual true, abstract: false, final false
  inline void WriteStartObject();

  /// @brief Method WriteUndefined, addr 0x6175564, size 0x60, virtual true, abstract: false, final false
  inline void WriteUndefined();

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x61750fc, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(::ArrayW<uint8_t> value);

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x6175eb0, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x6175178, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x61752b8, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue, addr 0x6174bc0, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x6175758, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x61751e8, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method WriteValue, addr 0x6175330, size 0xf4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::DateTimeOffset> value);

  /// @brief Method WriteValue, addr 0x6174c38, size 0x124, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Decimal> value);

  /// @brief Method WriteValue, addr 0x61757d0, size 0xf4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::Guid> value);

  /// @brief Method WriteValue, addr 0x6175f90, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method WriteValue, addr 0x6174dd0, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<bool> value);

  /// @brief Method WriteValue, addr 0x6175038, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<char16_t> value);

  /// @brief Method WriteValue, addr 0x6175494, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<double_t> value);

  /// @brief Method WriteValue, addr 0x6175694, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<float_t> value);

  /// @brief Method WriteValue, addr 0x6175dec, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int16_t> value);

  /// @brief Method WriteValue, addr 0x6175934, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int32_t> value);

  /// @brief Method WriteValue, addr 0x6175a68, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int64_t> value);

  /// @brief Method WriteValue, addr 0x6175cb8, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<int8_t> value);

  /// @brief Method WriteValue, addr 0x6176420, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint16_t> value);

  /// @brief Method WriteValue, addr 0x61760d0, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint32_t> value);

  /// @brief Method WriteValue, addr 0x6176204, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint64_t> value);

  /// @brief Method WriteValue, addr 0x6174f04, size 0xc4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint8_t> value);

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x6175b38, size 0x110, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteValue, addr 0x6175f20, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// [NullableContext(2)]
  /// @brief Method WriteValue, addr 0x61762d4, size 0xdc, virtual true, abstract: false, final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteValue, addr 0x6174d5c, size 0x74, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x6174fc8, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue, addr 0x6175424, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x6175624, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x6175d7c, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue, addr 0x61758c4, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x61759f8, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue, addr 0x6175c48, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue, addr 0x61763b0, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteValue, addr 0x6176060, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue, addr 0x6176194, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue, addr 0x6174e94, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint8_t value);

  /// @brief Method WriteWhitespace, addr 0x61764e4, size 0x5c, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x61749d0, size 0x1d4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13777 };

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
