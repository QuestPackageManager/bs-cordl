#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverCCD_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD.FadeOutBoneWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)()>(&::RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x12fae5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "FadeOutBoneWeights",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD.OnInitiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)()>(&::RootMotion::FinalIK::IKSolverCCD::OnInitiate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12faecc;

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
  constexpr static std::size_t addrs = 0x12fb3c0;

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
  constexpr static std::size_t addrs = 0x12fba94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverCCD._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverCCD::*)()>(&::RootMotion::FinalIK::IKSolverCCD::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12fc124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate*& RootMotion::FinalIK::IKSolverCCD::__cordl_internal_get_OnPreIteration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreIteration;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> const& RootMotion::FinalIK::IKSolverCCD::__cordl_internal_get_OnPreIteration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreIteration;
}
constexpr void RootMotion::FinalIK::IKSolverCCD::__cordl_internal_set_OnPreIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPreIteration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::IKSolverCCD::FadeOutBoneWeights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "FadeOutBoneWeights",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverCCD::OnInitiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverCCD::OnUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverCCD::Solve(::UnityEngine::Vector3 targetPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), "Solve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetPosition);
}
inline ::RootMotion::FinalIK::IKSolverCCD* RootMotion::FinalIK::IKSolverCCD::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::IKSolverCCD*>());
}
inline void RootMotion::FinalIK::IKSolverCCD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverCCD*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKSolverCCD::IKSolverCCD() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
