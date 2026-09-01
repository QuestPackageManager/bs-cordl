#pragma once
// IWYU pragma private; include "UnityEngine\RenderingLayerMask.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.op_Implicit_uint32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::RenderingLayerMask)>(&::UnityEngine::RenderingLayerMask::op_Implicit_uint32_t)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ad8888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.NameToRenderingLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::RenderingLayerMask::NameToRenderingLayer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6ad888c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "NameToRenderingLayer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.GetDefinedRenderingLayersCombinedMaskValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::RenderingLayerMask::GetDefinedRenderingLayersCombinedMaskValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad8a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "GetDefinedRenderingLayersCombinedMaskValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.GetDefinedRenderingLayerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::RenderingLayerMask::GetDefinedRenderingLayerNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad8a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "GetDefinedRenderingLayerNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.GetRenderingLayerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::RenderingLayerMask::GetRenderingLayerCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ad8a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "GetRenderingLayerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderingLayerMask.NameToRenderingLayer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::RenderingLayerMask::NameToRenderingLayer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ad89e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(),
                                                             { "NameToRenderingLayer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::RenderingLayerMask::setStaticF__defaultRenderingLayerMask_k__BackingField(::UnityEngine::RenderingLayerMask value) {
  ::cordl_internals::setStaticField<::UnityEngine::RenderingLayerMask, "<defaultRenderingLayerMask>k__BackingField", ::UnityEngine::RenderingLayerMask>(
      std::forward<::UnityEngine::RenderingLayerMask>(value));
}
inline ::UnityEngine::RenderingLayerMask UnityEngine::RenderingLayerMask::getStaticF__defaultRenderingLayerMask_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::RenderingLayerMask, "<defaultRenderingLayerMask>k__BackingField", ::UnityEngine::RenderingLayerMask>();
}
inline uint32_t UnityEngine::RenderingLayerMask::op_Implicit_uint32_t(::UnityEngine::RenderingLayerMask mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, mask);
}
inline int32_t UnityEngine::RenderingLayerMask::NameToRenderingLayer(::StringW layerName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "NameToRenderingLayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, layerName);
}
inline uint32_t UnityEngine::RenderingLayerMask::GetDefinedRenderingLayersCombinedMaskValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "GetDefinedRenderingLayersCombinedMaskValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::RenderingLayerMask::GetDefinedRenderingLayerNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "GetDefinedRenderingLayerNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::RenderingLayerMask::GetRenderingLayerCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "GetRenderingLayerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::RenderingLayerMask::NameToRenderingLayer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> layerName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RenderingLayerMask>(), { "NameToRenderingLayer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, layerName);
}
// Ctor Parameters [CppParam { name: "m_Bits", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderingLayerMask::RenderingLayerMask(uint32_t m_Bits) noexcept {
  this->m_Bits = m_Bits;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderingLayerMask::RenderingLayerMask() {}
