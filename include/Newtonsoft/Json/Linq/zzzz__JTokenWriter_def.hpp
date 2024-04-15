#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JTokenWriter)
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
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
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JTokenWriter);
// Type: Newtonsoft.Json.Linq::JTokenWriter
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JTokenWriter*
class CORDL_TYPE JTokenWriter : public ::Newtonsoft::Json::JsonWriter {
public:
  // Declarations
  __declspec(property(get = get_CurrentToken))::Newtonsoft::Json::Linq::JToken* CurrentToken;

  __declspec(property(get = get_Token))::Newtonsoft::Json::Linq::JToken* Token;

  /// @brief Field _current, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current))::Newtonsoft::Json::Linq::JToken* _current;

  /// @brief Field _parent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::Newtonsoft::Json::Linq::JContainer* _parent;

  /// @brief Field _token, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token))::Newtonsoft::Json::Linq::JContainer* _token;

  /// @brief Field _value, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::Newtonsoft::Json::Linq::JValue* _value;

  /// @brief Method AddJValue, addr 0x2975944, size 0x8c, virtual false, abstract: false, final false
  inline void AddJValue(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::JsonToken token);

  /// @brief Method AddParent, addr 0x29755ac, size 0x40, virtual false, abstract: false, final false
  inline void AddParent(::Newtonsoft::Json::Linq::JContainer* container);

  /// @brief Method AddRawValue, addr 0x2975858, size 0x78, virtual false, abstract: false, final false
  inline void AddRawValue(::System::Object* value, ::Newtonsoft::Json::Linq::JTokenType type, ::Newtonsoft::Json::JsonToken token);

  /// @brief Method Close, addr 0x2975518, size 0x8, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x2975514, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Newtonsoft::Json::Linq::JTokenWriter* New_ctor();

  static inline ::Newtonsoft::Json::Linq::JTokenWriter* New_ctor(::Newtonsoft::Json::Linq::JContainer* container);

  /// @brief Method RemoveParent, addr 0x29755ec, size 0x54, virtual false, abstract: false, final false
  inline void RemoveParent();

  /// @brief Method WriteComment, addr 0x2975bec, size 0x34, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteEnd, addr 0x297576c, size 0x4, virtual true, abstract: false, final false
  inline void WriteEnd(::Newtonsoft::Json::JsonToken token);

  /// @brief Method WriteNull, addr 0x2975ac0, size 0x24, virtual true, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WritePropertyName, addr 0x2975770, size 0xe8, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method WriteRaw, addr 0x2975b68, size 0x84, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW json);

  /// @brief Method WriteStartArray, addr 0x2975640, size 0x8c, virtual true, abstract: false, final false
  inline void WriteStartArray();

  /// @brief Method WriteStartConstructor, addr 0x29756cc, size 0xa0, virtual true, abstract: false, final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteStartObject, addr 0x2975520, size 0x8c, virtual true, abstract: false, final false
  inline void WriteStartObject();

  /// @brief Method WriteToken, addr 0x2976c48, size 0x278, virtual true, abstract: false, final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments);

  /// @brief Method WriteTokenAsync, addr 0x29752fc, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteTokenAsync(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments,
                                                           ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method WriteUndefined, addr 0x2975ae4, size 0x24, virtual true, abstract: false, final false
  inline void WriteUndefined();

  /// @brief Method WriteValue, addr 0x29768d0, size 0x84, virtual true, abstract: false, final false
  inline void WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteValue, addr 0x2975c84, size 0x84, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x29766a0, size 0xc0, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x29767cc, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue, addr 0x2976598, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x2976a40, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x2975a30, size 0x90, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteValue, addr 0x2976954, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue, addr 0x2976b44, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteValue, addr 0x29761d0, size 0x84, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x29763c8, size 0xd0, virtual true, abstract: false, final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue, addr 0x29760dc, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x2975ff0, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x29762c8, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue, addr 0x2975d10, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x2975e10, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue, addr 0x2976518, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue, addr 0x2976348, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteValue, addr 0x2975d90, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue, addr 0x2975f04, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue, addr 0x2976498, size 0x80, virtual true, abstract: false, final false
  inline void WriteValue(uint8_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__current() const;

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& __cordl_internal_get__parent() const;

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get__token();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& __cordl_internal_get__token() const;

  constexpr ::Newtonsoft::Json::Linq::JValue*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JValue*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr void __cordl_internal_set__token(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr void __cordl_internal_set__value(::Newtonsoft::Json::Linq::JValue* value);

  /// @brief Method .ctor, addr 0x29754bc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x297542c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JContainer* container);

  /// @brief Method get_CurrentToken, addr 0x2975408, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_CurrentToken();

  /// @brief Method get_Token, addr 0x2975410, size 0x1c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Token();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JTokenWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JTokenWriter(JTokenWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JTokenWriter(JTokenWriter const&) = delete;

  /// @brief Field _token, offset: 0x60, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* ____token;

  /// @brief Field _parent, offset: 0x68, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* ____parent;

  /// @brief Field _value, offset: 0x70, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JValue* ____value;

  /// @brief Field _current, offset: 0x78, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JTokenWriter, 0x80>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____token) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____parent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____value) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenWriter, ____current) == 0x78, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenWriter*, "Newtonsoft.Json.Linq", "JTokenWriter");
