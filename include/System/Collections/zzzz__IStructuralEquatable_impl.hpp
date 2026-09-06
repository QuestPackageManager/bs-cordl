#pragma once
// IWYU pragma private; include "System/Collections/IStructuralEquatable.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::IStructuralEquatable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::IStructuralEquatable::*)(::System::Object*, ::System::Collections::IEqualityComparer*)>(
    &::System::Collections::IStructuralEquatable::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IStructuralEquatable*>(), { ::i2c::class_of<::System::Collections::IStructuralEquatable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::IStructuralEquatable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::IStructuralEquatable::*)(::System::Collections::IEqualityComparer*)>(
    &::System::Collections::IStructuralEquatable::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Collections::IStructuralEquatable*>(), { ::i2c::class_of<::System::Collections::IStructuralEquatable*>(), 1 }));
    return ___internal_method;
  }
};
inline bool System::Collections::IStructuralEquatable::Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IStructuralEquatable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, comparer);
}
inline int32_t System::Collections::IStructuralEquatable::GetHashCode(::System::Collections::IEqualityComparer* comparer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::IStructuralEquatable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, comparer);
}
