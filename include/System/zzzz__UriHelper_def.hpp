#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UriHelper)
namespace System {
struct UnescapeMode;
}
namespace System {
class UriParser;
}
// Forward declare root types
namespace System {
class UriHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::UriHelper);
// Type: System::UriHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::UriHelper*
class CORDL_TYPE UriHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field HexUpperChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HexUpperChars, put = setStaticF_HexUpperChars))::ArrayW<char16_t, ::Array<char16_t>*> HexUpperChars;

  /// @brief Method EnsureDestinationSize, addr 0x2a95594, size 0x12c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> EnsureDestinationSize(::cordl_internals::Ptr<char16_t> pStr, ::ArrayW<char16_t, ::Array<char16_t>*> dest, int32_t currentInputPos,
                                                                             int16_t charsToAdd, int16_t minReallocateChars, ByRef<int32_t> destPos, int32_t prevInputPos);

  /// @brief Method EscapeAsciiChar, addr 0x2a94d24, size 0x108, virtual false, abstract: false, final false
  static inline void EscapeAsciiChar(char16_t ch, ::ArrayW<char16_t, ::Array<char16_t>*> to, ByRef<int32_t> pos);

  /// @brief Method EscapeString, addr 0x2a95058, size 0x53c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> EscapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ByRef<int32_t> destPos, bool isUriString,
                                                                    char16_t force1, char16_t force2, char16_t rsvd);

  /// @brief Method EscapedAscii, addr 0x2a946f0, size 0xc0, virtual false, abstract: false, final false
  static inline char16_t EscapedAscii(char16_t digit, char16_t next);

  /// @brief Method Is3986Unreserved, addr 0x2a962fc, size 0x9c, virtual false, abstract: false, final false
  static inline bool Is3986Unreserved(char16_t c);

  /// @brief Method IsNotSafeForUnescape, addr 0x2a947b0, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsNotSafeForUnescape(char16_t ch);

  /// @brief Method IsReservedUnreservedOrHash, addr 0x2a957a0, size 0x108, virtual false, abstract: false, final false
  static inline bool IsReservedUnreservedOrHash(char16_t c);

  /// @brief Method IsUnreserved, addr 0x2a956c0, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsUnreserved(char16_t c);

  /// @brief Method MatchUTF8Sequence, addr 0x2a9483c, size 0x4e8, virtual false, abstract: false, final false
  static inline void MatchUTF8Sequence(::cordl_internals::Ptr<char16_t> pDest, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ByRef<int32_t> destOffset,
                                       ::ArrayW<char16_t, ::Array<char16_t>*> unescapedChars, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteCount, bool isQuery,
                                       bool iriParsing);

  /// @brief Method TestForSubPath, addr 0x2a94e54, size 0x204, virtual false, abstract: false, final false
  static inline bool TestForSubPath(::cordl_internals::Ptr<char16_t> pMe, uint16_t meLength, ::cordl_internals::Ptr<char16_t> pShe, uint16_t sheLength, bool ignoreCase);

  /// @brief Method UnescapeString, addr 0x2a958a8, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> UnescapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ByRef<int32_t> destPosition,
                                                                      char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery);

  /// @brief Method UnescapeString, addr 0x2a95988, size 0x914, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> UnescapeString(::cordl_internals::Ptr<char16_t> pStr, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest,
                                                                      ByRef<int32_t> destPosition, char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, ::System::UnescapeMode unescapeMode,
                                                                      ::System::UriParser* syntax, bool isQuery);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_HexUpperChars();

  static inline void setStaticF_HexUpperChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UriHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriHelper(UriHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriHelper(UriHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UriHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::UriHelper*, "System", "UriHelper");
