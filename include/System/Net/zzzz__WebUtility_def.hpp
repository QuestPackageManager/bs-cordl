#pragma once
// IWYU pragma private; include "System/Net/WebUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebUtility)
namespace System::IO {
class TextWriter;
}
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
namespace System::Net {
class __WebUtility__UrlDecoder;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Net {
class WebUtility;
}
namespace System::Net {
class __WebUtility__UrlDecoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::WebUtility);
MARK_REF_PTR_T(::System::Net::__WebUtility__UrlDecoder);
// Type: ::UrlDecoder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::WebUtility::UrlDecoder*
class CORDL_TYPE __WebUtility__UrlDecoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bufferSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__bufferSize, put = __cordl_internal_set__bufferSize)) int32_t _bufferSize;

  /// @brief Field _byteBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__byteBuffer, put = __cordl_internal_set__byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _charBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__charBuffer, put = __cordl_internal_set__charBuffer))::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _encoding, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _numBytes, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__numBytes, put = __cordl_internal_set__numBytes)) int32_t _numBytes;

  /// @brief Field _numChars, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__numChars, put = __cordl_internal_set__numChars)) int32_t _numChars;

  /// @brief Method AddByte, addr 0x2ff828c, size 0x98, virtual false, abstract: false, final false
  inline void AddByte(uint8_t b);

  /// @brief Method AddChar, addr 0x2ff8324, size 0x60, virtual false, abstract: false, final false
  inline void AddChar(char16_t ch);

  /// @brief Method FlushBytes, addr 0x2ff853c, size 0x60, virtual false, abstract: false, final false
  inline void FlushBytes();

  /// @brief Method GetString, addr 0x2ff8384, size 0x88, virtual false, abstract: false, final false
  inline ::StringW GetString();

  static inline ::System::Net::__WebUtility__UrlDecoder* New_ctor(int32_t bufferSize, ::System::Text::Encoding* encoding);

  constexpr int32_t const& __cordl_internal_get__bufferSize() const;

  constexpr int32_t& __cordl_internal_get__bufferSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__byteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__byteBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__charBuffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__charBuffer();

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get__encoding() const;

  constexpr int32_t const& __cordl_internal_get__numBytes() const;

  constexpr int32_t& __cordl_internal_get__numBytes();

  constexpr int32_t const& __cordl_internal_get__numChars() const;

  constexpr int32_t& __cordl_internal_get__numChars();

  constexpr void __cordl_internal_set__bufferSize(int32_t value);

  constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__numBytes(int32_t value);

  constexpr void __cordl_internal_set__numChars(int32_t value);

  /// @brief Method .ctor, addr 0x2ff81c8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t bufferSize, ::System::Text::Encoding* encoding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebUtility__UrlDecoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WebUtility__UrlDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebUtility__UrlDecoder(__WebUtility__UrlDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebUtility__UrlDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebUtility__UrlDecoder(__WebUtility__UrlDecoder const&) = delete;

  /// @brief Field _bufferSize, offset: 0x10, size: 0x4, def value: None
  int32_t ____bufferSize;

  /// @brief Field _numChars, offset: 0x14, size: 0x4, def value: None
  int32_t ____numChars;

  /// @brief Field _charBuffer, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____charBuffer;

  /// @brief Field _numBytes, offset: 0x20, size: 0x4, def value: None
  int32_t ____numBytes;

  /// @brief Field _byteBuffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____byteBuffer;

  /// @brief Field _encoding, offset: 0x30, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__WebUtility__UrlDecoder, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::__WebUtility__UrlDecoder, ____bufferSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebUtility__UrlDecoder, ____numChars) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebUtility__UrlDecoder, ____charBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebUtility__UrlDecoder, ____numBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebUtility__UrlDecoder, ____byteBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::__WebUtility__UrlDecoder, ____encoding) == 0x30, "Offset mismatch!");

} // namespace System::Net
// Type: System.Net::WebUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::WebUtility*
class CORDL_TYPE WebUtility : public ::System::Object {
public:
  // Declarations
  using UrlDecoder = ::System::Net::__WebUtility__UrlDecoder;

  /// @brief Field _htmlDecodeConformance, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__htmlDecodeConformance, put = setStaticF__htmlDecodeConformance))::System::Net::Configuration::UnicodeDecodingConformance _htmlDecodeConformance;

  /// @brief Field _htmlEncodeConformance, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__htmlEncodeConformance, put = setStaticF__htmlEncodeConformance))::System::Net::Configuration::UnicodeEncodingConformance _htmlEncodeConformance;

  /// @brief Field _htmlEntityEndingChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__htmlEntityEndingChars, put = setStaticF__htmlEntityEndingChars))::ArrayW<char16_t, ::Array<char16_t>*> _htmlEntityEndingChars;

  /// @brief Method GetNextUnicodeScalarValueFromUtf16Surrogate, addr 0x2ff7f00, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t GetNextUnicodeScalarValueFromUtf16Surrogate(ByRef<::cordl_internals::Ptr<char16_t>> pch, ByRef<int32_t> charsRemaining);

  /// @brief Method HexToInt, addr 0x2ff823c, size 0x50, virtual false, abstract: false, final false
  static inline int32_t HexToInt(char16_t h);

  /// @brief Method HtmlEncode, addr 0x2ff7800, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW HtmlEncode(::StringW value);

  /// @brief Method HtmlEncode, addr 0x2ff7a68, size 0x3b4, virtual false, abstract: false, final false
  static inline void HtmlEncode(::StringW value, ::System::IO::TextWriter* output);

  /// @brief Method IndexOfHtmlEncodingChars, addr 0x2ff7920, size 0x148, virtual false, abstract: false, final false
  static inline int32_t IndexOfHtmlEncodingChars(::StringW s, int32_t startPos);

  /// @brief Method UrlDecode, addr 0x2ff840c, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW UrlDecode(::StringW encodedValue);

  /// @brief Method UrlDecodeInternal, addr 0x2ff7fb8, size 0x210, virtual false, abstract: false, final false
  static inline ::StringW UrlDecodeInternal(::StringW value, ::System::Text::Encoding* encoding);

  static inline ::System::Net::Configuration::UnicodeDecodingConformance getStaticF__htmlDecodeConformance();

  static inline ::System::Net::Configuration::UnicodeEncodingConformance getStaticF__htmlEncodeConformance();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF__htmlEntityEndingChars();

  /// @brief Method get_HtmlEncodeConformance, addr 0x2ff7e1c, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance();

  static inline void setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance value);

  static inline void setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance value);

  static inline void setStaticF__htmlEntityEndingChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebUtility(WebUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebUtility(WebUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebUtility, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebUtility);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebUtility*, "System.Net", "WebUtility");
NEED_NO_BOX(::System::Net::__WebUtility__UrlDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebUtility__UrlDecoder*, "System.Net", "WebUtility/UrlDecoder");
