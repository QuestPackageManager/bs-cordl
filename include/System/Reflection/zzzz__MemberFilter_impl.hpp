#pragma once
// IWYU pragma private; include "System\Reflection\MemberFilter.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Reflection/zzzz__MemberFilter_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Reflection::MemberFilter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::MemberFilter::*)(::System::Object*, ::System::IntPtr)>(&::System::Reflection::MemberFilter::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b7eea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberFilter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MemberFilter.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MemberFilter::*)(::System::Reflection::MemberInfo*, ::System::Object*)>(
    &::System::Reflection::MemberFilter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7eff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MemberFilter*>(), { ::i2c::class_of<::System::Reflection::MemberFilter*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Reflection::MemberFilter::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MemberFilter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool System::Reflection::MemberFilter::Invoke(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MemberFilter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m, filterCriteria);
}
inline ::System::Reflection::MemberFilter* System::Reflection::MemberFilter::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::MemberFilter*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Reflection::MemberFilter::MemberFilter() {}
