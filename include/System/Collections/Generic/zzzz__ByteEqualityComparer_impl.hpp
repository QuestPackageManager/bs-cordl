#pragma once
// IWYU pragma private; include "System\Collections\Generic\ByteEqualityComparer.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__ByteEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::ByteEqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Generic::ByteEqualityComparer::*)(uint8_t, uint8_t)>(
    &::System::Collections::Generic::ByteEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bf3898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ByteEqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Generic::ByteEqualityComparer::*)(uint8_t)>(
    &::System::Collections::Generic::ByteEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf38a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ByteEqualityComparer.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Generic::ByteEqualityComparer::*)(::ArrayW<uint8_t>, uint8_t, int32_t, int32_t)>(
    &::System::Collections::Generic::ByteEqualityComparer::IndexOf)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bf38b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ByteEqualityComparer.LastIndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Generic::ByteEqualityComparer::*)(::ArrayW<uint8_t>, uint8_t, int32_t, int32_t)>(
    &::System::Collections::Generic::ByteEqualityComparer::LastIndexOf)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bf3a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ByteEqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Generic::ByteEqualityComparer::*)(::System::Object*)>(
    &::System::Collections::Generic::ByteEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bf3a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ByteEqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Generic::ByteEqualityComparer::*)()>(&::System::Collections::Generic::ByteEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bf3b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::ByteEqualityComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Generic::ByteEqualityComparer::*)()>(&::System::Collections::Generic::ByteEqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf3b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Collections::Generic::ByteEqualityComparer::Equals(uint8_t x, uint8_t y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::Collections::Generic::ByteEqualityComparer::GetHashCode(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b);
}
inline int32_t System::Collections::Generic::ByteEqualityComparer::IndexOf(::ArrayW<uint8_t> array, uint8_t value, int32_t startIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, value, startIndex, count);
}
inline int32_t System::Collections::Generic::ByteEqualityComparer::LastIndexOf(::ArrayW<uint8_t> array, uint8_t value, int32_t startIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, value, startIndex, count);
}
inline bool System::Collections::Generic::ByteEqualityComparer::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Collections::Generic::ByteEqualityComparer::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Collections::Generic::ByteEqualityComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ByteEqualityComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::ByteEqualityComparer* System::Collections::Generic::ByteEqualityComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::ByteEqualityComparer*>());
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::ByteEqualityComparer::ByteEqualityComparer() {}
