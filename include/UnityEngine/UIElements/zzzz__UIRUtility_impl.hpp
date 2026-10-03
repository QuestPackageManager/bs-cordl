#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIRUtility.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIRUtility_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderData_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingMargins_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.ShapeWindingIsClockwise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::UIRUtility::ShapeWindingIsClockwise)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7277cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "ShapeWindingIsClockwise", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.Encapsulate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIRUtility::Encapsulate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x7277d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                                                           { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.InflateByMargins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::UIElements::PostProcessingMargins)>(
    &::UnityEngine::UIElements::UIRUtility::InflateByMargins)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x7277e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                { "InflateByMargins", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::PostProcessingMargins>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.ComputeMatrixRelativeToAncestor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderData*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIRUtility::ComputeMatrixRelativeToAncestor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x7277f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                             { "ComputeMatrixRelativeToAncestor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.ComputeMatrixRelativeToRenderTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIRUtility::ComputeMatrixRelativeToRenderTree)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x72781ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                            { "ComputeMatrixRelativeToRenderTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.GetVerticesTransformInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIRUtility::GetVerticesTransformInfo)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x7278270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                         { "GetVerticesTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.ComputeTransformMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIR::RenderData*, ::UnityEngine::UIElements::UIR::RenderData*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIRUtility::ComputeTransformMatrix)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x727802c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                             { "ComputeTransformMatrix",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.RectHasArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIRUtility::RectHasArea)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x72783a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "RectHasArea", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.RectHasArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectInt)>(&::UnityEngine::UIElements::UIRUtility::RectHasArea)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7278440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "RectHasArea", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.CastToRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::RectInt)>(&::UnityEngine::UIElements::UIRUtility::CastToRect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x72784c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "CastToRect", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.CastToRectInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectInt (*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIRUtility::CastToRectInt)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x7278550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "CastToRectInt", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.IsRoundRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIRUtility::IsRoundRect)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x7278700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "IsRoundRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.IsVectorImageBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIRUtility::IsVectorImageBackground)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x7278908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                                                           { "IsVectorImageBackground", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::UIElements::UIRUtility::Destroy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x7273128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.GetPrevPow2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::UIRUtility::GetPrevPow2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x7278994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetPrevPow2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.GetNextPow2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::UIRUtility::GetNextPow2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x72736e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetNextPow2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.GetNextPow2Exp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::UIRUtility::GetNextPow2Exp)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x72789cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetNextPow2Exp", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.GetThreadIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::UIElements::UIRUtility::GetThreadIndex)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x72789fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetThreadIndex", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIRUtility::setStaticF_k_ComputeTransformMatrixMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeTransformMatrixMarker", ::UnityEngine::UIElements::UIRUtility*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIRUtility::getStaticF_k_ComputeTransformMatrixMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ComputeTransformMatrixMarker", ::UnityEngine::UIElements::UIRUtility*>();
}
inline void UnityEngine::UIElements::UIRUtility::setStaticF_k_DefaultShaderName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DefaultShaderName", ::UnityEngine::UIElements::UIRUtility*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIRUtility::getStaticF_k_DefaultShaderName() {
  return ::cordl_internals::getStaticField<::StringW, "k_DefaultShaderName", ::UnityEngine::UIElements::UIRUtility*>();
}
inline void UnityEngine::UIElements::UIRUtility::setStaticF_s_ThreadIndex(::System::Nullable_1<int32_t> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<int32_t>, "s_ThreadIndex", ::UnityEngine::UIElements::UIRUtility*>(std::forward<::System::Nullable_1<int32_t>>(value));
}
inline ::System::Nullable_1<int32_t> UnityEngine::UIElements::UIRUtility::getStaticF_s_ThreadIndex() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<int32_t>, "s_ThreadIndex", ::UnityEngine::UIElements::UIRUtility*>();
}
inline bool UnityEngine::UIElements::UIRUtility::ShapeWindingIsClockwise(int32_t maskDepth, int32_t stencilRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "ShapeWindingIsClockwise", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, maskDepth, stencilRef);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIRUtility::Encapsulate(::UnityEngine::Rect a, ::UnityEngine::Rect b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                                                         { "Encapsulate", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIRUtility::InflateByMargins(::UnityEngine::Rect r, ::UnityEngine::UIElements::PostProcessingMargins margins) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                           { "InflateByMargins", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::PostProcessingMargins>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, r, margins);
}
inline void UnityEngine::UIElements::UIRUtility::ComputeMatrixRelativeToAncestor(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderData* ancestor,
                                                                                 ::by_ref<::UnityEngine::Matrix4x4> transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                           { "ComputeMatrixRelativeToAncestor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, ancestor, transform);
}
inline void UnityEngine::UIElements::UIRUtility::ComputeMatrixRelativeToRenderTree(::UnityEngine::UIElements::UIR::RenderData* renderData, ::by_ref<::UnityEngine::Matrix4x4> transform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                          { "ComputeMatrixRelativeToRenderTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, transform);
}
inline void UnityEngine::UIElements::UIRUtility::GetVerticesTransformInfo(::UnityEngine::UIElements::UIR::RenderData* renderData, ::by_ref<::UnityEngine::Matrix4x4> transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                       { "GetVerticesTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, transform);
}
inline void UnityEngine::UIElements::UIRUtility::ComputeTransformMatrix(::UnityEngine::UIElements::UIR::RenderData* renderData, ::UnityEngine::UIElements::UIR::RenderData* ancestor,
                                                                        ::by_ref<::UnityEngine::Matrix4x4> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                           { "ComputeTransformMatrix",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderData, ancestor, result);
}
inline bool UnityEngine::UIElements::UIRUtility::RectHasArea(::UnityEngine::Rect rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "RectHasArea", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect);
}
inline bool UnityEngine::UIElements::UIRUtility::RectHasArea(::UnityEngine::RectInt rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "RectHasArea", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIRUtility::CastToRect(::UnityEngine::RectInt rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "CastToRect", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, rect);
}
inline ::UnityEngine::RectInt UnityEngine::UIElements::UIRUtility::CastToRectInt(::UnityEngine::Rect rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "CastToRectInt", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectInt>(nullptr, ___internal_method, rect);
}
inline bool UnityEngine::UIElements::UIRUtility::IsRoundRect(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "IsRoundRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline bool UnityEngine::UIElements::UIRUtility::IsVectorImageBackground(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "IsVectorImageBackground", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve);
}
inline void UnityEngine::UIElements::UIRUtility::Destroy(::UnityEngine::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "Destroy", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::UIRUtility::GetPrevPow2(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetPrevPow2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, n);
}
inline int32_t UnityEngine::UIElements::UIRUtility::GetNextPow2(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetNextPow2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, n);
}
inline int32_t UnityEngine::UIElements::UIRUtility::GetNextPow2Exp(int32_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetNextPow2Exp", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, n);
}
inline int32_t UnityEngine::UIElements::UIRUtility::GetThreadIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "GetThreadIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIRUtility::UIRUtility() {}
