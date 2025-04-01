#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeletonRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider.GetSkeletonRendererData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData (
    ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider::*)()>(&::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider::GetSkeletonRendererData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider::GetSkeletonRendererData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData, false>(this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.get_RootScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)()>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404258c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "get_RootScale",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.set_RootScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)(float_t)>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4042594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_RootScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.get_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)()>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404259c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "get_IsDataValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.set_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)(bool)>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_IsDataValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40425a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_IsDataValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)()>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40425b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "get_IsDataHighConfidence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)(bool)>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40425b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_IsDataHighConfidence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.get_ShouldUseSystemGestureMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)()>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_ShouldUseSystemGestureMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40425c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(),
                                                 "get_ShouldUseSystemGestureMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData.set_ShouldUseSystemGestureMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::*)(bool)>(
    &::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_ShouldUseSystemGestureMaterial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40425cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_ShouldUseSystemGestureMaterial",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_RootScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(),
                                                                             "get_RootScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_RootScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_RootScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(),
                                                                             "get_IsDataValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_IsDataValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_IsDataValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(),
                                                                             "get_IsDataHighConfidence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_IsDataHighConfidence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::get_ShouldUseSystemGestureMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(),
                                               "get_ShouldUseSystemGestureMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::set_ShouldUseSystemGestureMaterial(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData>::get(), "set_ShouldUseSystemGestureMaterial",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::OVRSkeletonRenderer_SkeletonRendererData(float_t _RootScale_k__BackingField, bool _IsDataValid_k__BackingField,
                                                                                                                bool _IsDataHighConfidence_k__BackingField,
                                                                                                                bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept {
  this->_RootScale_k__BackingField = _RootScale_k__BackingField;
  this->_IsDataValid_k__BackingField = _IsDataValid_k__BackingField;
  this->_IsDataHighConfidence_k__BackingField = _IsDataHighConfidence_k__BackingField;
  this->_ShouldUseSystemGestureMaterial_k__BackingField = _ShouldUseSystemGestureMaterial_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SkeletonRendererData::OVRSkeletonRenderer_SkeletonRendererData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior::OVRSkeletonRenderer_ConfidenceBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior::OVRSkeletonRenderer_ConfidenceBehavior() {}
constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior::ToggleRenderer{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior::OVRSkeletonRenderer_SystemGestureBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior::OVRSkeletonRenderer_SystemGestureBehavior() {}
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior::SwapMaterial{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*, float_t, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(
    &::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x4041998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::*)(
    float_t, bool, bool, ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior, ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior)>(
    &::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::Update)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x4041ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_BoneGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_BoneGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneGO;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_set_BoneGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BoneGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_BoneBegin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneBegin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_BoneBegin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneBegin;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_set_BoneBegin(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BoneBegin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_BoneEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_BoneEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneEnd;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_set_BoneEnd(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BoneEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_Line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Line;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_Line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Line;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_set_Line(::UnityW<::UnityEngine::LineRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Line)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_RenderMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_RenderMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_set_RenderMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RenderMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_SystemGestureMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SystemGestureMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_get_SystemGestureMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SystemGestureMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::__cordl_internal_set_SystemGestureMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SystemGestureMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat,
                                                                          float_t scale, ::UnityEngine::Transform* begin, ::UnityEngine::Transform* end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootGO, renderMat, systemGestureMat, scale, begin, end);
}
inline void GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial,
                                                                           ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior confidenceBehavior,
                                                                           ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior systemGestureBehavior) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale, shouldRender, shouldUseSystemGestureMaterial, confidenceBehavior, systemGestureBehavior);
}
inline ::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization* GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::New_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat,
                                                                                                                                  ::UnityEngine::Material* systemGestureMat, float_t scale,
                                                                                                                                  ::UnityEngine::Transform* begin, ::UnityEngine::Transform* end) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>(rootGO, renderMat, systemGestureMat, scale, begin, end));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization::OVRSkeletonRenderer_BoneVisualization() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*, float_t, ::GlobalNamespace::OVRBoneCapsule*)>(
    &::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x4041b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoneCapsule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::*)(
    float_t, bool, bool, ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior, ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior)>(
    &::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::Update)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x40420cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_CapsuleGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapsuleGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_CapsuleGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapsuleGO;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_set_CapsuleGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CapsuleGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRBoneCapsule*& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_BoneCapsule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneCapsule;
}
constexpr ::GlobalNamespace::OVRBoneCapsule* const& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_BoneCapsule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BoneCapsule;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_set_BoneCapsule(::GlobalNamespace::OVRBoneCapsule* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BoneCapsule)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_capsuleScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capsuleScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_capsuleScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capsuleScale;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_set_capsuleScale(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capsuleScale = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_Renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_Renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Renderer;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_set_Renderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_RenderMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_RenderMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RenderMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_set_RenderMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RenderMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_SystemGestureMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SystemGestureMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_get_SystemGestureMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SystemGestureMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::__cordl_internal_set_SystemGestureMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SystemGestureMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat,
                                                                             float_t scale, ::GlobalNamespace::OVRBoneCapsule* boneCapsule) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRBoneCapsule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rootGO, renderMat, systemGestureMat, scale, boneCapsule);
}
inline void GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::Update(float_t scale, bool shouldRender, bool shouldUseSystemGestureMaterial,
                                                                              ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior confidenceBehavior,
                                                                              ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior systemGestureBehavior) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale, shouldRender, shouldUseSystemGestureMaterial, confidenceBehavior, systemGestureBehavior);
}
inline ::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization* GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::New_ctor(::UnityEngine::GameObject* rootGO,
                                                                                                                                        ::UnityEngine::Material* renderMat,
                                                                                                                                        ::UnityEngine::Material* systemGestureMat, float_t scale,
                                                                                                                                        ::GlobalNamespace::OVRBoneCapsule* boneCapsule) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>(rootGO, renderMat, systemGestureMat, scale, boneCapsule));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization::OVRSkeletonRenderer_CapsuleVisualization() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.get_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4041064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(),
                                                                               "get_IsInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.set_IsInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(&::GlobalNamespace::OVRSkeletonRenderer::set_IsInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x404106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_IsInitialized",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.get_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4041078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(),
                                                                               "get_IsDataValid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.set_IsDataValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(&::GlobalNamespace::OVRSkeletonRenderer::set_IsDataValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4041080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_IsDataValid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.get_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer::*)()>(
    &::GlobalNamespace::OVRSkeletonRenderer::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x404108c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(),
                                                                               "get_IsDataHighConfidence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.set_IsDataHighConfidence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(
    &::GlobalNamespace::OVRSkeletonRenderer::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4041094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_IsDataHighConfidence",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.get_ShouldUseSystemGestureMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer::*)()>(
    &::GlobalNamespace::OVRSkeletonRenderer::get_ShouldUseSystemGestureMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40410a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "get_ShouldUseSystemGestureMaterial",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.set_ShouldUseSystemGestureMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)(bool)>(
    &::GlobalNamespace::OVRSkeletonRenderer::set_ShouldUseSystemGestureMaterial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40410a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_ShouldUseSystemGestureMaterial",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40410b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x404116c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.ShouldInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::ShouldInitialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4041218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(),
                                                                               "ShouldInitialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::Initialize)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x404124c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::Update)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x4041d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x40423ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeletonRenderer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSkeletonRenderer::*)()>(&::GlobalNamespace::OVRSkeletonRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4042518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider*& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__dataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr ::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__dataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProvider;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__dataProvider(::GlobalNamespace::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__confidenceBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confidenceBehavior;
}
constexpr ::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__confidenceBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confidenceBehavior;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__confidenceBehavior(::GlobalNamespace::OVRSkeletonRenderer_ConfidenceBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____confidenceBehavior = value;
}
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__systemGestureBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemGestureBehavior;
}
constexpr ::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__systemGestureBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemGestureBehavior;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__systemGestureBehavior(::GlobalNamespace::OVRSkeletonRenderer_SystemGestureBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____systemGestureBehavior = value;
}
constexpr bool& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__renderPhysicsCapsules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPhysicsCapsules;
}
constexpr bool const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__renderPhysicsCapsules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderPhysicsCapsules;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__renderPhysicsCapsules(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderPhysicsCapsules = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__skeletonMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__skeletonMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__skeletonMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skeletonMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__skeletonDefaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonDefaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__skeletonDefaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonDefaultMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__skeletonDefaultMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skeletonDefaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__capsuleMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__capsuleMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__capsuleMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capsuleMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__capsuleDefaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleDefaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__capsuleDefaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleDefaultMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__capsuleDefaultMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capsuleDefaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__systemGestureMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemGestureMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__systemGestureMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemGestureMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__systemGestureMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____systemGestureMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__systemGestureDefaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemGestureDefaultMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__systemGestureDefaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____systemGestureDefaultMaterial;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__systemGestureDefaultMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____systemGestureDefaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>*& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__boneVisualizations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boneVisualizations;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>* const&
GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__boneVisualizations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boneVisualizations;
}
constexpr void
GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__boneVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_BoneVisualization*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____boneVisualizations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>*& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__capsuleVisualizations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleVisualizations;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>* const&
GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__capsuleVisualizations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsuleVisualizations;
}
constexpr void
GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__capsuleVisualizations(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSkeletonRenderer_CapsuleVisualization*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capsuleVisualizations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__ovrSkeleton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ovrSkeleton;
}
constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__ovrSkeleton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ovrSkeleton;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__ovrSkeleton(::UnityW<::GlobalNamespace::OVRSkeleton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ovrSkeleton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__skeletonGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__skeletonGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skeletonGO;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__skeletonGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skeletonGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr float_t const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scale = value;
}
constexpr bool& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__IsInitialized_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__IsInitialized_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsInitialized_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__IsInitialized_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsInitialized_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__IsDataValid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__IsDataValid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__IsDataValid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__IsDataHighConfidence_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__IsDataHighConfidence_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShouldUseSystemGestureMaterial_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShouldUseSystemGestureMaterial_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeletonRenderer::__cordl_internal_set__ShouldUseSystemGestureMaterial_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ShouldUseSystemGestureMaterial_k__BackingField = value;
}
inline void GlobalNamespace::OVRSkeletonRenderer::setStaticF__capsuleRotationOffset(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "_capsuleRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get>(
      std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRSkeletonRenderer::getStaticF__capsuleRotationOffset() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "_capsuleRotationOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get>();
}
inline bool GlobalNamespace::OVRSkeletonRenderer::get_IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(),
                                                                             "get_IsInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::set_IsInitialized(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_IsInitialized",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeletonRenderer::get_IsDataValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "get_IsDataValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::set_IsDataValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_IsDataValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeletonRenderer::get_IsDataHighConfidence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(),
                                                                             "get_IsDataHighConfidence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::set_IsDataHighConfidence(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_IsDataHighConfidence",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeletonRenderer::get_ShouldUseSystemGestureMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "get_ShouldUseSystemGestureMaterial",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::set_ShouldUseSystemGestureMaterial(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "set_ShouldUseSystemGestureMaterial",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSkeletonRenderer::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeletonRenderer::ShouldInitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "ShouldInitialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeletonRenderer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSkeletonRenderer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeletonRenderer* GlobalNamespace::OVRSkeletonRenderer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRSkeletonRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeletonRenderer::OVRSkeletonRenderer() {}
