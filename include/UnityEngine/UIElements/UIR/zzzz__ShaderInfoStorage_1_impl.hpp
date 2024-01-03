#pragma once
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
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_InitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialSize;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_InitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitialSize;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__set_m_InitialSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitialSize = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__set_m_MaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSize = value;
}
template <typename T> constexpr ::UnityEngine::TextureFormat& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
template <typename T> constexpr ::UnityEngine::TextureFormat const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Format;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__set_m_Format(::UnityEngine::TextureFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Format = value;
}
template <typename T> constexpr ::System::Func_2<::UnityEngine::Color, T>*& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Convert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Convert;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Color, T>*> const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Convert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Convert;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__set_m_Convert(::System::Func_2<::UnityEngine::Color, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Convert)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::UIElements::UIRAtlasAllocator*& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Allocator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIRAtlasAllocator*> const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Allocator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Allocator;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__set_m_Allocator(::UnityEngine::UIElements::UIRAtlasAllocator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Allocator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::Texture2D*& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Texture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Texture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texture;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__set_m_Texture(::UnityEngine::Texture2D* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Texture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T>& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Texels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texels;
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T> const& UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__get_m_Texels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Texels;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::__set_m_Texels(::Unity::Collections::NativeArray_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Texels = value;
}
/// @param initialSize: int32_t (default: static_cast<int32_t>(0x40))
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x1000))
template <typename T>
inline ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*
UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::New_ctor(::UnityEngine::TextureFormat format, ::System::Func_2<::UnityEngine::Color, T>* convert, int32_t initialSize, int32_t maxSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>(format, convert, initialSize, maxSize));
}
/// @param initialSize: int32_t (default: static_cast<int32_t>(0x40))
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x1000))
template <typename T>
inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::_ctor(::UnityEngine::TextureFormat format, ::System::Func_2<::UnityEngine::Color, T>* convert, int32_t initialSize, int32_t maxSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextureFormat>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Color, T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, format, convert, initialSize, maxSize);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline ::UnityEngine::Texture2D* UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::get_texture() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::AllocateRect(int32_t width, int32_t height, ByRef<::UnityEngine::RectInt> uvs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, width, height, uvs);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::SetTexel(int32_t x, int32_t y, ::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, x, y, color);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::UpdateTexture() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::CreateOrExpandTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(),
                                                                             "CreateOrExpandTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::CpuBlit(::Unity::Collections::NativeArray_1<T> src, int32_t srcWidth, int32_t srcHeight, ::Unity::Collections::NativeArray_1<T> dst,
                                                                          int32_t dstWidth, int32_t dstHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>*>::get(), "CpuBlit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, srcWidth, srcHeight, dst, dstWidth, dstHeight);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::ShaderInfoStorage_1<T>::ShaderInfoStorage_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
