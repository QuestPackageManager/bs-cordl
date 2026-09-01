#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeAtomicCounter64.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter64_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::*)(void*)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cddc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::*)(int64_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64cddc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "Reset", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::*)(int64_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::Add)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64cddd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "Add", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64.Sub
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::*)(int64_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::Sub)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64cde30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "Sub", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64.AddSat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::*)(int64_t, int64_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::AddSat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64cde8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(),
                                                                                           { "AddSat", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64.SubSat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::*)(int64_t, int64_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::SubSat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64cdf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(),
                                                                                           { "SubSat", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::_ctor(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::Reset(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "Reset", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::Add(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "Add", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, value);
}
inline int64_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::Sub(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "Sub", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, value);
}
inline int64_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::AddSat(int64_t value, int64_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "AddSat", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, value, max);
}
inline int64_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::SubSat(int64_t value, int64_t min) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64>(), { "SubSat", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, value, min);
}
// Ctor Parameters [CppParam { name: "Counter", ty: "int64_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::UnsafeAtomicCounter64(int64_t* Counter) noexcept {
  this->Counter = Counter;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64::UnsafeAtomicCounter64() {}
