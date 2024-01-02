#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WWWTranscoder)
// Forward declare root types
namespace UnityEngine {
class WWWTranscoder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WWWTranscoder);
// Type: UnityEngine::WWWTranscoder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15574))
// CS Name: ::UnityEngine::WWWTranscoder*
class CORDL_TYPE WWWTranscoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field ucHexChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ucHexChars, put = setStaticF_ucHexChars))::ArrayW<uint8_t, ::Array<uint8_t>*> ucHexChars;

  /// @brief Field lcHexChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lcHexChars, put = setStaticF_lcHexChars))::ArrayW<uint8_t, ::Array<uint8_t>*> lcHexChars;

  /// @brief Field urlEscapeChar, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_urlEscapeChar, put = setStaticF_urlEscapeChar)) uint8_t urlEscapeChar;

  /// @brief Field urlSpace, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_urlSpace, put = setStaticF_urlSpace))::ArrayW<uint8_t, ::Array<uint8_t>*> urlSpace;

  /// @brief Field dataSpace, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dataSpace, put = setStaticF_dataSpace))::ArrayW<uint8_t, ::Array<uint8_t>*> dataSpace;

  /// @brief Field urlForbidden, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_urlForbidden, put = setStaticF_urlForbidden))::ArrayW<uint8_t, ::Array<uint8_t>*> urlForbidden;

  /// @brief Field qpEscapeChar, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_qpEscapeChar, put = setStaticF_qpEscapeChar)) uint8_t qpEscapeChar;

  /// @brief Field qpSpace, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_qpSpace, put = setStaticF_qpSpace))::ArrayW<uint8_t, ::Array<uint8_t>*> qpSpace;

  /// @brief Field qpForbidden, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_qpForbidden, put = setStaticF_qpForbidden))::ArrayW<uint8_t, ::Array<uint8_t>*> qpForbidden;

  static inline void setStaticF_ucHexChars(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ucHexChars();

  static inline void setStaticF_lcHexChars(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_lcHexChars();

  static inline void setStaticF_urlEscapeChar(uint8_t value);

  static inline uint8_t getStaticF_urlEscapeChar();

  static inline void setStaticF_urlSpace(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_urlSpace();

  static inline void setStaticF_dataSpace(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_dataSpace();

  static inline void setStaticF_urlForbidden(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_urlForbidden();

  static inline void setStaticF_qpEscapeChar(uint8_t value);

  static inline uint8_t getStaticF_qpEscapeChar();

  static inline void setStaticF_qpSpace(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_qpSpace();

  static inline void setStaticF_qpForbidden(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_qpForbidden();

  /// @brief Method Hex2Byte, addr 0x2eaceec, size 0xac, virtual false, abstract: false, final false
  static inline uint8_t Hex2Byte(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t offset);

  /// @brief Method Byte2Hex, addr 0x2eacf98, size 0x54, virtual false, abstract: false, final false
  static inline void Byte2Hex(uint8_t b, ::ArrayW<uint8_t, ::Array<uint8_t>*> hexChars, ByRef<uint8_t> byte0, ByRef<uint8_t> byte1);

  /// @brief Method URLEncode, addr 0x2eacfec, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> URLEncode(::ArrayW<uint8_t, ::Array<uint8_t>*> toEncode);

  /// @brief Method Encode, addr 0x2ead058, size 0x3ac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, uint8_t escapeChar, ::ArrayW<uint8_t, ::Array<uint8_t>*> space,
                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> forbidden, bool uppercase);

  /// @brief Method ByteArrayContains, addr 0x2ead404, size 0x4c, virtual false, abstract: false, final false
  static inline bool ByteArrayContains(::ArrayW<uint8_t, ::Array<uint8_t>*> array, uint8_t b);

  /// @brief Method URLDecode, addr 0x2eacbb8, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> URLDecode(::ArrayW<uint8_t, ::Array<uint8_t>*> toEncode);

  /// @brief Method ByteSubArrayEquals, addr 0x2ead730, size 0x78, virtual false, abstract: false, final false
  static inline bool ByteSubArrayEquals(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t index, ::ArrayW<uint8_t, ::Array<uint8_t>*> comperand);

  /// @brief Method Decode, addr 0x2ead450, size 0x2e0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> input, uint8_t escapeChar, ::ArrayW<uint8_t, ::Array<uint8_t>*> space);

  // Ctor Parameters [CppParam { name: "", ty: "WWWTranscoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WWWTranscoder(WWWTranscoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WWWTranscoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WWWTranscoder(WWWTranscoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WWWTranscoder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WWWTranscoder, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WWWTranscoder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WWWTranscoder*, "UnityEngine", "WWWTranscoder");
