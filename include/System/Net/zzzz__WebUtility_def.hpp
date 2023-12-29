#pragma once
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
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
namespace System::IO {
class TextWriter;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7935))
// CS Name: ::WebUtility::UrlDecoder*
class CORDL_TYPE __WebUtility__UrlDecoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bufferSize, offset 0x10, size 0x4
  __declspec(property(get = __get__bufferSize, put = __set__bufferSize)) int32_t _bufferSize;

  /// @brief Field _numChars, offset 0x14, size 0x4
  __declspec(property(get = __get__numChars, put = __set__numChars)) int32_t _numChars;

  /// @brief Field _charBuffer, offset 0x18, size 0x8
  __declspec(property(get = __get__charBuffer, put = __set__charBuffer))::ArrayW<char16_t, ::Array<char16_t>*> _charBuffer;

  /// @brief Field _numBytes, offset 0x20, size 0x4
  __declspec(property(get = __get__numBytes, put = __set__numBytes)) int32_t _numBytes;

  /// @brief Field _byteBuffer, offset 0x28, size 0x8
  __declspec(property(get = __get__byteBuffer, put = __set__byteBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _byteBuffer;

  /// @brief Field _encoding, offset 0x30, size 0x8
  __declspec(property(get = __get__encoding, put = __set__encoding))::System::Text::Encoding* _encoding;

  constexpr int32_t& __get__bufferSize();

  constexpr int32_t const& __get__bufferSize() const;

  constexpr void __set__bufferSize(int32_t value);

  constexpr int32_t& __get__numChars();

  constexpr int32_t const& __get__numChars() const;

  constexpr void __set__numChars(int32_t value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__charBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__charBuffer() const;

  constexpr void __set__charBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get__numBytes();

  constexpr int32_t const& __get__numBytes() const;

  constexpr void __set__numBytes(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__byteBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__byteBuffer() const;

  constexpr void __set__byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Text::Encoding*& __get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get__encoding() const;

  constexpr void __set__encoding(::System::Text::Encoding* value);

  /// @brief Method FlushBytes addr 0x2828478 size 0x60 virtual false final false
  inline void FlushBytes();

  static inline ::System::Net::__WebUtility__UrlDecoder* New_ctor(int32_t bufferSize, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x2828104 size 0x74 virtual false final false
  inline void _ctor(int32_t bufferSize, ::System::Text::Encoding* encoding);

  /// @brief Method AddChar addr 0x2828260 size 0x60 virtual false final false
  inline void AddChar(char16_t ch);

  /// @brief Method AddByte addr 0x28281c8 size 0x98 virtual false final false
  inline void AddByte(uint8_t b);

  /// @brief Method GetString addr 0x28282c0 size 0x88 virtual false final false
  inline ::StringW GetString();

  // Ctor Parameters [CppParam { name: "", ty: "__WebUtility__UrlDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebUtility__UrlDecoder(__WebUtility__UrlDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebUtility__UrlDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebUtility__UrlDecoder(__WebUtility__UrlDecoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebUtility__UrlDecoder();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8151)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(8150))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7936))
// CS Name: ::System.Net::WebUtility*
class CORDL_TYPE WebUtility : public ::System::Object {
public:
  // Declarations
  using UrlDecoder = ::System::Net::__WebUtility__UrlDecoder;

  /// @brief Field _htmlEntityEndingChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__htmlEntityEndingChars, put = setStaticF__htmlEntityEndingChars))::ArrayW<char16_t, ::Array<char16_t>*> _htmlEntityEndingChars;

  /// @brief Field _htmlDecodeConformance, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__htmlDecodeConformance, put = setStaticF__htmlDecodeConformance))::System::Net::Configuration::UnicodeDecodingConformance _htmlDecodeConformance;

  /// @brief Field _htmlEncodeConformance, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__htmlEncodeConformance, put = setStaticF__htmlEncodeConformance))::System::Net::Configuration::UnicodeEncodingConformance _htmlEncodeConformance;

  static inline void setStaticF__htmlEntityEndingChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF__htmlEntityEndingChars();

  static inline void setStaticF__htmlDecodeConformance(::System::Net::Configuration::UnicodeDecodingConformance value);

  static inline ::System::Net::Configuration::UnicodeDecodingConformance getStaticF__htmlDecodeConformance();

  static inline void setStaticF__htmlEncodeConformance(::System::Net::Configuration::UnicodeEncodingConformance value);

  static inline ::System::Net::Configuration::UnicodeEncodingConformance getStaticF__htmlEncodeConformance();

  /// @brief Method HtmlEncode addr 0x282773c size 0x120 virtual false final false
  static inline ::StringW HtmlEncode(::StringW value);

  /// @brief Method HtmlEncode addr 0x28279a4 size 0x3b4 virtual false final false
  static inline void HtmlEncode(::StringW value, ::System::IO::TextWriter* output);

  /// @brief Method IndexOfHtmlEncodingChars addr 0x282785c size 0x148 virtual false final false
  static inline int32_t IndexOfHtmlEncodingChars(::StringW s, int32_t startPos);

  /// @brief Method get_HtmlEncodeConformance addr 0x2827d58 size 0xe4 virtual false final false
  static inline ::System::Net::Configuration::UnicodeEncodingConformance get_HtmlEncodeConformance();

  /// @brief Method UrlDecodeInternal addr 0x2827ef4 size 0x210 virtual false final false
  static inline ::StringW UrlDecodeInternal(::StringW value, ::System::Text::Encoding* encoding);

  /// @brief Method UrlDecode addr 0x2828348 size 0x7c virtual false final false
  static inline ::StringW UrlDecode(::StringW encodedValue);

  /// @brief Method GetNextUnicodeScalarValueFromUtf16Surrogate addr 0x2827e3c size 0xb8 virtual false final false
  static inline int32_t GetNextUnicodeScalarValueFromUtf16Surrogate(ByRef<::cordl_internals::Ptr<char16_t>> pch, ByRef<int32_t> charsRemaining);

  /// @brief Method HexToInt addr 0x2828178 size 0x50 virtual false final false
  static inline int32_t HexToInt(char16_t h);

  // Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebUtility(WebUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebUtility(WebUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebUtility, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::WebUtility);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebUtility*, "System.Net", "WebUtility");
NEED_NO_BOX(::System::Net::__WebUtility__UrlDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__WebUtility__UrlDecoder*, "System.Net", "WebUtility/UrlDecoder");
