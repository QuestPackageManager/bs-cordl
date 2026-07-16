#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstRuntime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstRuntime_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstRuntime_def.hpp"
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>::setStaticF_Value(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "Value", ::Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>>(std::forward<int64_t>(value));
}
template <typename T> inline int64_t Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<int64_t, "Value", ::Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::BurstRuntime_HashCode64_1<T>::BurstRuntime_HashCode64_1() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::BurstRuntime.HashStringWithFNV1A64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::Unity::Collections::LowLevel::Unsafe::BurstRuntime::HashStringWithFNV1A64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a5a5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstRuntime*>(), { "HashStringWithFNV1A64", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
template <typename T> inline int64_t Unity::Collections::LowLevel::Unsafe::BurstRuntime::GetHashCode64() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstRuntime*>(), { "GetHashCode64", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t Unity::Collections::LowLevel::Unsafe::BurstRuntime::HashStringWithFNV1A64(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::BurstRuntime*>(), { "HashStringWithFNV1A64", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::BurstRuntime::BurstRuntime() {}
