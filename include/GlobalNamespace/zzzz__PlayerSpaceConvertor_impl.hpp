#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSpaceConvertor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpaceConvertor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSpaceConvertor.get_worldToPlayerSpaceRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::PlayerSpaceConvertor::*)()>(
    &::GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3be855c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor*>::get(),
                                                                               "get_worldToPlayerSpaceRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpaceConvertor.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpaceConvertor::*)()>(&::GlobalNamespace::PlayerSpaceConvertor::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3be8568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpaceConvertor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpaceConvertor::*)()>(&::GlobalNamespace::PlayerSpaceConvertor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3be85a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PlayerSpaceConvertor::__cordl_internal_get__worldToPlayerSpaceRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldToPlayerSpaceRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PlayerSpaceConvertor::__cordl_internal_get__worldToPlayerSpaceRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____worldToPlayerSpaceRotation;
}
constexpr void GlobalNamespace::PlayerSpaceConvertor::__cordl_internal_set__worldToPlayerSpaceRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____worldToPlayerSpaceRotation = value;
}
inline ::UnityEngine::Quaternion GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor*>::get(),
                                                                             "get_worldToPlayerSpaceRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpaceConvertor::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSpaceConvertor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpaceConvertor* GlobalNamespace::PlayerSpaceConvertor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSpaceConvertor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpaceConvertor::PlayerSpaceConvertor() {}
