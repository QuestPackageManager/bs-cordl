#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResource_2.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResource_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
template <typename DescType, typename ResType> constexpr DescType& UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_desc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
template <typename DescType, typename ResType> constexpr DescType const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_desc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desc;
}
template <typename DescType, typename ResType> constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_set_desc(DescType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desc = value;
}
template <typename DescType, typename ResType> constexpr bool& UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_validDesc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validDesc;
}
template <typename DescType, typename ResType> constexpr bool const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_validDesc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validDesc;
}
template <typename DescType, typename ResType> constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_set_validDesc(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validDesc = value;
}
template <typename DescType, typename ResType> constexpr ResType& UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_graphicsResource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicsResource;
}
template <typename DescType, typename ResType>
constexpr ResType const& UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_graphicsResource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicsResource;
}
template <typename DescType, typename ResType>
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_set_graphicsResource(ResType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphicsResource = value;
}
template <typename DescType, typename ResType>
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename DescType, typename ResType>
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename DescType, typename ResType>
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::__cordl_internal_set_m_Pool(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<ResType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pool = value;
}
template <typename DescType, typename ResType> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename DescType, typename ResType>
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::Reset(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
template <typename DescType, typename ResType> inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::IsCreated() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename DescType, typename ResType> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::ReleaseGraphicsResource() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename DescType, typename ResType> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::CreatePooledGraphicsResource() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename DescType, typename ResType> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::ReleasePooledGraphicsResource(int32_t frameIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameIndex);
}
template <typename DescType, typename ResType>
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>* UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>*>());
}
// Ctor Parameters []
template <typename DescType, typename ResType> constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>::RenderGraphResource_2() {}
