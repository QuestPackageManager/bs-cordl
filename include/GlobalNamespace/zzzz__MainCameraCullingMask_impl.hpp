#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainCameraCullingMask_def.hpp"
#include "GlobalNamespace/zzzz__MainCameraCullingMask_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainCameraCullingMask__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainCameraCullingMask__InitData::*)(bool)>(
    &::GlobalNamespace::__MainCameraCullingMask__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2807d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainCameraCullingMask__InitData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__MainCameraCullingMask__InitData::__get_showDebris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showDebris;
}
constexpr bool const& GlobalNamespace::__MainCameraCullingMask__InitData::__get_showDebris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showDebris;
}
constexpr void GlobalNamespace::__MainCameraCullingMask__InitData::__set_showDebris(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showDebris = value;
}
inline ::GlobalNamespace::__MainCameraCullingMask__InitData* GlobalNamespace::__MainCameraCullingMask__InitData::New_ctor(bool showDebris) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainCameraCullingMask__InitData*>(showDebris));
}
inline void GlobalNamespace::__MainCameraCullingMask__InitData::_ctor(bool showDebris) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainCameraCullingMask__InitData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showDebris);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainCameraCullingMask__InitData::__MainCameraCullingMask__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MainCameraCullingMask.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainCameraCullingMask::*)()>(&::GlobalNamespace::MainCameraCullingMask::Start)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2807c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainCameraCullingMask._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainCameraCullingMask::*)()>(&::GlobalNamespace::MainCameraCullingMask::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2807d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Camera*& GlobalNamespace::MainCameraCullingMask::__get__camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::MainCameraCullingMask::__get__camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____camera;
}
constexpr void GlobalNamespace::MainCameraCullingMask::__set__camera(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____camera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MainCameraCullingMask__InitData*& GlobalNamespace::MainCameraCullingMask::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MainCameraCullingMask__InitData*> const& GlobalNamespace::MainCameraCullingMask::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MainCameraCullingMask::__set__initData(::GlobalNamespace::__MainCameraCullingMask__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MainCameraCullingMask::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainCameraCullingMask* GlobalNamespace::MainCameraCullingMask::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainCameraCullingMask*>());
}
inline void GlobalNamespace::MainCameraCullingMask::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainCameraCullingMask*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainCameraCullingMask::MainCameraCullingMask() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
