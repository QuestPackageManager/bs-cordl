#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
#include "RootMotion/zzzz__BipedReferences_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/zzzz__BipedNaming_def.hpp"
//  Writing Method size for method: ::RootMotion::__BipedReferences__AutoDetectParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::__BipedReferences__AutoDetectParams::*)(bool, bool)>(
    &::RootMotion::__BipedReferences__AutoDetectParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x123ccbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::__BipedReferences__AutoDetectParams.get_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::__BipedReferences__AutoDetectParams (*)()>(
    &::RootMotion::__BipedReferences__AutoDetectParams::get_Default)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x123ccd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(),
                                                                               "get_Default", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void RootMotion::__BipedReferences__AutoDetectParams::_ctor(bool legsParentInSpine, bool includeEyes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, legsParentInSpine, includeEyes);
}
inline ::RootMotion::__BipedReferences__AutoDetectParams RootMotion::__BipedReferences__AutoDetectParams::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::__BipedReferences__AutoDetectParams>::get(),
                                                                             "get_Default", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
  constexpr static std::size_t addrs = 0x12393b4;

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
  constexpr static std::size_t addrs = 0x1239710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "get_isEmpty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::BipedReferences::*)(bool)>(&::RootMotion::BipedReferences::IsEmpty)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x1239720;

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
  constexpr static std::size_t addrs = 0x1239aac;

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
  constexpr static std::size_t addrs = 0x1239e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AutoDetectReferences", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
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
  constexpr static std::size_t addrs = 0x123a460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectReferencesByNaming", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
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
  constexpr static std::size_t addrs = 0x123a09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AssignHumanoidReferences", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.SetupError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::SetupError)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x123ac5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.SetupWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::SetupWarning)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x123ad3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupWarning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.IsNeckBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::BipedReferences::IsNeckBone)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x123b7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "IsNeckBone", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.AddBoneToEyes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::Transform*, ByRef<::RootMotion::BipedReferences*>, ::RootMotion::__BipedReferences__AutoDetectParams)>(&::RootMotion::BipedReferences::AddBoneToEyes)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x123b5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToEyes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
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
  constexpr static std::size_t addrs = 0x123b374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToSpine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
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
  constexpr static std::size_t addrs = 0x123add8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectLimb", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
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
  constexpr static std::size_t addrs = 0x123b6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToHierarchy", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.LimbError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ByRef<::StringW>)>(
    &::RootMotion::BipedReferences::LimbError)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x123b894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
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
  constexpr static std::size_t addrs = 0x123c354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbWarning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
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
  constexpr static std::size_t addrs = 0x123be14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.SpineWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::SpineWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x123c628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineWarning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.EyesError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::EyesError)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x123c168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.EyesWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::EyesWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x123c630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesWarning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.RootHeightWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::RootHeightWarning)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x123c638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "RootHeightWarning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.FacingAxisWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::RootMotion::BipedReferences*, ByRef<::StringW>)>(&::RootMotion::BipedReferences::FacingAxisWarning)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x123c7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "FacingAxisWarning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences.GetVerticalOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::RootMotion::BipedReferences::GetVerticalOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x123cc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "GetVerticalOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedReferences._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::BipedReferences::*)()>(&::RootMotion::BipedReferences::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x123a034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___root;
}
constexpr void RootMotion::BipedReferences::__set_root(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_pelvis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_pelvis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pelvis;
}
constexpr void RootMotion::BipedReferences::__set_pelvis(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pelvis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_leftThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftThigh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_leftThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftThigh;
}
constexpr void RootMotion::BipedReferences::__set_leftThigh(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftThigh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_leftCalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftCalf;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_leftCalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftCalf;
}
constexpr void RootMotion::BipedReferences::__set_leftCalf(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftCalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_leftFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_leftFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftFoot;
}
constexpr void RootMotion::BipedReferences::__set_leftFoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_rightThigh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightThigh;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_rightThigh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightThigh;
}
constexpr void RootMotion::BipedReferences::__set_rightThigh(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightThigh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_rightCalf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightCalf;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_rightCalf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightCalf;
}
constexpr void RootMotion::BipedReferences::__set_rightCalf(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightCalf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_rightFoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_rightFoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightFoot;
}
constexpr void RootMotion::BipedReferences::__set_rightFoot(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightFoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_leftUpperArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftUpperArm;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_leftUpperArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftUpperArm;
}
constexpr void RootMotion::BipedReferences::__set_leftUpperArm(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftUpperArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_leftForearm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftForearm;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_leftForearm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftForearm;
}
constexpr void RootMotion::BipedReferences::__set_leftForearm(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftForearm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_leftHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_leftHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHand;
}
constexpr void RootMotion::BipedReferences::__set_leftHand(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_rightUpperArm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightUpperArm;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_rightUpperArm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightUpperArm;
}
constexpr void RootMotion::BipedReferences::__set_rightUpperArm(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightUpperArm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_rightForearm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightForearm;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_rightForearm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightForearm;
}
constexpr void RootMotion::BipedReferences::__set_rightForearm(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightForearm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_rightHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_rightHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHand;
}
constexpr void RootMotion::BipedReferences::__set_rightHand(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightHand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& RootMotion::BipedReferences::__get_head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& RootMotion::BipedReferences::__get_head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___head;
}
constexpr void RootMotion::BipedReferences::__set_head(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___head)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& RootMotion::BipedReferences::__get_spine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& RootMotion::BipedReferences::__get_spine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spine;
}
constexpr void RootMotion::BipedReferences::__set_spine(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& RootMotion::BipedReferences::__get_eyes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyes;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& RootMotion::BipedReferences::__get_eyes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eyes;
}
constexpr void RootMotion::BipedReferences::__set_eyes(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eyes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool RootMotion::BipedReferences::get_isFilled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "get_isFilled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::BipedReferences::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "get_isEmpty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool RootMotion::BipedReferences::IsEmpty(bool includeRoot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "IsEmpty", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, includeRoot);
}
/// @param ignoreRoot: bool (default: false)
inline bool RootMotion::BipedReferences::Contains(::UnityEngine::Transform* t, bool ignoreRoot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "Contains", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t, ignoreRoot);
}
inline bool RootMotion::BipedReferences::AutoDetectReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root,
                                                              ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AutoDetectReferences", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, root, autoDetectParams);
}
inline void RootMotion::BipedReferences::DetectReferencesByNaming(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Transform* root,
                                                                  ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectReferencesByNaming", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, references, root, autoDetectParams);
}
inline void RootMotion::BipedReferences::AssignHumanoidReferences(ByRef<::RootMotion::BipedReferences*> references, ::UnityEngine::Animator* animator,
                                                                  ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AssignHumanoidReferences", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animator*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, references, animator, autoDetectParams);
}
inline bool RootMotion::BipedReferences::SetupError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
inline bool RootMotion::BipedReferences::SetupWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SetupWarning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::IsNeckBone(::UnityEngine::Transform* bone, ::UnityEngine::Transform* leftUpperArm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "IsNeckBone", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, leftUpperArm);
}
inline bool RootMotion::BipedReferences::AddBoneToEyes(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references,
                                                       ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToEyes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, references, autoDetectParams);
}
inline bool RootMotion::BipedReferences::AddBoneToSpine(::UnityEngine::Transform* bone, ByRef<::RootMotion::BipedReferences*> references,
                                                        ::RootMotion::__BipedReferences__AutoDetectParams autoDetectParams) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToSpine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::RootMotion::BipedReferences*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedReferences__AutoDetectParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone, references, autoDetectParams);
}
inline void RootMotion::BipedReferences::DetectLimb(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide, ByRef<::UnityEngine::Transform*> firstBone,
                                                    ByRef<::UnityEngine::Transform*> secondBone, ByRef<::UnityEngine::Transform*> lastBone,
                                                    ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "DetectLimb", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boneType, boneSide, firstBone, secondBone, lastBone, transforms);
}
inline void RootMotion::BipedReferences::AddBoneToHierarchy(ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> bones, ::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "AddBoneToHierarchy", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, transform);
}
inline bool RootMotion::BipedReferences::LimbError(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone1, bone2, bone3, errorMessage);
}
inline bool RootMotion::BipedReferences::LimbWarning(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "LimbWarning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bone1, bone2, bone3, warningMessage);
}
inline bool RootMotion::BipedReferences::SpineError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
inline bool RootMotion::BipedReferences::SpineWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "SpineWarning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::EyesError(::RootMotion::BipedReferences* references, ByRef<::StringW> errorMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, errorMessage);
}
inline bool RootMotion::BipedReferences::EyesWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "EyesWarning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::RootHeightWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "RootHeightWarning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline bool RootMotion::BipedReferences::FacingAxisWarning(::RootMotion::BipedReferences* references, ByRef<::StringW> warningMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "FacingAxisWarning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::BipedReferences*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, references, warningMessage);
}
inline float_t RootMotion::BipedReferences::GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), "GetVerticalOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, p1, p2, rotation);
}
inline ::RootMotion::BipedReferences* RootMotion::BipedReferences::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::BipedReferences*>());
}
inline void RootMotion::BipedReferences::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedReferences*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::BipedReferences::BipedReferences() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
