#pragma once
// IWYU pragma private; include "System/IO/PathInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__PathInternal_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::PathInternal.GetRootLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::GetRootLength)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bf3450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "GetRootLength", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsDirectorySeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::IO::PathInternal::IsDirectorySeparator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bf341c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "IsDirectorySeparator", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.EndsInDirectorySeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::EndsInDirectorySeparator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5bf3388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "EndsInDirectorySeparator", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.StartsWithDirectorySeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::StartsWithDirectorySeparator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bf7d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "StartsWithDirectorySeparator", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.TrimEndingDirectorySeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::IO::PathInternal::TrimEndingDirectorySeparator)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5bf2b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "TrimEndingDirectorySeparator", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.TrimEndingDirectorySeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::TrimEndingDirectorySeparator)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5bf3f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "TrimEndingDirectorySeparator", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::IO::PathInternal::IsRoot)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5bf7dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "IsRoot", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.get_IsCaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::IO::PathInternal::get_IsCaseSensitive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bf7e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "get_IsCaseSensitive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.GetIsCaseSensitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::IO::PathInternal::GetIsCaseSensitive)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5bf7ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "GetIsCaseSensitive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PathInternal.IsPartiallyQualified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::IO::PathInternal::IsPartiallyQualified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf8350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "IsPartiallyQualified", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::IO::PathInternal::setStaticF_s_isCaseSensitive(bool value) {
  ::cordl_internals::setStaticField<bool, "s_isCaseSensitive", ::System::IO::PathInternal*>(std::forward<bool>(value));
}
inline bool System::IO::PathInternal::getStaticF_s_isCaseSensitive() {
  return ::cordl_internals::getStaticField<bool, "s_isCaseSensitive", ::System::IO::PathInternal*>();
}
inline int32_t System::IO::PathInternal::GetRootLength(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "GetRootLength", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::IsDirectorySeparator(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "IsDirectorySeparator", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool System::IO::PathInternal::EndsInDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "EndsInDirectorySeparator", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::StartsWithDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "StartsWithDirectorySeparator", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::PathInternal::TrimEndingDirectorySeparator(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "TrimEndingDirectorySeparator", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::System::ReadOnlySpan_1<char16_t> System::IO::PathInternal::TrimEndingDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "TrimEndingDirectorySeparator", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::IsRoot(::System::ReadOnlySpan_1<char16_t> path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "IsRoot", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
inline bool System::IO::PathInternal::get_IsCaseSensitive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "get_IsCaseSensitive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::IO::PathInternal::GetIsCaseSensitive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "GetIsCaseSensitive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::IO::PathInternal::IsPartiallyQualified(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::PathInternal*>(), { "IsPartiallyQualified", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::System::IO::PathInternal::PathInternal() {}
