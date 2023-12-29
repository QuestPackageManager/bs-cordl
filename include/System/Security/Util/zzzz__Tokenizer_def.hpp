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
namespace System::Text {
class Encoding;
}
namespace System::Security::Util {
struct __Tokenizer__TokenSource;
}
namespace System::Security::Util {
class __Tokenizer__StreamTokenReader;
}
namespace System::Security::Util {
class __Tokenizer__StringMaker;
}
namespace System::Security::Util {
class TokenizerStream;
}
namespace System::Security::Util {
class __Tokenizer__ITokenReader;
}
namespace System::IO {
class StreamReader;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2888))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Tokenizer__TokenSource(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tokenizer__TokenSource();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UnicodeByteArray value: static_cast<int32_t>(0x0)
  static ::System::Security::Util::__Tokenizer__TokenSource const UnicodeByteArray;

  /// @brief Field UTF8ByteArray value: static_cast<int32_t>(0x1)
  static ::System::Security::Util::__Tokenizer__TokenSource const UTF8ByteArray;

  /// @brief Field ASCIIByteArray value: static_cast<int32_t>(0x2)
  static ::System::Security::Util::__Tokenizer__TokenSource const ASCIIByteArray;

  /// @brief Field CharArray value: static_cast<int32_t>(0x3)
  static ::System::Security::Util::__Tokenizer__TokenSource const CharArray;

  /// @brief Field String value: static_cast<int32_t>(0x4)
  static ::System::Security::Util::__Tokenizer__TokenSource const String;

  /// @brief Field NestedStrings value: static_cast<int32_t>(0x5)
  static ::System::Security::Util::__Tokenizer__TokenSource const NestedStrings;

  /// @brief Field Other value: static_cast<int32_t>(0x6)
  static ::System::Security::Util::__Tokenizer__TokenSource const Other;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2889))
// CS Name: ::Tokenizer::StringMaker*
class CORDL_TYPE __Tokenizer__StringMaker : public ::System::Object {
public:
  // Declarations
  /// @brief Field aStrings, offset 0x10, size 0x8
  __declspec(property(get = __get_aStrings, put = __set_aStrings))::ArrayW<::StringW, ::Array<::StringW>*> aStrings;

  /// @brief Field cStringsMax, offset 0x18, size 0x4
  __declspec(property(get = __get_cStringsMax, put = __set_cStringsMax)) uint32_t cStringsMax;

  /// @brief Field cStringsUsed, offset 0x1c, size 0x4
  __declspec(property(get = __get_cStringsUsed, put = __set_cStringsUsed)) uint32_t cStringsUsed;

  /// @brief Field _outStringBuilder, offset 0x20, size 0x8
  __declspec(property(get = __get__outStringBuilder, put = __set__outStringBuilder))::System::Text::StringBuilder* _outStringBuilder;

  /// @brief Field _outChars, offset 0x28, size 0x8
  __declspec(property(get = __get__outChars, put = __set__outChars))::ArrayW<char16_t, ::Array<char16_t>*> _outChars;

  /// @brief Field _outIndex, offset 0x30, size 0x4
  __declspec(property(get = __get__outIndex, put = __set__outIndex)) int32_t _outIndex;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_aStrings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_aStrings() const;

  constexpr void __set_aStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr uint32_t& __get_cStringsMax();

  constexpr uint32_t const& __get_cStringsMax() const;

  constexpr void __set_cStringsMax(uint32_t value);

  constexpr uint32_t& __get_cStringsUsed();

  constexpr uint32_t const& __get_cStringsUsed() const;

  constexpr void __set_cStringsUsed(uint32_t value);

  constexpr ::System::Text::StringBuilder*& __get__outStringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__outStringBuilder() const;

  constexpr void __set__outStringBuilder(::System::Text::StringBuilder* value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__outChars();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__outChars() const;

  constexpr void __set__outChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get__outIndex();

  constexpr int32_t const& __get__outIndex() const;

  constexpr void __set__outIndex(int32_t value);

  /// @brief Method HashString addr 0x22fc7ac size 0x6c virtual false final false
  static inline uint32_t HashString(::StringW str);

  /// @brief Method HashCharArray addr 0x22fc818 size 0x5c virtual false final false
  static inline uint32_t HashCharArray(::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l);

  static inline ::System::Security::Util::__Tokenizer__StringMaker* New_ctor();

  /// @brief Method .ctor addr 0x22fc874 size 0x94 virtual false final false
  inline void _ctor();

  /// @brief Method CompareStringAndChars addr 0x22fc908 size 0x94 virtual false final false
  inline bool CompareStringAndChars(::StringW str, ::ArrayW<char16_t, ::Array<char16_t>*> a, int32_t l);

  /// @brief Method MakeString addr 0x22f6e7c size 0x26c virtual false final false
  inline ::StringW MakeString();

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StringMaker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Tokenizer__StringMaker(__Tokenizer__StringMaker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StringMaker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Tokenizer__StringMaker(__Tokenizer__StringMaker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tokenizer__StringMaker();

public:
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2890))
// CS Name: ::Tokenizer::ITokenReader*
class CORDL_TYPE __Tokenizer__ITokenReader {
public:
  // Declarations
  /// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual true final false
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2891))
// CS Name: ::Tokenizer::StreamTokenReader*
class CORDL_TYPE __Tokenizer__StreamTokenReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field _in, offset 0x10, size 0x8
  __declspec(property(get = __get__in, put = __set__in))::System::IO::StreamReader* _in;

  /// @brief Field _numCharRead, offset 0x18, size 0x4
  __declspec(property(get = __get__numCharRead, put = __set__numCharRead)) int32_t _numCharRead;

  __declspec(property(get = get_NumCharEncountered)) int32_t NumCharEncountered;

  /// @brief Convert operator to "::System::Security::Util::__Tokenizer__ITokenReader"
  constexpr operator ::System::Security::Util::__Tokenizer__ITokenReader*() noexcept;

  constexpr ::System::IO::StreamReader*& __get__in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __get__in() const;

  constexpr void __set__in(::System::IO::StreamReader* value);

  constexpr int32_t& __get__numCharRead();

  constexpr int32_t const& __get__numCharRead() const;

  constexpr void __set__numCharRead(int32_t value);

  static inline ::System::Security::Util::__Tokenizer__StreamTokenReader* New_ctor(::System::IO::StreamReader* input);

  /// @brief Method .ctor addr 0x22fc590 size 0x2c virtual false final false
  inline void _ctor(::System::IO::StreamReader* input);

  /// @brief Method Read addr 0x22fc99c size 0x3c virtual true final false
  inline int32_t Read();

  /// @brief Method get_NumCharEncountered addr 0x22fc9d8 size 0x8 virtual false final false
  inline int32_t get_NumCharEncountered();

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StreamTokenReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Tokenizer__StreamTokenReader(__Tokenizer__StreamTokenReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Tokenizer__StreamTokenReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Tokenizer__StreamTokenReader(__Tokenizer__StreamTokenReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tokenizer__StreamTokenReader();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2888)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2892))
// CS Name: ::System.Security.Util::Tokenizer*
class CORDL_TYPE Tokenizer : public ::System::Object {
public:
  // Declarations
  using StreamTokenReader = ::System::Security::Util::__Tokenizer__StreamTokenReader;

  using ITokenReader = ::System::Security::Util::__Tokenizer__ITokenReader;

  using StringMaker = ::System::Security::Util::__Tokenizer__StringMaker;

  using TokenSource = ::System::Security::Util::__Tokenizer__TokenSource;

  /// @brief Field LineNo, offset 0x10, size 0x4
  __declspec(property(get = __get_LineNo, put = __set_LineNo)) int32_t LineNo;

  /// @brief Field _inProcessingTag, offset 0x14, size 0x4
  __declspec(property(get = __get__inProcessingTag, put = __set__inProcessingTag)) int32_t _inProcessingTag;

  /// @brief Field _inBytes, offset 0x18, size 0x8
  __declspec(property(get = __get__inBytes, put = __set__inBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> _inBytes;

  /// @brief Field _inChars, offset 0x20, size 0x8
  __declspec(property(get = __get__inChars, put = __set__inChars))::ArrayW<char16_t, ::Array<char16_t>*> _inChars;

  /// @brief Field _inString, offset 0x28, size 0x8
  __declspec(property(get = __get__inString, put = __set__inString))::StringW _inString;

  /// @brief Field _inIndex, offset 0x30, size 0x4
  __declspec(property(get = __get__inIndex, put = __set__inIndex)) int32_t _inIndex;

  /// @brief Field _inSize, offset 0x34, size 0x4
  __declspec(property(get = __get__inSize, put = __set__inSize)) int32_t _inSize;

  /// @brief Field _inSavedCharacter, offset 0x38, size 0x4
  __declspec(property(get = __get__inSavedCharacter, put = __set__inSavedCharacter)) int32_t _inSavedCharacter;

  /// @brief Field _inTokenSource, offset 0x3c, size 0x4
  __declspec(property(get = __get__inTokenSource, put = __set__inTokenSource))::System::Security::Util::__Tokenizer__TokenSource _inTokenSource;

  /// @brief Field _inTokenReader, offset 0x40, size 0x8
  __declspec(property(get = __get__inTokenReader, put = __set__inTokenReader))::System::Security::Util::__Tokenizer__ITokenReader* _inTokenReader;

  /// @brief Field _maker, offset 0x48, size 0x8
  __declspec(property(get = __get__maker, put = __set__maker))::System::Security::Util::__Tokenizer__StringMaker* _maker;

  /// @brief Field _searchStrings, offset 0x50, size 0x8
  __declspec(property(get = __get__searchStrings, put = __set__searchStrings))::ArrayW<::StringW, ::Array<::StringW>*> _searchStrings;

  /// @brief Field _replaceStrings, offset 0x58, size 0x8
  __declspec(property(get = __get__replaceStrings, put = __set__replaceStrings))::ArrayW<::StringW, ::Array<::StringW>*> _replaceStrings;

  /// @brief Field _inNestedIndex, offset 0x60, size 0x4
  __declspec(property(get = __get__inNestedIndex, put = __set__inNestedIndex)) int32_t _inNestedIndex;

  /// @brief Field _inNestedSize, offset 0x64, size 0x4
  __declspec(property(get = __get__inNestedSize, put = __set__inNestedSize)) int32_t _inNestedSize;

  /// @brief Field _inNestedString, offset 0x68, size 0x8
  __declspec(property(get = __get__inNestedString, put = __set__inNestedString))::StringW _inNestedString;

  constexpr int32_t& __get_LineNo();

  constexpr int32_t const& __get_LineNo() const;

  constexpr void __set_LineNo(int32_t value);

  constexpr int32_t& __get__inProcessingTag();

  constexpr int32_t const& __get__inProcessingTag() const;

  constexpr void __set__inProcessingTag(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__inBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__inBytes() const;

  constexpr void __set__inBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__inChars();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__inChars() const;

  constexpr void __set__inChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::StringW& __get__inString();

  constexpr ::StringW const& __get__inString() const;

  constexpr void __set__inString(::StringW value);

  constexpr int32_t& __get__inIndex();

  constexpr int32_t const& __get__inIndex() const;

  constexpr void __set__inIndex(int32_t value);

  constexpr int32_t& __get__inSize();

  constexpr int32_t const& __get__inSize() const;

  constexpr void __set__inSize(int32_t value);

  constexpr int32_t& __get__inSavedCharacter();

  constexpr int32_t const& __get__inSavedCharacter() const;

  constexpr void __set__inSavedCharacter(int32_t value);

  constexpr ::System::Security::Util::__Tokenizer__TokenSource& __get__inTokenSource();

  constexpr ::System::Security::Util::__Tokenizer__TokenSource const& __get__inTokenSource() const;

  constexpr void __set__inTokenSource(::System::Security::Util::__Tokenizer__TokenSource value);

  constexpr ::System::Security::Util::__Tokenizer__ITokenReader*& __get__inTokenReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__ITokenReader*> const& __get__inTokenReader() const;

  constexpr void __set__inTokenReader(::System::Security::Util::__Tokenizer__ITokenReader* value);

  constexpr ::System::Security::Util::__Tokenizer__StringMaker*& __get__maker();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__StringMaker*> const& __get__maker() const;

  constexpr void __set__maker(::System::Security::Util::__Tokenizer__StringMaker* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__searchStrings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__searchStrings() const;

  constexpr void __set__searchStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__replaceStrings();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__replaceStrings() const;

  constexpr void __set__replaceStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get__inNestedIndex();

  constexpr int32_t const& __get__inNestedIndex() const;

  constexpr void __set__inNestedIndex(int32_t value);

  constexpr int32_t& __get__inNestedSize();

  constexpr int32_t const& __get__inNestedSize() const;

  constexpr void __set__inNestedSize(int32_t value);

  constexpr ::StringW& __get__inNestedString();

  constexpr ::StringW const& __get__inNestedString() const;

  constexpr void __set__inNestedString(::StringW value);

  /// @brief Method BasicInitialization addr 0x22fc4bc size 0x78 virtual false final false
  inline void BasicInitialization();

  /// @brief Method Recycle addr 0x22fc534 size 0x5c virtual false final false
  inline void Recycle();

  static inline ::System::Security::Util::Tokenizer* New_ctor(::StringW input);

  /// @brief Method .ctor addr 0x22fc474 size 0x48 virtual false final false
  inline void _ctor(::StringW input);

  /// @brief Method ChangeFormat addr 0x22fbd00 size 0x224 virtual false final false
  inline void ChangeFormat(::System::Text::Encoding* encoding);

  /// @brief Method GetTokens addr 0x22fb4c0 size 0x7e0 virtual false final false
  inline void GetTokens(::System::Security::Util::TokenizerStream* stream, int32_t maxNum, bool endAfterKet);

  /// @brief Method GetStringToken addr 0x22fc6a4 size 0x18 virtual false final false
  inline ::StringW GetStringToken();

  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tokenizer(Tokenizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tokenizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tokenizer(Tokenizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tokenizer();

public:
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
