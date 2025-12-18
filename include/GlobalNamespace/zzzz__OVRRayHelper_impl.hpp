#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRayHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRayHelper_def.hpp"
#include "GlobalNamespace/zzzz__OVRInputRayData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRRayHelper.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRayHelper::*)()>(&::GlobalNamespace::OVRRayHelper::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d5d6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRayHelper*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRayHelper.UpdatePointerRay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRayHelper::*)(::GlobalNamespace::OVRInputRayData)>(
    &::GlobalNamespace::OVRRayHelper::UpdatePointerRay)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5d5d7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRayHelper*>::get(), "UpdatePointerRay", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInputRayData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRayHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRayHelper::*)()>(&::GlobalNamespace::OVRRayHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d5dabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRayHelper*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderer;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_Renderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_NormalMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NormalMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_NormalMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NormalMaterial;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_NormalMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NormalMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_PinchMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PinchMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_PinchMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PinchMaterial;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_PinchMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PinchMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Cursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cursor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_Cursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cursor;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_Cursor(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Cursor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::OVRRayHelper::__cordl_internal_get_CursorFill() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CursorFill;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_CursorFill() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CursorFill;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_CursorFill(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CursorFill)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRRayHelper::__cordl_internal_get__initialScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRRayHelper::__cordl_internal_get__initialScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialScale;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set__initialScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialScale = value;
}
constexpr float_t& GlobalNamespace::OVRRayHelper::__cordl_internal_get_DefaultLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultLength;
}
constexpr float_t const& GlobalNamespace::OVRRayHelper::__cordl_internal_get_DefaultLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DefaultLength;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set_DefaultLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DefaultLength = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRRayHelper::__cordl_internal_get__cursorIntitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorIntitialSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRRayHelper::__cordl_internal_get__cursorIntitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorIntitialSize;
}
constexpr void GlobalNamespace::OVRRayHelper::__cordl_internal_set__cursorIntitialSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursorIntitialSize = value;
}
inline void GlobalNamespace::OVRRayHelper::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRayHelper*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRayHelper::UpdatePointerRay(::GlobalNamespace::OVRInputRayData rayData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRayHelper*>::get(), "UpdatePointerRay", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInputRayData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayData);
}
inline void GlobalNamespace::OVRRayHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRayHelper*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRRayHelper* GlobalNamespace::OVRRayHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRRayHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRayHelper::OVRRayHelper() {}
