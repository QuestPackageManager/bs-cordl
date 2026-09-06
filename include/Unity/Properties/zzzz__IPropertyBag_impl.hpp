#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
//  Writing Method size for method: ::Unity::Properties::IPropertyBag.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::IPropertyBag::*)(::Unity::Properties::ITypeVisitor*)>(&::Unity::Properties::IPropertyBag::Accept)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IPropertyBag*>(), { ::i2c::class_of<::Unity::Properties::IPropertyBag*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::IPropertyBag.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::IPropertyBag::*)(::Unity::Properties::IPropertyBagVisitor*, ::by_ref<::System::Object*>)>(
    &::Unity::Properties::IPropertyBag::Accept)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::IPropertyBag*>(), { ::i2c::class_of<::Unity::Properties::IPropertyBag*>(), 1 }));
    return ___internal_method;
  }
};
inline void Unity::Properties::IPropertyBag::Accept(::Unity::Properties::ITypeVisitor* visitor) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyBag*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor);
}
inline void Unity::Properties::IPropertyBag::Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::by_ref<::System::Object*> container) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::IPropertyBag*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visitor, container);
}
