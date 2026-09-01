#pragma once
// IWYU pragma private; include "UnityEngine\NameFormatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__NameFormatter_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::NameFormatter.FormatVariableName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::NameFormatter::FormatVariableName)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6af4038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NameFormatter*>(), { "FormatVariableName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NameFormatter.FormatVariableName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::NameFormatter::FormatVariableName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6af41f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NameFormatter*>(), { "FormatVariableName_Injected",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                                                   ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::NameFormatter::FormatVariableName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NameFormatter*>(), { "FormatVariableName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline void UnityEngine::NameFormatter::FormatVariableName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NameFormatter*>(), { "FormatVariableName_Injected",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::NameFormatter::NameFormatter() {}
