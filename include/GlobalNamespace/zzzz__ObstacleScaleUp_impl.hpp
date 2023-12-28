#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleScaleUp_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)()>(&::GlobalNamespace::ObstacleScaleUp::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x238e798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)()>(&::GlobalNamespace::ObstacleScaleUp::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x238e948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.UpdateScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)(float_t)>(&::GlobalNamespace::ObstacleScaleUp::UpdateScale)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x238e82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "UpdateScale", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.HandleObstacleControllerDidUpdateProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)(::GlobalNamespace::ObstacleController*, float_t)>(
    &::GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidUpdateProgress)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x238ea80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "HandleObstacleControllerDidUpdateProgress", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp.HandleObstacleControllerDidInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)(::GlobalNamespace::ObstacleControllerBase*)>(
    &::GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidInit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x238eaa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "HandleObstacleControllerDidInit", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleControllerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleScaleUp._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleScaleUp::*)()>(&::GlobalNamespace::ObstacleScaleUp::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x238eb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ObstacleScaleUp::__get__fullScalePart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScalePart;
}
constexpr float_t const& GlobalNamespace::ObstacleScaleUp::__get__fullScalePart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScalePart;
}
constexpr void GlobalNamespace::ObstacleScaleUp::__set__fullScalePart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullScalePart = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::ObstacleScaleUp::__get__targetTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::ObstacleScaleUp::__get__targetTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr void GlobalNamespace::ObstacleScaleUp::__set__targetTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObstacleController*& GlobalNamespace::ObstacleScaleUp::__get__obstacleController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> const& GlobalNamespace::ObstacleScaleUp::__get__obstacleController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleController;
}
constexpr void GlobalNamespace::ObstacleScaleUp::__set__obstacleController(::GlobalNamespace::ObstacleController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ObstacleScaleUp::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleScaleUp::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleScaleUp::UpdateScale(float_t progress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "UpdateScale", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
inline void GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidUpdateProgress(::GlobalNamespace::ObstacleController* obstacleController, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "HandleObstacleControllerDidUpdateProgress", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController, time);
}
inline void GlobalNamespace::ObstacleScaleUp::HandleObstacleControllerDidInit(::GlobalNamespace::ObstacleControllerBase* obstacleController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), "HandleObstacleControllerDidInit", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleControllerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline ::GlobalNamespace::ObstacleScaleUp* GlobalNamespace::ObstacleScaleUp::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObstacleScaleUp*>());
}
inline void GlobalNamespace::ObstacleScaleUp::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleScaleUp*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleScaleUp::ObstacleScaleUp() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
