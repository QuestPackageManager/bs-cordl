#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/RenderTargetBufferSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "rtMSAA", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rtResolve", ty:
// "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "msaa", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer::RenderTargetBufferSystem_SwapBuffer(::UnityEngine::Rendering::RTHandle* rtMSAA,
                                                                                                                                  ::UnityEngine::Rendering::RTHandle* rtResolve, ::StringW name,
                                                                                                                                  int32_t msaa) noexcept {
  this->rtMSAA = rtMSAA;
  this->rtResolve = rtResolve;
  this->name = name;
  this->msaa = msaa;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer::RenderTargetBufferSystem_SwapBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.get_backBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer> (
    ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_backBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66ea5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "get_backBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.get_frontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer> (
    ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_frontBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66ea650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "get_frontBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(::StringW)>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x66ea6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66ea758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.PeekBackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::PeekBackBuffer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66ea7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "PeekBackBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.GetBackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(::UnityEngine::Rendering::CommandBuffer*)>(
        &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBackBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66ea7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBackBuffer",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.GetFrontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(::UnityEngine::Rendering::CommandBuffer*)>(
        &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetFrontBuffer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x66eaa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetFrontBuffer",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.Swap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Swap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66eab00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Swap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.ReAllocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::ReAllocate)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x66ea80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "ReAllocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66eab64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.SetCameraSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode)>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::SetCameraSettings)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66eabe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "SetCameraSettings", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.GetBufferA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBufferA)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x66ead48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBufferA",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.EnableMSAA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::EnableMSAA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66eacc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "EnableMSAA",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_A;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer const&
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_A;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_A(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_A = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_B() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_B;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer const&
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_B() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_B;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_B(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_B = value;
}
constexpr ::UnityEngine::FilterMode& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_FilterMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterMode;
}
constexpr ::UnityEngine::FilterMode const& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_FilterMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterMode;
}
constexpr void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_FilterMode(::UnityEngine::FilterMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilterMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_AllowMSAA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowMSAA;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_AllowMSAA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowMSAA;
}
constexpr void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_AllowMSAA(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowMSAA = value;
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::setStaticF_m_AisBackBuffer(bool value) {
  ::cordl_internals::setStaticField<bool, "m_AisBackBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::getStaticF_m_AisBackBuffer() {
  return ::cordl_internals::getStaticField<bool, "m_AisBackBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::setStaticF_m_Desc(::UnityEngine::RenderTextureDescriptor value) {
  ::cordl_internals::setStaticField<::UnityEngine::RenderTextureDescriptor, "m_Desc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>(
      std::forward<::UnityEngine::RenderTextureDescriptor>(value));
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::getStaticF_m_Desc() {
  return ::cordl_internals::getStaticField<::UnityEngine::RenderTextureDescriptor, "m_Desc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>();
}
inline ::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer> UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_backBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "get_backBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer> UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_frontBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "get_frontBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem_SwapBuffer>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::PeekBackBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "PeekBackBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBackBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBackBuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetFrontBuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Swap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Swap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::ReAllocate(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "ReAllocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::SetCameraSettings(::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filterMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "SetCameraSettings", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc, filterMode);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBufferA() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBufferA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::EnableMSAA(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "EnableMSAA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>(name));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::RenderTargetBufferSystem() {}
