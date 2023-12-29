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
namespace System {
struct DateTimeOffset;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System {
class Object;
}
namespace System {
struct Guid;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Uri;
}
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json::Linq {
class JValue;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11771))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11923))
// CS Name: ::Newtonsoft.Json.Linq::JTokenWriter*
class CORDL_TYPE JTokenWriter : public ::Newtonsoft::Json::JsonWriter {
public:
  // Declarations
  /// @brief Field _token, offset 0x60, size 0x8
  __declspec(property(get = __get__token, put = __set__token))::Newtonsoft::Json::Linq::JContainer* _token;

  /// @brief Field _parent, offset 0x68, size 0x8
  __declspec(property(get = __get__parent, put = __set__parent))::Newtonsoft::Json::Linq::JContainer* _parent;

  /// @brief Field _value, offset 0x70, size 0x8
  __declspec(property(get = __get__value, put = __set__value))::Newtonsoft::Json::Linq::JValue* _value;

  /// @brief Field _current, offset 0x78, size 0x8
  __declspec(property(get = __get__current, put = __set__current))::Newtonsoft::Json::Linq::JToken* _current;

  __declspec(property(get = get_CurrentToken))::Newtonsoft::Json::Linq::JToken* CurrentToken;

  __declspec(property(get = get_Token))::Newtonsoft::Json::Linq::JToken* Token;

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __get__token();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& __get__token() const;

  constexpr void __set__token(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __get__parent();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& __get__parent() const;

  constexpr void __set__parent(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr ::Newtonsoft::Json::Linq::JValue*& __get__value();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JValue*> const& __get__value() const;

  constexpr void __set__value(::Newtonsoft::Json::Linq::JValue* value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get__current() const;

  constexpr void __set__current(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method get_CurrentToken addr 0x25394c4 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* get_CurrentToken();

  /// @brief Method get_Token addr 0x25394cc size 0x1c virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Token();

  static inline ::Newtonsoft::Json::Linq::JTokenWriter* New_ctor(::Newtonsoft::Json::Linq::JContainer* container);

  /// @brief Method .ctor addr 0x2532f54 size 0x90 virtual false final false
  inline void _ctor(::Newtonsoft::Json::Linq::JContainer* container);

  static inline ::Newtonsoft::Json::Linq::JTokenWriter* New_ctor();

  /// @brief Method .ctor addr 0x25394e8 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method Flush addr 0x2539540 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method Close addr 0x2539544 size 0x8 virtual true final false
  inline void Close();

  /// @brief Method WriteStartObject addr 0x253954c size 0x84 virtual true final false
  inline void WriteStartObject();

  /// @brief Method AddParent addr 0x25395d0 size 0x3c virtual false final false
  inline void AddParent(::Newtonsoft::Json::Linq::JContainer* container);

  /// @brief Method RemoveParent addr 0x253960c size 0x54 virtual false final false
  inline void RemoveParent();

  /// @brief Method WriteStartArray addr 0x2539660 size 0x84 virtual true final false
  inline void WriteStartArray();

  /// @brief Method WriteStartConstructor addr 0x25396e4 size 0x98 virtual true final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteEnd addr 0x253977c size 0x4 virtual true final false
  inline void WriteEnd(::Newtonsoft::Json::JsonToken token);

  /// @brief Method WritePropertyName addr 0x2539780 size 0xe0 virtual true final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method AddValue addr 0x2539860 size 0x74 virtual false final false
  inline void AddValue(::System::Object* value, ::Newtonsoft::Json::JsonToken token);

  /// @brief Method AddValue addr 0x25398d4 size 0x94 virtual false final false
  inline void AddValue(::Newtonsoft::Json::Linq::JValue* value, ::Newtonsoft::Json::JsonToken token);

  /// @brief Method WriteValue addr 0x2539968 size 0x8 virtual true final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteNull addr 0x2539970 size 0x20 virtual true final false
  inline void WriteNull();

  /// @brief Method WriteUndefined addr 0x2539990 size 0x20 virtual true final false
  inline void WriteUndefined();

  /// @brief Method WriteRaw addr 0x25399b0 size 0x88 virtual true final false
  inline void WriteRaw(::StringW json);

  /// @brief Method WriteComment addr 0x2539a38 size 0x38 virtual true final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteValue addr 0x2539a70 size 0x30 virtual true final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue addr 0x2539aa0 size 0x7c virtual true final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue addr 0x2539b1c size 0x7c virtual true final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue addr 0x2539b98 size 0x7c virtual true final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue addr 0x2539c14 size 0x7c virtual true final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue addr 0x2539c90 size 0x7c virtual true final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue addr 0x2539d0c size 0x7c virtual true final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue addr 0x2539d88 size 0x7c virtual true final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue addr 0x2539e04 size 0x7c virtual true final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue addr 0x2539e80 size 0x7c virtual true final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteValue addr 0x2539efc size 0x98 virtual true final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue addr 0x2539f94 size 0x7c virtual true final false
  inline void WriteValue(uint8_t value);

  /// @brief Method WriteValue addr 0x253a010 size 0x7c virtual true final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue addr 0x253a08c size 0xb4 virtual true final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue addr 0x253a140 size 0xb8 virtual true final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue addr 0x253a1f8 size 0x8c virtual true final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue addr 0x253a284 size 0x30 virtual true final false
  inline void WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteValue addr 0x253a2b4 size 0x7c virtual true final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue addr 0x253a330 size 0x8c virtual true final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue addr 0x253a3bc size 0x30 virtual true final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteToken addr 0x253a3ec size 0x268 virtual true final false
  inline void WriteToken(::Newtonsoft::Json::JsonReader* reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments);

  // Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JTokenWriter(JTokenWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JTokenWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JTokenWriter(JTokenWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JTokenWriter();

public:
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
