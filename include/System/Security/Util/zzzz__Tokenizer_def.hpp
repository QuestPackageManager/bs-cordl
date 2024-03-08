#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __Tokenizer__ITokenReader;
}
namespace System::Security::Util {
class __Tokenizer__StreamTokenReader;
}
namespace System::Security::Util {
class __Tokenizer__StringMaker;
}
namespace System::Security::Util {
struct __Tokenizer__TokenSource;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Security::Util {
struct __Tokenizer__TokenSource;
}
namespace System::Security::Util {
class Tokenizer;
}
namespace System::Security::Util {
class __Tokenizer__ITokenReader;
}
namespace System::Security::Util {
class __Tokenizer__StreamTokenReader;
}
namespace System::Security::Util {
class __Tokenizer__StringMaker;
}
// Write type traits
MARK_VAL_T(::System::Security::Util::__Tokenizer__TokenSource);
MARK_REF_PTR_T(::System::Security::Util::Tokenizer);
MARK_REF_PTR_T(::System::Security::Util::__Tokenizer__ITokenReader);
MARK_REF_PTR_T(::System::Security::Util::__Tokenizer__StreamTokenReader);
MARK_REF_PTR_T(::System::Security::Util::__Tokenizer__StringMaker);
// Type: ::TokenSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: true
// CS Name: ::Tokenizer::TokenSource
struct CORDL_TYPE __Tokenizer__TokenSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Tokenizer__TokenSource_Unwrapped
  enum struct ____Tokenizer__TokenSource_Unwrapped : int32_t {
    __E_UnicodeByteArray = static_cast<int32_t>(0x0),
    __E_UTF8ByteArray = static_cast<int32_t>(0x1),
    __E_ASCIIByteArray = static_cast<int32_t>(0x2),
    __E_CharArray = static_cast<int32_t>(0x3),
    __E_String = static_cast<int32_t>(0x4),
    __E_NestedStrings = static_cast<int32_t>(0x5),
    __E_Other = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Tokenizer__TokenSource_Unwrapped() const noexcept {
    return static_cast<____Tokenizer__TokenSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tokenizer__TokenSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Tokenizer__TokenSource(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ASCIIByteArray value: static_cast<int32_t>(0x2)
  static ::System::Security::Util::__Tokenizer__TokenSource const ASCIIByteArray;

  /// @brief Field CharArray value: static_cast<int32_t>(0x3)
  static ::System::Security::Util::__Tokenizer__TokenSource const CharArray;

  /// @brief Field NestedStrings value: static_cast<int32_t>(0x5)
  static ::System::Security::Util::__Tokenizer__TokenSource const NestedStrings;

  /// @brief Field Other value: static_cast<int32_t>(0x6)
  static ::System::Security::Util::__Tokenizer__TokenSource const Other;

  /// @brief Field String value: static_cast<int32_t>(0x4)
  static ::System::Security::Util::__Tokenizer__TokenSource const String;

  /// @brief Field UTF8ByteArray value: static_cast<int32_t>(0x1)
  static ::System::Security::Util::__Tokenizer__TokenSource const UTF8ByteArray;

  /// @brief Field UnicodeByteArray value: static_cast<int32_t>(0x0)
  static ::System::Security::Util::__Tokenizer__TokenSource const UnicodeByteArray;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Util::__Tokenizer__TokenSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__TokenSource, value__) == 0x0, "Offset mismatch!");

} // namespace System::Security::Util
// Type: ::StringMaker
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// CS Name: ::Tokenizer::StringMaker*
class CORDL_TYPE __Tokenizer__StringMaker : public ::System::Object {
public:
  // Declarations
  /// @brief Field _outChars, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__outChars, put = __cordl_internal_set__outChars))::ArrayW<char16_t, ::Array<char16_t>*> _outChars;

  /// @brief Field _outIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__outIndex, put = __cordl_internal_set__outIndex)) int32_t _outIndex;

  /// @brief Field _outStringBuilder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__outStringBuilder, put = __cordl_internal_set__outStringBuilder))::System::Text::StringBuilder* _outStringBuilder;

  /// @brief Field aStrings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_aStrings, put = __cordl_internal_set_aStrings))::ArrayW<::StringW, ::Array<::StringW>*> aStrings;

  /// @brief Field cStringsMax, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cStringsMax, put = __cordl_internal_set_cStringsMax)) uint32_t cStringsMax;

  /// @brief Field cStringsUsed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_cStringsUsed, put = __cordl_internal_set_cStringsUsed)) uint32_t cStringsUsed;

  /// @brief Method CompareStringAndChars, addr 0x25ab77c, size 0x94, virtual false, abstract: false, final false
  inline bool CompareStringAndChars(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l);

  /// @brief Method HashCharArray, addr 0x25ab68c, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t HashCharArray(::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l);

  /// @brief Method HashString, addr 0x25ab620, size 0x6c, virtual false, abstract: false, final false
  static inline uint32_t HashString(::StringW str);

  /// @brief Method MakeString, addr 0x25a5cf0, size 0x26c, virtual false, abstract: false, final false
  inline ::StringW MakeString();

  static inline ::System::Security::Util::__Tokenizer__StringMaker* New_ctor();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__outChars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__outChars();

  constexpr int32_t const& __cordl_internal_get__outIndex() const;

  constexpr int32_t& __cordl_internal_get__outIndex();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__outStringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__outStringBuilder() const;

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

  /// @brief Method .ctor, addr 0x25ab6e8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tokenizer__StringMaker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StringMaker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Tokenizer__StringMaker(__Tokenizer__StringMaker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StringMaker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Tokenizer__StringMaker(__Tokenizer__StringMaker const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::Security::Util::__Tokenizer__StringMaker, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StringMaker, ___aStrings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StringMaker, ___cStringsMax) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StringMaker, ___cStringsUsed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StringMaker, ____outStringBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StringMaker, ____outChars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StringMaker, ____outIndex) == 0x30, "Offset mismatch!");

} // namespace System::Security::Util
// Type: ::ITokenReader
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// CS Name: ::Tokenizer::ITokenReader*
class CORDL_TYPE __Tokenizer__ITokenReader {
public:
  // Declarations
  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Read();

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__ITokenReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Tokenizer__ITokenReader(__Tokenizer__ITokenReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__ITokenReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Tokenizer__ITokenReader(__Tokenizer__ITokenReader const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Util
// Type: ::StreamTokenReader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// CS Name: ::Tokenizer::StreamTokenReader*
class CORDL_TYPE __Tokenizer__StreamTokenReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NumCharEncountered)) int32_t NumCharEncountered;

  /// @brief Field _in, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__in, put = __cordl_internal_set__in))::System::IO::StreamReader* _in;

  /// @brief Field _numCharRead, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__numCharRead, put = __cordl_internal_set__numCharRead)) int32_t _numCharRead;

  /// @brief Convert operator to "::System::Security::Util::__Tokenizer__ITokenReader"
  constexpr operator ::System::Security::Util::__Tokenizer__ITokenReader*() noexcept;

  static inline ::System::Security::Util::__Tokenizer__StreamTokenReader* New_ctor(::System::IO::StreamReader* input);

  /// @brief Method Read, addr 0x25ab810, size 0x3c, virtual true, abstract: false, final false
  inline int32_t Read();

  constexpr ::System::IO::StreamReader*& __cordl_internal_get__in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __cordl_internal_get__in() const;

  constexpr int32_t const& __cordl_internal_get__numCharRead() const;

  constexpr int32_t& __cordl_internal_get__numCharRead();

  constexpr void __cordl_internal_set__in(::System::IO::StreamReader* value);

  constexpr void __cordl_internal_set__numCharRead(int32_t value);

  /// @brief Method .ctor, addr 0x25ab404, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::StreamReader* input);

  /// @brief Method get_NumCharEncountered, addr 0x25ab84c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NumCharEncountered();

  /// @brief Convert to "::System::Security::Util::__Tokenizer__ITokenReader"
  constexpr ::System::Security::Util::__Tokenizer__ITokenReader* i___System__Security__Util____Tokenizer__ITokenReader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tokenizer__StreamTokenReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StreamTokenReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Tokenizer__StreamTokenReader(__Tokenizer__StreamTokenReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StreamTokenReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Tokenizer__StreamTokenReader(__Tokenizer__StreamTokenReader const&) = delete;

  /// @brief Field _in, offset: 0x10, size: 0x8, def value: None
  ::System::IO::StreamReader* ____in;

  /// @brief Field _numCharRead, offset: 0x18, size: 0x4, def value: None
  int32_t ____numCharRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Util::__Tokenizer__StreamTokenReader, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StreamTokenReader, ____in) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Util::__Tokenizer__StreamTokenReader, ____numCharRead) == 0x18, "Offset mismatch!");

} // namespace System::Security::Util
// Type: System.Security.Util::Tokenizer
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Util {
// Is value type: false
// CS Name: ::System.Security.Util::Tokenizer*
class CORDL_TYPE Tokenizer : public ::System::Object {
public:
  // Declarations
  using ITokenReader = ::System::Security::Util::__Tokenizer__ITokenReader;

  using StreamTokenReader = ::System::Security::Util::__Tokenizer__StreamTokenReader;

  using StringMaker = ::System::Security::Util::__Tokenizer__StringMaker;

  using TokenSource = ::System::Security::Util::__Tokenizer__TokenSource;

  /// @brief Field LineNo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_LineNo, put = __cordl_internal_set_LineNo)) int32_t LineNo;

  /// @brief Field _inBytes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__inBytes, put = __cordl_internal_set__inBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> _inBytes;

  /// @brief Field _inChars, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inChars, put = __cordl_internal_set__inChars))::ArrayW<char16_t, ::Array<char16_t>*> _inChars;

  /// @brief Field _inIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__inIndex, put = __cordl_internal_set__inIndex)) int32_t _inIndex;

  /// @brief Field _inNestedIndex, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__inNestedIndex, put = __cordl_internal_set__inNestedIndex)) int32_t _inNestedIndex;

  /// @brief Field _inNestedSize, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__inNestedSize, put = __cordl_internal_set__inNestedSize)) int32_t _inNestedSize;

  /// @brief Field _inNestedString, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__inNestedString, put = __cordl_internal_set__inNestedString))::StringW _inNestedString;

  /// @brief Field _inProcessingTag, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__inProcessingTag, put = __cordl_internal_set__inProcessingTag)) int32_t _inProcessingTag;

  /// @brief Field _inSavedCharacter, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__inSavedCharacter, put = __cordl_internal_set__inSavedCharacter)) int32_t _inSavedCharacter;

  /// @brief Field _inSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__inSize, put = __cordl_internal_set__inSize)) int32_t _inSize;

  /// @brief Field _inString, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__inString, put = __cordl_internal_set__inString))::StringW _inString;

  /// @brief Field _inTokenReader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__inTokenReader, put = __cordl_internal_set__inTokenReader))::System::Security::Util::__Tokenizer__ITokenReader* _inTokenReader;

  /// @brief Field _inTokenSource, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__inTokenSource, put = __cordl_internal_set__inTokenSource))::System::Security::Util::__Tokenizer__TokenSource _inTokenSource;

  /// @brief Field _maker, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__maker, put = __cordl_internal_set__maker))::System::Security::Util::__Tokenizer__StringMaker* _maker;

  /// @brief Field _replaceStrings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__replaceStrings, put = __cordl_internal_set__replaceStrings))::ArrayW<::StringW, ::Array<::StringW>*> _replaceStrings;

  /// @brief Field _searchStrings, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__searchStrings, put = __cordl_internal_set__searchStrings))::ArrayW<::StringW, ::Array<::StringW>*> _searchStrings;

  /// @brief Method BasicInitialization, addr 0x25ab330, size 0x78, virtual false, abstract: false, final false
  inline void BasicInitialization();

  /// @brief Method ChangeFormat, addr 0x25aab74, size 0x224, virtual false, abstract: false, final false
  inline void ChangeFormat(::System::Text::Encoding* encoding);

  /// @brief Method GetStringToken, addr 0x25ab518, size 0x18, virtual false, abstract: false, final false
  inline ::StringW GetStringToken();

  /// @brief Method GetTokens, addr 0x25aa334, size 0x7e0, virtual false, abstract: false, final false
  inline void GetTokens(::System::Security::Util::TokenizerStream* stream, int32_t maxNum, bool endAfterKet);

  static inline ::System::Security::Util::Tokenizer* New_ctor(::StringW input);

  /// @brief Method Recycle, addr 0x25ab3a8, size 0x5c, virtual false, abstract: false, final false
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

  constexpr ::System::Security::Util::__Tokenizer__ITokenReader*& __cordl_internal_get__inTokenReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__ITokenReader*> const& __cordl_internal_get__inTokenReader() const;

  constexpr ::System::Security::Util::__Tokenizer__TokenSource const& __cordl_internal_get__inTokenSource() const;

  constexpr ::System::Security::Util::__Tokenizer__TokenSource& __cordl_internal_get__inTokenSource();

  constexpr ::System::Security::Util::__Tokenizer__StringMaker*& __cordl_internal_get__maker();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__StringMaker*> const& __cordl_internal_get__maker() const;

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

  constexpr void __cordl_internal_set__inTokenReader(::System::Security::Util::__Tokenizer__ITokenReader* value);

  constexpr void __cordl_internal_set__inTokenSource(::System::Security::Util::__Tokenizer__TokenSource value);

  constexpr void __cordl_internal_set__maker(::System::Security::Util::__Tokenizer__StringMaker* value);

  constexpr void __cordl_internal_set__replaceStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__searchStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x25ab2e8, size 0x48, virtual false, abstract: false, final false
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
  ::System::Security::Util::__Tokenizer__TokenSource ____inTokenSource;

  /// @brief Field _inTokenReader, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Util::__Tokenizer__ITokenReader* ____inTokenReader;

  /// @brief Field _maker, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Util::__Tokenizer__StringMaker* ____maker;

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
static_assert(::cordl_internals::size_check_v<::System::Security::Util::Tokenizer, 0x70>, "Size mismatch!");

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

} // namespace System::Security::Util
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::__Tokenizer__TokenSource, "System.Security.Util", "Tokenizer/TokenSource");
NEED_NO_BOX(::System::Security::Util::Tokenizer);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::Tokenizer*, "System.Security.Util", "Tokenizer");
NEED_NO_BOX(::System::Security::Util::__Tokenizer__ITokenReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::__Tokenizer__ITokenReader*, "System.Security.Util", "Tokenizer/ITokenReader");
NEED_NO_BOX(::System::Security::Util::__Tokenizer__StreamTokenReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::__Tokenizer__StreamTokenReader*, "System.Security.Util", "Tokenizer/StreamTokenReader");
NEED_NO_BOX(::System::Security::Util::__Tokenizer__StringMaker);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::__Tokenizer__StringMaker*, "System.Security.Util", "Tokenizer/StringMaker");
