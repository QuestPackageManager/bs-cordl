#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContext.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectBufferContext_BufferState::IndirectBufferContext_BufferState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferContext_BufferState::IndirectBufferContext_BufferState() {}
constexpr ::UnityEngine::Rendering::IndirectBufferContext_BufferState UnityEngine::Rendering::IndirectBufferContext_BufferState::Pending{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::IndirectBufferContext_BufferState UnityEngine::Rendering::IndirectBufferContext_BufferState::Zeroed{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::IndirectBufferContext_BufferState UnityEngine::Rendering::IndirectBufferContext_BufferState::NoOcclusionTest{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::IndirectBufferContext_BufferState UnityEngine::Rendering::IndirectBufferContext_BufferState::AllInstancesOcclusionTested{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::IndirectBufferContext_BufferState UnityEngine::Rendering::IndirectBufferContext_BufferState::OccludedInstancesReTested{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContext::*)(::Unity::Jobs::JobHandle)>(
    &::UnityEngine::Rendering::IndirectBufferContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66778b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContext.Matches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IndirectBufferContext::*)(
    ::UnityEngine::Rendering::IndirectBufferContext_BufferState, int32_t, int32_t)>(&::UnityEngine::Rendering::IndirectBufferContext::Matches)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66778c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferContext>::get(), "Matches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IndirectBufferContext_BufferState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IndirectBufferContext::_ctor(::Unity::Jobs::JobHandle cullingJobHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferContext>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingJobHandle);
}
inline bool UnityEngine::Rendering::IndirectBufferContext::Matches(::UnityEngine::Rendering::IndirectBufferContext_BufferState bufferState, int32_t occluderVersion, int32_t subviewMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferContext>::get(), "Matches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IndirectBufferContext_BufferState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bufferState, occluderVersion, subviewMask);
}
// Ctor Parameters [CppParam { name: "cullingJobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferState", ty:
// "::UnityEngine::Rendering::IndirectBufferContext_BufferState", modifiers: "", def_value: Some("{}") }, CppParam { name: "occluderVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "subviewMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectBufferContext::IndirectBufferContext(::Unity::Jobs::JobHandle cullingJobHandle, ::UnityEngine::Rendering::IndirectBufferContext_BufferState bufferState,
                                                                                 int32_t occluderVersion, int32_t subviewMask) noexcept {
  this->cullingJobHandle = cullingJobHandle;
  this->bufferState = bufferState;
  this->occluderVersion = occluderVersion;
  this->subviewMask = subviewMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferContext::IndirectBufferContext() {}
