#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::TraceJsonWriter);
// Type: Newtonsoft.Json.Serialization::TraceJsonWriter
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11741))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11809))
// CS Name: ::Newtonsoft.Json.Serialization::TraceJsonWriter*
class CORDL_TYPE TraceJsonWriter : public ::Newtonsoft::Json::JsonWriter {
public:
  // Declarations
  /// @brief Field _innerWriter, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__innerWriter, put = __cordl_internal_set__innerWriter))::Newtonsoft::Json::JsonWriter* _innerWriter;

  /// @brief Field _textWriter, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__textWriter, put = __cordl_internal_set__textWriter))::Newtonsoft::Json::JsonTextWriter* _textWriter;

  /// @brief Field _sw, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__sw, put = __cordl_internal_set__sw))::System::IO::StringWriter* _sw;

  constexpr ::Newtonsoft::Json::JsonWriter*& __cordl_internal_get__innerWriter();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonWriter*> const& __cordl_internal_get__innerWriter() const;

  constexpr void __cordl_internal_set__innerWriter(::Newtonsoft::Json::JsonWriter* value);

  constexpr ::Newtonsoft::Json::JsonTextWriter*& __cordl_internal_get__textWriter();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonTextWriter*> const& __cordl_internal_get__textWriter() const;

  constexpr void __cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter* value);

  constexpr ::System::IO::StringWriter*& __cordl_internal_get__sw();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StringWriter*> const& __cordl_internal_get__sw() const;

  constexpr void __cordl_internal_set__sw(::System::IO::StringWriter* value);

  static inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* New_ctor(::Newtonsoft::Json::JsonWriter* innerWriter);

  /// @brief Method .ctor, addr 0x268e9c4, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonWriter* innerWriter);

  /// @brief Method GetSerializedJsonMessage, addr 0x268eb84, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetSerializedJsonMessage();

  /// @brief Method WriteValue, addr 0x268eba4, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x268ec1c, size 0x74, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x268ec90, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint8_t value);

  /// @brief Method WriteValue, addr 0x268ed00, size 0x60, virtual true, abstract: false, final false
  inline void WriteValue(::System::Nullable_1<uint8_t> value);

  /// @brief Method WriteValue, addr 0x268ed60, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue, addr 0x268edd0, size 0x5c, virtual true, abstract: false, final false
  inline void WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteValue, addr 0x268ee2c, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x268ee9c, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue, addr 0x268ef14, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteUndefined, addr 0x268ef84, size 0x60, virtual true, abstract: false, final false
  inline void WriteUndefined();

  /// @brief Method WriteNull, addr 0x268efe4, size 0x60, virtual true, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WriteValue, addr 0x268f044, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x268f0b4, size 0x78, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x268f12c, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x268f19c, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue, addr 0x268f20c, size 0x5c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteValue, addr 0x268f268, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue, addr 0x268f2d8, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue, addr 0x268f348, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x268f3b8, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue, addr 0x268f428, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue, addr 0x268f498, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue, addr 0x268f508, size 0x5c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteValue, addr 0x268f564, size 0x70, virtual true, abstract: false, final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteWhitespace, addr 0x268f5d4, size 0x5c, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteComment, addr 0x268f630, size 0x5c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteStartArray, addr 0x268f68c, size 0x48, virtual true, abstract: false, final false
  inline void WriteStartArray();

  /// @brief Method WriteEndArray, addr 0x268f6d4, size 0x44, virtual true, abstract: false, final false
  inline void WriteEndArray();

  /// @brief Method WriteStartConstructor, addr 0x268f718, size 0x58, virtual true, abstract: false, final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteEndConstructor, addr 0x268f770, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEndConstructor();

  /// @brief Method WritePropertyName, addr 0x268f7bc, size 0x60, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method WritePropertyName, addr 0x268f81c, size 0x6c, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name, bool escape);

  /// @brief Method WriteStartObject, addr 0x268f888, size 0x48, virtual true, abstract: false, final false
  inline void WriteStartObject();

  /// @brief Method WriteEndObject, addr 0x268f8d0, size 0x44, virtual true, abstract: false, final false
  inline void WriteEndObject();

  /// @brief Method WriteRawValue, addr 0x268f914, size 0x70, virtual true, abstract: false, final false
  inline void WriteRawValue(::StringW json);

  /// @brief Method WriteRaw, addr 0x268f984, size 0x50, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW json);

  /// @brief Method Close, addr 0x268f9d4, size 0x40, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x268fa14, size 0x1038, virtual true, abstract: false, final false
  inline void Flush();

  // Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceJsonWriter(TraceJsonWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceJsonWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceJsonWriter(TraceJsonWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceJsonWriter();

public:
  /// @brief Field _innerWriter, offset: 0x60, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonWriter* ____innerWriter;

  /// @brief Field _textWriter, offset: 0x68, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonTextWriter* ____textWriter;

  /// @brief Field _sw, offset: 0x70, size: 0x8, def value: None
  ::System::IO::StringWriter* ____sw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::TraceJsonWriter, 0x78>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____innerWriter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____textWriter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::TraceJsonWriter, ____sw) == 0x70, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::TraceJsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::TraceJsonWriter*, "Newtonsoft.Json.Serialization", "TraceJsonWriter");
