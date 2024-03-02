#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_impl.hpp"
#include "RootMotion/FinalIK/zzzz__Grounder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__GrounderFBBIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__GrounderFBBIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::*)()>(
    &::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1323890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::*)(
    ::RootMotion::FinalIK::FullBodyBipedEffector, float_t, float_t)>(&::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x13238a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_get_effectorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorType;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_get_effectorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectorType;
}
constexpr void RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_set_effectorType(::RootMotion::FinalIK::FullBodyBipedEffector value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effectorType = value;
}
constexpr float_t& RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_get_horizontalWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalWeight;
}
constexpr float_t const& RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_get_horizontalWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___horizontalWeight;
}
constexpr void RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_set_horizontalWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___horizontalWeight = value;
}
constexpr float_t& RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_get_verticalWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalWeight;
}
constexpr float_t const& RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_get_verticalWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalWeight;
}
constexpr void RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__cordl_internal_set_verticalWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___verticalWeight = value;
}
inline ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector* RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>());
}
inline void RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector* RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::New_ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType,
                                                                                                                            float_t horizontalWeight, float_t verticalWeight) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>(effectorType, horizontalWeight, verticalWeight));
}
inline void RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::_ctor(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, float_t horizontalWeight, float_t verticalWeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::FullBodyBipedEffector>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effectorType, horizontalWeight, verticalWeight);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector::__GrounderFBBIK__SpineEffector() {}
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.OpenTutorial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::OpenTutorial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x132279c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "OpenTutorial",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x13227e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1322824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.ResetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::ResetPosition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1322868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.IsReadyToInitiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::IsReadyToInitiate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1322948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(),
                                                                               "IsReadyToInitiate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x13229d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::FixedUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1322c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "FixedUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::LateUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1322c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::Initiate)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x1322a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "Initiate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.OnSolverUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::OnSolverUpdate)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x1322ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "OnSolverUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.SetLegIK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)(::RootMotion::FinalIK::IKEffector*, ::RootMotion::FinalIK::__Grounding__Leg*)>(&::RootMotion::FinalIK::GrounderFBBIK::SetLegIK)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1323434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "SetLegIK", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__Grounding__Leg*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x13235b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(),
                                                                               "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::OnDestroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x13236ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderFBBIK._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderFBBIK::*)()>(&::RootMotion::FinalIK::GrounderFBBIK::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1323800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> const& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spineBend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineBend;
}
constexpr float_t const& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spineBend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineBend;
}
constexpr void RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_set_spineBend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spineBend = value;
}
constexpr float_t& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spineSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineSpeed;
}
constexpr float_t const& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spineSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineSpeed;
}
constexpr void RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_set_spineSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spineSpeed = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*>&
RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*> const&
RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr void RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_set_spine(
    ::ArrayW<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*, ::Array<::RootMotion::FinalIK::__GrounderFBBIK__SpineEffector*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_feet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feet;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_feet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feet;
}
constexpr void RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_set_feet(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___feet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spineOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineOffset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_spineOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineOffset;
}
constexpr void RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_set_spineOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spineOffset = value;
}
constexpr bool& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_firstSolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstSolve;
}
constexpr bool const& RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_get_firstSolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstSolve;
}
constexpr void RootMotion::FinalIK::GrounderFBBIK::__cordl_internal_set_firstSolve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstSolve = value;
}
inline void RootMotion::FinalIK::GrounderFBBIK::OpenTutorial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "OpenTutorial",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::OpenUserManual() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::OpenScriptReference() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::ResetPosition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::GrounderFBBIK::IsReadyToInitiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "IsReadyToInitiate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "FixedUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::Initiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "Initiate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::OnSolverUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "OnSolverUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::SetLegIK(::RootMotion::FinalIK::IKEffector* effector, ::RootMotion::FinalIK::__Grounding__Leg* leg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "SetLegIK", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::__Grounding__Leg*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, effector, leg);
}
inline void RootMotion::FinalIK::GrounderFBBIK::OnDrawGizmosSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(),
                                                                             "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::GrounderFBBIK::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::GrounderFBBIK* RootMotion::FinalIK::GrounderFBBIK::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::GrounderFBBIK*>());
}
inline void RootMotion::FinalIK::GrounderFBBIK::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderFBBIK*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::GrounderFBBIK::GrounderFBBIK() {}
