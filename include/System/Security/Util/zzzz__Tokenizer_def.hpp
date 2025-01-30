#pragma once
// IWYU pragma private; include "System/Security/Util/Tokenizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tokenizer)
namespace System::IO {
class StreamReader;
}
namespace System::Security::Util {
class TokenizerStream;
}
namespace System::Security::Util {
class Tokenizer_ITokenReader;
}
namespace System::Security::Util {
class Tokenizer_StreamTokenReader;
}
namespace System::Security::Util {
class Tokenizer_StringMaker;
}
namespace System::Security::Util {
struct Tokenizer_TokenSource;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Security::Util {
struct Tokenizer_TokenSource;
}
namespace System::Security::Util {
class Tokenizer;
}
namespace System::Security::Util {
class Tokenizer_ITokenReader;
}
namespace System::Security::Util {
class Tokenizer_StreamTokenReader;
}
namespace System::Security::Util {
class Tokenizer_StringMaker;
}
// Write type traits
MARK_VAL_T(::System::Security::Util::Tokenizer_TokenSource);
MARK_REF_PTR_T(::System::Security::Util::Tokenizer);
MARK_REF_PTR_T(::System::Security::Util::Tokenizer_ITokenReader);
MARK_REF_PTR_T(::System::Security::Util::Tokenizer_StreamTokenReader);
MARK_REF_PTR_T(::System::Security::Util::Tokenizer_StringMaker);
// Dependencies
namespace System::Security::Util {
// Is value type: true
// CS Name: System.Security.Util.Tokenizer/TokenSource
struct CORDL_TYPE Tokenizer_TokenSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Tokenizer_TokenSource_Unwrapped
  enum struct __Tokenizer_TokenSource_Unwrapped : int32_t {
    __E_UnicodeByteArray = static_cast<int32_t>(0x0),
    __E_UTF8ByteArray = static_cast<int32_t>(0x1),
    __E_ASCIIByteArray = static_cast<int32_t>(0x2),
    __E_CharArray = static_cast<int32_t>(0x3),
    __E_String = static_cast<int32_t>(0x4),
    __E_NestedStrings = static_cast<int32_t>(0x5),
    __E_Other = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Tokenizer_TokenSource_Unwrapped() const noexcept {
    return static_cast<__Tokenizer_TokenSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tokenizer_TokenSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Tokenizer_TokenSource(int32_t value__) noexcept;

  /// @brief Field ASCIIByteArray value: I32(2)
  static ::System::Security::Util::Tokenizer_TokenSource const ASCIIByteArray;

  /// @brief Field CharArray value: I32(3)
  static ::System::Security::Util::Tokenizer_TokenSource const CharArray;

  /// @brief Field NestedStrings value: I32(5)
  static ::System::Security::Util::Tokenizer_TokenSource const NestedStrings;

  /// @brief Field Other value: I32(6)
  static ::System::Security::Util::Tokenizer_TokenSource const Other;

  /// @brief Field String value: I32(4)
  static ::System::Security::Util::Tokenizer_TokenSource const String;

  /// @brief Field UTF8ByteArray value: I32(1)
  static ::System::Security::Util::Tokenizer_TokenSource const UTF8ByteArray;

  /// @brief Field UnicodeByteArray value: I32(0)
  static ::System::Security::Util::Tokenizer_TokenSource const UnicodeByteArray;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2895 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Util::Tokenizer_TokenSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Util::Tokenizer_TokenSource, 0x4>, "Size mismatch!");

} // namespace System::Security::Util
// Dependencies System.Object
namespace System::Security::Util {
// Is value type: false
// CS Name: System.Security.Util.Tokenizer/StringMaker
class CORDL_TYPE Tokenizer_StringMaker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _outChars, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__outChars, put = __cordl_internal_set__outChars)) ::ArrayW<char16_t, ::Array<char16_t>*> _outChars;

  /// @brief Field _outIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__outIndex, put = __cordl_internal_set__outIndex)) int32_t _outIndex;

  /// @brief Field _outStringBuilder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__outStringBuilder, put = __cordl_internal_set__outStringBuilder)) ::System::Text::StringBuilder* _outStringBuilder;

  /// @brief Field aStrings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_aStrings, put = __cordl_internal_set_aStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> aStrings;

  /// @brief Field cStringsMax, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cStringsMax, put = __cordl_internal_set_cStringsMax)) uint32_t cStringsMax;

  /// @brief Field cStringsUsed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_cStringsUsed, put = __cordl_internal_set_cStringsUsed)) uint32_t cStringsUsed;

  /// @brief Method CompareStringAndChars, addr 0x3c9add8, size 0xa0, virtual false, abstract: false, final false
  inline bool CompareStringAndChars(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l);

  /// @brief Method HashCharArray, addr 0x3c9ace8, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t HashCharArray(::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l);

  /// @brief Method HashString, addr 0x3c9ac7c, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t HashString(::StringW str);

  /// @brief Method MakeString, addr 0x3c956bc, size 0x21c, virtual false, abstract: false, final false
  inline ::StringW MakeString();

  static inline ::System::Security::Util::Tokenizer_StringMaker* New_ctor();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__outChars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__outChars();

  constexpr int32_t const& __cordl_internal_get__outIndex() const;

  constexpr int32_t& __cordl_internal_get__outIndex();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__outStringBuilder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__outStringBuilder();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_aStrings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_aStrings();

  constexpr uint32_t const& __cordl_internal_get_cStringsMax() const;

  constexpr uint32_t& __cordl_internal_get_cStringsMax();

  constexpr uint32_t const& __cordl_internal_get_cStringsUsed() const;

  constexpr uint32_t& __cordl_internal_get_cStringsUsed();

  constexpr void __cordl_internal_set__outChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__outIndex(int32_t value);

  constexpr void __cordl_internal_set__outStringBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_aStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_cStringsMax(uint32_t value);

  constexpr void __cordl_internal_set_cStringsUsed(uint32_t value);

  /// @brief Method .ctor, addr 0x3c9ad44, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tokenizer_StringMaker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer_StringMaker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tokenizer_StringMaker(Tokenizer_StringMaker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer_StringMaker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tokenizer_StringMaker(Tokenizer_StringMaker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2896 };

  /// @brief Field aStrings, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___aStrings;

  /// @brief Field cStringsMax, offset: 0x18, size: 0x4, def value: None
  uint32_t ___cStringsMax;

  /// @brief Field cStringsUsed, offset: 0x1c, size: 0x4, def value: None
  uint32_t ___cStringsUsed;

  /// @brief Field _outStringBuilder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____outStringBuilder;

  /// @brief Field _outChars, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____outChars;

  /// @brief Field _outIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____outIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Util::Tokenizer_StringMaker, ___aStrings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer_StringMaker, ___cStringsMax) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer_StringMaker, ___cStringsUsed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer_StringMaker, ____outStringBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer_StringMaker, ____outChars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer_StringMaker, ____outIndex) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Util::Tokenizer_StringMaker, 0x38>, "Size mismatch!");

} // namespace System::Security::Util
// Dependencies
namespace System::Security::Util {
// Is value type: false
// CS Name: System.Security.Util.Tokenizer/ITokenReader
class CORDL_TYPE Tokenizer_ITokenReader {
public:
  // Declarations
  /// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t Read();

  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer_ITokenReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tokenizer_ITokenReader(Tokenizer_ITokenReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Util
// Dependencies System.Object, System.Security.Util.Tokenizer::ITokenReader
namespace System::Security::Util {
// Is value type: false
// CS Name: System.Security.Util.Tokenizer/StreamTokenReader
class CORDL_TYPE Tokenizer_StreamTokenReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NumCharEncountered)) int32_t NumCharEncountered;

  /// @brief Field _in, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__in, put = __cordl_internal_set__in)) ::System::IO::StreamReader* _in;

  /// @brief Field _numCharRead, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__numCharRead, put = __cordl_internal_set__numCharRead)) int32_t _numCharRead;

  /// @brief Convert operator to "::System::Security::Util::Tokenizer_ITokenReader"
  constexpr operator ::System::Security::Util::Tokenizer_ITokenReader*() noexcept;

  static inline ::System::Security::Util::Tokenizer_StreamTokenReader* New_ctor(::System::IO::StreamReader* input);

  /// @brief Method Read, addr 0x3c9ae78, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Read();

  constexpr ::System::IO::StreamReader* const& __cordl_internal_get__in() const;

  constexpr ::System::IO::StreamReader*& __cordl_internal_get__in();

  constexpr int32_t const& __cordl_internal_get__numCharRead() const;

  constexpr int32_t& __cordl_internal_get__numCharRead();

  constexpr void __cordl_internal_set__in(::System::IO::StreamReader* value);

  constexpr void __cordl_internal_set__numCharRead(int32_t value);

  /// @brief Method .ctor, addr 0x3c9aa8c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::StreamReader* input);

  /// @brief Method get_NumCharEncountered, addr 0x3c9aeb4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NumCharEncountered();

  /// @brief Convert to "::System::Security::Util::Tokenizer_ITokenReader"
  constexpr ::System::Security::Util::Tokenizer_ITokenReader* i___System__Security__Util__Tokenizer_ITokenReader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tokenizer_StreamTokenReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer_StreamTokenReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tokenizer_StreamTokenReader(Tokenizer_StreamTokenReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer_StreamTokenReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tokenizer_StreamTokenReader(Tokenizer_StreamTokenReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2898 };

  /// @brief Field _in, offset: 0x10, size: 0x8, def value: None
  ::System::IO::StreamReader* ____in;

  /// @brief Field _numCharRead, offset: 0x18, size: 0x4, def value: None
  int32_t ____numCharRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Util::Tokenizer_StreamTokenReader, ____in) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer_StreamTokenReader, ____numCharRead) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Util::Tokenizer_StreamTokenReader, 0x20>, "Size mismatch!");

} // namespace System::Security::Util
// Dependencies System.Object, System.Security.Util.Tokenizer::TokenSource
namespace System::Security::Util {
// Is value type: false
// CS Name: System.Security.Util.Tokenizer
class CORDL_TYPE Tokenizer : public ::System::Object {
public:
  // Declarations
  using ITokenReader = ::System::Security::Util::Tokenizer_ITokenReader;

  using StreamTokenReader = ::System::Security::Util::Tokenizer_StreamTokenReader;

  using StringMaker = ::System::Security::Util::Tokenizer_StringMaker;

  using TokenSource = ::System::Security::Util::Tokenizer_TokenSource;

  /// @brief Field LineNo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_LineNo, put = __cordl_internal_set_LineNo)) int32_t LineNo;

  /// @brief Field _inBytes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inBytes, put = __cordl_internal_set__inBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _inBytes;

  /// @brief Field _inChars, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inChars, put = __cordl_internal_set__inChars)) ::ArrayW<char16_t, ::Array<char16_t>*> _inChars;

  /// @brief Field _inIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__inIndex, put = __cordl_internal_set__inIndex)) int32_t _inIndex;

  /// @brief Field _inNestedIndex, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__inNestedIndex, put = __cordl_internal_set__inNestedIndex)) int32_t _inNestedIndex;

  /// @brief Field _inNestedSize, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__inNestedSize, put = __cordl_internal_set__inNestedSize)) int32_t _inNestedSize;

  /// @brief Field _inNestedString, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__inNestedString, put = __cordl_internal_set__inNestedString)) ::StringW _inNestedString;

  /// @brief Field _inProcessingTag, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__inProcessingTag, put = __cordl_internal_set__inProcessingTag)) int32_t _inProcessingTag;

  /// @brief Field _inSavedCharacter, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__inSavedCharacter, put = __cordl_internal_set__inSavedCharacter)) int32_t _inSavedCharacter;

  /// @brief Field _inSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__inSize, put = __cordl_internal_set__inSize)) int32_t _inSize;

  /// @brief Field _inString, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__inString, put = __cordl_internal_set__inString)) ::StringW _inString;

  /// @brief Field _inTokenReader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__inTokenReader, put = __cordl_internal_set__inTokenReader)) ::System::Security::Util::Tokenizer_ITokenReader* _inTokenReader;

  /// @brief Field _inTokenSource, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__inTokenSource, put = __cordl_internal_set__inTokenSource)) ::System::Security::Util::Tokenizer_TokenSource _inTokenSource;

  /// @brief Field _maker, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__maker, put = __cordl_internal_set__maker)) ::System::Security::Util::Tokenizer_StringMaker* _maker;

  /// @brief Field _replaceStrings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__replaceStrings, put = __cordl_internal_set__replaceStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> _replaceStrings;

  /// @brief Field _searchStrings, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__searchStrings, put = __cordl_internal_set__searchStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> _searchStrings;

  /// @brief Method BasicInitialization, addr 0x3c9a9bc, size 0x78, virtual false, abstract: false, final false
  inline void BasicInitialization();

  /// @brief Method ChangeFormat, addr 0x3c9a220, size 0x220, virtual false, abstract: false, final false
  inline void ChangeFormat(::System::Text::Encoding* encoding);

  /// @brief Method GetStringToken, addr 0x3c9ab9c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW GetStringToken();

  /// @brief Method GetTokens, addr 0x3c999ec, size 0x7d4, virtual false, abstract: false, final false
  inline void GetTokens(::System::Security::Util::TokenizerStream* stream, int32_t maxNum, bool endAfterKet);

  static inline ::System::Security::Util::Tokenizer* New_ctor(::StringW input);

  /// @brief Method Recycle, addr 0x3c9aa34, size 0x58, virtual false, abstract: false, final false
  inline void Recycle();

  constexpr int32_t const& __cordl_internal_get_LineNo() const;

  constexpr int32_t& __cordl_internal_get_LineNo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__inBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__inBytes();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__inChars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__inChars();

  constexpr int32_t const& __cordl_internal_get__inIndex() const;

  constexpr int32_t& __cordl_internal_get__inIndex();

  constexpr int32_t const& __cordl_internal_get__inNestedIndex() const;

  constexpr int32_t& __cordl_internal_get__inNestedIndex();

  constexpr int32_t const& __cordl_internal_get__inNestedSize() const;

  constexpr int32_t& __cordl_internal_get__inNestedSize();

  constexpr ::StringW const& __cordl_internal_get__inNestedString() const;

  constexpr ::StringW& __cordl_internal_get__inNestedString();

  constexpr int32_t const& __cordl_internal_get__inProcessingTag() const;

  constexpr int32_t& __cordl_internal_get__inProcessingTag();

  constexpr int32_t const& __cordl_internal_get__inSavedCharacter() const;

  constexpr int32_t& __cordl_internal_get__inSavedCharacter();

  constexpr int32_t const& __cordl_internal_get__inSize() const;

  constexpr int32_t& __cordl_internal_get__inSize();

  constexpr ::StringW const& __cordl_internal_get__inString() const;

  constexpr ::StringW& __cordl_internal_get__inString();

  constexpr ::System::Security::Util::Tokenizer_ITokenReader* const& __cordl_internal_get__inTokenReader() const;

  constexpr ::System::Security::Util::Tokenizer_ITokenReader*& __cordl_internal_get__inTokenReader();

  constexpr ::System::Security::Util::Tokenizer_TokenSource const& __cordl_internal_get__inTokenSource() const;

  constexpr ::System::Security::Util::Tokenizer_TokenSource& __cordl_internal_get__inTokenSource();

  constexpr ::System::Security::Util::Tokenizer_StringMaker* const& __cordl_internal_get__maker() const;

  constexpr ::System::Security::Util::Tokenizer_StringMaker*& __cordl_internal_get__maker();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__replaceStrings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__replaceStrings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__searchStrings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__searchStrings();

  constexpr void __cordl_internal_set_LineNo(int32_t value);

  constexpr void __cordl_internal_set__inBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__inChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__inIndex(int32_t value);

  constexpr void __cordl_internal_set__inNestedIndex(int32_t value);

  constexpr void __cordl_internal_set__inNestedSize(int32_t value);

  constexpr void __cordl_internal_set__inNestedString(::StringW value);

  constexpr void __cordl_internal_set__inProcessingTag(int32_t value);

  constexpr void __cordl_internal_set__inSavedCharacter(int32_t value);

  constexpr void __cordl_internal_set__inSize(int32_t value);

  constexpr void __cordl_internal_set__inString(::StringW value);

  constexpr void __cordl_internal_set__inTokenReader(::System::Security::Util::Tokenizer_ITokenReader* value);

  constexpr void __cordl_internal_set__inTokenSource(::System::Security::Util::Tokenizer_TokenSource value);

  constexpr void __cordl_internal_set__maker(::System::Security::Util::Tokenizer_StringMaker* value);

  constexpr void __cordl_internal_set__replaceStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__searchStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x3c9a974, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tokenizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tokenizer(Tokenizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tokenizer(Tokenizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2899 };

  /// @brief Field LineNo, offset: 0x10, size: 0x4, def value: None
  int32_t ___LineNo;

  /// @brief Field _inProcessingTag, offset: 0x14, size: 0x4, def value: None
  int32_t ____inProcessingTag;

  /// @brief Field _inBytes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____inBytes;

  /// @brief Field _inChars, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____inChars;

  /// @brief Field _inString, offset: 0x28, size: 0x8, def value: None
  ::StringW ____inString;

  /// @brief Field _inIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____inIndex;

  /// @brief Field _inSize, offset: 0x34, size: 0x4, def value: None
  int32_t ____inSize;

  /// @brief Field _inSavedCharacter, offset: 0x38, size: 0x4, def value: None
  int32_t ____inSavedCharacter;

  /// @brief Field _inTokenSource, offset: 0x3c, size: 0x4, def value: None
  ::System::Security::Util::Tokenizer_TokenSource ____inTokenSource;

  /// @brief Field _inTokenReader, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Util::Tokenizer_ITokenReader* ____inTokenReader;

  /// @brief Field _maker, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Util::Tokenizer_StringMaker* ____maker;

  /// @brief Field _searchStrings, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____searchStrings;

  /// @brief Field _replaceStrings, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____replaceStrings;

  /// @brief Field _inNestedIndex, offset: 0x60, size: 0x4, def value: None
  int32_t ____inNestedIndex;

  /// @brief Field _inNestedSize, offset: 0x64, size: 0x4, def value: None
  int32_t ____inNestedSize;

  /// @brief Field _inNestedString, offset: 0x68, size: 0x8, def value: None
  ::StringW ____inNestedString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Util::Tokenizer, ___LineNo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inProcessingTag) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inChars) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inSavedCharacter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inTokenSource) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inTokenReader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____maker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____searchStrings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____replaceStrings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inNestedIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inNestedSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::Tokenizer, ____inNestedString) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Util::Tokenizer, 0x70>, "Size mismatch!");

} // namespace System::Security::Util
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer_TokenSource, "System.Security.Util", "Tokenizer/TokenSource");
NEED_NO_BOX(::System::Security::Util::Tokenizer);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer*, "System.Security.Util", "Tokenizer");
NEED_NO_BOX(::System::Security::Util::Tokenizer_ITokenReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer_ITokenReader*, "System.Security.Util", "Tokenizer/ITokenReader");
NEED_NO_BOX(::System::Security::Util::Tokenizer_StreamTokenReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer_StreamTokenReader*, "System.Security.Util", "Tokenizer/StreamTokenReader");
NEED_NO_BOX(::System::Security::Util::Tokenizer_StringMaker);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer_StringMaker*, "System.Security.Util", "Tokenizer/StringMaker");
