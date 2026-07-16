#pragma once
// IWYU pragma private; include "UnityEngine/ContactFilter2D.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CheckConsistency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContactFilter2D::*)()>(&::UnityEngine::ContactFilter2D::CheckConsistency)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6d840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "CheckConsistency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.SetLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContactFilter2D::*)(::UnityEngine::LayerMask)>(&::UnityEngine::ContactFilter2D::SetLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b6d87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "SetLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.SetDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ContactFilter2D::*)(float_t, float_t)>(&::UnityEngine::ContactFilter2D::SetDepth)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6b6d88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "SetDepth", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CreateLegacyFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ContactFilter2D (*)(int32_t, float_t, float_t)>(&::UnityEngine::ContactFilter2D::CreateLegacyFilter)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b6c0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "CreateLegacyFilter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::ContactFilter2D::CheckConsistency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "CheckConsistency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::ContactFilter2D::SetLayerMask(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "SetLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, layerMask);
}
inline void UnityEngine::ContactFilter2D::SetDepth(float_t minDepth, float_t maxDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "SetDepth", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, minDepth, maxDepth);
}
inline ::UnityEngine::ContactFilter2D UnityEngine::ContactFilter2D::CreateLegacyFilter(int32_t layerMask, float_t minDepth, float_t maxDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ContactFilter2D>(), { "CreateLegacyFilter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactFilter2D>(nullptr, ___internal_method, layerMask, minDepth, maxDepth);
}
// Ctor Parameters [CppParam { name: "useTriggers", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useLayerMask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "useDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useOutsideDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useNormalAngle", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useOutsideNormalAngle", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "layerMask", ty:
// "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDepth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDepth", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "minNormalAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxNormalAngle", ty: "float_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::ContactFilter2D::ContactFilter2D(bool useTriggers, bool useLayerMask, bool useDepth, bool useOutsideDepth, bool useNormalAngle, bool useOutsideNormalAngle,
                                                          ::UnityEngine::LayerMask layerMask, float_t minDepth, float_t maxDepth, float_t minNormalAngle, float_t maxNormalAngle) noexcept {
  this->useTriggers = useTriggers;
  this->useLayerMask = useLayerMask;
  this->useDepth = useDepth;
  this->useOutsideDepth = useOutsideDepth;
  this->useNormalAngle = useNormalAngle;
  this->useOutsideNormalAngle = useOutsideNormalAngle;
  this->layerMask = layerMask;
  this->minDepth = minDepth;
  this->maxDepth = maxDepth;
  this->minNormalAngle = minNormalAngle;
  this->maxNormalAngle = maxNormalAngle;
}
// Ctor Parameters []
constexpr ::UnityEngine::ContactFilter2D::ContactFilter2D() {}
