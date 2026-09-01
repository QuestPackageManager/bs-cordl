#pragma once
// IWYU pragma private; include "System\Reflection\RtFieldInfo.hpp"
#include "System/Reflection/zzzz__FieldInfo_impl.hpp"
#include "System/Reflection/zzzz__RtFieldInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Reflection::RtFieldInfo.UnsafeGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RtFieldInfo::*)(::System::Object*)>(&::System::Reflection::RtFieldInfo::UnsafeGetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RtFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RtFieldInfo*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RtFieldInfo.UnsafeSetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RtFieldInfo::*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags,
                                                                                                   ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::RtFieldInfo::UnsafeSetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RtFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RtFieldInfo*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RtFieldInfo.CheckConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RtFieldInfo::*)(::System::Object*)>(&::System::Reflection::RtFieldInfo::CheckConsistency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RtFieldInfo*>(), { ::i2c::class_of<::System::Reflection::RtFieldInfo*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RtFieldInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RtFieldInfo::*)()>(&::System::Reflection::RtFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8c114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RtFieldInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Reflection::RtFieldInfo::UnsafeGetValue(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RtFieldInfo*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline void System::Reflection::RtFieldInfo::UnsafeSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                            ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RtFieldInfo*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, culture);
}
inline void System::Reflection::RtFieldInfo::CheckConsistency(::System::Object* target) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RtFieldInfo*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void System::Reflection::RtFieldInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RtFieldInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::RtFieldInfo* System::Reflection::RtFieldInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RtFieldInfo*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::RtFieldInfo::RtFieldInfo() {}
