#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRenderer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIRenderer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.AddDrawCallData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRenderer::*)(int32_t, int32_t, ::UnityEngine::Material*, uint32_t, uint32_t)>(
    &::UnityEngine::UIElements::UIRenderer::AddDrawCallData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x726a508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
            { "AddDrawCallData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.ResetDrawCallData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIRenderer::*)()>(&::UnityEngine::UIElements::UIRenderer::ResetDrawCallData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x726a66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { "ResetDrawCallData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.OnRenderNodeExecute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIRenderer*, int32_t, int32_t)>(&::UnityEngine::UIElements::UIRenderer::OnRenderNodeExecute)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x726a728;

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
  constexpr static std::size_t addrs = 0x726a7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.AddDrawCallData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr, uint32_t, uint32_t)>(
    &::UnityEngine::UIElements::UIRenderer::AddDrawCallData_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x726a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
                                                                                           { "AddDrawCallData_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRenderer.ResetDrawCallData_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::UIElements::UIRenderer::ResetDrawCallData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x726a6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { "ResetDrawCallData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
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
inline void UnityEngine::UIElements::UIRenderer::AddDrawCallData(int32_t safeFrameIndex, int32_t cmdListIndex, ::UnityEngine::Material* mat, uint32_t textureSlotCount, uint32_t forceRenderType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(),
          { "AddDrawCallData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, safeFrameIndex, cmdListIndex, mat, textureSlotCount, forceRenderType);
}
inline void UnityEngine::UIElements::UIRenderer::ResetDrawCallData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { "ResetDrawCallData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
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
inline void UnityEngine::UIElements::UIRenderer::AddDrawCallData_Injected(::System::IntPtr _unity_self, int32_t safeFrameIndex, int32_t cmdListIndex, ::System::IntPtr mat, uint32_t textureSlotCount,
                                                                          uint32_t forceRenderType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { "AddDrawCallData_Injected",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, safeFrameIndex, cmdListIndex, mat, textureSlotCount, forceRenderType);
}
inline void UnityEngine::UIElements::UIRenderer::ResetDrawCallData_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRenderer*>(), { "ResetDrawCallData_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::UIElements::UIRenderer* UnityEngine::UIElements::UIRenderer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIRenderer::UIRenderer() {}
