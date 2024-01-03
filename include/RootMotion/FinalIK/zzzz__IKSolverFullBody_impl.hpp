#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBody_def.hpp"
#include "RootMotion/FinalIK/zzzz__FBIKChain_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKMappingBone_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKMappingLimb_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKMappingSpine_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.GetEffector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKEffector* (::RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::IKSolverFullBody::GetEffector)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1266144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetEffector", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.GetChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::FBIKChain* (::RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::IKSolverFullBody::GetChain)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1266220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetChain", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.GetChainIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::IKSolverFullBody::GetChainIndex)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1266268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetChainIndex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.GetNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolver__Node* (::RootMotion::FinalIK::IKSolverFullBody::*)(int32_t, int32_t)>(
    &::RootMotion::FinalIK::IKSolverFullBody::GetNode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x125a0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetNode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.GetChainAndNodeIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*, ByRef<int32_t>, ByRef<int32_t>)>(
    &::RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1259f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetChainAndNodeIndexes", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.GetPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> (
    ::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::GetPoints)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x126637c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.GetPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::__IKSolver__Point* (::RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::IKSolverFullBody::GetPoint)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1266514;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::IKSolverFullBody::*)(ByRef<::StringW>)>(
    &::RootMotion::FinalIK::IKSolverFullBody::IsValid)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1266670;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.StoreDefaultLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(
    &::RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x126686c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.FixTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::FixTransforms)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x126693c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.OnInitiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::OnInitiate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1266a18;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.OnUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::OnUpdate)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x1266b74;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.ReadPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::ReadPose)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x1266d0c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.Solve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::Solve)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1266f38;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.ApplyBendConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(
    &::RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1267208;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody.WritePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::WritePose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1267240;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::IKSolverFullBody._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::IKSolverFullBody::*)()>(&::RootMotion::FinalIK::IKSolverFullBody::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1267318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& RootMotion::FinalIK::IKSolverFullBody::__get_iterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterations;
}
constexpr int32_t const& RootMotion::FinalIK::IKSolverFullBody::__get_iterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterations;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_iterations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iterations = value;
}
constexpr ::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*>& RootMotion::FinalIK::IKSolverFullBody::__get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr ::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*> const& RootMotion::FinalIK::IKSolverFullBody::__get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_chain(::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*>& RootMotion::FinalIK::IKSolverFullBody::__get_effectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectors;
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*> const& RootMotion::FinalIK::IKSolverFullBody::__get_effectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effectors;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_effectors(::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___effectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::IKMappingSpine*& RootMotion::FinalIK::IKSolverFullBody::__get_spineMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineMapping;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKMappingSpine*> const& RootMotion::FinalIK::IKSolverFullBody::__get_spineMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spineMapping;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_spineMapping(::RootMotion::FinalIK::IKMappingSpine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spineMapping)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*>& RootMotion::FinalIK::IKSolverFullBody::__get_boneMappings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boneMappings;
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*> const& RootMotion::FinalIK::IKSolverFullBody::__get_boneMappings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boneMappings;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_boneMappings(::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___boneMappings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*>& RootMotion::FinalIK::IKSolverFullBody::__get_limbMappings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limbMappings;
}
constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*> const& RootMotion::FinalIK::IKSolverFullBody::__get_limbMappings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___limbMappings;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_limbMappings(::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___limbMappings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& RootMotion::FinalIK::IKSolverFullBody::__get_FABRIKPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FABRIKPass;
}
constexpr bool const& RootMotion::FinalIK::IKSolverFullBody::__get_FABRIKPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FABRIKPass;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_FABRIKPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FABRIKPass = value;
}
constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreRead;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreRead;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnPreRead(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPreRead)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreSolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreSolve;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreSolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreSolve;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnPreSolve(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPreSolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreIteration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreIteration;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreIteration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreIteration;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnPreIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPreIteration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnPostIteration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostIteration;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnPostIteration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostIteration;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnPostIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPostIteration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreBend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreBend;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnPreBend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPreBend;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnPreBend(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPreBend)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnPostSolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostSolve;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnPostSolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnPostSolve;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnPostSolve(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnPostSolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnStoreDefaultLocalState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnStoreDefaultLocalState;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnStoreDefaultLocalState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnStoreDefaultLocalState;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnStoreDefaultLocalState(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnStoreDefaultLocalState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& RootMotion::FinalIK::IKSolverFullBody::__get_OnFixTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnFixTransforms;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& RootMotion::FinalIK::IKSolverFullBody::__get_OnFixTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnFixTransforms;
}
constexpr void RootMotion::FinalIK::IKSolverFullBody::__set_OnFixTransforms(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnFixTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::RootMotion::FinalIK::IKEffector* RootMotion::FinalIK::IKSolverFullBody::GetEffector(::UnityEngine::Transform* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetEffector", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKEffector*, false>(this, ___internal_method, t);
}
inline ::RootMotion::FinalIK::FBIKChain* RootMotion::FinalIK::IKSolverFullBody::GetChain(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetChain", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::FBIKChain*, false>(this, ___internal_method, transform);
}
inline int32_t RootMotion::FinalIK::IKSolverFullBody::GetChainIndex(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetChainIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, transform);
}
inline ::RootMotion::FinalIK::__IKSolver__Node* RootMotion::FinalIK::IKSolverFullBody::GetNode(int32_t chainIndex, int32_t nodeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetNode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolver__Node*, false>(this, ___internal_method, chainIndex, nodeIndex);
}
inline void RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes(::UnityEngine::Transform* transform, ByRef<int32_t> chainIndex, ByRef<int32_t> nodeIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), "GetChainAndNodeIndexes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, chainIndex, nodeIndex);
}
inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> RootMotion::FinalIK::IKSolverFullBody::GetPoints() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::__IKSolver__Point* RootMotion::FinalIK::IKSolverFullBody::GetPoint(::UnityEngine::Transform* transform) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::__IKSolver__Point*, false>(this, ___internal_method, transform);
}
inline bool RootMotion::FinalIK::IKSolverFullBody::IsValid(ByRef<::StringW> message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message);
}
inline void RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverFullBody::FixTransforms() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverFullBody::OnInitiate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverFullBody::OnUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverFullBody::ReadPose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverFullBody::Solve() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::IKSolverFullBody::WritePose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolverFullBody* RootMotion::FinalIK::IKSolverFullBody::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::IKSolverFullBody*>());
}
inline void RootMotion::FinalIK::IKSolverFullBody::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::IKSolverFullBody*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::IKSolverFullBody::IKSolverFullBody() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
