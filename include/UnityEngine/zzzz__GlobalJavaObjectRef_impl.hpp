#pragma once
// IWYU pragma private; include "UnityEngine/GlobalJavaObjectRef.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GlobalJavaObjectRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GlobalJavaObjectRef::*)(::System::IntPtr)>(&::UnityEngine::GlobalJavaObjectRef::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a27d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GlobalJavaObjectRef::*)()>(&::UnityEngine::GlobalJavaObjectRef::Finalize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a27ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), { ::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef.op_Implicit___System__IntPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::GlobalJavaObjectRef*)>(&::UnityEngine::GlobalJavaObjectRef::op_Implicit___System__IntPtr)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a27e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::GlobalJavaObjectRef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GlobalJavaObjectRef.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GlobalJavaObjectRef::*)()>(&::UnityEngine::GlobalJavaObjectRef::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a27e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void UnityEngine::GlobalJavaObjectRef::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::System::IntPtr& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_jobject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jobject;
}
constexpr ::System::IntPtr const& UnityEngine::GlobalJavaObjectRef::__cordl_internal_get_m_jobject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jobject;
}
constexpr void UnityEngine::GlobalJavaObjectRef::__cordl_internal_set_m_jobject(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_jobject = value;
}
inline void UnityEngine::GlobalJavaObjectRef::_ctor(::System::IntPtr jobject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobject);
}
inline void UnityEngine::GlobalJavaObjectRef::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::GlobalJavaObjectRef::op_Implicit___System__IntPtr(::UnityEngine::GlobalJavaObjectRef* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::GlobalJavaObjectRef*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, obj);
}
inline void UnityEngine::GlobalJavaObjectRef::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GlobalJavaObjectRef*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GlobalJavaObjectRef* UnityEngine::GlobalJavaObjectRef::New_ctor(::System::IntPtr jobject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GlobalJavaObjectRef*>(jobject));
}
// Ctor Parameters []
constexpr ::UnityEngine::GlobalJavaObjectRef::GlobalJavaObjectRef() {}
