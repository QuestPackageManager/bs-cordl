#pragma once
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersValueSOOffsets_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSOOffsets.get_positionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSOOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSOOffsets::get_positionOffset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2376250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSOOffsets.get_rotationOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSOOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSOOffsets::get_rotationOffset)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x237629c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSOOffsets._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRControllersValueSOOffsets::*)()>(&::GlobalNamespace::VRControllersValueSOOffsets::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23762e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::VRControllersValueSOOffsets::__get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionOffset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::VRControllersValueSOOffsets::__get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::VRControllersValueSOOffsets::__set__positionOffset(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::VRControllersValueSOOffsets::__get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationOffset;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::VRControllersValueSOOffsets::__get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationOffset;
}
constexpr void GlobalNamespace::VRControllersValueSOOffsets::__set__rotationOffset(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSOOffsets::get_positionOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(),
                                                                             "get_positionOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSOOffsets::get_rotationOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(),
                                                                             "get_rotationOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRControllersValueSOOffsets* GlobalNamespace::VRControllersValueSOOffsets::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VRControllersValueSOOffsets*>());
}
inline void GlobalNamespace::VRControllersValueSOOffsets::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersValueSOOffsets*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllersValueSOOffsets::VRControllersValueSOOffsets() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
