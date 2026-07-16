#pragma once
// IWYU pragma private; include "System/Xml/ValueHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ValueHandleType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueHandle)
namespace System::Text {
class Base64Encoding;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
struct ValueHandleType;
}
namespace System::Xml {
class XmlBufferReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlSigningNodeWriter;
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
class Type;
}
// Forward declare root types
namespace System::Xml {
class ValueHandle;
}
// Write type traits
MARK_REF_T(::System::Xml::ValueHandle*);
DEFINE_IL2CPP_CLASS(::System::Xml::ValueHandle*, "System.Xml", "ValueHandle");
// Dependencies System.Object, System.Xml.ValueHandleType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.ValueHandle
class CORDL_TYPE ValueHandle : public ::System::Object {
public:
  // Declarations
  /// @brief Field base64Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_base64Encoding, put = setStaticF_base64Encoding)) ::System::Text::Base64Encoding* base64Encoding;

  /// @brief Field bufferReader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bufferReader, put = __cordl_internal_set_bufferReader)) ::System::Xml::XmlBufferReader* bufferReader;

  /// @brief Field constStrings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_constStrings, put = setStaticF_constStrings)) ::ArrayW<::StringW> constStrings;

  /// @brief Field length, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Field offset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Xml::ValueHandleType type;

  /// @brief Method Equals2, addr 0x6100e70, size 0x138, virtual false, abstract: false, final false
  inline bool Equals2(::StringW str, bool checkLower);

  /// @brief Method GetBase64, addr 0x6100ba8, size 0x30, virtual false, abstract: false, final false
  inline void GetBase64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count);

  /// @brief Method GetChar, addr 0x6101c10, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetChar();

  /// @brief Method GetCharText, addr 0x6100cac, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW GetCharText();

  /// @brief Method GetCharsText, addr 0x6100bd8, size 0x94, virtual false, abstract: false, final false
  inline ::StringW GetCharsText();

  /// @brief Method GetDecimal, addr 0x610040c, size 0x20, virtual false, abstract: false, final false
  inline ::System::Decimal GetDecimal();

  /// @brief Method GetDictionaryString, addr 0x6100d88, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* GetDictionaryString();

  /// @brief Method GetDouble, addr 0x61000cc, size 0x20, virtual false, abstract: false, final false
  inline double_t GetDouble();

  /// @brief Method GetEscapedCharsText, addr 0x6100c8c, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetEscapedCharsText();

  /// @brief Method GetGuid, addr 0x61007b4, size 0x20, virtual false, abstract: false, final false
  inline ::System::Guid GetGuid();

  /// @brief Method GetInt16, addr 0x60ffc34, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInt16();

  /// @brief Method GetInt32, addr 0x60ffc54, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInt32();

  /// @brief Method GetInt64, addr 0x60ffc74, size 0x20, virtual false, abstract: false, final false
  inline int64_t GetInt64();

  /// @brief Method GetInt8, addr 0x60ff560, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetInt8();

  /// @brief Method GetQNameDictionaryText, addr 0x6100dc8, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetQNameDictionaryText();

  /// @brief Method GetSingle, addr 0x61000ac, size 0x20, virtual false, abstract: false, final false
  inline float_t GetSingle();

  /// @brief Method GetString, addr 0x60ff588, size 0x530, virtual false, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetUInt64, addr 0x60ffc94, size 0x1c, virtual false, abstract: false, final false
  inline uint64_t GetUInt64();

  /// @brief Method GetUnicodeCharsText, addr 0x6100c6c, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetUnicodeCharsText();

  /// @brief Method GetUniqueId, addr 0x61005f4, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::UniqueId* GetUniqueId();

  /// @brief Method IsWhitespace, addr 0x60ff094, size 0x194, virtual false, abstract: false, final false
  inline bool IsWhitespace();

  static inline ::System::Xml::ValueHandle* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method SetCharValue, addr 0x60ff074, size 0x10, virtual false, abstract: false, final false
  inline void SetCharValue(int32_t ch);

  /// @brief Method SetDictionaryValue, addr 0x60ff058, size 0x10, virtual false, abstract: false, final false
  inline void SetDictionaryValue(int32_t key);

  /// @brief Method SetQNameValue, addr 0x60ff084, size 0x10, virtual false, abstract: false, final false
  inline void SetQNameValue(int32_t prefix, int32_t key);

  /// @brief Method SetValue, addr 0x60ff050, size 0x8, virtual false, abstract: false, final false
  inline void SetValue(::System::Xml::ValueHandleType type);

  /// @brief Method SetValue, addr 0x60ff068, size 0xc, virtual false, abstract: false, final false
  inline void SetValue(::System::Xml::ValueHandleType type, int32_t offset, int32_t length);

  /// @brief Method Sign, addr 0x6100fa8, size 0x1fc, virtual false, abstract: false, final false
  inline void Sign(::System::Xml::XmlSigningNodeWriter* writer);

  /// @brief Method ToBoolean, addr 0x60ff454, size 0x10c, virtual false, abstract: false, final false
  inline bool ToBoolean();

  /// @brief Method ToByteArray, addr 0x61007d8, size 0x3d0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t> ToByteArray();

  /// @brief Method ToDateTime, addr 0x610042c, size 0xf8, virtual false, abstract: false, final false
  inline ::System::DateTime ToDateTime();

  /// @brief Method ToDecimal, addr 0x6100254, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Decimal ToDecimal();

  /// @brief Method ToDouble, addr 0x61000ec, size 0x168, virtual false, abstract: false, final false
  inline double_t ToDouble();

  /// @brief Method ToGuid, addr 0x61006e4, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Guid ToGuid();

  /// @brief Method ToInt, addr 0x60ffab8, size 0x17c, virtual false, abstract: false, final false
  inline int32_t ToInt();

  /// @brief Method ToList, addr 0x6100da8, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*> ToList();

  /// @brief Method ToLong, addr 0x60ffcb0, size 0x168, virtual false, abstract: false, final false
  inline int64_t ToLong();

  /// @brief Method ToObject, addr 0x61011a4, size 0x2ac, virtual false, abstract: false, final false
  inline ::System::Object* ToObject();

  /// @brief Method ToSingle, addr 0x60fff2c, size 0x180, virtual false, abstract: false, final false
  inline float_t ToSingle();

  /// @brief Method ToString, addr 0x61007d4, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToTimeSpan, addr 0x6100614, size 0xd0, virtual false, abstract: false, final false
  inline ::System::TimeSpan ToTimeSpan();

  /// @brief Method ToType, addr 0x60ff228, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Type* ToType();

  /// @brief Method ToULong, addr 0x60ffe18, size 0x114, virtual false, abstract: false, final false
  inline uint64_t ToULong();

  /// @brief Method ToUniqueId, addr 0x6100524, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::UniqueId* ToUniqueId();

  /// @brief Method TryGetByteArrayLength, addr 0x6101be8, size 0x28, virtual false, abstract: false, final false
  inline bool TryGetByteArrayLength(::by_ref<int32_t> length);

  /// @brief Method TryGetDictionaryString, addr 0x6101ba8, size 0x40, virtual false, abstract: false, final false
  inline bool TryGetDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*> value);

  /// @brief Method TryReadBase64, addr 0x6101450, size 0x220, virtual false, abstract: false, final false
  inline bool TryReadBase64(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::by_ref<int32_t> actual);

  /// @brief Method TryReadChars, addr 0x6101670, size 0x424, virtual false, abstract: false, final false
  inline bool TryReadChars(::ArrayW<char16_t> chars, int32_t offset, int32_t count, ::by_ref<int32_t> actual);

  /// @brief Method TryReadUnicodeChars, addr 0x6101a94, size 0x114, virtual false, abstract: false, final false
  inline bool TryReadUnicodeChars(::ArrayW<char16_t> chars, int32_t offset, int32_t count, ::by_ref<int32_t> actual);

  constexpr ::System::Xml::XmlBufferReader* const& __cordl_internal_get_bufferReader() const;

  constexpr ::System::Xml::XmlBufferReader*& __cordl_internal_get_bufferReader();

  constexpr int32_t const& __cordl_internal_get_length() const;

  constexpr int32_t& __cordl_internal_get_length();

  constexpr int32_t const& __cordl_internal_get_offset() const;

  constexpr int32_t& __cordl_internal_get_offset();

  constexpr ::System::Xml::ValueHandleType const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::ValueHandleType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader* value);

  constexpr void __cordl_internal_set_length(int32_t value);

  constexpr void __cordl_internal_set_offset(int32_t value);

  constexpr void __cordl_internal_set_type(::System::Xml::ValueHandleType value);

  /// @brief Method .ctor, addr 0x60fef70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  static inline ::System::Text::Base64Encoding* getStaticF_base64Encoding();

  static inline ::ArrayW<::StringW> getStaticF_constStrings();

  /// @brief Method get_Base64Encoding, addr 0x60fef7c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Text::Base64Encoding* get_Base64Encoding();

  static inline void setStaticF_base64Encoding(::System::Text::Base64Encoding* value);

  static inline void setStaticF_constStrings(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValueHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueHandle(ValueHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueHandle(ValueHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16909 };

  /// @brief Field bufferReader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlBufferReader* ___bufferReader;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::ValueHandleType ___type;

  /// @brief Field offset, offset: 0x1c, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field length, offset: 0x20, size: 0x4, def value: None
  int32_t ___length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ValueHandle, ___bufferReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValueHandle, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValueHandle, ___offset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValueHandle, ___length) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Xml::ValueHandle) == 0x28, "Size mismatch!");

} // namespace System::Xml
