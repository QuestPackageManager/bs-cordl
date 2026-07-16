#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneThreadContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneThreadContext_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandaloneThreadContext.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandaloneThreadContext::*)(::GlobalNamespace::IStandaloneThreadRunnable*)>(
    &::GlobalNamespace::StandaloneThreadContext::Run)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333fa44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneThreadContext*>(), { "Run", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneThreadRunnable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneThreadContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandaloneThreadContext::*)()>(&::GlobalNamespace::StandaloneThreadContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x333fa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneThreadContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandaloneThreadContext::setStaticF_instance(::GlobalNamespace::StandaloneThreadContext* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::StandaloneThreadContext*, "instance", ::GlobalNamespace::StandaloneThreadContext*>(
      std::forward<::GlobalNamespace::StandaloneThreadContext*>(value));
}
inline ::GlobalNamespace::StandaloneThreadContext* GlobalNamespace::StandaloneThreadContext::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::StandaloneThreadContext*, "instance", ::GlobalNamespace::StandaloneThreadContext*>();
}
inline void GlobalNamespace::StandaloneThreadContext::Run(::GlobalNamespace::IStandaloneThreadRunnable* runnable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneThreadContext*>(), { "Run", {}, { ::i2c::type_of<::GlobalNamespace::IStandaloneThreadRunnable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runnable);
}
inline void GlobalNamespace::StandaloneThreadContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandaloneThreadContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandaloneThreadContext* GlobalNamespace::StandaloneThreadContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandaloneThreadContext*>());
}
/// @brief Convert operator to "::GlobalNamespace::IStandaloneThreadRunner"
constexpr GlobalNamespace::StandaloneThreadContext::operator ::GlobalNamespace::IStandaloneThreadRunner*() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneThreadRunner*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IStandaloneThreadRunner"
constexpr ::GlobalNamespace::IStandaloneThreadRunner* GlobalNamespace::StandaloneThreadContext::i___GlobalNamespace__IStandaloneThreadRunner() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneThreadRunner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneThreadContext::StandaloneThreadContext() {}
