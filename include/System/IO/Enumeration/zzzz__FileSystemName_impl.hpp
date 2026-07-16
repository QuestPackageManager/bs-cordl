#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemName.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemName_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.TranslateWin32Expression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Enumeration::FileSystemName::TranslateWin32Expression)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5c215f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(), { "TranslateWin32Expression", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.MatchesWin32Expression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool)>(
    &::System::IO::Enumeration::FileSystemName::MatchesWin32Expression)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c21c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(),
                            { "MatchesWin32Expression", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.MatchesSimpleExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool)>(
    &::System::IO::Enumeration::FileSystemName::MatchesSimpleExpression)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c21bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(),
                         { "MatchesSimpleExpression", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Enumeration::FileSystemName.MatchPattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, bool, bool)>(
    &::System::IO::Enumeration::FileSystemName::MatchPattern)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x5c22548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(),
            { "MatchPattern", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::IO::Enumeration::FileSystemName::setStaticF_s_wildcardChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_wildcardChars", ::System::IO::Enumeration::FileSystemName*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Enumeration::FileSystemName::getStaticF_s_wildcardChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_wildcardChars", ::System::IO::Enumeration::FileSystemName*>();
}
inline void System::IO::Enumeration::FileSystemName::setStaticF_s_simpleWildcardChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_simpleWildcardChars", ::System::IO::Enumeration::FileSystemName*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::IO::Enumeration::FileSystemName::getStaticF_s_simpleWildcardChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_simpleWildcardChars", ::System::IO::Enumeration::FileSystemName*>();
}
inline ::StringW System::IO::Enumeration::FileSystemName::TranslateWin32Expression(::StringW expression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(), { "TranslateWin32Expression", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, expression);
}
inline bool System::IO::Enumeration::FileSystemName::MatchesWin32Expression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(),
                          { "MatchesWin32Expression", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expression, name, ignoreCase);
}
inline bool System::IO::Enumeration::FileSystemName::MatchesSimpleExpression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(),
                          { "MatchesSimpleExpression", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expression, name, ignoreCase);
}
inline bool System::IO::Enumeration::FileSystemName::MatchPattern(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase, bool useExtendedWildcards) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::IO::Enumeration::FileSystemName*>(),
          { "MatchPattern", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expression, name, ignoreCase, useExtendedWildcards);
}
// Ctor Parameters []
constexpr ::System::IO::Enumeration::FileSystemName::FileSystemName() {}
