#pragma once
#include "GlobalNamespace/zzzz__DynamicBone_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__DynamicBone_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__DynamicBone_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__DynamicBoneColliderBase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode::__DynamicBone__UpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode::__DynamicBone__UpdateMode() {}
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode GlobalNamespace::__DynamicBone__UpdateMode::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode GlobalNamespace::__DynamicBone__UpdateMode::AnimatePhysics{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode GlobalNamespace::__DynamicBone__UpdateMode::UnscaledTime{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis::__DynamicBone__FreezeAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis::__DynamicBone__FreezeAxis() {}
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis GlobalNamespace::__DynamicBone__FreezeAxis::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis GlobalNamespace::__DynamicBone__FreezeAxis::X{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis GlobalNamespace::__DynamicBone__FreezeAxis::Y{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis GlobalNamespace::__DynamicBone__FreezeAxis::Z{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__DynamicBone__Particle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DynamicBone__Particle::*)()>(&::GlobalNamespace::__DynamicBone__Particle::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x122fee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DynamicBone__Particle*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::__DynamicBone__Particle::__get_m_Transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::__DynamicBone__Particle::__get_m_Transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Transform;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__DynamicBone__Particle::__get_m_ParentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentIndex;
}
constexpr int32_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_ParentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentIndex;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_ParentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentIndex = value;
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Damping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Damping;
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Damping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Damping;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Damping(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Damping = value;
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Elasticity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Elasticity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Elasticity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Elasticity = value;
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Stiffness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stiffness;
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Stiffness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stiffness;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Stiffness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stiffness = value;
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Inert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inert;
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Inert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inert;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Inert(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Inert = value;
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_Radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Radius;
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_Radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Radius;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Radius = value;
}
constexpr float_t& GlobalNamespace::__DynamicBone__Particle::__get_m_BoneLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoneLength;
}
constexpr float_t const& GlobalNamespace::__DynamicBone__Particle::__get_m_BoneLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoneLength;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_BoneLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoneLength = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_Position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Position = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_PrevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_PrevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevPosition;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_PrevPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_EndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_EndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndOffset;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_EndOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitLocalPosition;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_InitLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::__DynamicBone__Particle::__get_m_InitLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InitLocalRotation;
}
constexpr void GlobalNamespace::__DynamicBone__Particle::__set_m_InitLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InitLocalRotation = value;
}
inline ::GlobalNamespace::__DynamicBone__Particle* GlobalNamespace::__DynamicBone__Particle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__DynamicBone__Particle*>());
}
inline void GlobalNamespace::__DynamicBone__Particle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DynamicBone__Particle*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DynamicBone__Particle::__DynamicBone__Particle() {}
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x122dc78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::FixedUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x122dde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "FixedUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::Update)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x122de3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::LateUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x122de6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.PreUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::PreUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x122de18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "PreUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.CheckDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::CheckDistance)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x122debc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "CheckDistance",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x122e444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x122e448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnValidate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x122e44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnValidate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x122e4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnDrawGizmosSelected",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.SetWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)(float_t)>(&::GlobalNamespace::DynamicBone::SetWeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x122e688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "SetWeight", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.GetWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::GetWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122e6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "GetWeight",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateDynamicBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)(float_t)>(&::GlobalNamespace::DynamicBone::UpdateDynamicBones)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x122e034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateDynamicBones", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.SetupParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::SetupParticles)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x122dc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "SetupParticles",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.AppendParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)(::UnityEngine::Transform*, int32_t, float_t)>(
    &::GlobalNamespace::DynamicBone::AppendParticles)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x122f660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "AppendParticles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::UpdateParameters)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x122fc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateParameters",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.InitTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::InitTransforms)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x122e1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "InitTransforms",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.ResetParticlesPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::ResetParticlesPosition)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x122e2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "ResetParticlesPosition",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateParticles1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::UpdateParticles1)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x122e6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateParticles1",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.UpdateParticles2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::UpdateParticles2)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x122e944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateParticles2",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.SkipUpdateParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::SkipUpdateParticles)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x122ef60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "SkipUpdateParticles",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.MirrorVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::DynamicBone::MirrorVector)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x122ffc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "MirrorVector", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone.ApplyParticlesToTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::ApplyParticlesToTransforms)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x122f404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                                                                               "ApplyParticlesToTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DynamicBone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DynamicBone::*)()>(&::GlobalNamespace::DynamicBone::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x122fff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::DynamicBone::__get_m_Root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::DynamicBone::__get_m_Root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Root(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_UpdateRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRate;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_UpdateRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateRate;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_UpdateRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateRate = value;
}
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode& GlobalNamespace::DynamicBone::__get_m_UpdateMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMode;
}
constexpr ::GlobalNamespace::__DynamicBone__UpdateMode const& GlobalNamespace::DynamicBone::__get_m_UpdateMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpdateMode;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_UpdateMode(::GlobalNamespace::__DynamicBone__UpdateMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpdateMode = value;
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Damping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Damping;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Damping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Damping;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Damping(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Damping = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::DynamicBone::__get_m_DampingDistrib() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DampingDistrib;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::DynamicBone::__get_m_DampingDistrib() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DampingDistrib;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DampingDistrib(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DampingDistrib)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Elasticity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Elasticity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Elasticity;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Elasticity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Elasticity = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::DynamicBone::__get_m_ElasticityDistrib() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElasticityDistrib;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::DynamicBone::__get_m_ElasticityDistrib() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ElasticityDistrib;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ElasticityDistrib(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ElasticityDistrib)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Stiffness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stiffness;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Stiffness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stiffness;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Stiffness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stiffness = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::DynamicBone::__get_m_StiffnessDistrib() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StiffnessDistrib;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::DynamicBone::__get_m_StiffnessDistrib() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StiffnessDistrib;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_StiffnessDistrib(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StiffnessDistrib)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Inert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inert;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Inert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Inert;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Inert(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Inert = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::DynamicBone::__get_m_InertDistrib() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InertDistrib;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::DynamicBone::__get_m_InertDistrib() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InertDistrib;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_InertDistrib(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InertDistrib)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Radius;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Radius;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Radius = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::DynamicBone::__get_m_RadiusDistrib() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadiusDistrib;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& GlobalNamespace::DynamicBone::__get_m_RadiusDistrib() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RadiusDistrib;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_RadiusDistrib(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RadiusDistrib)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_EndLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndLength;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_EndLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndLength;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_EndLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndLength = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_EndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_EndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndOffset;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_EndOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_Gravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Gravity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_Gravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Gravity;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Gravity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Gravity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_Force() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Force;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_Force() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Force;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Force(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Force = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*& GlobalNamespace::DynamicBone::__get_m_Colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>*> const& GlobalNamespace::DynamicBone::__get_m_Colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Colliders;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Colliders(::System::Collections::Generic::List_1<::GlobalNamespace::DynamicBoneColliderBase*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& GlobalNamespace::DynamicBone::__get_m_Exclusions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exclusions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& GlobalNamespace::DynamicBone::__get_m_Exclusions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Exclusions;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Exclusions(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Exclusions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis& GlobalNamespace::DynamicBone::__get_m_FreezeAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreezeAxis;
}
constexpr ::GlobalNamespace::__DynamicBone__FreezeAxis const& GlobalNamespace::DynamicBone::__get_m_FreezeAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreezeAxis;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_FreezeAxis(::GlobalNamespace::__DynamicBone__FreezeAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreezeAxis = value;
}
constexpr bool& GlobalNamespace::DynamicBone::__get_m_DistantDisable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistantDisable;
}
constexpr bool const& GlobalNamespace::DynamicBone::__get_m_DistantDisable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistantDisable;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DistantDisable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DistantDisable = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::DynamicBone::__get_m_ReferenceObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::DynamicBone::__get_m_ReferenceObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceObject;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ReferenceObject(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReferenceObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_DistanceToObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistanceToObject;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_DistanceToObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistanceToObject;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DistanceToObject(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DistanceToObject = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_LocalGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalGravity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_LocalGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalGravity;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_LocalGravity(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalGravity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_ObjectMove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectMove;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_ObjectMove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectMove;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ObjectMove(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ObjectMove = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::DynamicBone::__get_m_ObjectPrevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectPrevPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::DynamicBone::__get_m_ObjectPrevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectPrevPosition;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ObjectPrevPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ObjectPrevPosition = value;
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_BoneTotalLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoneTotalLength;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_BoneTotalLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BoneTotalLength;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_BoneTotalLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BoneTotalLength = value;
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_ObjectScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectScale;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_ObjectScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectScale;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_ObjectScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ObjectScale = value;
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Time;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Time;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Time = value;
}
constexpr float_t& GlobalNamespace::DynamicBone::__get_m_Weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Weight;
}
constexpr float_t const& GlobalNamespace::DynamicBone::__get_m_Weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Weight;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Weight = value;
}
constexpr bool& GlobalNamespace::DynamicBone::__get_m_DistantDisabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistantDisabled;
}
constexpr bool const& GlobalNamespace::DynamicBone::__get_m_DistantDisabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DistantDisabled;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_DistantDisabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DistantDisabled = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*& GlobalNamespace::DynamicBone::__get_m_Particles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Particles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>*> const& GlobalNamespace::DynamicBone::__get_m_Particles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Particles;
}
constexpr void GlobalNamespace::DynamicBone::__set_m_Particles(::System::Collections::Generic::List_1<::GlobalNamespace::__DynamicBone__Particle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Particles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DynamicBone::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "FixedUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::PreUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "PreUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::CheckDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "CheckDistance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnValidate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "OnDrawGizmosSelected",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::SetWeight(float_t w) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "SetWeight", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, w);
}
inline float_t GlobalNamespace::DynamicBone::GetWeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "GetWeight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::UpdateDynamicBones(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateDynamicBones", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void GlobalNamespace::DynamicBone::SetupParticles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "SetupParticles",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::AppendParticles(::UnityEngine::Transform* b, int32_t parentIndex, float_t boneLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "AppendParticles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b, parentIndex, boneLength);
}
inline void GlobalNamespace::DynamicBone::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateParameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::InitTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "InitTransforms",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::ResetParticlesPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "ResetParticlesPosition",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::UpdateParticles1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateParticles1",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::UpdateParticles2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "UpdateParticles2",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DynamicBone::SkipUpdateParticles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "SkipUpdateParticles",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::DynamicBone::MirrorVector(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 axis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), "MirrorVector", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, v, axis);
}
inline void GlobalNamespace::DynamicBone::ApplyParticlesToTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(),
                                                                             "ApplyParticlesToTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DynamicBone* GlobalNamespace::DynamicBone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DynamicBone*>());
}
inline void GlobalNamespace::DynamicBone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DynamicBone*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicBone::DynamicBone() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
