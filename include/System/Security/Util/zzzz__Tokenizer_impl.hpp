#pragma once
// IWYU pragma private; include "System/Security/Util/Tokenizer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Security/Util/zzzz__TokenizerStream_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Util::Tokenizer_TokenSource::Tokenizer_TokenSource(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Security::Util::Tokenizer_TokenSource::Tokenizer_TokenSource() {}
constexpr ::System::Security::Util::Tokenizer_TokenSource System::Security::Util::Tokenizer_TokenSource::UnicodeByteArray{ static_cast<int32_t>(0x0) };
constexpr ::System::Security::Util::Tokenizer_TokenSource System::Security::Util::Tokenizer_TokenSource::UTF8ByteArray{ static_cast<int32_t>(0x1) };
constexpr ::System::Security::Util::Tokenizer_TokenSource System::Security::Util::Tokenizer_TokenSource::ASCIIByteArray{ static_cast<int32_t>(0x2) };
constexpr ::System::Security::Util::Tokenizer_TokenSource System::Security::Util::Tokenizer_TokenSource::CharArray{ static_cast<int32_t>(0x3) };
constexpr ::System::Security::Util::Tokenizer_TokenSource System::Security::Util::Tokenizer_TokenSource::String{ static_cast<int32_t>(0x4) };
constexpr ::System::Security::Util::Tokenizer_TokenSource System::Security::Util::Tokenizer_TokenSource::NestedStrings{ static_cast<int32_t>(0x5) };
constexpr ::System::Security::Util::Tokenizer_TokenSource System::Security::Util::Tokenizer_TokenSource::Other{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StringMaker.HashString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::System::Security::Util::Tokenizer_StringMaker::HashString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5af1a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(), { "HashString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StringMaker.HashCharArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<char16_t>, int32_t)>(&::System::Security::Util::Tokenizer_StringMaker::HashCharArray)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5af1aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(),
                                                                                           { "HashCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StringMaker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::Tokenizer_StringMaker::*)()>(&::System::Security::Util::Tokenizer_StringMaker::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5af1afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StringMaker.CompareStringAndChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Util::Tokenizer_StringMaker::*)(::StringW, ::ArrayW<char16_t>, int32_t)>(
    &::System::Security::Util::Tokenizer_StringMaker::CompareStringAndChars)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5af1b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(),
                                                             { "CompareStringAndChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StringMaker.MakeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Util::Tokenizer_StringMaker::*)()>(&::System::Security::Util::Tokenizer_StringMaker::MakeString)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5aec520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(), { "MakeString", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get_aStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aStrings;
}
constexpr ::ArrayW<::StringW> const& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get_aStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aStrings;
}
constexpr void System::Security::Util::Tokenizer_StringMaker::__cordl_internal_set_aStrings(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aStrings = value;
}
constexpr uint32_t& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get_cStringsMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsMax;
}
constexpr uint32_t const& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get_cStringsMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsMax;
}
constexpr void System::Security::Util::Tokenizer_StringMaker::__cordl_internal_set_cStringsMax(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cStringsMax = value;
}
constexpr uint32_t& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get_cStringsUsed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsUsed;
}
constexpr uint32_t const& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get_cStringsUsed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cStringsUsed;
}
constexpr void System::Security::Util::Tokenizer_StringMaker::__cordl_internal_set_cStringsUsed(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cStringsUsed = value;
}
constexpr ::System::Text::StringBuilder*& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get__outStringBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outStringBuilder;
}
constexpr ::System::Text::StringBuilder* const& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get__outStringBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outStringBuilder;
}
constexpr void System::Security::Util::Tokenizer_StringMaker::__cordl_internal_set__outStringBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outStringBuilder = value;
}
constexpr ::ArrayW<char16_t>& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get__outChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outChars;
}
constexpr ::ArrayW<char16_t> const& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get__outChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outChars;
}
constexpr void System::Security::Util::Tokenizer_StringMaker::__cordl_internal_set__outChars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outChars = value;
}
constexpr int32_t& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get__outIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outIndex;
}
constexpr int32_t const& System::Security::Util::Tokenizer_StringMaker::__cordl_internal_get__outIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outIndex;
}
constexpr void System::Security::Util::Tokenizer_StringMaker::__cordl_internal_set__outIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outIndex = value;
}
inline uint32_t System::Security::Util::Tokenizer_StringMaker::HashString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(), { "HashString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, str);
}
inline uint32_t System::Security::Util::Tokenizer_StringMaker::HashCharArray(::ArrayW<char16_t> a, int32_t l) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(),
                                                                                         { "HashCharArray", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, a, l);
}
inline void System::Security::Util::Tokenizer_StringMaker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Security::Util::Tokenizer_StringMaker::CompareStringAndChars(::StringW str, ::ArrayW<char16_t> a, int32_t l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(),
                                                           { "CompareStringAndChars", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, a, l);
}
inline ::StringW System::Security::Util::Tokenizer_StringMaker::MakeString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StringMaker*>(), { "MakeString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Util::Tokenizer_StringMaker* System::Security::Util::Tokenizer_StringMaker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Util::Tokenizer_StringMaker*>());
}
// Ctor Parameters []
constexpr ::System::Security::Util::Tokenizer_StringMaker::Tokenizer_StringMaker() {}
//  Writing Method size for method: ::System::Security::Util::Tokenizer_ITokenReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Util::Tokenizer_ITokenReader::*)()>(&::System::Security::Util::Tokenizer_ITokenReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_ITokenReader*>(), { ::i2c::class_of<::System::Security::Util::Tokenizer_ITokenReader*>(), 0 }));
    return ___internal_method;
  }
};
inline int32_t System::Security::Util::Tokenizer_ITokenReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Util::Tokenizer_ITokenReader*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StreamTokenReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::Tokenizer_StreamTokenReader::*)(::System::IO::StreamReader*)>(
    &::System::Security::Util::Tokenizer_StreamTokenReader::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5af187c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StreamTokenReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::StreamReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StreamTokenReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Util::Tokenizer_StreamTokenReader::*)()>(&::System::Security::Util::Tokenizer_StreamTokenReader::Read)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5af1c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StreamTokenReader*>(),
                                                                                          { ::i2c::class_of<::System::Security::Util::Tokenizer_StreamTokenReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer_StreamTokenReader.get_NumCharEncountered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Util::Tokenizer_StreamTokenReader::*)()>(
    &::System::Security::Util::Tokenizer_StreamTokenReader::get_NumCharEncountered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af1c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StreamTokenReader*>(), { "get_NumCharEncountered", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::StreamReader*& System::Security::Util::Tokenizer_StreamTokenReader::__cordl_internal_get__in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr ::System::IO::StreamReader* const& System::Security::Util::Tokenizer_StreamTokenReader::__cordl_internal_get__in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr void System::Security::Util::Tokenizer_StreamTokenReader::__cordl_internal_set__in(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____in = value;
}
constexpr int32_t& System::Security::Util::Tokenizer_StreamTokenReader::__cordl_internal_get__numCharRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numCharRead;
}
constexpr int32_t const& System::Security::Util::Tokenizer_StreamTokenReader::__cordl_internal_get__numCharRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numCharRead;
}
constexpr void System::Security::Util::Tokenizer_StreamTokenReader::__cordl_internal_set__numCharRead(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numCharRead = value;
}
inline void System::Security::Util::Tokenizer_StreamTokenReader::_ctor(::System::IO::StreamReader* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StreamTokenReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::StreamReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline int32_t System::Security::Util::Tokenizer_StreamTokenReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Util::Tokenizer_StreamTokenReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Util::Tokenizer_StreamTokenReader::get_NumCharEncountered() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer_StreamTokenReader*>(), { "get_NumCharEncountered", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::Util::Tokenizer_StreamTokenReader* System::Security::Util::Tokenizer_StreamTokenReader::New_ctor(::System::IO::StreamReader* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Util::Tokenizer_StreamTokenReader*>(input));
}
/// @brief Convert operator to "::System::Security::Util::Tokenizer_ITokenReader"
constexpr System::Security::Util::Tokenizer_StreamTokenReader::operator ::System::Security::Util::Tokenizer_ITokenReader*() noexcept {
  return static_cast<::System::Security::Util::Tokenizer_ITokenReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Util::Tokenizer_ITokenReader"
constexpr ::System::Security::Util::Tokenizer_ITokenReader* System::Security::Util::Tokenizer_StreamTokenReader::i___System__Security__Util__Tokenizer_ITokenReader() noexcept {
  return static_cast<::System::Security::Util::Tokenizer_ITokenReader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Util::Tokenizer_StreamTokenReader::Tokenizer_StreamTokenReader() {}
//  Writing Method size for method: ::System::Security::Util::Tokenizer.BasicInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::BasicInitialization)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5af17a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "BasicInitialization", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.Recycle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::Recycle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5af1820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "Recycle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::Tokenizer::*)(::StringW)>(&::System::Security::Util::Tokenizer::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5af1768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.ChangeFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::Tokenizer::*)(::System::Text::Encoding*)>(&::System::Security::Util::Tokenizer::ChangeFormat)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5af1030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "ChangeFormat", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.GetTokens
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Util::Tokenizer::*)(::System::Security::Util::TokenizerStream*, int32_t, bool)>(
    &::System::Security::Util::Tokenizer::GetTokens)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x5af07f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(),
                                                { "GetTokens", {}, { ::i2c::type_of<::System::Security::Util::TokenizerStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.GetStringToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::GetStringToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5af1978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "GetStringToken", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Util::Tokenizer::__cordl_internal_get_LineNo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNo;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__cordl_internal_get_LineNo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LineNo;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set_LineNo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LineNo = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__cordl_internal_get__inProcessingTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inProcessingTag;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__cordl_internal_get__inProcessingTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inProcessingTag;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inProcessingTag(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inProcessingTag = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Util::Tokenizer::__cordl_internal_get__inBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inBytes;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Util::Tokenizer::__cordl_internal_get__inBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inBytes;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inBytes = value;
}
constexpr ::ArrayW<char16_t>& System::Security::Util::Tokenizer::__cordl_internal_get__inChars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inChars;
}
constexpr ::ArrayW<char16_t> const& System::Security::Util::Tokenizer::__cordl_internal_get__inChars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inChars;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inChars(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inChars = value;
}
constexpr ::StringW& System::Security::Util::Tokenizer::__cordl_internal_get__inString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inString;
}
constexpr ::StringW const& System::Security::Util::Tokenizer::__cordl_internal_get__inString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inString;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inString = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__cordl_internal_get__inIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inIndex;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__cordl_internal_get__inIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inIndex;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inIndex = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__cordl_internal_get__inSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSize;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__cordl_internal_get__inSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSize;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inSize = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__cordl_internal_get__inSavedCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSavedCharacter;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__cordl_internal_get__inSavedCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inSavedCharacter;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inSavedCharacter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inSavedCharacter = value;
}
constexpr ::System::Security::Util::Tokenizer_TokenSource& System::Security::Util::Tokenizer::__cordl_internal_get__inTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenSource;
}
constexpr ::System::Security::Util::Tokenizer_TokenSource const& System::Security::Util::Tokenizer::__cordl_internal_get__inTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenSource;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inTokenSource(::System::Security::Util::Tokenizer_TokenSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inTokenSource = value;
}
constexpr ::System::Security::Util::Tokenizer_ITokenReader*& System::Security::Util::Tokenizer::__cordl_internal_get__inTokenReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenReader;
}
constexpr ::System::Security::Util::Tokenizer_ITokenReader* const& System::Security::Util::Tokenizer::__cordl_internal_get__inTokenReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inTokenReader;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inTokenReader(::System::Security::Util::Tokenizer_ITokenReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inTokenReader = value;
}
constexpr ::System::Security::Util::Tokenizer_StringMaker*& System::Security::Util::Tokenizer::__cordl_internal_get__maker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr ::System::Security::Util::Tokenizer_StringMaker* const& System::Security::Util::Tokenizer::__cordl_internal_get__maker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maker;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__maker(::System::Security::Util::Tokenizer_StringMaker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maker = value;
}
constexpr ::ArrayW<::StringW>& System::Security::Util::Tokenizer::__cordl_internal_get__searchStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchStrings;
}
constexpr ::ArrayW<::StringW> const& System::Security::Util::Tokenizer::__cordl_internal_get__searchStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchStrings;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__searchStrings(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____searchStrings = value;
}
constexpr ::ArrayW<::StringW>& System::Security::Util::Tokenizer::__cordl_internal_get__replaceStrings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replaceStrings;
}
constexpr ::ArrayW<::StringW> const& System::Security::Util::Tokenizer::__cordl_internal_get__replaceStrings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replaceStrings;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__replaceStrings(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____replaceStrings = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__cordl_internal_get__inNestedIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedIndex;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__cordl_internal_get__inNestedIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedIndex;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inNestedIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inNestedIndex = value;
}
constexpr int32_t& System::Security::Util::Tokenizer::__cordl_internal_get__inNestedSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedSize;
}
constexpr int32_t const& System::Security::Util::Tokenizer::__cordl_internal_get__inNestedSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedSize;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inNestedSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inNestedSize = value;
}
constexpr ::StringW& System::Security::Util::Tokenizer::__cordl_internal_get__inNestedString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedString;
}
constexpr ::StringW const& System::Security::Util::Tokenizer::__cordl_internal_get__inNestedString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inNestedString;
}
constexpr void System::Security::Util::Tokenizer::__cordl_internal_set__inNestedString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inNestedString = value;
}
inline void System::Security::Util::Tokenizer::BasicInitialization() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "BasicInitialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Util::Tokenizer::Recycle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "Recycle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Util::Tokenizer::_ctor(::StringW input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void System::Security::Util::Tokenizer::ChangeFormat(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "ChangeFormat", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void System::Security::Util::Tokenizer::GetTokens(::System::Security::Util::TokenizerStream* stream, int32_t maxNum, bool endAfterKet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(),
                                                           { "GetTokens", {}, { ::i2c::type_of<::System::Security::Util::TokenizerStream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, maxNum, endAfterKet);
}
inline ::StringW System::Security::Util::Tokenizer::GetStringToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Util::Tokenizer*>(), { "GetStringToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Util::Tokenizer* System::Security::Util::Tokenizer::New_ctor(::StringW input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Util::Tokenizer*>(input));
}
// Ctor Parameters []
constexpr ::System::Security::Util::Tokenizer::Tokenizer() {}
