#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIRenderer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIRenderer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.SetNativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRenderer::*)(int32_t, int32_t, ::UnityEngine::Material*)>(
    &::UnityEngine::UIElements::UIRenderer::SetNativeData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6db7238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
                                                             { "SetNativeData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.OnRenderNodeExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIRenderer*, int32_t, int32_t)>(&::UnityEngine::UIElements::UIRenderer::OnRenderNodeExecute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6db736c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
                                                { "OnRenderNodeExecute", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRenderer::*)()>(&::UnityEngine::UIElements::UIRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.SetNativeData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr)>(&::UnityEngine::UIElements::UIRenderer::SetNativeData_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6db7310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
                            { "SetNativeData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>& UnityEngine::UIElements::UIRenderer::__cordl_internal_get_commandLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandLists;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> const& UnityEngine::UIElements::UIRenderer::__cordl_internal_get_commandLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commandLists;
}
constexpr void UnityEngine::UIElements::UIRenderer::__cordl_internal_set_commandLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commandLists = value;
}
constexpr bool& UnityEngine::UIElements::UIRenderer::__cordl_internal_get_skipRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipRendering;
}
constexpr bool const& UnityEngine::UIElements::UIRenderer::__cordl_internal_get_skipRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipRendering;
}
constexpr void UnityEngine::UIElements::UIRenderer::__cordl_internal_set_skipRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skipRendering = value;
}
inline void UnityEngine::UIElements::UIRenderer::SetNativeData(int32_t safeFrameIndex, int32_t cmdListIndex, ::UnityEngine::Material* mat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
                                                           { "SetNativeData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, safeFrameIndex, cmdListIndex, mat);
}
inline void UnityEngine::UIElements::UIRenderer::OnRenderNodeExecute(::UnityEngine::UIElements::UIRenderer* renderer, int32_t safeFrameIndex, int32_t cmdListIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
                                              { "OnRenderNodeExecute", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderer, safeFrameIndex, cmdListIndex);
}
inline void UnityEngine::UIElements::UIRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIRenderer::SetNativeData_Injected(::System::IntPtr _unity_self, int32_t safeFrameIndex, int32_t cmdListIndex, ::System::IntPtr mat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
                          { "SetNativeData_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, safeFrameIndex, cmdListIndex, mat);
}
inline ::UnityEngine::UIElements::UIRenderer* UnityEngine::UIElements::UIRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIRenderer::UIRenderer() {}
