#pragma once
// IWYU pragma private; include "Unity\Collections\Spinner.hpp"
#include "Unity/Collections/zzzz__Spinner_def.hpp"
//  Writing Method size for method: ::Unity::Collections::Spinner.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::Spinner::*)()>(&::Unity::Collections::Spinner::Acquire)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64a7b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "Acquire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Spinner.TryAcquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::Spinner::*)()>(&::Unity::Collections::Spinner::TryAcquire)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x64a7b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "TryAcquire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Spinner.TryAcquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::Spinner::*)(bool)>(&::Unity::Collections::Spinner::TryAcquire)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64a7bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "TryAcquire", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Spinner.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::Spinner::*)()>(&::Unity::Collections::Spinner::Release)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64a7c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::Spinner::Acquire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Collections::Spinner::TryAcquire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "TryAcquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::Spinner::TryAcquire(bool spin) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "TryAcquire", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, spin);
}
inline void Unity::Collections::Spinner::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Spinner>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Lock", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::Spinner::Spinner(int32_t m_Lock) noexcept {
  this->m_Lock = m_Lock;
}
// Ctor Parameters []
constexpr ::Unity::Collections::Spinner::Spinner() {}
