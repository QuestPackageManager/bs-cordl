#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MoveAndRotateWithMainCamera_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22fed4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(
    &::GlobalNamespace::MoveAndRotateWithMainCamera::LateUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22fed98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera*>::get(),
                                                                               "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveAndRotateWithMainCamera._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MoveAndRotateWithMainCamera::*)()>(&::GlobalNamespace::MoveAndRotateWithMainCamera::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fee94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainCamera*& GlobalNamespace::MoveAndRotateWithMainCamera::__get__mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mainCamera;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> const& GlobalNamespace::MoveAndRotateWithMainCamera::__get__mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mainCamera;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__set__mainCamera(::GlobalNamespace::MainCamera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MoveAndRotateWithMainCamera::__get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MoveAndRotateWithMainCamera::__get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rotationOffset;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__set__rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MoveAndRotateWithMainCamera::__get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MoveAndRotateWithMainCamera::__get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::MoveAndRotateWithMainCamera::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MoveAndRotateWithMainCamera::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::MoveAndRotateWithMainCamera::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MoveAndRotateWithMainCamera::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MoveAndRotateWithMainCamera::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera*>::get(),
                                                                             "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MoveAndRotateWithMainCamera* GlobalNamespace::MoveAndRotateWithMainCamera::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MoveAndRotateWithMainCamera*>());
}
inline void GlobalNamespace::MoveAndRotateWithMainCamera::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MoveAndRotateWithMainCamera*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoveAndRotateWithMainCamera::MoveAndRotateWithMainCamera() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
