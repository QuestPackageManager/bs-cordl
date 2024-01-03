#pragma once
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize::__KawaseBlurRendererSO__KernelSize(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize::__KawaseBlurRendererSO__KernelSize() {}
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel7{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel15{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel23{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel35{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel63{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel127{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel135{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize GlobalNamespace::__KawaseBlurRendererSO__KernelSize::Kernel143{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType::__KawaseBlurRendererSO__WeightsType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType::__KawaseBlurRendererSO__WeightsType() {}
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType GlobalNamespace::__KawaseBlurRendererSO__WeightsType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType GlobalNamespace::__KawaseBlurRendererSO__WeightsType::AlphaWeights{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType GlobalNamespace::__KawaseBlurRendererSO__WeightsType::AlphaAndDepthWeights{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::*)()>(
    &::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210c930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::__get_kernelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelSize;
}
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::__get_kernelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelSize;
}
constexpr void GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::__set_kernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelSize = value;
}
constexpr int32_t& GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::__get_sharedPartWithNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedPartWithNext;
}
constexpr int32_t const& GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::__get_sharedPartWithNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedPartWithNext;
}
constexpr void GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::__set_sharedPartWithNext(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedPartWithNext = value;
}
inline ::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel* GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>());
}
inline void GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel::__KawaseBlurRendererSO__BloomKernel() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass::__KawaseBlurRendererSO__Pass(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass::__KawaseBlurRendererSO__Pass() {}
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass GlobalNamespace::__KawaseBlurRendererSO__Pass::AlphaWeights{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass GlobalNamespace::__KawaseBlurRendererSO__Pass::Blur{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass GlobalNamespace::__KawaseBlurRendererSO__Pass::BlurAndAdd{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass GlobalNamespace::__KawaseBlurRendererSO__Pass::BlurWithAlphaWeights{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass GlobalNamespace::__KawaseBlurRendererSO__Pass::AlphaAndDepthWeights{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass GlobalNamespace::__KawaseBlurRendererSO__Pass::BlurGamma{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__Pass GlobalNamespace::__KawaseBlurRendererSO__Pass::BlurGammaAndAdd{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.GetBlurKernel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize)>(&::GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x210c38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "GetBlurKernel", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)()>(&::GlobalNamespace::KawaseBlurRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x210c588;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)()>(&::GlobalNamespace::KawaseBlurRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x210c938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Bloom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, int32_t, int32_t, float_t, float_t, ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType, ::ArrayW<float_t, ::Array<float_t>*>)>(
    &::GlobalNamespace::KawaseBlurRendererSO::Bloom)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x210c974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Bloom", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__WeightsType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.DoubleBlur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, float_t, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, float_t,
    float_t, int32_t, bool)>(&::GlobalNamespace::KawaseBlurRendererSO::DoubleBlur)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x210d2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "DoubleBlur", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Blur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (
    ::GlobalNamespace::KawaseBlurRendererSO::*)(::UnityEngine::Texture*, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, int32_t)>(&::GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x210d50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Blur", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Blur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, float_t, int32_t)>(&::GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x210d5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Blur", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Blur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::ArrayW<int32_t, ::Array<int32_t>*>, float_t, int32_t, int32_t, int32_t, float_t, float_t, bool, bool,
    ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType)>(&::GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x210ce00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Blur", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__WeightsType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.AlphaWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::KawaseBlurRendererSO::AlphaWeights)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x210d650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "AlphaWeights", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.CreateBlurCommandBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::KawaseBlurRendererSO::*)(int32_t, int32_t, ::StringW, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize, float_t)>(
        &::GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x210d720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "CreateBlurCommandBuffer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)()>(&::GlobalNamespace::KawaseBlurRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210da30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Shader*& GlobalNamespace::KawaseBlurRendererSO::__get__kawaseBlurShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::KawaseBlurRendererSO::__get__kawaseBlurShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurShader;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__kawaseBlurShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kawaseBlurShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::KawaseBlurRendererSO::__get__additiveShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::KawaseBlurRendererSO::__get__additiveShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveShader;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__additiveShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additiveShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Shader*& GlobalNamespace::KawaseBlurRendererSO::__get__tintShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintShader;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& GlobalNamespace::KawaseBlurRendererSO::__get__tintShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintShader;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__tintShader(::UnityEngine::Shader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tintShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::KawaseBlurRendererSO::__get__kawaseBlurMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::KawaseBlurRendererSO::__get__kawaseBlurMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__kawaseBlurMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kawaseBlurMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::KawaseBlurRendererSO::__get__additiveMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::KawaseBlurRendererSO::__get__additiveMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__additiveMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additiveMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::KawaseBlurRendererSO::__get__tintMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::KawaseBlurRendererSO::__get__tintMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__tintMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tintMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::KawaseBlurRendererSO::__get__commandBuffersMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffersMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::KawaseBlurRendererSO::__get__commandBuffersMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffersMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__commandBuffersMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandBuffersMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& GlobalNamespace::KawaseBlurRendererSO::__get__kernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernels;
}
constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& GlobalNamespace::KawaseBlurRendererSO::__get__kernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernels;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__kernels(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*>&
GlobalNamespace::KawaseBlurRendererSO::__get__bloomKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomKernels;
}
constexpr ::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*> const&
GlobalNamespace::KawaseBlurRendererSO::__get__bloomKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomKernels;
}
constexpr void
GlobalNamespace::KawaseBlurRendererSO::__set__bloomKernels(::ArrayW<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*, ::Array<::GlobalNamespace::__KawaseBlurRendererSO__BloomKernel*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomKernels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*>& GlobalNamespace::KawaseBlurRendererSO::__get__blurTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurTextures;
}
constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> const& GlobalNamespace::KawaseBlurRendererSO::__get__blurTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurTextures;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__set__blurTextures(::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blurTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF_kBloomIterationWeights(::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*>, "kBloomIterationWeights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(
      std::forward<::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*> GlobalNamespace::KawaseBlurRendererSO::getStaticF_kBloomIterationWeights() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<float_t, ::Array<float_t>*>, ::Array<::ArrayW<float_t, ::Array<float_t>*>>*>, "kBloomIterationWeights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__offsetID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_offsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__offsetID() {
  return ::cordl_internals::getStaticField<int32_t, "_offsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__boostID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_boostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__boostID() {
  return ::cordl_internals::getStaticField<int32_t, "_boostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__additiveAlphaID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_additiveAlphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__additiveAlphaID() {
  return ::cordl_internals::getStaticField<int32_t, "_additiveAlphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__alphaID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_alphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__alphaID() {
  return ::cordl_internals::getStaticField<int32_t, "_alphaID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__tintColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__tintColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_tintColorID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__alphaWeightsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__alphaWeightsID() {
  return ::cordl_internals::getStaticField<int32_t, "_alphaWeightsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__tempTexture0ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tempTexture0ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__tempTexture0ID() {
  return ::cordl_internals::getStaticField<int32_t, "_tempTexture0ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__tempTexture1ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tempTexture1ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__tempTexture1ID() {
  return ::cordl_internals::getStaticField<int32_t, "_tempTexture1ID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get>();
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "GetBlurKernel", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method, kernelSize);
}
inline void GlobalNamespace::KawaseBlurRendererSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBlurRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBlurRendererSO::Bloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, int32_t iterationsStart, int32_t iterations, float_t boost,
                                                         float_t alphaWeights, ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType blurStartWeightsType,
                                                         ::ArrayW<float_t, ::Array<float_t>*> bloomIterationWeights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Bloom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__WeightsType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest, iterationsStart, iterations, boost, alphaWeights, blurStartWeightsType, bloomIterationWeights);
}
inline void GlobalNamespace::KawaseBlurRendererSO::DoubleBlur(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize0,
                                                              float_t boost0, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize1, float_t boost1, float_t secondBlurAlpha,
                                                              int32_t downsample, bool gammaCorrection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "DoubleBlur", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest, kernelSize0, boost0, kernelSize1, boost1, secondBlurAlpha, downsample, gammaCorrection);
}
/// @param downsample: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::Texture2D* GlobalNamespace::KawaseBlurRendererSO::Blur(::UnityEngine::Texture* src, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize, int32_t downsample) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Blur", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(this, ___internal_method, src, kernelSize, downsample);
}
inline void GlobalNamespace::KawaseBlurRendererSO::Blur(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest, ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize,
                                                        float_t boost, int32_t downsample) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Blur", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest, kernelSize, boost, downsample);
}
inline void GlobalNamespace::KawaseBlurRendererSO::Blur(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest, ::ArrayW<int32_t, ::Array<int32_t>*> kernel, float_t boost, int32_t downsample,
                                                        int32_t startIdx, int32_t length, float_t alphaWeights, float_t additiveAlpha, bool additivelyBlendToDest, bool gammaCorrection,
                                                        ::GlobalNamespace::__KawaseBlurRendererSO__WeightsType blurStartWeightsType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "Blur", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__WeightsType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest, kernel, boost, downsample, startIdx, length, alphaWeights, additiveAlpha, additivelyBlendToDest,
                                                          gammaCorrection, blurStartWeightsType);
}
inline void GlobalNamespace::KawaseBlurRendererSO::AlphaWeights(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "AlphaWeights", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer(int32_t width, int32_t height, ::StringW globalTextureName,
                                                                                                               ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize kernelSize, float_t boost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), "CreateBlurCommandBuffer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__KawaseBlurRendererSO__KernelSize>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*, false>(this, ___internal_method, width, height, globalTextureName, kernelSize, boost);
}
inline ::GlobalNamespace::KawaseBlurRendererSO* GlobalNamespace::KawaseBlurRendererSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::KawaseBlurRendererSO*>());
}
inline void GlobalNamespace::KawaseBlurRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::KawaseBlurRendererSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KawaseBlurRendererSO::KawaseBlurRendererSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
