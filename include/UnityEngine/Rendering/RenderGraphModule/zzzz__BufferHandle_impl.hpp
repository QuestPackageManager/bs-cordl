#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BufferHandle.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle.get_nullHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::BufferHandle (*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferHandle::get_nullHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x662d224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(),
                                                                               "get_nullHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferHandle::*)(
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x662d284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::BufferHandle::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x662d298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle.op_Implicit___UnityEngine__GraphicsBuffer_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::UnityEngine::Rendering::RenderGraphModule::BufferHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferHandle::op_Implicit___UnityEngine__GraphicsBuffer_)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x662d2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::BufferHandle.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::BufferHandle::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::BufferHandle::IsValid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x662d3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(),
                                                                               "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::BufferHandle::setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, "s_NullHandle",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::RenderGraphModule::BufferHandle::getStaticF_s_NullHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, "s_NullHandle",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UnityEngine::Rendering::RenderGraphModule::BufferHandle::get_nullHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(),
                                                                             "get_nullHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::BufferHandle, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, h);
}
inline void UnityEngine::Rendering::RenderGraphModule::BufferHandle::_ctor(int32_t handle, bool shared) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle, shared);
}
inline ::UnityEngine::GraphicsBuffer*
UnityEngine::Rendering::RenderGraphModule::BufferHandle::op_Implicit___UnityEngine__GraphicsBuffer_(::UnityEngine::Rendering::RenderGraphModule::BufferHandle buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*, false>(nullptr, ___internal_method, buffer);
}
inline bool UnityEngine::Rendering::RenderGraphModule::BufferHandle::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BufferHandle>::get(),
                                                                             "IsValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle::BufferHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle::BufferHandle() {}
