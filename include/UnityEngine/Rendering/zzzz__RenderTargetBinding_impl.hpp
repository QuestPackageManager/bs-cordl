#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderTargetBinding.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetBinding_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBinding.get_colorRenderTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> (::UnityEngine::Rendering::RenderTargetBinding::*)()>(
    &::UnityEngine::Rendering::RenderTargetBinding::get_colorRenderTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b09ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_colorRenderTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBinding.get_depthRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::RenderTargetBinding::*)()>(
    &::UnityEngine::Rendering::RenderTargetBinding::get_depthRenderTarget)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b09ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_depthRenderTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBinding.get_colorLoadActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction> (::UnityEngine::Rendering::RenderTargetBinding::*)()>(
    &::UnityEngine::Rendering::RenderTargetBinding::get_colorLoadActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b09d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_colorLoadActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBinding.get_colorStoreActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> (::UnityEngine::Rendering::RenderTargetBinding::*)()>(
    &::UnityEngine::Rendering::RenderTargetBinding::get_colorStoreActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b09d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_colorStoreActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBinding.get_depthLoadAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderBufferLoadAction (::UnityEngine::Rendering::RenderTargetBinding::*)()>(
    &::UnityEngine::Rendering::RenderTargetBinding::get_depthLoadAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b09d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_depthLoadAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBinding.get_depthStoreAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderBufferStoreAction (::UnityEngine::Rendering::RenderTargetBinding::*)()>(
    &::UnityEngine::Rendering::RenderTargetBinding::get_depthStoreAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b09d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_depthStoreAction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderTargetBinding.get_flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetFlags (::UnityEngine::Rendering::RenderTargetBinding::*)()>(
    &::UnityEngine::Rendering::RenderTargetBinding::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b09d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_flags", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> UnityEngine::Rendering::RenderTargetBinding::get_colorRenderTargets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_colorRenderTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::RenderTargetBinding::get_depthRenderTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_depthRenderTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(*this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction> UnityEngine::Rendering::RenderTargetBinding::get_colorLoadActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_colorLoadActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>>(*this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> UnityEngine::Rendering::RenderTargetBinding::get_colorStoreActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_colorStoreActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderBufferLoadAction UnityEngine::Rendering::RenderTargetBinding::get_depthLoadAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_depthLoadAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderBufferLoadAction>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::RenderTargetBinding::get_depthStoreAction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_depthStoreAction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderBufferStoreAction>(*this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderTargetFlags UnityEngine::Rendering::RenderTargetBinding::get_flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderTargetBinding>(), { "get_flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetFlags>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ColorRenderTargets", ty: "::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_DepthRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColorLoadActions", ty:
// "::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColorStoreActions", ty:
// "::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DepthLoadAction", ty: "::UnityEngine::Rendering::RenderBufferLoadAction",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DepthStoreAction", ty: "::UnityEngine::Rendering::RenderBufferStoreAction", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Flags", ty: "::UnityEngine::Rendering::RenderTargetFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderTargetBinding::RenderTargetBinding(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> m_ColorRenderTargets,
                                                                             ::UnityEngine::Rendering::RenderTargetIdentifier m_DepthRenderTarget,
                                                                             ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction> m_ColorLoadActions,
                                                                             ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> m_ColorStoreActions,
                                                                             ::UnityEngine::Rendering::RenderBufferLoadAction m_DepthLoadAction,
                                                                             ::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction,
                                                                             ::UnityEngine::Rendering::RenderTargetFlags m_Flags) noexcept {
  this->m_ColorRenderTargets = m_ColorRenderTargets;
  this->m_DepthRenderTarget = m_DepthRenderTarget;
  this->m_ColorLoadActions = m_ColorLoadActions;
  this->m_ColorStoreActions = m_ColorStoreActions;
  this->m_DepthLoadAction = m_DepthLoadAction;
  this->m_DepthStoreAction = m_DepthStoreAction;
  this->m_Flags = m_Flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderTargetBinding::RenderTargetBinding() {}
