#pragma once
// IWYU pragma private; include "System\Numerics\Vector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Numerics/zzzz__Vector_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
//  Writing Method size for method: ::System::Numerics::Vector.get_IsHardwareAccelerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Numerics::Vector::get_IsHardwareAccelerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b9403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector*>(), { "get_IsHardwareAccelerated", {}, {} })));
    return ___internal_method;
  }
};
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector::Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector*>(),
                                              { "Equals", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Numerics::Vector_1<T>>(), ::i2c::type_of<::System::Numerics::Vector_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<T>>(nullptr, ___internal_method, left, right);
}
inline bool System::Numerics::Vector::get_IsHardwareAccelerated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector*>(), { "get_IsHardwareAccelerated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector::AsVectorUInt64(::System::Numerics::Vector_1<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Numerics::Vector*>(), { "AsVectorUInt64", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Numerics::Vector_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Numerics::Vector::Vector() {}
