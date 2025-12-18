#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BufferedRTHandleSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::BufferedRTHandleSystem*", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0::BufferedRTHandleSystem___c__DisplayClass12_0(::UnityEngine::Rendering::BufferedRTHandleSystem* __4__this,
                                                                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat format) noexcept {
  this->__4__this = __4__this;
  this->format = format;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0::BufferedRTHandleSystem___c__DisplayClass12_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.get_maxWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::get_maxWidth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65f162c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                               "get_maxWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.get_maxHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::get_maxHeight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65f1644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                               "get_maxHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.get_rtHandleProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandleProperties (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::get_rtHandleProperties)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x65f165c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                               "get_rtHandleProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.GetFrameRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::GetFrameRT)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x65f1680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "GetFrameRT", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ClearBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::ClearBuffers)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x65f174c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "ClearBuffers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.AllocBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(
    int32_t, ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>*, int32_t)>(&::UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x65f1918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "AllocBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.AllocBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(
    int32_t, int32_t, ::ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x65f1aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "AllocBuffer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureWrapMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ReleaseBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseBuffer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x65f1d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "ReleaseBuffer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.SwapAndSetReferenceSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::SwapAndSetReferenceSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65f1e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "SwapAndSetReferenceSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ResetReferenceSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::ResetReferenceSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65f2274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "ResetReferenceSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.GetNumFramesAllocated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::GetNumFramesAllocated)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65f2290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "GetNumFramesAllocated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.CalculateRatioAgainstMaxSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(int32_t, int32_t)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::CalculateRatioAgainstMaxSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x65f2344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "CalculateRatioAgainstMaxSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.Swap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::Swap)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x65f1eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "Swap",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)(bool)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::Dispose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65f2370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65f25f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem.ReleaseAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseAll)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x65f23b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                               "ReleaseAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::BufferedRTHandleSystem::*)()>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65f25f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BufferedRTHandleSystem._AllocBuffer_g__Alloc_12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::BufferedRTHandleSystem::*)(::ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool, int32_t, float_t, ::StringW,
                                                         ::ByRef<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0>)>(
    &::UnityEngine::Rendering::BufferedRTHandleSystem::_AllocBuffer_g__Alloc_12_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x65f1cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "<AllocBuffer>g__Alloc|12_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureWrapMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>*&
UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandles;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>* const&
UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandles;
}
constexpr void UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_set_m_RTHandles(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RTHandles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandleSystem*& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandleSystem;
}
constexpr ::UnityEngine::Rendering::RTHandleSystem* const& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_RTHandleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHandleSystem;
}
constexpr void UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_set_m_RTHandleSystem(::UnityEngine::Rendering::RTHandleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RTHandleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_DisposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposedValue;
}
constexpr bool const& UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_get_m_DisposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisposedValue;
}
constexpr void UnityEngine::Rendering::BufferedRTHandleSystem::__cordl_internal_set_m_DisposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisposedValue = value;
}
inline int32_t UnityEngine::Rendering::BufferedRTHandleSystem::get_maxWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                             "get_maxWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::BufferedRTHandleSystem::get_maxHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                             "get_maxHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandleProperties UnityEngine::Rendering::BufferedRTHandleSystem::get_rtHandleProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                             "get_rtHandleProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandleProperties, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::BufferedRTHandleSystem::GetFrameRT(int32_t bufferId, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "GetFrameRT", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, bufferId, frameIndex);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ClearBuffers(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "ClearBuffers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer(int32_t bufferId,
                                                                        ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>* allocator,
                                                                        int32_t bufferCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "AllocBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, int32_t, ::UnityEngine::Rendering::RTHandle*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, allocator, bufferCount);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::AllocBuffer(int32_t bufferId, int32_t bufferCount, ::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                        ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel,
                                                                        float_t mipMapBias, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "AllocBuffer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureWrapMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferCount, descriptor, filterMode, wrapMode, isShadowMap, anisoLevel, mipMapBias, name);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseBuffer(int32_t bufferId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "ReleaseBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::SwapAndSetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "SwapAndSetReferenceSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ResetReferenceSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "ResetReferenceSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
inline int32_t UnityEngine::Rendering::BufferedRTHandleSystem::GetNumFramesAllocated(int32_t bufferId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "GetNumFramesAllocated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bufferId);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::BufferedRTHandleSystem::CalculateRatioAgainstMaxSize(int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "CalculateRatioAgainstMaxSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, width, height);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::Swap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "Swap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::ReleaseAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(),
                                                                             "ReleaseAll", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::BufferedRTHandleSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::BufferedRTHandleSystem::_AllocBuffer_g__Alloc_12_0(::ByRef<::UnityEngine::RenderTextureDescriptor> d, ::UnityEngine::FilterMode fMode, ::UnityEngine::TextureWrapMode wMode,
                                                                           bool isShadow, int32_t aniso, float_t mipBias, ::StringW n,
                                                                           ::ByRef<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::BufferedRTHandleSystem*>::get(), "<AllocBuffer>g__Alloc|12_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureWrapMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::BufferedRTHandleSystem___c__DisplayClass12_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, d, fMode, wMode, isShadow, aniso, mipBias, n, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::BufferedRTHandleSystem* UnityEngine::Rendering::BufferedRTHandleSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::BufferedRTHandleSystem*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::BufferedRTHandleSystem::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::BufferedRTHandleSystem::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem::BufferedRTHandleSystem() {}
