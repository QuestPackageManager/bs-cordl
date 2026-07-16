#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/TransformUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__TransformUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.UnparentChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::ProBuilder::TransformUtility::UnparentChildren)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x66f2a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(), { "UnparentChildren", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.ReparentChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::ProBuilder::TransformUtility::ReparentChildren)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x66f2b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(), { "ReparentChildren", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.TransformVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::TransformUtility::TransformVertex)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x66f2cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(),
                                                             { "TransformVertex", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.InverseTransformVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x66f2e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(),
                                                             { "InverseTransformVertex", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::TransformUtility::setStaticF_s_ChildStack(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>*, "s_ChildStack",
                                    ::UnityEngine::ProBuilder::TransformUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>*
UnityEngine::ProBuilder::TransformUtility::getStaticF_s_ChildStack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>*, "s_ChildStack",
                                           ::UnityEngine::ProBuilder::TransformUtility*>();
}
inline void UnityEngine::ProBuilder::TransformUtility::UnparentChildren(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(), { "UnparentChildren", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline void UnityEngine::ProBuilder::TransformUtility::ReparentChildren(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(), { "ReparentChildren", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::TransformUtility::TransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(),
                                                           { "TransformVertex", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, transform, vertex);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::TransformUtility*>(),
                                                           { "InverseTransformVertex", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Vertex*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*>(nullptr, ___internal_method, transform, vertex);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::TransformUtility::TransformUtility() {}
