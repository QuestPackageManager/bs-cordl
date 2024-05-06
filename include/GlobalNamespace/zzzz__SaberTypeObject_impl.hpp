#pragma once
#include "GlobalNamespace/zzzz__SaberType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberTypeObject.get_saberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SaberType (::GlobalNamespace::SaberTypeObject::*)()>(
    &::GlobalNamespace::SaberTypeObject::get_saberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27267e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(), "get_saberType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTypeObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberTypeObject::*)()>(&::GlobalNamespace::SaberTypeObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27267f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SaberType& GlobalNamespace::SaberTypeObject::__cordl_internal_get__saberType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr ::GlobalNamespace::SaberType const& GlobalNamespace::SaberTypeObject::__cordl_internal_get__saberType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberType;
}
constexpr void GlobalNamespace::SaberTypeObject::__cordl_internal_set__saberType(::GlobalNamespace::SaberType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberType = value;
}
inline ::GlobalNamespace::SaberType GlobalNamespace::SaberTypeObject::get_saberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(), "get_saberType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaberType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberTypeObject* GlobalNamespace::SaberTypeObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SaberTypeObject*>());
}
inline void GlobalNamespace::SaberTypeObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberTypeObject*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberTypeObject::SaberTypeObject() {}
