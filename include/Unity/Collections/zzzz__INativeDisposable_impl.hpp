#pragma once
// IWYU pragma private; include "Unity\Collections\INativeDisposable.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::Collections::INativeDisposable.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::INativeDisposable::*)(::Unity::Jobs::JobHandle)>(
    &::Unity::Collections::INativeDisposable::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Collections::INativeDisposable*>(), { ::i2c::class_of<::Unity::Collections::INativeDisposable*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle Unity::Collections::INativeDisposable::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::INativeDisposable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, inputDeps);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::INativeDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::INativeDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
