#pragma once
// IWYU pragma private; include "System/Threading/LockHolder.hpp"
#include "System/Threading/zzzz__LockHolder_def.hpp"
#include "System/Threading/zzzz__Lock_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Threading::LockHolder.Hold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::LockHolder (*)(::System::Threading::Lock*)>(&::System::Threading::LockHolder::Hold)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cab6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockHolder>(), { "Hold", {}, { ::i2c::type_of<::System::Threading::Lock*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LockHolder.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::LockHolder::*)()>(&::System::Threading::LockHolder::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cab71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockHolder>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::LockHolder System::Threading::LockHolder::Hold(::System::Threading::Lock* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockHolder>(), { "Hold", {}, { ::i2c::type_of<::System::Threading::Lock*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::LockHolder>(nullptr, ___internal_method, l);
}
inline void System::Threading::LockHolder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LockHolder>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::LockHolder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::LockHolder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_lock", ty: "::System::Threading::Lock*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::LockHolder::LockHolder(::System::Threading::Lock* _lock) noexcept {
  this->_lock = _lock;
}
// Ctor Parameters []
constexpr ::System::Threading::LockHolder::LockHolder() {}
