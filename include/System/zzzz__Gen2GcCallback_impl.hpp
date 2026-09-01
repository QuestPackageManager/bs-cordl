#pragma once
// IWYU pragma private; include "System\Gen2GcCallback.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Gen2GcCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Gen2GcCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c3088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Gen2GcCallback*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_2<::System::Object*, bool>*, ::System::Object*)>(&::System::Gen2GcCallback::Register)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c30890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Gen2GcCallback*>(), { "Register", {}, { ::i2c::type_of<::System::Func_2<::System::Object*, bool>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Gen2GcCallback::*)(::System::Func_2<::System::Object*, bool>*, ::System::Object*)>(&::System::Gen2GcCallback::Setup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c3090c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Gen2GcCallback*>(), { "Setup", {}, { ::i2c::type_of<::System::Func_2<::System::Object*, bool>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Gen2GcCallback.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Gen2GcCallback::*)()>(&::System::Gen2GcCallback::Finalize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5c30934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Gen2GcCallback*>(), { ::i2c::class_of<::System::Gen2GcCallback*>(), 1 }));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::System::Object*, bool>*& System::Gen2GcCallback::__cordl_internal_get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr ::System::Func_2<::System::Object*, bool>* const& System::Gen2GcCallback::__cordl_internal_get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr void System::Gen2GcCallback::__cordl_internal_set__callback(::System::Func_2<::System::Object*, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callback = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& System::Gen2GcCallback::__cordl_internal_get__weakTargetObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weakTargetObj;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& System::Gen2GcCallback::__cordl_internal_get__weakTargetObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weakTargetObj;
}
constexpr void System::Gen2GcCallback::__cordl_internal_set__weakTargetObj(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weakTargetObj = value;
}
inline void System::Gen2GcCallback::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Gen2GcCallback*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Gen2GcCallback::Register(::System::Func_2<::System::Object*, bool>* callback, ::System::Object* targetObj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Gen2GcCallback*>(), { "Register", {}, { ::i2c::type_of<::System::Func_2<::System::Object*, bool>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback, targetObj);
}
inline void System::Gen2GcCallback::Setup(::System::Func_2<::System::Object*, bool>* callback, ::System::Object* targetObj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Gen2GcCallback*>(), { "Setup", {}, { ::i2c::type_of<::System::Func_2<::System::Object*, bool>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, targetObj);
}
inline void System::Gen2GcCallback::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Gen2GcCallback*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Gen2GcCallback* System::Gen2GcCallback::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Gen2GcCallback*>());
}
// Ctor Parameters []
constexpr ::System::Gen2GcCallback::Gen2GcCallback() {}
