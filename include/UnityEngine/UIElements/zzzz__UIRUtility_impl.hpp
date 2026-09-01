#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIRUtility.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIRUtility_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.ShapeWindingIsClockwise
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::UIRUtility::ShapeWindingIsClockwise)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6dd8c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(), { "ShapeWindingIsClockwise", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.GetVerticesTransformInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIRUtility::GetVerticesTransformInfo)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6dd8d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                         { "GetVerticesTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.ComputeTransformMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIRUtility::ComputeTransformMatrix)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6dd8e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                             { "ComputeTransformMatrix",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIRUtility.IsRoundRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIRUtility::IsRoundRect)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6dd8fbc;

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
  constexpr static std::size_t addrs = 0x6dd91c4;

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
  constexpr static std::size_t addrs = 0x6dd9250;

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
  constexpr static std::size_t addrs = 0x6dd9348;

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
  constexpr static std::size_t addrs = 0x6dd9380;

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
  constexpr static std::size_t addrs = 0x6dd939c;

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
  constexpr static std::size_t addrs = 0x6dd93cc;

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
inline void UnityEngine::UIElements::UIRUtility::setStaticF_k_DefaultWorldSpaceShaderName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DefaultWorldSpaceShaderName", ::UnityEngine::UIElements::UIRUtility*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIRUtility::getStaticF_k_DefaultWorldSpaceShaderName() {
  return ::cordl_internals::getStaticField<::StringW, "k_DefaultWorldSpaceShaderName", ::UnityEngine::UIElements::UIRUtility*>();
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
inline void UnityEngine::UIElements::UIRUtility::GetVerticesTransformInfo(::UnityEngine::UIElements::VisualElement* ve, ::by_ref<::UnityEngine::Matrix4x4> transform) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                       { "GetVerticesTransformInfo", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, transform);
}
inline void UnityEngine::UIElements::UIRUtility::ComputeTransformMatrix(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* ancestor,
                                                                        ::by_ref<::UnityEngine::Matrix4x4> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIRUtility*>(),
                                                           { "ComputeTransformMatrix",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ve, ancestor, result);
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
