#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__FBBIKArmBending_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKArmBending.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKArmBending::*)()>(&::RootMotion::FinalIK::FBBIKArmBending::LateUpdate)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x11e0ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKArmBending.OnPostFBBIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKArmBending::*)()>(&::RootMotion::FinalIK::FBBIKArmBending::OnPostFBBIK)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x11e1374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), "OnPostFBBIK",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKArmBending.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKArmBending::*)()>(&::RootMotion::FinalIK::FBBIKArmBending::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x11e1508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKArmBending._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKArmBending::*)()>(&::RootMotion::FinalIK::FBBIKArmBending::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e1614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& RootMotion::FinalIK::FBBIKArmBending::__get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& RootMotion::FinalIK::FBBIKArmBending::__get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKArmBending::__get_bendDirectionOffsetLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendDirectionOffsetLeft;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKArmBending::__get_bendDirectionOffsetLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendDirectionOffsetLeft;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_bendDirectionOffsetLeft(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendDirectionOffsetLeft = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKArmBending::__get_bendDirectionOffsetRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendDirectionOffsetRight;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKArmBending::__get_bendDirectionOffsetRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bendDirectionOffsetRight;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_bendDirectionOffsetRight(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bendDirectionOffsetRight = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKArmBending::__get_characterSpaceBendOffsetLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpaceBendOffsetLeft;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKArmBending::__get_characterSpaceBendOffsetLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpaceBendOffsetLeft;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_characterSpaceBendOffsetLeft(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characterSpaceBendOffsetLeft = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::FBBIKArmBending::__get_characterSpaceBendOffsetRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpaceBendOffsetRight;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::FBBIKArmBending::__get_characterSpaceBendOffsetRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characterSpaceBendOffsetRight;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_characterSpaceBendOffsetRight(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___characterSpaceBendOffsetRight = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::FBBIKArmBending::__get_leftHandTargetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandTargetRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::FBBIKArmBending::__get_leftHandTargetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandTargetRotation;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_leftHandTargetRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHandTargetRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::FBBIKArmBending::__get_rightHandTargetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandTargetRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::FBBIKArmBending::__get_rightHandTargetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandTargetRotation;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_rightHandTargetRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightHandTargetRotation = value;
}
constexpr bool& RootMotion::FinalIK::FBBIKArmBending::__get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::FBBIKArmBending::__get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::FBBIKArmBending::__set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
inline void RootMotion::FinalIK::FBBIKArmBending::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKArmBending::OnPostFBBIK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), "OnPostFBBIK",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::FBBIKArmBending::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::FBBIKArmBending* RootMotion::FinalIK::FBBIKArmBending::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::FBBIKArmBending*>());
}
inline void RootMotion::FinalIK::FBBIKArmBending::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKArmBending*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::FBBIKArmBending::FBBIKArmBending() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
