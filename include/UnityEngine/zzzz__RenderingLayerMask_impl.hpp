#pragma once
// IWYU pragma private; include "UnityEngine/RenderingLayerMask.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.op_Implicit_uint32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::RenderingLayerMask)>(&::UnityEngine::RenderingLayerMask::op_Implicit_uint32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68a4f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderingLayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.NameToRenderingLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::RenderingLayerMask::NameToRenderingLayer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x68a4f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "NameToRenderingLayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.GetDefinedRenderingLayersCombinedMaskValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::UnityEngine::RenderingLayerMask::GetDefinedRenderingLayersCombinedMaskValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68a5098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "GetDefinedRenderingLayersCombinedMaskValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.GetDefinedRenderingLayerNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)()>(&::UnityEngine::RenderingLayerMask::GetDefinedRenderingLayerNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68a50c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(),
                                                                               "GetDefinedRenderingLayerNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.GetRenderingLayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::RenderingLayerMask::GetRenderingLayerCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68a50e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(),
                                                                               "GetRenderingLayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.NameToRenderingLayer_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::RenderingLayerMask::NameToRenderingLayer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68a505c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "NameToRenderingLayer_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::RenderingLayerMask::setStaticF__defaultRenderingLayerMask_k__BackingField(::UnityEngine::RenderingLayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::RenderingLayerMask, "<defaultRenderingLayerMask>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get>(std::forward<::UnityEngine::RenderingLayerMask>(value));
}
inline ::UnityEngine::RenderingLayerMask UnityEngine::RenderingLayerMask::getStaticF__defaultRenderingLayerMask_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::RenderingLayerMask, "<defaultRenderingLayerMask>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get>();
}
inline uint32_t UnityEngine::RenderingLayerMask::op_Implicit_uint32_t(::UnityEngine::RenderingLayerMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderingLayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, mask);
}
inline int32_t UnityEngine::RenderingLayerMask::NameToRenderingLayer(::StringW layerName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "NameToRenderingLayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, layerName);
}
inline uint32_t UnityEngine::RenderingLayerMask::GetDefinedRenderingLayersCombinedMaskValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "GetDefinedRenderingLayersCombinedMaskValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::RenderingLayerMask::GetDefinedRenderingLayerNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(),
                                                                             "GetDefinedRenderingLayerNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::RenderingLayerMask::GetRenderingLayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "GetRenderingLayerCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::RenderingLayerMask::NameToRenderingLayer_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> layerName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RenderingLayerMask>::get(), "NameToRenderingLayer_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, layerName);
}
// Ctor Parameters [CppParam { name: "m_Bits", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderingLayerMask::RenderingLayerMask(uint32_t m_Bits) noexcept {
  this->m_Bits = m_Bits;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderingLayerMask::RenderingLayerMask() {}
