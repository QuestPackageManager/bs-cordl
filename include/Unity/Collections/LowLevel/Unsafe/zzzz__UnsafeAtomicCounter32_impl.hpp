#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeAtomicCounter32.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(void*)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cdbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64cdbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "Reset", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Add)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64cdbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32.Sub
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Sub)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64cdc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "Sub", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32.AddSat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::AddSat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64cdca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(),
                                                                                           { "AddSat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32.SubSat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::*)(int32_t, int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::SubSat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64cdd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(),
                                                                                           { "SubSat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::_ctor(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { ".ctor", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Reset(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "Reset", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Add(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "Add", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::Sub(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "Sub", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::AddSat(int32_t value, int32_t max) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "AddSat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value, max);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::SubSat(int32_t value, int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32>(), { "SubSat", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value, min);
}
// Ctor Parameters [CppParam { name: "Counter", ty: "int32_t*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::UnsafeAtomicCounter32(int32_t* Counter) noexcept {
  this->Counter = Counter;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32::UnsafeAtomicCounter32() {}
