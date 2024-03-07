#pragma once
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChainCommand::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f3d840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.ExecuteNonDrawMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(
    ::UnityEngine::UIElements::UIR::DrawParams*, float_t, ByRef<::System::Exception*>)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh)> {
  constexpr static std::size_t size = 0xbbc;
  constexpr static std::size_t addrs = 0x2f3bfcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(), "ExecuteNonDrawMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::DrawParams*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.Blit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(
    ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, float_t)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::Blit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2f3de20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(), "Blit", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.CombineScissorRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2f3dc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(), "CombineScissorRects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.RectPointsToPixelsAndFlipYAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectInt (*)(::UnityEngine::Rect, float_t)>(
    &::UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x2f3d864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                               "RectPointsToPixelsAndFlipYAxis", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(
    &::UnityEngine::UIElements::UIR::RenderChainCommand::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f3df90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_owner(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_prev(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_closing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closing;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_closing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closing;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_closing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closing = value;
}
constexpr ::UnityEngine::UIElements::UIR::CommandType& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::UnityEngine::UIElements::UIR::CommandType const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_type(::UnityEngine::UIElements::UIR::CommandType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::UnityEngine::UIElements::UIR::State& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::UnityEngine::UIElements::UIR::State const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_state(::UnityEngine::UIElements::UIR::State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::MeshHandle*> const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_mesh(::UnityEngine::UIElements::UIR::MeshHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_indexOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexOffset;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_indexOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexOffset;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_indexOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexOffset = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_indexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexCount;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_indexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexCount;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_indexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indexCount = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_callback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::setStaticF_k_ID_MainTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ID_MainTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::RenderChainCommand::getStaticF_k_ID_MainTex() {
  return ::cordl_internals::getStaticField<int32_t, "k_ID_MainTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::setStaticF_s_ImmediateOverheadMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChainCommand::getStaticF_s_ImmediateOverheadMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get>();
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh(::UnityEngine::UIElements::UIR::DrawParams* drawParams, float_t pixelsPerPoint,
                                                                                 ByRef<::System::Exception*> immediateException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(), "ExecuteNonDrawMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::DrawParams*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, drawParams, pixelsPerPoint, immediateException);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* destination, float_t depth) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(), "Blit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, destination, depth);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects(::UnityEngine::Rect r0, ::UnityEngine::Rect r1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                             "CombineScissorRects", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, r0, r1);
}
inline ::UnityEngine::RectInt UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis(::UnityEngine::Rect rect, float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(), "RectPointsToPixelsAndFlipYAxis", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectInt, false>(nullptr, ___internal_method, rect, pixelsPerPoint);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChainCommand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::RenderChainCommand*>());
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::RenderChainCommand*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand::RenderChainCommand() {}
