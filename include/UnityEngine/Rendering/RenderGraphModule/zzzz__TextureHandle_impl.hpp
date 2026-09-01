#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\TextureHandle.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.get_nullHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureHandle::get_nullHandle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67ea008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), { "get_nullHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureHandle::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureHandle::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67ea064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureHandle::*)(int32_t, bool, bool)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureHandle::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67e7000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x67ea07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.op_Implicit___UnityW___UnityEngine__Texture_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityW___UnityEngine__Texture_)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x67ea25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.op_Implicit___UnityW___UnityEngine__RenderTexture_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityW___UnityEngine__RenderTexture_)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x67ea3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.op_Implicit___UnityEngine__Rendering__RTHandle_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityEngine__Rendering__RTHandle_)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x67ea5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::TextureHandle::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureHandle::IsValid)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x67ea73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.IsBuiltin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RenderGraphModule::TextureHandle::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::TextureHandle::IsBuiltin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67ea820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), { "IsBuiltin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureHandle.GetDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (::UnityEngine::Rendering::RenderGraphModule::TextureHandle::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::RenderGraphModule::TextureHandle::GetDescriptor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67ea828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                           { "GetDescriptor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::TextureHandle::setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, "s_NullHandle", ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::RenderGraphModule::TextureHandle::getStaticF_s_NullHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, "s_NullHandle", ::UnityEngine::Rendering::RenderGraphModule::TextureHandle>();
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::RenderGraphModule::TextureHandle::get_nullHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), { "get_nullHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureHandle::_ctor(::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, h);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureHandle::_ctor(int32_t handle, bool shared, bool builtin) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, shared, builtin);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier
UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(nullptr, ___internal_method, texture);
}
inline ::UnityW<::UnityEngine::Texture>
UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityW___UnityEngine__Texture_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, texture);
}
inline ::UnityW<::UnityEngine::RenderTexture>
UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityW___UnityEngine__RenderTexture_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, texture);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::RenderGraphModule::TextureHandle::op_Implicit___UnityEngine__Rendering__RTHandle_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, texture);
}
inline bool UnityEngine::Rendering::RenderGraphModule::TextureHandle::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Rendering::RenderGraphModule::TextureHandle::IsBuiltin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), { "IsBuiltin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::RenderGraphModule::TextureHandle::GetDescriptor(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                         { "GetDescriptor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(*this, ___internal_method, renderGraph);
}
// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "builtin", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle::TextureHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle, bool builtin) noexcept {
  this->handle = handle;
  this->builtin = builtin;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle::TextureHandle() {}
