#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroup.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::*)(::System::Object*, void*)>(
    &::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3431100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::*)(
    ::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext)>(&::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::Invoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3431230;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>(object, method));
}
inline void UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Unity::Jobs::JobHandle UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup,
                                                                                                       ::UnityEngine::Rendering::BatchCullingContext cullingContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, rendererGroup, cullingContext);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling::__BatchRendererGroup__OnPerformCulling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BatchRendererGroup.InvokeOnPerformCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>, ByRef<::UnityEngine::Rendering::LODParameters>)>(
        &::UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x3430ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnPerformCulling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LODParameters>>::get() })));
    return ___internal_method;
  }
};
constexpr void*& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_GroupHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupHandle;
}
constexpr void* const& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_GroupHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupHandle;
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_set_m_GroupHandle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GroupHandle = value;
}
constexpr ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*& UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_PerformCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformCulling;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*> const&
UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_get_m_PerformCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PerformCulling;
}
constexpr void UnityEngine::Rendering::BatchRendererGroup::__cordl_internal_set_m_PerformCulling(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PerformCulling)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput> context,
                                                                               ByRef<::UnityEngine::Rendering::LODParameters> lodParameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BatchRendererGroup*>::get(), "InvokeOnPerformCulling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BatchRendererGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::LODParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group, context, lodParameters);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererGroup::BatchRendererGroup() {}
