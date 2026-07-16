#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__FastMemoryFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScaleFunc_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.SetCustomHandleProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::by_ref<::UnityEngine::Rendering::RTHandleProperties>)>(
    &::UnityEngine::Rendering::RTHandle::SetCustomHandleProperties)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67a581c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(),
                                                             { "SetCustomHandleProperties", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandleProperties>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.ClearCustomHandleProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::ClearCustomHandleProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a583c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "ClearCustomHandleProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_scaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_scaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a5844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_scaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.set_scaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Vector2)>(&::UnityEngine::Rendering::RTHandle::set_scaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a584c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "set_scaleFactor", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_useScaling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_useScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a5854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_useScaling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.set_useScaling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(bool)>(&::UnityEngine::Rendering::RTHandle::set_useScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a585c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "set_useScaling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_referenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_referenceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a5864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_referenceSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.set_referenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Vector2Int)>(&::UnityEngine::Rendering::RTHandle::set_referenceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "set_referenceSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_rtHandleProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandleProperties (::UnityEngine::Rendering::RTHandle::*)()>(
    &::UnityEngine::Rendering::RTHandle::get_rtHandleProperties)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67a5874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_rtHandleProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_rt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_rt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a58b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_rt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_externalTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_externalTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a58b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_externalTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_nameID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_nameID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x67a58c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_nameID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a58d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.get_isMSAAEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::get_isMSAAEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a58e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_isMSAAEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Rendering::RTHandleSystem*)>(&::UnityEngine::Rendering::RTHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67a58e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandleSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::RTHandle::op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x67a58f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.op_Implicit___UnityW___UnityEngine__Texture_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::RTHandle::op_Implicit___UnityW___UnityEngine__Texture_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67a5924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.op_Implicit___UnityW___UnityEngine__RenderTexture_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::RTHandle::op_Implicit___UnityW___UnityEngine__RenderTexture_)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x67a59ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.SetRenderTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::RenderTexture*, bool)>(&::UnityEngine::Rendering::RTHandle::SetRenderTexture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x67a59b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                                           { "SetRenderTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.SetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::RTHandle::SetTexture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x67a5a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "SetTexture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.SetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Rendering::RTHandle::SetTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67a57d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "SetTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.GetInstanceID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::GetInstanceID)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67a5a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "GetInstanceID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::Release)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67a5b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.GetScaledSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::RTHandle::GetScaledSize)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x67a5cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "GetScaledSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.GetScaledSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::RTHandle::*)()>(&::UnityEngine::Rendering::RTHandle::GetScaledSize)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x67a5eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "GetScaledSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.SwitchToFastMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Rendering::CommandBuffer*, float_t, ::UnityEngine::Rendering::FastMemoryFlags,
                                                                                                    bool)>(&::UnityEngine::Rendering::RTHandle::SwitchToFastMemory)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67a60ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "SwitchToFastMemory",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.CopyToFastMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Rendering::CommandBuffer*, float_t, ::UnityEngine::Rendering::FastMemoryFlags)>(
    &::UnityEngine::Rendering::RTHandle::CopyToFastMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a6134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(),
            { "CopyToFastMemory", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RTHandle.SwitchOutFastMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Rendering::RTHandle::SwitchOutFastMemory)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67a613c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(),
                                                             { "SwitchOutFastMemory", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandleSystem*& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_Owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr ::UnityEngine::Rendering::RTHandleSystem* const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_Owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Owner;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_Owner(::UnityEngine::Rendering::RTHandleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Owner = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_RT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_RT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RT;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_RT(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RT = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_ExternalTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExternalTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_ExternalTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExternalTexture;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_ExternalTexture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExternalTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_NameID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameID;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_NameID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NameID;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_NameID(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NameID = value;
}
constexpr bool& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_EnableMSAA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableMSAA;
}
constexpr bool const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_EnableMSAA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableMSAA;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_EnableMSAA(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableMSAA = value;
}
constexpr bool& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_EnableRandomWrite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRandomWrite;
}
constexpr bool const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_EnableRandomWrite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRandomWrite;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_EnableRandomWrite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableRandomWrite = value;
}
constexpr bool& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_EnableHWDynamicScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableHWDynamicScale;
}
constexpr bool const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_EnableHWDynamicScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableHWDynamicScale;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_EnableHWDynamicScale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableHWDynamicScale = value;
}
constexpr bool& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_RTHasOwnership() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHasOwnership;
}
constexpr bool const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_RTHasOwnership() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTHasOwnership;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_RTHasOwnership(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RTHasOwnership = value;
}
constexpr ::StringW& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
constexpr bool& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_UseCustomHandleScales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCustomHandleScales;
}
constexpr bool const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_UseCustomHandleScales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseCustomHandleScales;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_UseCustomHandleScales(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseCustomHandleScales = value;
}
constexpr ::UnityEngine::Rendering::RTHandleProperties& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_CustomHandleProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomHandleProperties;
}
constexpr ::UnityEngine::Rendering::RTHandleProperties const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_m_CustomHandleProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomHandleProperties;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_m_CustomHandleProperties(::UnityEngine::Rendering::RTHandleProperties value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomHandleProperties = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::RTHandle::__cordl_internal_get__scaleFactor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleFactor_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::RTHandle::__cordl_internal_get__scaleFactor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleFactor_k__BackingField;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set__scaleFactor_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleFactor_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ScaleFunc*& UnityEngine::Rendering::RTHandle::__cordl_internal_get_scaleFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFunc;
}
constexpr ::UnityEngine::Rendering::ScaleFunc* const& UnityEngine::Rendering::RTHandle::__cordl_internal_get_scaleFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFunc;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set_scaleFunc(::UnityEngine::Rendering::ScaleFunc* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleFunc = value;
}
constexpr bool& UnityEngine::Rendering::RTHandle::__cordl_internal_get__useScaling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScaling_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::RTHandle::__cordl_internal_get__useScaling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScaling_k__BackingField;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set__useScaling_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScaling_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::RTHandle::__cordl_internal_get__referenceSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceSize_k__BackingField;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::RTHandle::__cordl_internal_get__referenceSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceSize_k__BackingField;
}
constexpr void UnityEngine::Rendering::RTHandle::__cordl_internal_set__referenceSize_k__BackingField(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceSize_k__BackingField = value;
}
inline void UnityEngine::Rendering::RTHandle::SetCustomHandleProperties(::by_ref<::UnityEngine::Rendering::RTHandleProperties> properties) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "SetCustomHandleProperties", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandleProperties>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void UnityEngine::Rendering::RTHandle::ClearCustomHandleProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "ClearCustomHandleProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::RTHandle::get_scaleFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_scaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandle::set_scaleFactor(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "set_scaleFactor", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::RTHandle::get_useScaling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_useScaling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandle::set_useScaling(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "set_useScaling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandle::get_referenceSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_referenceSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandle::set_referenceSize(::UnityEngine::Vector2Int value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "set_referenceSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandleProperties UnityEngine::Rendering::RTHandle::get_rtHandleProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_rtHandleProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandleProperties>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::RTHandle::get_rt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_rt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::RTHandle::get_externalTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_externalTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::RTHandle::get_nameID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_nameID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::RTHandle::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::RTHandle::get_isMSAAEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "get_isMSAAEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandle::_ctor(::UnityEngine::Rendering::RTHandleSystem* owner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandleSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::RTHandle::op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Rendering::RTHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(nullptr, ___internal_method, handle);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::RTHandle::op_Implicit___UnityW___UnityEngine__Texture_(::UnityEngine::Rendering::RTHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(nullptr, ___internal_method, handle);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::RTHandle::op_Implicit___UnityW___UnityEngine__RenderTexture_(::UnityEngine::Rendering::RTHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, handle);
}
inline void UnityEngine::Rendering::RTHandle::SetRenderTexture(::UnityEngine::RenderTexture* rt, bool transferOwnership) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                                         { "SetRenderTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rt, transferOwnership);
}
inline void UnityEngine::Rendering::RTHandle::SetTexture(::UnityEngine::Texture* tex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "SetTexture", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline void UnityEngine::Rendering::RTHandle::SetTexture(::UnityEngine::Rendering::RenderTargetIdentifier tex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "SetTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tex);
}
inline int32_t UnityEngine::Rendering::RTHandle::GetInstanceID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "GetInstanceID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandle::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandle::GetScaledSize(::UnityEngine::Vector2Int refSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "GetScaledSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, refSize);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::RTHandle::GetScaledSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "GetScaledSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RTHandle::SwitchToFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, float_t residencyFraction, ::UnityEngine::Rendering::FastMemoryFlags flags,
                                                                 bool copyContents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(), { "SwitchToFastMemory",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, residencyFraction, flags, copyContents);
}
inline void UnityEngine::Rendering::RTHandle::CopyToFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, float_t residencyFraction, ::UnityEngine::Rendering::FastMemoryFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(),
          { "CopyToFastMemory", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rendering::FastMemoryFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, residencyFraction, flags);
}
inline void UnityEngine::Rendering::RTHandle::SwitchOutFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, bool copyContents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RTHandle*>(),
                                                           { "SwitchOutFastMemory", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, copyContents);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::RTHandle::New_ctor(::UnityEngine::Rendering::RTHandleSystem* owner) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RTHandle*>(owner));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RTHandle::RTHandle() {}
