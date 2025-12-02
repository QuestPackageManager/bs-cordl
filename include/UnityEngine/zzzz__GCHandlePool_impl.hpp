#pragma once
// IWYU pragma private; include "UnityEngine/GCHandlePool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GCHandlePool_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::GCHandlePool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GCHandlePool::*)()>(&::UnityEngine::GCHandlePool::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6800c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GCHandlePool.Alloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::GCHandle (::UnityEngine::GCHandlePool::*)(::System::Object*)>(
    &::UnityEngine::GCHandlePool::Alloc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6802fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), "Alloc", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GCHandlePool.AllocHandleIfNotNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::UnityEngine::GCHandlePool::*)(::System::Object*)>(
    &::UnityEngine::GCHandlePool::AllocHandleIfNotNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6803028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), "AllocHandleIfNotNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GCHandlePool.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GCHandlePool::*)(::System::Runtime::InteropServices::GCHandle)>(
    &::UnityEngine::GCHandlePool::Free)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x68014bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle, ::Array<::System::Runtime::InteropServices::GCHandle>*>& UnityEngine::GCHandlePool::__cordl_internal_get_m_handles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_handles;
}
constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle, ::Array<::System::Runtime::InteropServices::GCHandle>*> const& UnityEngine::GCHandlePool::__cordl_internal_get_m_handles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_handles;
}
constexpr void UnityEngine::GCHandlePool::__cordl_internal_set_m_handles(::ArrayW<::System::Runtime::InteropServices::GCHandle, ::Array<::System::Runtime::InteropServices::GCHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_handles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::GCHandle UnityEngine::GCHandlePool::Alloc(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), "Alloc", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle, false>(this, ___internal_method, o);
}
inline ::System::IntPtr UnityEngine::GCHandlePool::AllocHandleIfNotNull(::System::Object* o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), "AllocHandleIfNotNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, o);
}
inline void UnityEngine::GCHandlePool::Free(::System::Runtime::InteropServices::GCHandle h) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GCHandlePool*>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::GCHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, h);
}
inline ::UnityEngine::GCHandlePool* UnityEngine::GCHandlePool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::GCHandlePool*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GCHandlePool::GCHandlePool() {}
