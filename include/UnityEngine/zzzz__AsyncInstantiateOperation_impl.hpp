#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AsyncInstantiateOperation::*)(::System::IntPtr, ::System::Threading::CancellationToken)>(
    &::UnityEngine::AsyncInstantiateOperation::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68a6154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperation.IsCancellationRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::AsyncInstantiateOperation::*)()>(
    &::UnityEngine::AsyncInstantiateOperation::IsCancellationRequested)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68a61b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation*>::get(),
                                                                               "IsCancellationRequested", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperation.CreateResultArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> (
    ::UnityEngine::AsyncInstantiateOperation::*)(int32_t)>(&::UnityEngine::AsyncInstantiateOperation::CreateResultArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68a6224;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> const& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr void UnityEngine::AsyncInstantiateOperation::__cordl_internal_set_m_Result(::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_CancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancellationToken;
}
constexpr ::System::Threading::CancellationToken const& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_CancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancellationToken;
}
constexpr void UnityEngine::AsyncInstantiateOperation::__cordl_internal_set_m_CancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CancellationToken = value;
}
inline void UnityEngine::AsyncInstantiateOperation::_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr, cancellationToken);
}
inline bool UnityEngine::AsyncInstantiateOperation::IsCancellationRequested() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation*>::get(),
                                                                             "IsCancellationRequested", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> UnityEngine::AsyncInstantiateOperation::CreateResultArray(int32_t size) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, false>(this, ___internal_method, size);
}
inline ::UnityEngine::AsyncInstantiateOperation* UnityEngine::AsyncInstantiateOperation::New_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AsyncInstantiateOperation*>(ptr, cancellationToken));
}
// Ctor Parameters []
constexpr ::UnityEngine::AsyncInstantiateOperation::AsyncInstantiateOperation() {}
