#pragma once
// IWYU pragma private; include "System/Text/UTF8Encoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF8Encoding)
namespace GlobalNamespace {
class UTF8Encoding_UTF8EncodingSealed;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class UTF8Encoding_UTF8Decoder;
}
namespace System::Text {
class UTF8Encoding_UTF8Encoder;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
class UTF8Encoding;
}
namespace System::Text {
class UTF8Encoding_UTF8Decoder;
}
namespace System::Text {
class UTF8Encoding_UTF8Encoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::UTF8Encoding);
MARK_REF_PTR_T(::System::Text::UTF8Encoding_UTF8Decoder);
MARK_REF_PTR_T(::System::Text::UTF8Encoding_UTF8Encoder);
// Dependencies System.Text.EncoderNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF8Encoding/UTF8Encoder
class CORDL_TYPE UTF8Encoding_UTF8Encoder : public ::System::Text::EncoderNLS {
public:
// Declarations
 __declspec(property(get=get_HasState)) bool  HasState;

/// @brief Field surrogateChar, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_surrogateChar, put=__cordl_internal_set_surrogateChar)) int32_t  surrogateChar;

static inline ::System::Text::UTF8Encoding_UTF8Encoder* New_ctor(::System::Text::UTF8Encoding*  encoding) ;

/// @brief Method Reset, addr 0x59a793c, size 0x20, virtual true, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_surrogateChar() const;

constexpr int32_t& __cordl_internal_get_surrogateChar() ;

constexpr void __cordl_internal_set_surrogateChar(int32_t  value) ;

/// @brief Method .ctor, addr 0x59a7914, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Text::UTF8Encoding*  encoding) ;

/// @brief Method get_HasState, addr 0x59a795c, size 0x10, virtual true, abstract: false, final false
inline bool get_HasState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF8Encoding_UTF8Encoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding_UTF8Encoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF8Encoding_UTF8Encoder(UTF8Encoding_UTF8Encoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding_UTF8Encoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF8Encoding_UTF8Encoder(UTF8Encoding_UTF8Encoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2882};

/// @brief Field surrogateChar, offset: 0x38, size: 0x4, def value: None
 int32_t  ___surrogateChar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF8Encoding_UTF8Encoder, ___surrogateChar) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::UTF8Encoding_UTF8Encoder, 0x40>, "Size mismatch!");

} // namespace end def System::Text
// Dependencies System.Text.DecoderNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF8Encoding/UTF8Decoder
class CORDL_TYPE UTF8Encoding_UTF8Decoder : public ::System::Text::DecoderNLS {
public:
// Declarations
 __declspec(property(get=get_HasState)) bool  HasState;

/// @brief Field bits, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_bits, put=__cordl_internal_set_bits)) int32_t  bits;

static inline ::System::Text::UTF8Encoding_UTF8Decoder* New_ctor(::System::Text::UTF8Encoding*  encoding) ;

/// @brief Method Reset, addr 0x59a7994, size 0x20, virtual true, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_bits() const;

constexpr int32_t& __cordl_internal_get_bits() ;

constexpr void __cordl_internal_set_bits(int32_t  value) ;

/// @brief Method .ctor, addr 0x59a796c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Text::UTF8Encoding*  encoding) ;

/// @brief Method get_HasState, addr 0x59a79b4, size 0x10, virtual true, abstract: false, final false
inline bool get_HasState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF8Encoding_UTF8Decoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding_UTF8Decoder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF8Encoding_UTF8Decoder(UTF8Encoding_UTF8Decoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding_UTF8Decoder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF8Encoding_UTF8Decoder(UTF8Encoding_UTF8Decoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2883};

/// @brief Field bits, offset: 0x30, size: 0x4, def value: None
 int32_t  ___bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF8Encoding_UTF8Decoder, ___bits) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::UTF8Encoding_UTF8Decoder, 0x38>, "Size mismatch!");

} // namespace end def System::Text
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF8Encoding
class CORDL_TYPE UTF8Encoding : public ::System::Text::Encoding {
public:
// Declarations
using UTF8EncodingSealed = ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed;

using UTF8Decoder = ::System::Text::UTF8Encoding_UTF8Decoder;

using UTF8Encoder = ::System::Text::UTF8Encoding_UTF8Encoder;

 __declspec(property(get=get_Preamble)) ::System::ReadOnlySpan_1<uint8_t>  Preamble;

/// @brief Field _emitUTF8Identifier, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitUTF8Identifier, put=__cordl_internal_set__emitUTF8Identifier)) bool  _emitUTF8Identifier;

/// @brief Field _isThrowException, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__isThrowException, put=__cordl_internal_set__isThrowException)) bool  _isThrowException;

/// @brief Field s_default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_default, put=setStaticF_s_default)) ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*  s_default;

/// @brief Field s_preamble, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_preamble, put=setStaticF_s_preamble)) ::ArrayW<uint8_t,::Array<uint8_t>*>  s_preamble;

/// @brief Method Equals, addr 0x59a7584, size 0xd8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// @brief Method FallbackInvalidByteSequence, addr 0x59a6dcc, size 0x6c, virtual false, abstract: false, final false
inline bool FallbackInvalidByteSequence(::ByRef<uint8_t*>  pSrc, int32_t  ch, ::System::Text::DecoderFallbackBuffer*  fallback, ::ByRef<char16_t*>  pTarget) ;

/// @brief Method FallbackInvalidByteSequence, addr 0x59a6764, size 0x40, virtual false, abstract: false, final false
inline int32_t FallbackInvalidByteSequence(uint8_t*  pSrc, int32_t  ch, ::System::Text::DecoderFallbackBuffer*  fallback) ;

/// @brief Method GetByteCount, addr 0x59a4574, size 0x188, virtual true, abstract: false, final false
inline int32_t GetByteCount(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  index, int32_t  count) ;

/// @brief Method GetByteCount, addr 0x59a46fc, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetByteCount(::StringW  chars) ;

/// @brief Method GetByteCount, addr 0x59a4768, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count) ;

/// @brief Method GetByteCount, addr 0x59a555c, size 0x5e0, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count, ::System::Text::EncoderNLS*  baseEncoder) ;

/// @brief Method GetBytes, addr 0x59a4a80, size 0x280, virtual true, abstract: false, final false
inline int32_t GetBytes(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytes, addr 0x59a4d00, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount) ;

/// @brief Method GetBytes, addr 0x59a5b64, size 0x738, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount, ::System::Text::EncoderNLS*  baseEncoder) ;

/// @brief Method GetBytes, addr 0x59a4838, size 0x248, virtual true, abstract: false, final false
inline int32_t GetBytes(::StringW  s, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytesUnknown, addr 0x59a6e38, size 0x210, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytesUnknown(::ByRef<uint8_t*>  pSrc, int32_t  ch) ;

/// @brief Method GetCharCount, addr 0x59a4df8, size 0x188, virtual true, abstract: false, final false
inline int32_t GetCharCount(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method GetCharCount, addr 0x59a4f80, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count) ;

/// @brief Method GetCharCount, addr 0x59a629c, size 0x4c8, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetChars, addr 0x59a5050, size 0x284, virtual true, abstract: false, final false
inline int32_t GetChars(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex) ;

/// @brief Method GetChars, addr 0x59a52d4, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount) ;

/// @brief Method GetChars, addr 0x59a67a4, size 0x628, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount, ::System::Text::DecoderNLS*  baseDecoder) ;

/// @brief Method GetDecoder, addr 0x59a7048, size 0x74, virtual true, abstract: false, final false
inline ::System::Text::Decoder* GetDecoder() ;

/// @brief Method GetEncoder, addr 0x59a70bc, size 0x74, virtual true, abstract: false, final false
inline ::System::Text::Encoder* GetEncoder() ;

/// @brief Method GetHashCode, addr 0x59a765c, size 0x60, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMaxByteCount, addr 0x59a7130, size 0xfc, virtual true, abstract: false, final false
inline int32_t GetMaxByteCount(int32_t  charCount) ;

/// @brief Method GetMaxCharCount, addr 0x59a722c, size 0xfc, virtual true, abstract: false, final false
inline int32_t GetMaxCharCount(int32_t  byteCount) ;

/// @brief Method GetPreamble, addr 0x59a7328, size 0xf8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetPreamble() ;

/// @brief Method GetString, addr 0x59a53cc, size 0x190, virtual true, abstract: false, final false
inline ::StringW GetString(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count) ;

/// @brief Method InRange, addr 0x59a5b3c, size 0x14, virtual false, abstract: false, final false
static inline bool InRange(int32_t  ch, int32_t  start, int32_t  end) ;

static inline ::System::Text::UTF8Encoding* New_ctor() ;

static inline ::System::Text::UTF8Encoding* New_ctor(bool  encoderShouldEmitUTF8Identifier) ;

static inline ::System::Text::UTF8Encoding* New_ctor(bool  encoderShouldEmitUTF8Identifier, bool  throwOnInvalidBytes) ;

/// @brief Method PtrDiff, addr 0x59a5b50, size 0xc, virtual false, abstract: false, final false
static inline int32_t PtrDiff(char16_t*  a, char16_t*  b) ;

/// @brief Method PtrDiff, addr 0x59a5b5c, size 0x8, virtual false, abstract: false, final false
static inline int32_t PtrDiff(uint8_t*  a, uint8_t*  b) ;

/// @brief Method SetDefaultFallbacks, addr 0x59a44ac, size 0xc8, virtual true, abstract: false, final false
inline void SetDefaultFallbacks() ;

constexpr bool const& __cordl_internal_get__emitUTF8Identifier() const;

constexpr bool& __cordl_internal_get__emitUTF8Identifier() ;

constexpr bool const& __cordl_internal_get__isThrowException() const;

constexpr bool& __cordl_internal_get__isThrowException() ;

constexpr void __cordl_internal_set__emitUTF8Identifier(bool  value) ;

constexpr void __cordl_internal_set__isThrowException(bool  value) ;

/// @brief Method .ctor, addr 0x59a43dc, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x59a440c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(bool  encoderShouldEmitUTF8Identifier) ;

/// @brief Method .ctor, addr 0x59a444c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(bool  encoderShouldEmitUTF8Identifier, bool  throwOnInvalidBytes) ;

static inline ::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed* getStaticF_s_default() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_s_preamble() ;

/// @brief Method get_Preamble, addr 0x59a7420, size 0x164, virtual true, abstract: false, final false
inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

static inline void setStaticF_s_default(::GlobalNamespace::UTF8Encoding_UTF8EncodingSealed*  value) ;

static inline void setStaticF_s_preamble(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTF8Encoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UTF8Encoding(UTF8Encoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTF8Encoding(UTF8Encoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2884};

/// @brief Field _emitUTF8Identifier, offset: 0x38, size: 0x1, def value: None
 bool  ____emitUTF8Identifier;

/// @brief Field _isThrowException, offset: 0x39, size: 0x1, def value: None
 bool  ____isThrowException;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF8Encoding, ____emitUTF8Identifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF8Encoding, ____isThrowException) == 0x39, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::UTF8Encoding, 0x40>, "Size mismatch!");

} // namespace end def System::Text
NEED_NO_BOX(::System::Text::UTF8Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF8Encoding*, "System.Text", "UTF8Encoding");
NEED_NO_BOX(::System::Text::UTF8Encoding_UTF8Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF8Encoding_UTF8Decoder*, "System.Text", "UTF8Encoding/UTF8Decoder");
NEED_NO_BOX(::System::Text::UTF8Encoding_UTF8Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF8Encoding_UTF8Encoder*, "System.Text", "UTF8Encoding/UTF8Encoder");
