#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/zzzz__BipedNaming_def.hpp"
#include "RootMotion/zzzz__BipedNaming_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::__BipedNaming__BoneType::__BipedNaming__BoneType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::__BipedNaming__BoneType::__BipedNaming__BoneType() {}
constexpr ::RootMotion::__BipedNaming__BoneType RootMotion::__BipedNaming__BoneType::Unassigned{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::__BipedNaming__BoneType RootMotion::__BipedNaming__BoneType::Spine{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::__BipedNaming__BoneType RootMotion::__BipedNaming__BoneType::Head{ static_cast<int32_t>(0x2) };
constexpr ::RootMotion::__BipedNaming__BoneType RootMotion::__BipedNaming__BoneType::Arm{ static_cast<int32_t>(0x3) };
constexpr ::RootMotion::__BipedNaming__BoneType RootMotion::__BipedNaming__BoneType::Leg{ static_cast<int32_t>(0x4) };
constexpr ::RootMotion::__BipedNaming__BoneType RootMotion::__BipedNaming__BoneType::Tail{ static_cast<int32_t>(0x5) };
constexpr ::RootMotion::__BipedNaming__BoneType RootMotion::__BipedNaming__BoneType::Eye{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::__BipedNaming__BoneSide::__BipedNaming__BoneSide(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::__BipedNaming__BoneSide::__BipedNaming__BoneSide() {}
constexpr ::RootMotion::__BipedNaming__BoneSide RootMotion::__BipedNaming__BoneSide::Center{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::__BipedNaming__BoneSide RootMotion::__BipedNaming__BoneSide::Left{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::__BipedNaming__BoneSide RootMotion::__BipedNaming__BoneSide::Right{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBonesOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> (*)(
    ::RootMotion::__BipedNaming__BoneType, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::BipedNaming::GetBonesOfType)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1312418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBonesOfType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBonesOfSide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> (*)(
    ::RootMotion::__BipedNaming__BoneSide, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::BipedNaming::GetBonesOfSide)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x13126dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBonesOfSide", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBonesOfTypeAndSide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> (*)(
    ::RootMotion::__BipedNaming__BoneType, ::RootMotion::__BipedNaming__BoneSide, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(
    &::RootMotion::BipedNaming::GetBonesOfTypeAndSide)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1312910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBonesOfTypeAndSide", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetFirstBoneOfTypeAndSide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::RootMotion::__BipedNaming__BoneType, ::RootMotion::__BipedNaming__BoneSide,
                                                                                                                         ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(
    &::RootMotion::BipedNaming::GetFirstBoneOfTypeAndSide)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1312984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetFirstBoneOfTypeAndSide", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetNamingMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(
    ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>, ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>)>(
    &::RootMotion::BipedNaming::GetNamingMatch)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1312a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetNamingMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBoneType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::__BipedNaming__BoneType (*)(::StringW)>(&::RootMotion::BipedNaming::GetBoneType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x13125c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBoneType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBoneSide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::__BipedNaming__BoneSide (*)(::StringW)>(&::RootMotion::BipedNaming::GetBoneSide)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1312888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBoneSide", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.GetBone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(
    ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>, ::RootMotion::__BipedNaming__BoneType, ::RootMotion::__BipedNaming__BoneSide,
    ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>)>(&::RootMotion::BipedNaming::GetBone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1313150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBone", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isLeft)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1312fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isLeft", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isRight)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x131307c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isRight", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isSpine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isSpine)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1312c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isSpine", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isHead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isHead)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1312c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isHead", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isArm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isArm)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1312d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isArm", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isLeg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isLeg)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1312dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isLeg", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isTail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isTail)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1312e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isTail", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isEye
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isEye)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1312f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isEye", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.isTypeExclude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::RootMotion::BipedNaming::isTypeExclude)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1313338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isTypeExclude", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.matchesNaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::RootMotion::BipedNaming::matchesNaming)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1312b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "matchesNaming", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.excludesNaming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::RootMotion::BipedNaming::excludesNaming)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x13132b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "excludesNaming", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.matchesLastLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::RootMotion::BipedNaming::matchesLastLetter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1313398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "matchesLastLetter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.LastLetterIs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::RootMotion::BipedNaming::LastLetterIs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1313458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "LastLetterIs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.firstLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::RootMotion::BipedNaming::firstLetter)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1313240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "firstLetter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::BipedNaming.lastLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::RootMotion::BipedNaming::lastLetter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x13131d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "lastLetter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void RootMotion::BipedNaming::setStaticF_typeLeft(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeLeft() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeLeft", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeRight(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeRight() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeRight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeSpine(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeSpine() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeHead(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeHead() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeArm(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeArm() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeLeg(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeLeg() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeTail(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeTail() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeEye(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeEye() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeExclude(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExclude", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeExclude() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExclude", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeExcludeSpine(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeExcludeSpine() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeSpine", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeExcludeHead(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeExcludeHead() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeHead", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeExcludeArm(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeExcludeArm() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeArm", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeExcludeLeg(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeExcludeLeg() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeLeg", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeExcludeTail(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeExcludeTail() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeTail", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_typeExcludeEye(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_typeExcludeEye() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "typeExcludeEye", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_pelvis(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "pelvis", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_pelvis() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "pelvis", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_hand(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "hand", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_hand() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "hand", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline void RootMotion::BipedNaming::setStaticF_foot(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "foot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> RootMotion::BipedNaming::getStaticF_foot() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "foot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get>();
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
RootMotion::BipedNaming::GetBonesOfType(::RootMotion::__BipedNaming__BoneType boneType, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBonesOfType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>, false>(nullptr, ___internal_method, boneType, bones);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
RootMotion::BipedNaming::GetBonesOfSide(::RootMotion::__BipedNaming__BoneSide boneSide, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBonesOfSide", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>, false>(nullptr, ___internal_method, boneSide, bones);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>
RootMotion::BipedNaming::GetBonesOfTypeAndSide(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide,
                                               ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBonesOfTypeAndSide", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>, false>(nullptr, ___internal_method, boneType, boneSide, bones);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::BipedNaming::GetFirstBoneOfTypeAndSide(::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide,
                                                                                             ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetFirstBoneOfTypeAndSide", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, boneType, boneSide, bones);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::BipedNaming::GetNamingMatch(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms,
                                                                                  ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> namings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetNamingMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, transforms, namings);
}
inline ::RootMotion::__BipedNaming__BoneType RootMotion::BipedNaming::GetBoneType(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBoneType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::__BipedNaming__BoneType, false>(nullptr, ___internal_method, boneName);
}
inline ::RootMotion::__BipedNaming__BoneSide RootMotion::BipedNaming::GetBoneSide(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBoneSide", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::__BipedNaming__BoneSide, false>(nullptr, ___internal_method, boneName);
}
/// @param boneSide: ::RootMotion::__BipedNaming__BoneSide (default: static_cast<int32_t>(0x0))
inline ::UnityW<::UnityEngine::Transform> RootMotion::BipedNaming::GetBone(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms,
                                                                           ::RootMotion::__BipedNaming__BoneType boneType, ::RootMotion::__BipedNaming__BoneSide boneSide,
                                                                           ::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*> namings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "GetBone", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::__BipedNaming__BoneSide>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::StringW, ::Array<::StringW>*>, ::Array<::ArrayW<::StringW, ::Array<::StringW>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, transforms, boneType, boneSide, namings);
}
inline bool RootMotion::BipedNaming::isLeft(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isLeft", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isRight(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isRight", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isSpine(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isSpine", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isHead(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isHead", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isArm(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isArm", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isLeg(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isLeg", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isTail(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isTail", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isEye(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isEye", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::isTypeExclude(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "isTypeExclude", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName);
}
inline bool RootMotion::BipedNaming::matchesNaming(::StringW boneName, ::ArrayW<::StringW, ::Array<::StringW>*> namingConvention) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "matchesNaming", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, namingConvention);
}
inline bool RootMotion::BipedNaming::excludesNaming(::StringW boneName, ::ArrayW<::StringW, ::Array<::StringW>*> namingConvention) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "excludesNaming", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, namingConvention);
}
inline bool RootMotion::BipedNaming::matchesLastLetter(::StringW boneName, ::ArrayW<::StringW, ::Array<::StringW>*> namingConvention) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "matchesLastLetter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, namingConvention);
}
inline bool RootMotion::BipedNaming::LastLetterIs(::StringW boneName, ::StringW letter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "LastLetterIs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boneName, letter);
}
inline ::StringW RootMotion::BipedNaming::firstLetter(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "firstLetter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, boneName);
}
inline ::StringW RootMotion::BipedNaming::lastLetter(::StringW boneName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::BipedNaming*>::get(), "lastLetter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, boneName);
}
// Ctor Parameters []
constexpr ::RootMotion::BipedNaming::BipedNaming() {}
