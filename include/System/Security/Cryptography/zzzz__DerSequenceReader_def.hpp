#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DerSequenceReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DerSequenceReader)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Security::Cryptography {
struct DerSequenceReader_DerTag;
}
namespace System::Security::Cryptography {
class DerSequenceReader___c;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
struct DerSequenceReader_DerTag;
}
namespace System::Security::Cryptography {
class DerSequenceReader;
}
namespace System::Security::Cryptography {
class DerSequenceReader___c;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::DerSequenceReader_DerTag);
MARK_REF_PTR_T(::System::Security::Cryptography::DerSequenceReader);
MARK_REF_PTR_T(::System::Security::Cryptography::DerSequenceReader___c);
// Dependencies
namespace System::Security::Cryptography {
// Is value type: true
// CS Name: System.Security.Cryptography.DerSequenceReader/DerTag
struct CORDL_TYPE DerSequenceReader_DerTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __DerSequenceReader_DerTag_Unwrapped
  enum struct __DerSequenceReader_DerTag_Unwrapped : uint8_t {
    __E_Boolean = static_cast<uint8_t>(0x1u),
    __E_Integer = static_cast<uint8_t>(0x2u),
    __E_BitString = static_cast<uint8_t>(0x3u),
    __E_OctetString = static_cast<uint8_t>(0x4u),
    __E_Null = static_cast<uint8_t>(0x5u),
    __E_ObjectIdentifier = static_cast<uint8_t>(0x6u),
    __E_UTF8String = static_cast<uint8_t>(0xcu),
    __E_Sequence = static_cast<uint8_t>(0x10u),
    __E_Set = static_cast<uint8_t>(0x11u),
    __E_PrintableString = static_cast<uint8_t>(0x13u),
    __E_T61String = static_cast<uint8_t>(0x14u),
    __E_IA5String = static_cast<uint8_t>(0x16u),
    __E_UTCTime = static_cast<uint8_t>(0x17u),
    __E_GeneralizedTime = static_cast<uint8_t>(0x18u),
    __E_BMPString = static_cast<uint8_t>(0x1eu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DerSequenceReader_DerTag_Unwrapped() const noexcept {
    return static_cast<__DerSequenceReader_DerTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSequenceReader_DerTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr DerSequenceReader_DerTag(uint8_t value__) noexcept;

  /// @brief Field BMPString value: U8(30)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const BMPString;

  /// @brief Field BitString value: U8(3)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const BitString;

  /// @brief Field Boolean value: U8(1)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const Boolean;

  /// @brief Field GeneralizedTime value: U8(24)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const GeneralizedTime;

  /// @brief Field IA5String value: U8(22)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const IA5String;

  /// @brief Field Integer value: U8(2)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const Integer;

  /// @brief Field Null value: U8(5)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const Null;

  /// @brief Field ObjectIdentifier value: U8(6)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const ObjectIdentifier;

  /// @brief Field OctetString value: U8(4)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const OctetString;

  /// @brief Field PrintableString value: U8(19)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const PrintableString;

  /// @brief Field Sequence value: U8(16)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const Sequence;

  /// @brief Field Set value: U8(17)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const Set;

  /// @brief Field T61String value: U8(20)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const T61String;

  /// @brief Field UTCTime value: U8(23)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const UTCTime;

  /// @brief Field UTF8String value: U8(12)
  static ::System::Security::Cryptography::DerSequenceReader_DerTag const UTF8String;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9290 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader_DerTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DerSequenceReader_DerTag, 0x1>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DerSequenceReader/<>c
class CORDL_TYPE DerSequenceReader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Security::Cryptography::DerSequenceReader___c* __9;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__45_0, put = setStaticF___9__45_0)) ::System::Func_1<::System::Text::Encoding*>* __9__45_0;

  /// @brief Field <>9__45_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__45_1, put = setStaticF___9__45_1)) ::System::Func_1<::System::Text::Encoding*>* __9__45_1;

  /// @brief Field <>9__51_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__51_0, put = setStaticF___9__51_0)) ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* __9__51_0;

  static inline ::System::Security::Cryptography::DerSequenceReader___c* New_ctor();

  /// @brief Method <ReadT61String>b__45_0, addr 0x442fa80, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* _ReadT61String_b__45_0();

  /// @brief Method <ReadT61String>b__45_1, addr 0x442fadc, size 0x44, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* _ReadT61String_b__45_1();

  /// @brief Method <ReadTime>b__51_0, addr 0x442fb20, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Globalization::DateTimeFormatInfo* _ReadTime_b__51_0();

  /// @brief Method .ctor, addr 0x442fa78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::DerSequenceReader___c* getStaticF___9();

  static inline ::System::Func_1<::System::Text::Encoding*>* getStaticF___9__45_0();

  static inline ::System::Func_1<::System::Text::Encoding*>* getStaticF___9__45_1();

  static inline ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* getStaticF___9__51_0();

  static inline void setStaticF___9(::System::Security::Cryptography::DerSequenceReader___c* value);

  static inline void setStaticF___9__45_0(::System::Func_1<::System::Text::Encoding*>* value);

  static inline void setStaticF___9__45_1(::System::Func_1<::System::Text::Encoding*>* value);

  static inline void setStaticF___9__51_0(::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSequenceReader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSequenceReader___c(DerSequenceReader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSequenceReader___c(DerSequenceReader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9291 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DerSequenceReader___c, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DerSequenceReader
class CORDL_TYPE DerSequenceReader : public ::System::Object {
public:
  // Declarations
  using DerTag = ::System::Security::Cryptography::DerSequenceReader_DerTag;

  using __c = ::System::Security::Cryptography::DerSequenceReader___c;

  __declspec(property(put = set_ContentLength)) int32_t ContentLength;

  __declspec(property(get = get_HasData)) bool HasData;

  /// @brief Field <ContentLength>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__ContentLength_k__BackingField, put = __cordl_internal_set__ContentLength_k__BackingField)) int32_t _ContentLength_k__BackingField;

  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _end, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__end, put = __cordl_internal_set__end)) int32_t _end;

  /// @brief Field _position, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) int32_t _position;

  /// @brief Field s_latin1Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_latin1Encoding, put = setStaticF_s_latin1Encoding)) ::System::Text::Encoding* s_latin1Encoding;

  /// @brief Field s_utf8EncodingWithExceptionFallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_utf8EncodingWithExceptionFallback, put = setStaticF_s_utf8EncodingWithExceptionFallback)) ::System::Text::Encoding* s_utf8EncodingWithExceptionFallback;

  /// @brief Field s_validityDateTimeFormatInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_validityDateTimeFormatInfo, put = setStaticF_s_validityDateTimeFormatInfo)) ::System::Globalization::DateTimeFormatInfo* s_validityDateTimeFormatInfo;

  /// @brief Method CheckTag, addr 0x442f1c8, size 0x94, virtual false, abstract: false, final false
  static inline void CheckTag(::System::Security::Cryptography::DerSequenceReader_DerTag expected, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t position);

  /// @brief Method EatLength, addr 0x442e688, size 0x3c, virtual false, abstract: false, final false
  inline int32_t EatLength();

  /// @brief Method EatTag, addr 0x442e608, size 0x80, virtual false, abstract: false, final false
  inline void EatTag(::System::Security::Cryptography::DerSequenceReader_DerTag expected);

  static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::System::Security::Cryptography::DerSequenceReader_DerTag tagToEat, ::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                              int32_t offset, int32_t length);

  /// @brief Method PeekTag, addr 0x442e6d4, size 0x94, virtual false, abstract: false, final false
  inline uint8_t PeekTag();

  /// @brief Method ReadBMPString, addr 0x442f99c, size 0x80, virtual false, abstract: false, final false
  inline ::StringW ReadBMPString();

  /// @brief Method ReadBitString, addr 0x442ebe0, size 0x144, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBitString();

  /// @brief Method ReadBoolean, addr 0x442e994, size 0xc8, virtual false, abstract: false, final false
  inline bool ReadBoolean();

  /// @brief Method ReadCollectionWithTag, addr 0x442f104, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::DerSequenceReader* ReadCollectionWithTag(::System::Security::Cryptography::DerSequenceReader_DerTag expected);

  /// @brief Method ReadContentAsBytes, addr 0x442eb2c, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadContentAsBytes();

  /// @brief Method ReadGeneralizedTime, addr 0x442f710, size 0x4c, virtual false, abstract: false, final false
  inline ::System::DateTime ReadGeneralizedTime();

  /// @brief Method ReadIA5String, addr 0x442f2ec, size 0x80, virtual false, abstract: false, final false
  inline ::StringW ReadIA5String();

  /// @brief Method ReadInteger, addr 0x442ea5c, size 0xb4, virtual false, abstract: false, final false
  inline int32_t ReadInteger();

  /// @brief Method ReadIntegerBytes, addr 0x442eb10, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadIntegerBytes();

  /// @brief Method ReadNextEncodedValue, addr 0x442e7b8, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadNextEncodedValue();

  /// @brief Method ReadOctetString, addr 0x442ed24, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOctetString();

  /// @brief Method ReadOidAsString, addr 0x442ed40, size 0x2c8, virtual false, abstract: false, final false
  inline ::StringW ReadOidAsString();

  /// @brief Method ReadPrintableString, addr 0x442f26c, size 0x80, virtual false, abstract: false, final false
  inline ::StringW ReadPrintableString();

  /// @brief Method ReadSequence, addr 0x442f25c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::DerSequenceReader* ReadSequence();

  /// @brief Method ReadSet, addr 0x442f264, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::DerSequenceReader* ReadSet();

  /// @brief Method ReadT61String, addr 0x442f36c, size 0x2d8, virtual false, abstract: false, final false
  inline ::StringW ReadT61String();

  /// @brief Method ReadTime, addr 0x442f75c, size 0x240, virtual false, abstract: false, final false
  inline ::System::DateTime ReadTime(::System::Security::Cryptography::DerSequenceReader_DerTag timeTag, ::StringW formatString);

  /// @brief Method ReadUtcTime, addr 0x442f6c4, size 0x4c, virtual false, abstract: false, final false
  inline ::System::DateTime ReadUtcTime();

  /// @brief Method ReadUtf8String, addr 0x442f008, size 0x80, virtual false, abstract: false, final false
  inline ::StringW ReadUtf8String();

  /// @brief Method ReadX509Date, addr 0x442f644, size 0x80, virtual false, abstract: false, final false
  inline ::System::DateTime ReadX509Date();

  /// @brief Method ScanContentLength, addr 0x442e870, size 0x124, virtual false, abstract: false, final false
  static inline int32_t ScanContentLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t end, ::ByRef<int32_t> bytesConsumed);

  /// @brief Method SkipValue, addr 0x442e768, size 0x50, virtual false, abstract: false, final false
  inline void SkipValue();

  /// @brief Method TrimTrailingNulls, addr 0x442f088, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW TrimTrailingNulls(::StringW value);

  constexpr int32_t const& __cordl_internal_get__ContentLength_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ContentLength_k__BackingField();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__data();

  constexpr int32_t const& __cordl_internal_get__end() const;

  constexpr int32_t& __cordl_internal_get__end();

  constexpr int32_t const& __cordl_internal_get__position() const;

  constexpr int32_t& __cordl_internal_get__position();

  constexpr void __cordl_internal_set__ContentLength_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__end(int32_t value);

  constexpr void __cordl_internal_set__position(int32_t value);

  /// @brief Method .ctor, addr 0x442e4e0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x442e504, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method .ctor, addr 0x442e518, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::DerSequenceReader_DerTag tagToEat, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  static inline ::System::Text::Encoding* getStaticF_s_latin1Encoding();

  static inline ::System::Text::Encoding* getStaticF_s_utf8EncodingWithExceptionFallback();

  static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_s_validityDateTimeFormatInfo();

  /// @brief Method get_HasData, addr 0x442e6c4, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasData();

  static inline void setStaticF_s_latin1Encoding(::System::Text::Encoding* value);

  static inline void setStaticF_s_utf8EncodingWithExceptionFallback(::System::Text::Encoding* value);

  static inline void setStaticF_s_validityDateTimeFormatInfo(::System::Globalization::DateTimeFormatInfo* value);

  /// @brief Method set_ContentLength, addr 0x442e4d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentLength(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSequenceReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSequenceReader(DerSequenceReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSequenceReader(DerSequenceReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9292 };

  /// @brief Field _data, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____data;

  /// @brief Field _end, offset: 0x18, size: 0x4, def value: None
  int32_t ____end;

  /// @brief Field _position, offset: 0x1c, size: 0x4, def value: None
  int32_t ____position;

  /// @brief Field <ContentLength>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____ContentLength_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____end) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____position) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DerSequenceReader, ____ContentLength_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DerSequenceReader, 0x28>, "Size mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DerSequenceReader_DerTag, "System.Security.Cryptography", "DerSequenceReader/DerTag");
NEED_NO_BOX(::System::Security::Cryptography::DerSequenceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DerSequenceReader*, "System.Security.Cryptography", "DerSequenceReader");
NEED_NO_BOX(::System::Security::Cryptography::DerSequenceReader___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DerSequenceReader___c*, "System.Security.Cryptography", "DerSequenceReader/<>c");
