#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\ShaderInfoStorage_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ShaderInfoStorage_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIRAtlasAllocator_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_InitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialSize;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_InitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialSize;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_set_m_InitialSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitialSize = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_set_m_MaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSize = value;
}
template <typename T> constexpr ::UnityEngine::TextureFormat& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
template <typename T> constexpr ::UnityEngine::TextureFormat const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_set_m_Format(::UnityEngine::TextureFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Format = value;
}
template <typename T> constexpr ::System::Func_2<::UnityEngine::Color, T>*& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Convert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Convert;
}
template <typename T> constexpr ::System::Func_2<::UnityEngine::Color, T>* const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Convert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Convert;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_set_m_Convert(::System::Func_2<::UnityEngine::Color, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Convert = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UIRAtlasAllocator*& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
template <typename T> constexpr ::UnityEngine::UIElements::UIRAtlasAllocator* const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_set_m_Allocator(::UnityEngine::UIElements::UIRAtlasAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Allocator = value;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Texture = value;
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T>& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Texels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texels;
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T> const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_get_m_Texels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texels;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__cordl_internal_set_m_Texels(::Unity::Collections::NativeArray_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Texels = value;
}
template <typename T>
inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::_ctor(::UnityEngine::TextureFormat format, ::System::Func_2<::UnityEngine::Color, T>* convert, int32_t initialSize, int32_t maxSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<::System::Func_2<::UnityEngine::Color, T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, convert, initialSize, maxSize);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template <typename T> inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::get_texture() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::AllocateRect(int32_t width, int32_t height, ::by_ref<::UnityEngine::RectInt> uvs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height, uvs);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::SetTexel(int32_t x, int32_t y, ::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, color);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::UpdateTexture() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::CreateOrExpandTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(), { "CreateOrExpandTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::CpuBlit(::Unity::Collections::NativeArray_1<T> src, int32_t srcWidth, int32_t srcHeight, ::Unity::Collections::NativeArray_1<T> dst,
                                                                          int32_t dstWidth, int32_t dstHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(),
                                                           { "CpuBlit",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcWidth, srcHeight, dst, dstWidth, dstHeight);
}
template <typename T>
inline ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*
UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::New_ctor(::UnityEngine::TextureFormat format, ::System::Func_2<::UnityEngine::Color, T>* convert, int32_t initialSize, int32_t maxSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(format, convert, initialSize, maxSize));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::ShaderInfoStorage_1() {}
