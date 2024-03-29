#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
#include "RootMotion/zzzz__BipedNaming_def.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::__BipedReferences__AutoDetectParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::__BipedReferences__AutoDetectParams::*)(bool, bool)>(
    &::RootMotion::__BipedReferences__AutoDetectParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x13412b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::__BipedReferences__AutoDetectParams.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::__BipedReferences__AutoDetectParams (*)()>(
    &::RootMotion::__BipedReferences__AutoDetectParams::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x13412c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(),
                                                                               "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void RootMotion::__BipedReferences__AutoDetectParams::_ctor(bool legsParentInSpine, bool includeEyes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, legsParentInSpine, includeEyes);
}
inline ::RootMotion::__BipedReferences__AutoDetectParams RootMotion::__BipedReferences__AutoDetectParams::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(),
                                                                             "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::__BipedReferences__AutoDetectParams, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "legsParentInSpine", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "includeEyes", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::__BipedReferences__AutoDetectParams::__BipedReferences__AutoDetectParams(bool legsParentInSpine, bool includeEyes) noexcept {
  this->legsParentInSpine = legsParentInSpine;
  this->includeEyes = includeEyes;
}
// Ctor Parameters []
constexpr ::RootMotion::__BipedReferences__AutoDetectParams::__BipedReferences__AutoDetectParams() {}
//  Writing Method size for method: ::RootMotion::BipedReferences.get_isFilled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::BipedReferences::*)()>(&::RootMotion::BipedReferences::get_isFilled)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x133d9a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.get_isEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::BipedReferences::*)()>(&::RootMotion::BipedReferences::get_isEmpty)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x133dd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "get_isEmpty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::BipedReferences::*)(bool)>(&::RootMotion::BipedReferences::IsEmpty)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x133dd14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.Contains
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::BipedReferences::*)(::UnityEngine::Transform*, bool)>(&::RootMotion::BipedReferences::Contains)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x133e0a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.AutoDetectReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::RootMotion::BipedReferences*>, ::UnityEngine::Transform*, ::RootMotion::__BipedReferences__AutoDetectParams)>(&::RootMotion::BipedReferences::AutoDetectReferences)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x133e430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AutoDetectReferences", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.DetectReferencesByNaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ByRef<::RootMotion::BipedReferences*>, ::UnityEngine::Transform*, ::RootMotion::__BipedReferences__AutoDetectParams)>(&::RootMotion::BipedReferences::DetectReferencesByNaming)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x133ea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectReferencesByNaming", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.AssignHumanoidReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ByRef<::RootMotion::BipedReferences*>, ::UnityEngine::Animator*, ::RootMotion::__BipedReferences__AutoDetectParams)>(&::RootMotion::BipedReferences::AssignHumanoidReferences)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x133e690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AssignHumanoidReferences", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.SetupError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::SetupError)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x133f250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.SetupWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::SetupWarning)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x133f330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.IsNeckBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::BipedReferences::IsNeckBone)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x133fda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "IsNeckBone", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.AddBoneToEyes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Transform*, ByRef<::RootMotion::BipedReferences*>, ::RootMotion::__BipedReferences__AutoDetectParams)>(&::RootMotion::BipedReferences::AddBoneToEyes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x133fbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToEyes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.AddBoneToSpine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Transform*, ByRef<::RootMotion::BipedReferences*>, ::RootMotion::__BipedReferences__AutoDetectParams)>(&::RootMotion::BipedReferences::AddBoneToSpine)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x133f968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToSpine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.DetectLimb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::RootMotion::__BipedNaming__BoneType, ::RootMotion::__BipedNaming__BoneSide, ByRef<::UnityEngine::Transform*>, ByRef<::UnityEngine::Transform*>,
                         ByRef<::UnityEngine::Transform*>, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::BipedReferences::DetectLimb)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x133f3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectLimb", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.AddBoneToHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>, ::UnityEngine::Transform*)>(
    &::RootMotion::BipedReferences::AddBoneToHierarchy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x133fcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToHierarchy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.LimbError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ByRef<::StringW>)>(
    &::RootMotion::BipedReferences::LimbError)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x133fe88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.LimbWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ByRef<::StringW>)>(
    &::RootMotion::BipedReferences::LimbWarning)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x1340948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbWarning", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.SpineError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::SpineError)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x1340408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.SpineWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::SpineWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1340c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.EyesError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::EyesError)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x134075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.EyesWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::EyesWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1340c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesWarning", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.RootHeightWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::RootHeightWarning)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x1340c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "RootHeightWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.FacingAxisWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::FacingAxisWarning)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x1340de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "FacingAxisWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.GetVerticalOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::BipedReferences::GetVerticalOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1341248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "GetVerticalOffset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BipedReferences::*)()>(&::RootMotion::BipedReferences::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x133e628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_root(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_pelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_pelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_pelvis(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pelvis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_leftThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftThigh;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_leftThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftThigh;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_leftThigh(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftThigh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_leftCalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftCalf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_leftCalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftCalf;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_leftCalf(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftCalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_leftFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_leftFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_leftFoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_rightThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightThigh;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_rightThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightThigh;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_rightThigh(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightThigh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_rightCalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightCalf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_rightCalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightCalf;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_rightCalf(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightCalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_rightFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_rightFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_rightFoot(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_leftUpperArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftUpperArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_leftUpperArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftUpperArm;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_leftUpperArm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftUpperArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_leftForearm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftForearm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_leftForearm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftForearm;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_leftForearm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftForearm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_leftHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_leftHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_rightUpperArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightUpperArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_rightUpperArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightUpperArm;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_rightUpperArm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightUpperArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_rightForearm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightForearm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_rightForearm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightForearm;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_rightForearm(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightForearm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_rightHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_rightHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& RootMotion::BipedReferences::__cordl_internal_get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr ::UnityW<::UnityEngine::Transform> const& RootMotion::BipedReferences::__cordl_internal_get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_head(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& RootMotion::BipedReferences::__cordl_internal_get_spine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& RootMotion::BipedReferences::__cordl_internal_get_spine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_spine(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& RootMotion::BipedReferences::__cordl_internal_get_eyes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& RootMotion::BipedReferences::__cordl_internal_get_eyes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyes;
}
constexpr void RootMotion::BipedReferences::__cordl_internal_set_eyes(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eyes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool RootMotion::BipedReferences::get_isFilled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::BipedReferences::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "get_isEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::BipedReferences::IsEmpty(bool includeRoot) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, includeRoot);
}
/// @param ignoreRoot: bool (default: false)
inline bool RootMotion::BipedReferences::Contains(::UnityEngine::Transform* t, bool ignoreRoot) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t, ignoreRoot);
}
inline bool RootMotion::BipedReferences::AutoDetectReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root,
                                                              ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AutoDetectReferences", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, root, autoDetectParams);
}
inline void RootMotion::BipedReferences::DetectReferencesByNaming(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root,
                                                                  ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectReferencesByNaming", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, references, root, autoDetectParams);
}
inline void RootMotion::BipedReferences::AssignHumanoidReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Animator* animator,
                                                                  ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AssignHumanoidReferences", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, references, animator, autoDetectParams);
}
inline bool RootMotion::BipedReferences::SetupError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
inline bool RootMotion::BipedReferences::SetupWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::IsNeckBone(::UnityEngine::Transform* bone, ::UnityEngine::Transform* leftUpperArm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "IsNeckBone", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, leftUpperArm);
}
inline bool RootMotion::BipedReferences::AddBoneToEyes(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references,
                                                       ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToEyes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, references, autoDetectParams);
}
inline bool RootMotion::BipedReferences::AddBoneToSpine(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references,
                                                        ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToSpine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, references, autoDetectParams);
}
inline void RootMotion::BipedReferences::DetectLimb(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide, ByRef<::UnityEngine::Transform*> firstBone,
                                                    ByRef<::UnityEngine::Transform*> secondBone, ByRef<::UnityEngine::Transform*> lastBone,
                                                    ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectLimb", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boneType, boneSide, firstBone, secondBone, lastBone, transforms);
}
inline void RootMotion::BipedReferences::AddBoneToHierarchy(ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> bones, ::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToHierarchy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, transform);
}
inline bool RootMotion::BipedReferences::LimbError(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone1, bone2, bone3, errorMessage);
}
inline bool RootMotion::BipedReferences::LimbWarning(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone1, bone2, bone3, warningMessage);
}
inline bool RootMotion::BipedReferences::SpineError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
inline bool RootMotion::BipedReferences::SpineWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::EyesError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
inline bool RootMotion::BipedReferences::EyesWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::RootHeightWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "RootHeightWarning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::FacingAxisWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "FacingAxisWarning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline float_t RootMotion::BipedReferences::GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "GetVerticalOffset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, p1, p2, rotation);
}
inline ::RootMotion::BipedReferences* RootMotion::BipedReferences::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::BipedReferences*>());
}
inline void RootMotion::BipedReferences::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::BipedReferences::BipedReferences() {}
