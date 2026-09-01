#pragma once
// IWYU pragma private; include "GlobalNamespace\IStandaloneThreadRunnable.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IStandaloneThreadRunnable.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IStandaloneThreadRunnable::*)()>(&::GlobalNamespace::IStandaloneThreadRunnable::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IStandaloneThreadRunnable*>(), { ::i2c::class_of<::GlobalNamespace::IStandaloneThreadRunnable*>(), 0 }));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IStandaloneThreadRunnable::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStandaloneThreadRunnable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IStandaloneThreadRunnable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IStandaloneThreadRunnable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
