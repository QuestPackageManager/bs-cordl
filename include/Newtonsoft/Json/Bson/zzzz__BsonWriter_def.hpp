#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BsonWriter)
namespace Newtonsoft::Json::Bson {
class BsonBinaryWriter;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
class Stream;
}
namespace System {
struct DateTimeKind;
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
namespace Newtonsoft::Json::Bson {
class BsonWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonWriter);
// Type: Newtonsoft.Json.Bson::BsonWriter
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Bson::BsonWriter*
class CORDL_TYPE BsonWriter : public ::Newtonsoft::Json::JsonWriter {
public:
  // Declarations
  __declspec(property(get = get_DateTimeKindHandling, put = set_DateTimeKindHandling))::System::DateTimeKind DateTimeKindHandling;

  /// @brief Field _parent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__parent, put = __cordl_internal_set__parent))::Newtonsoft::Json::Bson::BsonToken* _parent;

  /// @brief Field _propertyName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName))::StringW _propertyName;

  /// @brief Field _root, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__root, put = __cordl_internal_set__root))::Newtonsoft::Json::Bson::BsonToken* _root;

  /// @brief Field _writer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__writer, put = __cordl_internal_set__writer))::Newtonsoft::Json::Bson::BsonBinaryWriter* _writer;

  /// @brief Method AddParent, addr 0x299e9b0, size 0x24, virtual false, abstract: false, final false
  inline void AddParent(::Newtonsoft::Json::Bson::BsonToken* container);

  /// @brief Method AddToken, addr 0x299eab4, size 0x1ec, virtual false, abstract: false, final false
  inline void AddToken(::Newtonsoft::Json::Bson::BsonToken* token);

  /// @brief Method AddValue, addr 0x299eca0, size 0x7c, virtual false, abstract: false, final false
  inline void AddValue(::System::Object* value, ::Newtonsoft::Json::Bson::BsonType type);

  /// @brief Method Close, addr 0x299ea70, size 0x44, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x299e774, size 0x28, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Newtonsoft::Json::Bson::BsonWriter* New_ctor(::System::IO::Stream* stream);

  static inline ::Newtonsoft::Json::Bson::BsonWriter* New_ctor(::System::IO::BinaryWriter* writer);

  /// @brief Method RemoveParent, addr 0x299e80c, size 0x20, virtual false, abstract: false, final false
  inline void RemoveParent();

  /// @brief Method WriteComment, addr 0x299e82c, size 0x44, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteEnd, addr 0x299e79c, size 0x70, virtual true, abstract: false, final false
  inline void WriteEnd(::Newtonsoft::Json::JsonToken token);

  /// @brief Method WriteNull, addr 0x299ee14, size 0x6c, virtual true, abstract: false, final false
  inline void WriteNull();

  /// @brief Method WriteObjectId, addr 0x299fb88, size 0xcc, virtual false, abstract: false, final false
  inline void WriteObjectId(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WritePropertyName, addr 0x299ea48, size 0x28, virtual true, abstract: false, final false
  inline void WritePropertyName(::StringW name);

  /// @brief Method WriteRaw, addr 0x299e8b4, size 0x44, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW json);

  /// @brief Method WriteRawValue, addr 0x299e8f8, size 0x44, virtual true, abstract: false, final false
  inline void WriteRawValue(::StringW json);

  /// @brief Method WriteRegex, addr 0x299fc54, size 0xb8, virtual false, abstract: false, final false
  inline void WriteRegex(::StringW pattern, ::StringW options);

  /// @brief Method WriteStartArray, addr 0x299e93c, size 0x74, virtual true, abstract: false, final false
  inline void WriteStartArray();

  /// @brief Method WriteStartConstructor, addr 0x299e870, size 0x44, virtual true, abstract: false, final false
  inline void WriteStartConstructor(::StringW name);

  /// @brief Method WriteStartObject, addr 0x299e9d4, size 0x74, virtual true, abstract: false, final false
  inline void WriteStartObject();

  /// @brief Method WriteUndefined, addr 0x299ee80, size 0x6c, virtual true, abstract: false, final false
  inline void WriteUndefined();

  /// @brief Method WriteValue, addr 0x299f874, size 0xa4, virtual true, abstract: false, final false
  inline void WriteValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method WriteValue, addr 0x299eeec, size 0xc8, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x299f730, size 0xb8, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x299f7e8, size 0x8c, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTimeOffset value);

  /// @brief Method WriteValue, addr 0x299f67c, size 0xb4, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x299f918, size 0xb8, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x299ed1c, size 0xf8, virtual true, abstract: false, final false
  inline void WriteValue(::System::Object* value);

  /// @brief Method WriteValue, addr 0x299f9d0, size 0xb0, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue, addr 0x299fa80, size 0x108, virtual true, abstract: false, final false
  inline void WriteValue(::System::Uri* value);

  /// @brief Method WriteValue, addr 0x299f31c, size 0x90, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x299f4a4, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(char16_t value);

  /// @brief Method WriteValue, addr 0x299f2a0, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x299f224, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x299f3ac, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(int16_t value);

  /// @brief Method WriteValue, addr 0x299efb4, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x299f0ec, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteValue, addr 0x299f600, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(int8_t value);

  /// @brief Method WriteValue, addr 0x299f428, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(uint16_t value);

  /// @brief Method WriteValue, addr 0x299f030, size 0xbc, virtual true, abstract: false, final false
  inline void WriteValue(uint32_t value);

  /// @brief Method WriteValue, addr 0x299f168, size 0xbc, virtual true, abstract: false, final false
  inline void WriteValue(uint64_t value);

  /// @brief Method WriteValue, addr 0x299f584, size 0x7c, virtual true, abstract: false, final false
  inline void WriteValue(uint8_t value);

  constexpr ::Newtonsoft::Json::Bson::BsonToken*& __cordl_internal_get__parent();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonToken*> const& __cordl_internal_get__parent() const;

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr ::Newtonsoft::Json::Bson::BsonToken*& __cordl_internal_get__root();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonToken*> const& __cordl_internal_get__root() const;

  constexpr ::Newtonsoft::Json::Bson::BsonBinaryWriter*& __cordl_internal_get__writer();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonBinaryWriter*> const& __cordl_internal_get__writer() const;

  constexpr void __cordl_internal_set__parent(::Newtonsoft::Json::Bson::BsonToken* value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  constexpr void __cordl_internal_set__root(::Newtonsoft::Json::Bson::BsonToken* value);

  constexpr void __cordl_internal_set__writer(::Newtonsoft::Json::Bson::BsonBinaryWriter* value);

  /// @brief Method .ctor, addr 0x299e5ac, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream);

  /// @brief Method .ctor, addr 0x299e6a8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::BinaryWriter* writer);

  /// @brief Method get_DateTimeKindHandling, addr 0x299e574, size 0x1c, virtual false, abstract: false, final false
  inline ::System::DateTimeKind get_DateTimeKindHandling();

  /// @brief Method set_DateTimeKindHandling, addr 0x299e590, size 0x1c, virtual false, abstract: false, final false
  inline void set_DateTimeKindHandling(::System::DateTimeKind value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonWriter(BsonWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonWriter(BsonWriter const&) = delete;

  /// @brief Field _writer, offset: 0x60, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonBinaryWriter* ____writer;

  /// @brief Field _root, offset: 0x68, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonToken* ____root;

  /// @brief Field _parent, offset: 0x70, size: 0x8, def value: None
  ::Newtonsoft::Json::Bson::BsonToken* ____parent;

  /// @brief Field _propertyName, offset: 0x78, size: 0x8, def value: None
  ::StringW ____propertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonWriter, 0x80>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonWriter, ____writer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonWriter, ____root) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonWriter, ____parent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonWriter, ____propertyName) == 0x78, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonWriter*, "Newtonsoft.Json.Bson", "BsonWriter");
