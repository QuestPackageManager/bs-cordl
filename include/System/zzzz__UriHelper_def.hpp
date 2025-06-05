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

  /// @brief Method EnsureDestinationSize, addr 0x440c8d4, size 0x12c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> EnsureDestinationSize(::cordl_internals::Ptr<char16_t> pStr, ::ArrayW<char16_t, ::Array<char16_t>*> dest, int32_t currentInputPos,
                                                                             int16_t charsToAdd, int16_t minReallocateChars, ::ByRef<int32_t> destPos, int32_t prevInputPos);

  /// @brief Method EscapeAsciiChar, addr 0x440c094, size 0x108, virtual false, abstract: false, final false
  static inline void EscapeAsciiChar(char16_t ch, ::ArrayW<char16_t, ::Array<char16_t>*> to, ::ByRef<int32_t> pos);

  /// @brief Method EscapeString, addr 0x440c3c0, size 0x514, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> EscapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> destPos,
                                                                    bool isUriString, char16_t force1, char16_t force2, char16_t rsvd);

  /// @brief Method EscapedAscii, addr 0x440ba70, size 0xbc, virtual false, abstract: false, final false
  static inline char16_t EscapedAscii(char16_t digit, char16_t next);

  /// @brief Method Is3986Unreserved, addr 0x440d6dc, size 0x9c, virtual false, abstract: false, final false
  static inline bool Is3986Unreserved(char16_t c);

  /// @brief Method IsNotSafeForUnescape, addr 0x440bb2c, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsNotSafeForUnescape(char16_t ch);

  /// @brief Method IsReservedUnreservedOrHash, addr 0x440cae0, size 0x108, virtual false, abstract: false, final false
  static inline bool IsReservedUnreservedOrHash(char16_t c);

  /// @brief Method IsUnreserved, addr 0x440ca00, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsUnreserved(char16_t c);

  /// @brief Method MatchUTF8Sequence, addr 0x440bbb8, size 0x4dc, virtual false, abstract: false, final false
  static inline void MatchUTF8Sequence(::cordl_internals::Ptr<char16_t> pDest, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> destOffset,
                                       ::ArrayW<char16_t, ::Array<char16_t>*> unescapedChars, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteCount, bool isQuery,
                                       bool iriParsing);

  /// @brief Method TestForSubPath, addr 0x440c1c4, size 0x1fc, virtual false, abstract: false, final false
  static inline bool TestForSubPath(::cordl_internals::Ptr<char16_t> pMe, uint16_t meLength, ::cordl_internals::Ptr<char16_t> pShe, uint16_t sheLength, bool ignoreCase);

  /// @brief Method UnescapeString, addr 0x440cbe8, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> UnescapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> destPosition,
                                                                      char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery);

  /// @brief Method UnescapeString, addr 0x440ccc8, size 0x9b4, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> UnescapeString(::cordl_internals::Ptr<char16_t> pStr, int32_t start, int32_t end, ::ArrayW<char16_t, ::Array<char16_t>*> dest,
                                                                      ::ByRef<int32_t> destPosition, char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, ::System::UnescapeMode unescapeMode,
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriHelper, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UriHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::UriHelper*, "System", "UriHelper");
