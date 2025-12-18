#pragma once
// IWYU pragma private; include "System/UriHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.UriHelper
class CORDL_TYPE UriHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field HexUpperChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HexUpperChars, put = setStaticF_HexUpperChars)) ::ArrayW<char16_t, ::Array<char16_t>*> HexUpperChars;

  /// @brief Method EnsureDestinationSize, addr 0x61c2418, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> EnsureDestinationSize(char16_t* pStr, ::ArrayW<char16_t, ::Array<char16_t>*> dest, int32_t currentInputPos, int16_t charsToAdd,
                                                                             int16_t minReallocateChars, ::ByRef<int32_t> destPos, int32_t prevInputPos);

  /// @brief Method EscapeAsciiChar, addr 0x61c1b7c, size 0x10c, virtual false, abstract: false, final false
  static inline void EscapeAsciiChar(char16_t ch, ::ArrayW<char16_t, ::Array<char16_t>*> to, ::ByRef<int32_t> pos);

  /// @brief Method EscapeString, addr 0x61c1e90, size 0x588, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> EscapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> destPos,
                                                                    bool isUriString, char16_t force1, char16_t force2, char16_t rsvd);

  /// @brief Method EscapedAscii, addr 0x61c1590, size 0x78, virtual false, abstract: false, final false
  static inline char16_t EscapedAscii(char16_t digit, char16_t next);

  /// @brief Method Is3986Unreserved, addr 0x61c3258, size 0xac, virtual false, abstract: false, final false
  static inline bool Is3986Unreserved(char16_t c);

  /// @brief Method IsNotSafeForUnescape, addr 0x61c1608, size 0x88, virtual false, abstract: false, final false
  static inline bool IsNotSafeForUnescape(char16_t ch);

  /// @brief Method IsReservedUnreservedOrHash, addr 0x61c2648, size 0x120, virtual false, abstract: false, final false
  static inline bool IsReservedUnreservedOrHash(char16_t c);

  /// @brief Method IsUnreserved, addr 0x61c254c, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsUnreserved(char16_t c);

  /// @brief Method MatchUTF8Sequence, addr 0x61c1690, size 0x4ec, virtual false, abstract: false, final false
  static inline void MatchUTF8Sequence(char16_t* pDest, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> destOffset, ::ArrayW<char16_t, ::Array<char16_t>*> unescapedChars,
                                       int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteCount, bool isQuery, bool iriParsing);

  /// @brief Method TestForSubPath, addr 0x61c1ccc, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TestForSubPath(char16_t* pMe, uint16_t meLength, char16_t* pShe, uint16_t sheLength, bool ignoreCase);

  /// @brief Method UnescapeString, addr 0x61c2768, size 0x110, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> UnescapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> destPosition,
                                                                      char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery);

  /// @brief Method UnescapeString, addr 0x61c2878, size 0x97c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> UnescapeString(char16_t* pStr, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> destPosition,
                                                                      char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UriHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::UriHelper*, "System", "UriHelper");
