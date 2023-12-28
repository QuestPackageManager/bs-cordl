#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverCCD_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD.FadeOutBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)()>(&::RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1261dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "FadeOutBoneWeights",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD.OnInitiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)()>(&::RootMotion::FinalIK::IKSolverCCD::OnInitiate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1261e1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)()>(&::RootMotion::FinalIK::IKSolverCCD::OnUpdate)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1262310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::IKSolverCCD::Solve)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x12629e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "Solve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)()>(&::RootMotion::FinalIK::IKSolverCCD::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1263074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate*& RootMotion::FinalIK::IKSolverCCD::__get_OnPreIteration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreIteration;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> const& RootMotion::FinalIK::IKSolverCCD::__get_OnPreIteration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreIteration;
}
constexpr void RootMotion::FinalIK::IKSolverCCD::__set_OnPreIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPreIteration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "FadeOutBoneWeights",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverCCD::OnInitiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "OnInitiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverCCD::OnUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "OnUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverCCD::Solve(::UnityEngine::Vector3 targetPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "Solve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPosition);
}
inline ::RootMotion::FinalIK::IKSolverCCD* RootMotion::FinalIK::IKSolverCCD::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverCCD*>());
}
inline void RootMotion::FinalIK::IKSolverCCD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKSolverCCD::IKSolverCCD() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
