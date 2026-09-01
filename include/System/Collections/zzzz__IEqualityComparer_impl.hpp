#pragma once
// IWYU pragma private; include "System\Collections\IEqualityComparer.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::IEqualityComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::IEqualityComparer::*)(::System::Object*, ::System::Object*)>(&::System::Collections::IEqualityComparer::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IEqualityComparer*>(), { ::i2c::class_of<::System::Collections::IEqualityComparer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::IEqualityComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::IEqualityComparer::*)(::System::Object*)>(&::System::Collections::IEqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IEqualityComparer*>(), { ::i2c::class_of<::System::Collections::IEqualityComparer*>(), 1 }));
    return ___internal_method;
  }
};
inline bool System::Collections::IEqualityComparer::Equals(::System::Object* x, ::System::Object* y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IEqualityComparer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::Collections::IEqualityComparer::GetHashCode(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IEqualityComparer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
