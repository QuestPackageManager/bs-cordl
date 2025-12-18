#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderingData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.get_commandBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderingData::get_commandBuffer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x66be8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "get_commandBuffer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.get_renderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (
    ::UnityEngine::Rendering::Universal::UniversalRenderingData::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderingData::get_renderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66be94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "get_renderingMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.set_renderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)(
    ::UnityEngine::Rendering::Universal::RenderingMode)>(&::UnityEngine::Rendering::Universal::UniversalRenderingData::set_renderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66be954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "set_renderingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.get_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderingData::get_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66be95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "get_opaqueLayerMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.set_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderingData::set_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66be964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "set_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.get_transparentLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderingData::get_transparentLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66be96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                 "get_transparentLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.set_transparentLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderingData::set_transparentLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66be974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "set_transparentLayerMask",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderingData::Reset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x66be97c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderingData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66be998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_m_CommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_m_CommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandBuffer;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_set_m_CommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CullingResults& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_cullResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cullResults;
}
constexpr ::UnityEngine::Rendering::CullingResults const& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_cullResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cullResults;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_set_cullResults(::UnityEngine::Rendering::CullingResults value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cullResults = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_supportsDynamicBatching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsDynamicBatching;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_supportsDynamicBatching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsDynamicBatching;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_set_supportsDynamicBatching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsDynamicBatching = value;
}
constexpr ::UnityEngine::Rendering::PerObjectData& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_perObjectData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perObjectData;
}
constexpr ::UnityEngine::Rendering::PerObjectData const& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get_perObjectData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___perObjectData;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_set_perObjectData(::UnityEngine::Rendering::PerObjectData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___perObjectData = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get__renderingMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get__renderingMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_set__renderingMode_k__BackingField(::UnityEngine::Rendering::Universal::RenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderingMode_k__BackingField = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get__opaqueLayerMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opaqueLayerMask_k__BackingField;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get__opaqueLayerMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opaqueLayerMask_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_set__opaqueLayerMask_k__BackingField(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____opaqueLayerMask_k__BackingField = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get__transparentLayerMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentLayerMask_k__BackingField;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_get__transparentLayerMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentLayerMask_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderingData::__cordl_internal_set__transparentLayerMask_k__BackingField(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transparentLayerMask_k__BackingField = value;
}
inline ::UnityEngine::Rendering::CommandBuffer* UnityEngine::Rendering::Universal::UniversalRenderingData::get_commandBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "get_commandBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRenderingData::get_renderingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "get_renderingMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderingData::set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "set_renderingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRenderingData::get_opaqueLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "get_opaqueLayerMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderingData::set_opaqueLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "set_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRenderingData::get_transparentLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "get_transparentLayerMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderingData::set_transparentLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), "set_transparentLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderingData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderingData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* UnityEngine::Rendering::Universal::UniversalRenderingData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalRenderingData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData::UniversalRenderingData() {}
