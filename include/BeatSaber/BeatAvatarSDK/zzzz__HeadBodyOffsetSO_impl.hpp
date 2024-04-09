#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__HeadBodyOffsetSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO.get_headNeckOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::*)()>(
    &::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::get_headNeckOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf60b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>::get(),
                                                                               "get_headNeckOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO.get_verticalOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::*)()>(
    &::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::get_verticalOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf60b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>::get(),
                                                                               "get_verticalOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::*)()>(&::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xf60b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::__cordl_internal_get__headNeckOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNeckOffset;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::__cordl_internal_get__headNeckOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNeckOffset;
}
constexpr void BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::__cordl_internal_set__headNeckOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headNeckOffset = value;
}
constexpr float_t& BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::__cordl_internal_get__verticalOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalOffset;
}
constexpr float_t const& BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::__cordl_internal_get__verticalOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalOffset;
}
constexpr void BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::__cordl_internal_set__verticalOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalOffset = value;
}
inline ::UnityEngine::Vector3 BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::get_headNeckOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>::get(),
                                                                             "get_headNeckOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline float_t BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::get_verticalOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>::get(),
                                                                             "get_verticalOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO* BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>());
}
inline void BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::HeadBodyOffsetSO::HeadBodyOffsetSO() {}
