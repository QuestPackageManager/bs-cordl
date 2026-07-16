#pragma once
// IWYU pragma private; include "GlobalNamespace/StringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StringExtensions_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StringExtensions.Truncate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, bool)>(&::GlobalNamespace::StringExtensions::Truncate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x330b890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringExtensions*>(),
                                                                                           { "Truncate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringExtensions.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::StringComparison)>(&::GlobalNamespace::StringExtensions::Contains)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x330b94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringExtensions*>(),
                                                             { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StringExtensions.AnyContains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::StringW, ::System::StringComparison)>(&::GlobalNamespace::StringExtensions::AnyContains)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x330b974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringExtensions*>(),
                                                { "AnyContains", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::StringExtensions::Truncate(::StringW s, int32_t length, bool appendEllipsis) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringExtensions*>(),
                                                                                         { "Truncate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, length, appendEllipsis);
}
inline bool GlobalNamespace::StringExtensions::Contains(::StringW source, ::StringW substring, ::System::StringComparison comp) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringExtensions*>(),
                                                           { "Contains", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, substring, comp);
}
inline bool GlobalNamespace::StringExtensions::AnyContains(::ArrayW<::StringW> stringArray, ::StringW value, ::System::StringComparison stringComparison) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StringExtensions*>(),
                                              { "AnyContains", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::StringComparison>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringArray, value, stringComparison);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StringExtensions::StringExtensions() {}
