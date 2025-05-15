#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroup.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x48cb260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::*)(
    ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::Invoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48cb364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup,
                                                                                                    ::UnityEngine::Rendering::BatchCullingContext cullingContext,
                                                                                                    ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroup, cullingContext, cullingOutput, userContext);
}
inline ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling::BatchRendererGroup_OnPerformCulling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnPerformCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>,
                                                                                           ::ByRef<::UnityEngine::Rendering::LODParameters>, ::System::IntPtr)>(
    &::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x48cb01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnPerformCulling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LODParameters>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_GroupHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupHandle;
}
constexpr ::System::IntPtr const& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_GroupHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupHandle;
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_set_m_GroupHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GroupHandle = value;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_PerformCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformCulling;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* const& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_PerformCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformCulling;
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_set_m_PerformCulling(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PerformCulling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group,
                                                                               ::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput> context,
                                                                               ::ByRef<::UnityEngine::Rendering::LODParameters> lodParameters, ::System::IntPtr userContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnPerformCulling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::LODParameters>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, context, lodParameters, userContext);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup::BatchRendererGroup() {}
