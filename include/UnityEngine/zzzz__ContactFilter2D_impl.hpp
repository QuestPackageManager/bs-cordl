#pragma once
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CheckConsistency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContactFilter2D::*)()>(&::UnityEngine::ContactFilter2D::CheckConsistency)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3251260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "CheckConsistency",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.SetLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContactFilter2D::*)(::UnityEngine::LayerMask)>(&::UnityEngine::ContactFilter2D::SetLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32512d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "SetLayerMask", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.SetDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ContactFilter2D::*)(float_t, float_t)>(&::UnityEngine::ContactFilter2D::SetDepth)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x32512e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "SetDepth", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CreateLegacyFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ContactFilter2D (*)(int32_t, float_t, float_t)>(&::UnityEngine::ContactFilter2D::CreateLegacyFilter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x324fcac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "CreateLegacyFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ContactFilter2D.CheckConsistency_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ContactFilter2D>)>(&::UnityEngine::ContactFilter2D::CheckConsistency_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x325129c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "CheckConsistency_Injected", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ContactFilter2D>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ContactFilter2D::CheckConsistency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "CheckConsistency",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::ContactFilter2D::SetLayerMask(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "SetLayerMask", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layerMask);
}
inline void UnityEngine::ContactFilter2D::SetDepth(float_t minDepth, float_t maxDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "SetDepth", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, minDepth, maxDepth);
}
inline ::UnityEngine::ContactFilter2D UnityEngine::ContactFilter2D::CreateLegacyFilter(int32_t layerMask, float_t minDepth, float_t maxDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "CreateLegacyFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ContactFilter2D, false>(nullptr, ___internal_method, layerMask, minDepth, maxDepth);
}
inline void UnityEngine::ContactFilter2D::CheckConsistency_Injected(ByRef<::UnityEngine::ContactFilter2D> _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ContactFilter2D>::get(), "CheckConsistency_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ContactFilter2D>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self);
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
