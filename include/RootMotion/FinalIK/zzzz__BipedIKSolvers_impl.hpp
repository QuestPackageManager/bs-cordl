#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/FinalIK/zzzz__BipedIKSolvers_def.hpp"
#include "RootMotion/FinalIK/zzzz__Constraints_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverAim_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFABRIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLimb_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverLookAt_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers.get_limbs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> (
    ::RootMotion::FinalIK::BipedIKSolvers::*)()>(&::RootMotion::FinalIK::BipedIKSolvers::get_limbs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1345f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), "get_limbs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers.get_ikSolvers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> (
    ::RootMotion::FinalIK::BipedIKSolvers::*)()>(&::RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1346ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), "get_ikSolvers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers.AssignReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BipedIKSolvers::*)(::RootMotion::BipedReferences*)>(
    &::RootMotion::FinalIK::BipedIKSolvers::AssignReferences)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x13462a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), "AssignReferences", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::BipedIKSolvers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::BipedIKSolvers::*)()>(&::RootMotion::FinalIK::BipedIKSolvers::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x1346938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::IKSolverLimb*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_leftFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_leftFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_leftFoot(::RootMotion::FinalIK::IKSolverLimb* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKSolverLimb*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_rightFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_rightFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_rightFoot(::RootMotion::FinalIK::IKSolverLimb* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKSolverLimb*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_leftHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_leftHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_leftHand(::RootMotion::FinalIK::IKSolverLimb* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKSolverLimb*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_rightHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLimb*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_rightHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_rightHand(::RootMotion::FinalIK::IKSolverLimb* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKSolverFABRIK*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_spine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverFABRIK*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_spine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_spine(::RootMotion::FinalIK::IKSolverFABRIK* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKSolverLookAt*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_lookAt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAt;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverLookAt*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_lookAt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAt;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_lookAt(::RootMotion::FinalIK::IKSolverLookAt* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookAt)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKSolverAim*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_aim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aim;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverAim*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_aim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aim;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_aim(::RootMotion::FinalIK::IKSolverAim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::Constraints*& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_pelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Constraints*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get_pelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set_pelvis(::RootMotion::FinalIK::Constraints* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pelvis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*>& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get__limbs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limbs;
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get__limbs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limbs;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set__limbs(::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____limbs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*>& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get__ikSolvers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ikSolvers;
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> const& RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_get__ikSolvers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ikSolvers;
}
constexpr void RootMotion::FinalIK::BipedIKSolvers::__cordl_internal_set__ikSolvers(::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ikSolvers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*> RootMotion::FinalIK::BipedIKSolvers::get_limbs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), "get_limbs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::IKSolverLimb*, ::Array<::RootMotion::FinalIK::IKSolverLimb*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*> RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), "get_ikSolvers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::IKSolver*, ::Array<::RootMotion::FinalIK::IKSolver*>*>, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::BipedIKSolvers::AssignReferences(::RootMotion::BipedReferences* references) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), "AssignReferences", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, references);
}
inline ::RootMotion::FinalIK::BipedIKSolvers* RootMotion::FinalIK::BipedIKSolvers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::BipedIKSolvers*>());
}
inline void RootMotion::FinalIK::BipedIKSolvers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::BipedIKSolvers*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::BipedIKSolvers::BipedIKSolvers() {}
