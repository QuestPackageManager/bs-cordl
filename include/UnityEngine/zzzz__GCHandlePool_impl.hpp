#pragma once
// IWYU pragma private; include "UnityEngine\GCHandlePool.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GCHandlePool_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::GCHandlePool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GCHandlePool::*)()>(&::UnityEngine::GCHandlePool::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a39140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GCHandlePool.Alloc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::GCHandle (::UnityEngine::GCHandlePool::*)(::System::Object*)>(&::UnityEngine::GCHandlePool::Alloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a3b4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { "Alloc", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GCHandlePool.AllocHandleIfNotNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::GCHandlePool::*)(::System::Object*)>(&::UnityEngine::GCHandlePool::AllocHandleIfNotNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a3b514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { "AllocHandleIfNotNull", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GCHandlePool.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GCHandlePool::*)(::System::Runtime::InteropServices::GCHandle)>(&::UnityEngine::GCHandlePool::Free)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6a399a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { "Free", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle>& UnityEngine::GCHandlePool::__cordl_internal_get_m_handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_handles;
}
constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle> const& UnityEngine::GCHandlePool::__cordl_internal_get_m_handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_handles;
}
constexpr void UnityEngine::GCHandlePool::__cordl_internal_set_m_handles(::ArrayW<::System::Runtime::InteropServices::GCHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_handles = value;
}
constexpr int32_t& UnityEngine::GCHandlePool::__cordl_internal_get_m_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_current;
}
constexpr int32_t const& UnityEngine::GCHandlePool::__cordl_internal_get_m_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_current;
}
constexpr void UnityEngine::GCHandlePool::__cordl_internal_set_m_current(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_current = value;
}
inline void UnityEngine::GCHandlePool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::GCHandle UnityEngine::GCHandlePool::Alloc(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { "Alloc", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle>(this, ___internal_method, o);
}
inline ::System::IntPtr UnityEngine::GCHandlePool::AllocHandleIfNotNull(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { "AllocHandleIfNotNull", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, o);
}
inline void UnityEngine::GCHandlePool::Free(::System::Runtime::InteropServices::GCHandle h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GCHandlePool*>(), { "Free", {}, { ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, h);
}
inline ::UnityEngine::GCHandlePool* UnityEngine::GCHandlePool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GCHandlePool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GCHandlePool::GCHandlePool() {}
