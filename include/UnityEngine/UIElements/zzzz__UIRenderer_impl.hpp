#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.SetNativeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIRenderer::*)(int32_t, int32_t, ::UnityEngine::Material*)>(
    &::UnityEngine::UIElements::UIRenderer::SetNativeData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6beb978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), "SetNativeData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.OnRenderNodeExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIRenderer*, int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIRenderer::OnRenderNodeExecute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6bebaac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), "OnRenderNodeExecute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIRenderer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIRenderer::*)()>(&::UnityEngine::UIElements::UIRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bebb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.SetNativeData_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr)>(
    &::UnityEngine::UIElements::UIRenderer::SetNativeData_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6beba50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), "SetNativeData_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>&
UnityEngine::UIElements::UIRenderer::__cordl_internal_get_commandLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                   ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*> const&
UnityEngine::UIElements::UIRenderer::__cordl_internal_get_commandLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandLists;
}
constexpr void UnityEngine::UIElements::UIRenderer::__cordl_internal_set_commandLists(
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___commandLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIRenderer::__cordl_internal_get_skipRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipRendering;
}
constexpr bool const& UnityEngine::UIElements::UIRenderer::__cordl_internal_get_skipRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipRendering;
}
constexpr void UnityEngine::UIElements::UIRenderer::__cordl_internal_set_skipRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skipRendering = value;
}
inline void UnityEngine::UIElements::UIRenderer::SetNativeData(int32_t safeFrameIndex, int32_t cmdListIndex, ::UnityEngine::Material* mat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), "SetNativeData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, safeFrameIndex, cmdListIndex, mat);
}
inline void UnityEngine::UIElements::UIRenderer::OnRenderNodeExecute(::UnityEngine::UIElements::UIRenderer* renderer, int32_t safeFrameIndex, int32_t cmdListIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), "OnRenderNodeExecute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIRenderer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderer, safeFrameIndex, cmdListIndex);
}
inline void UnityEngine::UIElements::UIRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRenderer::SetNativeData_Injected(::System::IntPtr _unity_self, int32_t safeFrameIndex, int32_t cmdListIndex, ::System::IntPtr mat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIRenderer*>::get(), "SetNativeData_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, safeFrameIndex, cmdListIndex, mat);
}
inline ::UnityEngine::UIElements::UIRenderer* UnityEngine::UIElements::UIRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIRenderer::UIRenderer() {}
