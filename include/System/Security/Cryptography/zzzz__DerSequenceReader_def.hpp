#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DerSequenceReader)
namespace System {
struct DateTime;
}
namespace System::Text {
class Encoding;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Security::Cryptography {
struct __DerSequenceReader__DerTag;
}
namespace System::Security::Cryptography {
class __DerSequenceReader____c;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
struct __DerSequenceReader__DerTag;
}
namespace System::Security::Cryptography {
class DerSequenceReader;
}
namespace System::Security::Cryptography {
class __DerSequenceReader____c;
}
// Write type traits
MARK_VAL_T(::System::Security::Cryptography::__DerSequenceReader__DerTag);
MARK_REF_PTR_T(::System::Security::Cryptography::DerSequenceReader);
MARK_REF_PTR_T(::System::Security::Cryptography::__DerSequenceReader____c);
// Type: ::DerTag
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8969))
// CS Name: ::DerSequenceReader::DerTag
struct CORDL_TYPE __DerSequenceReader__DerTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____DerSequenceReader__DerTag_Unwrapped
  enum struct ____DerSequenceReader__DerTag_Unwrapped : uint8_t {
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
  constexpr operator ____DerSequenceReader__DerTag_Unwrapped() const noexcept {
    return static_cast<____DerSequenceReader__DerTag_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __DerSequenceReader__DerTag(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DerSequenceReader__DerTag();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Boolean value: static_cast<uint8_t>(0x1u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const Boolean;

  /// @brief Field Integer value: static_cast<uint8_t>(0x2u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const Integer;

  /// @brief Field BitString value: static_cast<uint8_t>(0x3u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const BitString;

  /// @brief Field OctetString value: static_cast<uint8_t>(0x4u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const OctetString;

  /// @brief Field Null value: static_cast<uint8_t>(0x5u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const Null;

  /// @brief Field ObjectIdentifier value: static_cast<uint8_t>(0x6u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const ObjectIdentifier;

  /// @brief Field UTF8String value: static_cast<uint8_t>(0xcu)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const UTF8String;

  /// @brief Field Sequence value: static_cast<uint8_t>(0x10u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const Sequence;

  /// @brief Field Set value: static_cast<uint8_t>(0x11u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const Set;

  /// @brief Field PrintableString value: static_cast<uint8_t>(0x13u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const PrintableString;

  /// @brief Field T61String value: static_cast<uint8_t>(0x14u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const T61String;

  /// @brief Field IA5String value: static_cast<uint8_t>(0x16u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const IA5String;

  /// @brief Field UTCTime value: static_cast<uint8_t>(0x17u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const UTCTime;

  /// @brief Field GeneralizedTime value: static_cast<uint8_t>(0x18u)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const GeneralizedTime;

  /// @brief Field BMPString value: static_cast<uint8_t>(0x1eu)
  static ::System::Security::Cryptography::__DerSequenceReader__DerTag const BMPString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::__DerSequenceReader__DerTag, 0x1>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8970))
// CS Name: ::DerSequenceReader::<>c*
class CORDL_TYPE __DerSequenceReader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Security::Cryptography::__DerSequenceReader____c* __9;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_0, put = setStaticF___9__45_0))::System::Func_1<::System::Text::Encoding*>* __9__45_0;

  /// @brief Field <>9__45_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__45_1, put = setStaticF___9__45_1))::System::Func_1<::System::Text::Encoding*>* __9__45_1;

  /// @brief Field <>9__51_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__51_0, put = setStaticF___9__51_0))::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* __9__51_0;

  static inline void setStaticF___9(::System::Security::Cryptography::__DerSequenceReader____c* value);

  static inline ::System::Security::Cryptography::__DerSequenceReader____c* getStaticF___9();

  static inline void setStaticF___9__45_0(::System::Func_1<::System::Text::Encoding*>* value);

  static inline ::System::Func_1<::System::Text::Encoding*>* getStaticF___9__45_0();

  static inline void setStaticF___9__45_1(::System::Func_1<::System::Text::Encoding*>* value);

  static inline ::System::Func_1<::System::Text::Encoding*>* getStaticF___9__45_1();

  static inline void setStaticF___9__51_0(::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* value);

  static inline ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* getStaticF___9__51_0();

  static inline ::System::Security::Cryptography::__DerSequenceReader____c* New_ctor();

  /// @brief Method .ctor addr 0x29759c4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ReadT61String>b__45_0 addr 0x29759cc size 0x64 virtual false final false
  inline ::System::Text::Encoding* _ReadT61String_b__45_0();

  /// @brief Method <ReadT61String>b__45_1 addr 0x2975a30 size 0x44 virtual false final false
  inline ::System::Text::Encoding* _ReadT61String_b__45_1();

  /// @brief Method <ReadTime>b__51_0 addr 0x2975a74 size 0xcc virtual false final false
  inline ::System::Globalization::DateTimeFormatInfo* _ReadTime_b__51_0();

  // Ctor Parameters [CppParam { name: "", ty: "__DerSequenceReader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DerSequenceReader____c(__DerSequenceReader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DerSequenceReader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DerSequenceReader____c(__DerSequenceReader____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DerSequenceReader____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::__DerSequenceReader____c, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
// Type: System.Security.Cryptography::DerSequenceReader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8971))
// CS Name: ::System.Security.Cryptography::DerSequenceReader*
class CORDL_TYPE DerSequenceReader : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Security::Cryptography::__DerSequenceReader____c;

  using DerTag = ::System::Security::Cryptography::__DerSequenceReader__DerTag;

  /// @brief Field _data, offset 0x10, size 0x8
  __declspec(property(get = __get__data, put = __set__data))::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _end, offset 0x18, size 0x4
  __declspec(property(get = __get__end, put = __set__end)) int32_t _end;

  /// @brief Field _position, offset 0x1c, size 0x4
  __declspec(property(get = __get__position, put = __set__position)) int32_t _position;

  /// @brief Field <ContentLength>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__ContentLength_k__BackingField, put = __set__ContentLength_k__BackingField)) int32_t _ContentLength_k__BackingField;

  /// @brief Field s_validityDateTimeFormatInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_validityDateTimeFormatInfo, put = setStaticF_s_validityDateTimeFormatInfo))::System::Globalization::DateTimeFormatInfo* s_validityDateTimeFormatInfo;

  /// @brief Field s_utf8EncodingWithExceptionFallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_utf8EncodingWithExceptionFallback, put = setStaticF_s_utf8EncodingWithExceptionFallback))::System::Text::Encoding* s_utf8EncodingWithExceptionFallback;

  /// @brief Field s_latin1Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_latin1Encoding, put = setStaticF_s_latin1Encoding))::System::Text::Encoding* s_latin1Encoding;

  __declspec(property(put = set_ContentLength)) int32_t ContentLength;

  __declspec(property(get = get_HasData)) bool HasData;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__data();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__data() const;

  constexpr void __set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get__end();

  constexpr int32_t const& __get__end() const;

  constexpr void __set__end(int32_t value);

  constexpr int32_t& __get__position();

  constexpr int32_t const& __get__position() const;

  constexpr void __set__position(int32_t value);

  constexpr int32_t& __get__ContentLength_k__BackingField();

  constexpr int32_t const& __get__ContentLength_k__BackingField() const;

  constexpr void __set__ContentLength_k__BackingField(int32_t value);

  static inline void setStaticF_s_validityDateTimeFormatInfo(::System::Globalization::DateTimeFormatInfo* value);

  static inline ::System::Globalization::DateTimeFormatInfo* getStaticF_s_validityDateTimeFormatInfo();

  static inline void setStaticF_s_utf8EncodingWithExceptionFallback(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_s_utf8EncodingWithExceptionFallback();

  static inline void setStaticF_s_latin1Encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_s_latin1Encoding();

  /// @brief Method set_ContentLength addr 0x2974404 size 0x8 virtual false final false
  inline void set_ContentLength(int32_t value);

  static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x297440c size 0x24 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method .ctor addr 0x2974430 size 0x14 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  static inline ::System::Security::Cryptography::DerSequenceReader* New_ctor(::System::Security::Cryptography::__DerSequenceReader__DerTag tagToEat, ::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                              int32_t offset, int32_t length);

  /// @brief Method .ctor addr 0x2974444 size 0xf4 virtual false final false
  inline void _ctor(::System::Security::Cryptography::__DerSequenceReader__DerTag tagToEat, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t length);

  /// @brief Method get_HasData addr 0x29745f4 size 0x10 virtual false final false
  inline bool get_HasData();

  /// @brief Method PeekTag addr 0x2974604 size 0x98 virtual false final false
  inline uint8_t PeekTag();

  /// @brief Method SkipValue addr 0x297469c size 0x50 virtual false final false
  inline void SkipValue();

  /// @brief Method ReadNextEncodedValue addr 0x29746ec size 0xb8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadNextEncodedValue();

  /// @brief Method ReadBoolean addr 0x29748c4 size 0xcc virtual false final false
  inline bool ReadBoolean();

  /// @brief Method ReadInteger addr 0x2974990 size 0xb4 virtual false final false
  inline int32_t ReadInteger();

  /// @brief Method ReadIntegerBytes addr 0x2974a44 size 0x1c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadIntegerBytes();

  /// @brief Method ReadBitString addr 0x2974b14 size 0x148 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBitString();

  /// @brief Method ReadOctetString addr 0x2974c5c size 0x1c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadOctetString();

  /// @brief Method ReadOidAsString addr 0x2974c78 size 0x2bc virtual false final false
  inline ::StringW ReadOidAsString();

  /// @brief Method ReadUtf8String addr 0x2974f34 size 0x80 virtual false final false
  inline ::StringW ReadUtf8String();

  /// @brief Method ReadCollectionWithTag addr 0x297502c size 0xd8 virtual false final false
  inline ::System::Security::Cryptography::DerSequenceReader* ReadCollectionWithTag(::System::Security::Cryptography::__DerSequenceReader__DerTag expected);

  /// @brief Method ReadSequence addr 0x297519c size 0x8 virtual false final false
  inline ::System::Security::Cryptography::DerSequenceReader* ReadSequence();

  /// @brief Method ReadSet addr 0x29751a4 size 0x8 virtual false final false
  inline ::System::Security::Cryptography::DerSequenceReader* ReadSet();

  /// @brief Method ReadPrintableString addr 0x29751ac size 0x80 virtual false final false
  inline ::StringW ReadPrintableString();

  /// @brief Method ReadIA5String addr 0x297522c size 0x80 virtual false final false
  inline ::StringW ReadIA5String();

  /// @brief Method ReadT61String addr 0x29752ac size 0x2d8 virtual false final false
  inline ::StringW ReadT61String();

  /// @brief Method ReadX509Date addr 0x2975584 size 0x84 virtual false final false
  inline ::System::DateTime ReadX509Date();

  /// @brief Method ReadUtcTime addr 0x2975608 size 0x4c virtual false final false
  inline ::System::DateTime ReadUtcTime();

  /// @brief Method ReadGeneralizedTime addr 0x2975654 size 0x4c virtual false final false
  inline ::System::DateTime ReadGeneralizedTime();

  /// @brief Method ReadBMPString addr 0x29758e0 size 0x80 virtual false final false
  inline ::StringW ReadBMPString();

  /// @brief Method TrimTrailingNulls addr 0x2974fb4 size 0x78 virtual false final false
  static inline ::StringW TrimTrailingNulls(::StringW value);

  /// @brief Method ReadTime addr 0x29756a0 size 0x240 virtual false final false
  inline ::System::DateTime ReadTime(::System::Security::Cryptography::__DerSequenceReader__DerTag timeTag, ::StringW formatString);

  /// @brief Method ReadContentAsBytes addr 0x2974a60 size 0xb4 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadContentAsBytes();

  /// @brief Method EatTag addr 0x2974538 size 0x80 virtual false final false
  inline void EatTag(::System::Security::Cryptography::__DerSequenceReader__DerTag expected);

  /// @brief Method CheckTag addr 0x2975104 size 0x98 virtual false final false
  static inline void CheckTag(::System::Security::Cryptography::__DerSequenceReader__DerTag expected, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t position);

  /// @brief Method EatLength addr 0x29745b8 size 0x3c virtual false final false
  inline int32_t EatLength();

  /// @brief Method ScanContentLength addr 0x29747a4 size 0x120 virtual false final false
  static inline int32_t ScanContentLength(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t end, ByRef<int32_t> bytesConsumed);

  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSequenceReader(DerSequenceReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSequenceReader(DerSequenceReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSequenceReader();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DerSequenceReader, 0x28>, "Size mismatch!");

} // namespace System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::__DerSequenceReader__DerTag, "System.Security.Cryptography", "DerSequenceReader/DerTag");
NEED_NO_BOX(::System::Security::Cryptography::DerSequenceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DerSequenceReader*, "System.Security.Cryptography", "DerSequenceReader");
NEED_NO_BOX(::System::Security::Cryptography::__DerSequenceReader____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::__DerSequenceReader____c*, "System.Security.Cryptography", "DerSequenceReader/<>c");
