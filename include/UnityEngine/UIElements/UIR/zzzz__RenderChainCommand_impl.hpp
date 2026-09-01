#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\RenderChainCommand.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(&::UnityEngine::UIElements::UIR::RenderChainCommand::Reset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6cfc83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.ExecuteNonDrawMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(
    ::UnityEngine::UIElements::UIR::DrawParams*, float_t, ::by_ref<::System::Exception*>)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh)> {
  constexpr static std::size_t size = 0xdd4;
  constexpr static std::size_t addrs = 0x6cfc860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
            { "ExecuteNonDrawMesh", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::DrawParams*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.Blit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, float_t)>(
    &::UnityEngine::UIElements::UIR::RenderChainCommand::Blit)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6cfdae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                { "Blit", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.CombineScissorRects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6cfd9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                             { "CombineScissorRects", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand.RectPointsToPixelsAndFlipYAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectInt (*)(::UnityEngine::Rect, float_t)>(&::UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x6cfd634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                             { "RectPointsToPixelsAndFlipYAxis", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::RenderChainCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::RenderChainCommand::*)()>(&::UnityEngine::UIElements::UIR::RenderChainCommand::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6cfdd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_owner(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owner = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_prev(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prev = value;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_next(::UnityEngine::UIElements::UIR::RenderChainCommand* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
constexpr bool& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_isTail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTail;
}
constexpr bool const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_isTail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTail;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_isTail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTail = value;
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
constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_mesh(::UnityEngine::UIElements::UIR::MeshHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mesh = value;
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
constexpr ::System::Action* const& UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainCommand::__cordl_internal_set_callback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::setStaticF_k_ID_MainTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ID_MainTex", ::UnityEngine::UIElements::UIR::RenderChainCommand*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::RenderChainCommand::getStaticF_k_ID_MainTex() {
  return ::cordl_internals::getStaticField<int32_t, "k_ID_MainTex", ::UnityEngine::UIElements::UIR::RenderChainCommand*>();
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::setStaticF_s_ImmediateOverheadMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker", ::UnityEngine::UIElements::UIR::RenderChainCommand*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::RenderChainCommand::getStaticF_s_ImmediateOverheadMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ImmediateOverheadMarker", ::UnityEngine::UIElements::UIR::RenderChainCommand*>();
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::ExecuteNonDrawMesh(::UnityEngine::UIElements::UIR::DrawParams* drawParams, float_t pixelsPerPoint,
                                                                                 ::by_ref<::System::Exception*> immediateException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                       { "ExecuteNonDrawMesh", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::DrawParams*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drawParams, pixelsPerPoint, immediateException);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* destination, float_t depth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                           { "Blit", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination, depth);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::RenderChainCommand::CombineScissorRects(::UnityEngine::Rect r0, ::UnityEngine::Rect r1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                           { "CombineScissorRects", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, r0, r1);
}
inline ::UnityEngine::RectInt UnityEngine::UIElements::UIR::RenderChainCommand::RectPointsToPixelsAndFlipYAxis(::UnityEngine::Rect rect, float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(),
                                                           { "RectPointsToPixelsAndFlipYAxis", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectInt>(nullptr, ___internal_method, rect, pixelsPerPoint);
}
inline void UnityEngine::UIElements::UIR::RenderChainCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::RenderChainCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* UnityEngine::UIElements::UIR::RenderChainCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::RenderChainCommand*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand::RenderChainCommand() {}
