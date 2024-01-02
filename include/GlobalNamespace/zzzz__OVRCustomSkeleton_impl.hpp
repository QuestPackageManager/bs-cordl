#pragma once
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType::__OVRCustomSkeleton__RetargetingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType::__OVRCustomSkeleton__RetargetingType() {}
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType GlobalNamespace::__OVRCustomSkeleton__RetargetingType::OculusSkeleton{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.get_CustomBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Transform*>* (::GlobalNamespace::OVRCustomSkeleton::*)()>(
    &::GlobalNamespace::OVRCustomSkeleton::get_CustomBones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aa0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), "get_CustomBones",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.GetBoneTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::__OVRSkeleton__BoneId)>(
    &::GlobalNamespace::OVRCustomSkeleton::GetBoneTransform)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27aa0b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(
    &::GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27aa108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(
    &::GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27aa10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.AllocateBones
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::AllocateBones)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27aa110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), "AllocateBones",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.SetSkeletonType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::__OVRSkeleton__SkeletonType)>(
    &::GlobalNamespace::OVRCustomSkeleton::SetSkeletonType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27aa1d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aa260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr GlobalNamespace::OVRCustomSkeleton::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& GlobalNamespace::OVRCustomSkeleton::__get__customBones_V2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customBones_V2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> const& GlobalNamespace::OVRCustomSkeleton::__get__customBones_V2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customBones_V2;
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__set__customBones_V2(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customBones_V2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType& GlobalNamespace::OVRCustomSkeleton::__get_retargetingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType const& GlobalNamespace::OVRCustomSkeleton::__get_retargetingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retargetingType;
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__set_retargetingType(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___retargetingType = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GlobalNamespace::OVRCustomSkeleton::get_CustomBones() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), "get_CustomBones",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Transform* GlobalNamespace::OVRCustomSkeleton::GetBoneTransform(::GlobalNamespace::__OVRSkeleton__BoneId boneId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(this, ___internal_method, boneId);
}
inline void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::AllocateBones() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), "AllocateBones",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::SetSkeletonType(::GlobalNamespace::__OVRSkeleton__SkeletonType skeletonType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, skeletonType);
}
inline ::GlobalNamespace::OVRCustomSkeleton* GlobalNamespace::OVRCustomSkeleton::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRCustomSkeleton*>());
}
inline void GlobalNamespace::OVRCustomSkeleton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRCustomSkeleton::OVRCustomSkeleton() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
