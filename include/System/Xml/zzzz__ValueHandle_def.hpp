#pragma once
// IWYU pragma private; include "System/Xml/ValueHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ValueHandleType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::Xml::ValueHandle);
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
  __declspec(property(get = getStaticF_constStrings, put = setStaticF_constStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> constStrings;

  /// @brief Field length, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) int32_t length;

  /// @brief Field offset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Xml::ValueHandleType type;

  /// @brief Method Equals2, addr 0x5ee9fa4, size 0x138, virtual false, abstract: false, final false
  inline bool Equals2(::StringW str, bool checkLower);

  /// @brief Method GetBase64, addr 0x5ee9cdc, size 0x30, virtual false, abstract: false, final false
  inline void GetBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method GetChar, addr 0x5eead44, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetChar();

  /// @brief Method GetCharText, addr 0x5ee9de0, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW GetCharText();

  /// @brief Method GetCharsText, addr 0x5ee9d0c, size 0x94, virtual false, abstract: false, final false
  inline ::StringW GetCharsText();

  /// @brief Method GetDecimal, addr 0x5ee9540, size 0x20, virtual false, abstract: false, final false
  inline ::System::Decimal GetDecimal();

  /// @brief Method GetDictionaryString, addr 0x5ee9ebc, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* GetDictionaryString();

  /// @brief Method GetDouble, addr 0x5ee9200, size 0x20, virtual false, abstract: false, final false
  inline double_t GetDouble();

  /// @brief Method GetEscapedCharsText, addr 0x5ee9dc0, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetEscapedCharsText();

  /// @brief Method GetGuid, addr 0x5ee98e8, size 0x20, virtual false, abstract: false, final false
  inline ::System::Guid GetGuid();

  /// @brief Method GetInt16, addr 0x5ee8d68, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInt16();

  /// @brief Method GetInt32, addr 0x5ee8d88, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetInt32();

  /// @brief Method GetInt64, addr 0x5ee8da8, size 0x20, virtual false, abstract: false, final false
  inline int64_t GetInt64();

  /// @brief Method GetInt8, addr 0x5ee8694, size 0x28, virtual false, abstract: false, final false
  inline int32_t GetInt8();

  /// @brief Method GetQNameDictionaryText, addr 0x5ee9efc, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW GetQNameDictionaryText();

  /// @brief Method GetSingle, addr 0x5ee91e0, size 0x20, virtual false, abstract: false, final false
  inline float_t GetSingle();

  /// @brief Method GetString, addr 0x5ee86bc, size 0x530, virtual false, abstract: false, final false
  inline ::StringW GetString();

  /// @brief Method GetUInt64, addr 0x5ee8dc8, size 0x1c, virtual false, abstract: false, final false
  inline uint64_t GetUInt64();

  /// @brief Method GetUnicodeCharsText, addr 0x5ee9da0, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetUnicodeCharsText();

  /// @brief Method GetUniqueId, addr 0x5ee9728, size 0x20, virtual false, abstract: false, final false
  inline ::System::Xml::UniqueId* GetUniqueId();

  /// @brief Method IsWhitespace, addr 0x5ee81c8, size 0x194, virtual false, abstract: false, final false
  inline bool IsWhitespace();

  static inline ::System::Xml::ValueHandle* New_ctor(::System::Xml::XmlBufferReader* bufferReader);

  /// @brief Method SetCharValue, addr 0x5ee81a8, size 0x10, virtual false, abstract: false, final false
  inline void SetCharValue(int32_t ch);

  /// @brief Method SetDictionaryValue, addr 0x5ee818c, size 0x10, virtual false, abstract: false, final false
  inline void SetDictionaryValue(int32_t key);

  /// @brief Method SetQNameValue, addr 0x5ee81b8, size 0x10, virtual false, abstract: false, final false
  inline void SetQNameValue(int32_t prefix, int32_t key);

  /// @brief Method SetValue, addr 0x5ee8184, size 0x8, virtual false, abstract: false, final false
  inline void SetValue(::System::Xml::ValueHandleType type);

  /// @brief Method SetValue, addr 0x5ee819c, size 0xc, virtual false, abstract: false, final false
  inline void SetValue(::System::Xml::ValueHandleType type, int32_t offset, int32_t length);

  /// @brief Method Sign, addr 0x5eea0dc, size 0x1fc, virtual false, abstract: false, final false
  inline void Sign(::System::Xml::XmlSigningNodeWriter* writer);

  /// @brief Method ToBoolean, addr 0x5ee8588, size 0x10c, virtual false, abstract: false, final false
  inline bool ToBoolean();

  /// @brief Method ToByteArray, addr 0x5ee990c, size 0x3d0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToDateTime, addr 0x5ee9560, size 0xf8, virtual false, abstract: false, final false
  inline ::System::DateTime ToDateTime();

  /// @brief Method ToDecimal, addr 0x5ee9388, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Decimal ToDecimal();

  /// @brief Method ToDouble, addr 0x5ee9220, size 0x168, virtual false, abstract: false, final false
  inline double_t ToDouble();

  /// @brief Method ToGuid, addr 0x5ee9818, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Guid ToGuid();

  /// @brief Method ToInt, addr 0x5ee8bec, size 0x17c, virtual false, abstract: false, final false
  inline int32_t ToInt();

  /// @brief Method ToList, addr 0x5ee9edc, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToList();

  /// @brief Method ToLong, addr 0x5ee8de4, size 0x168, virtual false, abstract: false, final false
  inline int64_t ToLong();

  /// @brief Method ToObject, addr 0x5eea2d8, size 0x2ac, virtual false, abstract: false, final false
  inline ::System::Object* ToObject();

  /// @brief Method ToSingle, addr 0x5ee9060, size 0x180, virtual false, abstract: false, final false
  inline float_t ToSingle();

  /// @brief Method ToString, addr 0x5ee9908, size 0x4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToTimeSpan, addr 0x5ee9748, size 0xd0, virtual false, abstract: false, final false
  inline ::System::TimeSpan ToTimeSpan();

  /// @brief Method ToType, addr 0x5ee835c, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Type* ToType();

  /// @brief Method ToULong, addr 0x5ee8f4c, size 0x114, virtual false, abstract: false, final false
  inline uint64_t ToULong();

  /// @brief Method ToUniqueId, addr 0x5ee9658, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::UniqueId* ToUniqueId();

  /// @brief Method TryGetByteArrayLength, addr 0x5eead1c, size 0x28, virtual false, abstract: false, final false
  inline bool TryGetByteArrayLength(::ByRef<int32_t> length);

  /// @brief Method TryGetDictionaryString, addr 0x5eeacdc, size 0x40, virtual false, abstract: false, final false
  inline bool TryGetDictionaryString(::ByRef<::System::Xml::XmlDictionaryString*> value);

  /// @brief Method TryReadBase64, addr 0x5eea584, size 0x220, virtual false, abstract: false, final false
  inline bool TryReadBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::ByRef<int32_t> actual);

  /// @brief Method TryReadChars, addr 0x5eea7a4, size 0x424, virtual false, abstract: false, final false
  inline bool TryReadChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count, ::ByRef<int32_t> actual);

  /// @brief Method TryReadUnicodeChars, addr 0x5eeabc8, size 0x114, virtual false, abstract: false, final false
  inline bool TryReadUnicodeChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count, ::ByRef<int32_t> actual);

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

  /// @brief Method .ctor, addr 0x5ee80a4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlBufferReader* bufferReader);

  static inline ::System::Text::Base64Encoding* getStaticF_base64Encoding();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_constStrings();

  /// @brief Method get_Base64Encoding, addr 0x5ee80b0, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Text::Base64Encoding* get_Base64Encoding();

  static inline void setStaticF_base64Encoding(::System::Text::Base64Encoding* value);

  static inline void setStaticF_constStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16894 };

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

static_assert(::cordl_internals::size_check_v<::System::Xml::ValueHandle, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::ValueHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValueHandle*, "System.Xml", "ValueHandle");
