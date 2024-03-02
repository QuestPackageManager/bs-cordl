#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__VRIKLODController_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKLODController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIKLODController::*)()>(&::RootMotion::FinalIK::VRIKLODController::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1376698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKLODController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIKLODController::*)()>(&::RootMotion::FinalIK::VRIKLODController::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x13766e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKLODController.GetLODLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::VRIKLODController::*)()>(&::RootMotion::FinalIK::VRIKLODController::GetLODLevel)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1376710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), "GetLODLevel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKLODController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::VRIKLODController::*)()>(&::RootMotion::FinalIK::VRIKLODController::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1376830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_LODRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LODRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_LODRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LODRenderer;
}
constexpr void RootMotion::FinalIK::VRIKLODController::__cordl_internal_set_LODRenderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LODRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_LODDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LODDistance;
}
constexpr float_t const& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_LODDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LODDistance;
}
constexpr void RootMotion::FinalIK::VRIKLODController::__cordl_internal_set_LODDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LODDistance = value;
}
constexpr bool& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_allowCulled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowCulled;
}
constexpr bool const& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_allowCulled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowCulled;
}
constexpr void RootMotion::FinalIK::VRIKLODController::__cordl_internal_set_allowCulled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowCulled = value;
}
constexpr ::UnityW<::RootMotion::FinalIK::VRIK>& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr ::UnityW<::RootMotion::FinalIK::VRIK> const& RootMotion::FinalIK::VRIKLODController::__cordl_internal_get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::VRIKLODController::__cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::VRIK> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::VRIKLODController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::VRIKLODController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t RootMotion::FinalIK::VRIKLODController::GetLODLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), "GetLODLevel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::VRIKLODController* RootMotion::FinalIK::VRIKLODController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::VRIKLODController*>());
}
inline void RootMotion::FinalIK::VRIKLODController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKLODController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::VRIKLODController::VRIKLODController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
