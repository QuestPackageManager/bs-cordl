#pragma once
// IWYU pragma private; include "System/Collections/Generic/InternalStringComparer.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__InternalStringComparer_def.hpp"
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Generic::InternalStringComparer::*)(::StringW)>(
    &::System::Collections::Generic::InternalStringComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf1874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Generic::InternalStringComparer::*)(::StringW, ::StringW)>(
    &::System::Collections::Generic::InternalStringComparer::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bf1894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Generic::InternalStringComparer::*)(::ArrayW<::StringW>, ::StringW, int32_t, int32_t)>(
    &::System::Collections::Generic::InternalStringComparer::IndexOf)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5bf18c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(),
                                                                                          { ::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Generic::InternalStringComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Generic::InternalStringComparer::*)()>(&::System::Collections::Generic::InternalStringComparer::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf1928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Collections::Generic::InternalStringComparer::GetHashCode(::StringW obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline bool System::Collections::Generic::InternalStringComparer::Equals(::StringW x, ::StringW y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::Collections::Generic::InternalStringComparer::IndexOf(::ArrayW<::StringW> array, ::StringW value, int32_t startIndex, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, value, startIndex, count);
}
inline void System::Collections::Generic::InternalStringComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::InternalStringComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::InternalStringComparer* System::Collections::Generic::InternalStringComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::InternalStringComparer*>());
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::InternalStringComparer::InternalStringComparer() {}
