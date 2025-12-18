#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/UnityWebRequestOperation.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__UnityWebRequestOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)(
    ::UnityEngine::Networking::UnityWebRequest*)>(&::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6770458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::Execute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67704b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation._Execute_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)(
    ::UnityEngine::AsyncOperation*)>(&::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_Execute_b__2_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6770560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>::get(), "<Execute>b__2_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::__cordl_internal_get_m_UWR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UWR;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::__cordl_internal_get_m_UWR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UWR;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::__cordl_internal_set_m_UWR(::UnityEngine::Networking::UnityWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_UWR)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_ctor(::UnityEngine::Networking::UnityWebRequest* webRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, webRequest);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_Execute_b__2_0(::UnityEngine::AsyncOperation* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>::get(), "<Execute>b__2_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*
UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::New_ctor(::UnityEngine::Networking::UnityWebRequest* webRequest) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(webRequest));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::UnityWebRequestOperation() {}
