#pragma once
#include "GlobalNamespace/zzzz__OVROverlay_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::__OVRPassthroughLayer__ProjectionSurfaceType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::__OVRPassthroughLayer__ProjectionSurfaceType() {}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::Reconstructed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType::UserDefined{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::__OVRPassthroughLayer__ColorMapEditorType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::__OVRPassthroughLayer__ColorMapEditorType() {}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::GrayscaleToColor{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::Controls{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::Custom{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::Grayscale{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType::ColorAdjustment{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "meshHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceHandle", ty: "uint64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "updateTransform", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance::__OVRPassthroughLayer__PassthroughMeshInstance(uint64_t meshHandle, uint64_t instanceHandle, bool updateTransform,
                                                                                                                            ::UnityEngine::Matrix4x4 localToWorld) noexcept {
  this->meshHandle = meshHandle;
  this->instanceHandle = instanceHandle;
  this->updateTransform = updateTransform;
  this->localToWorld = localToWorld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance::__OVRPassthroughLayer__PassthroughMeshInstance() {}
// Ctor Parameters [CppParam { name: "meshFilter", ty: "::UnityEngine::MeshFilter*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry::__OVRPassthroughLayer__SerializedSurfaceGeometry(::UnityEngine::MeshFilter* meshFilter, bool updateTransform) noexcept {
  this->meshFilter = meshFilter;
  this->updateTransform = updateTransform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry::__OVRPassthroughLayer__SerializedSurfaceGeometry() {}
// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "updateTransform", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__OVRPassthroughLayer__DeferredPassthroughMeshAddition(::UnityEngine::GameObject* gameObject,
                                                                                                                                            bool updateTransform) noexcept {
  this->gameObject = gameObject;
  this->updateTransform = updateTransform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition::__OVRPassthroughLayer__DeferredPassthroughMeshAddition() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ee404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0._RemoveSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition)>(&::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25f157c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), "<RemoveSurfaceGeometry>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__set_obj(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0* GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::_RemoveSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0*>::get(), "<RemoveSurfaceGeometry>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass9_0::__OVRPassthroughLayer____c__DisplayClass9_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::*)()>(
    &::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ee6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0._IsSurfaceGeometry_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::*)(
    ::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition)>(&::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_IsSurfaceGeometry_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25f15e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), "<IsSurfaceGeometry>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__get_obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__get_obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obj;
}
constexpr void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__set_obj(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0* GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>());
}
inline void GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::_IsSurfaceGeometry_b__0(::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0*>::get(), "<IsSurfaceGeometry>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRPassthroughLayer____c__DisplayClass10_0::__OVRPassthroughLayer____c__DisplayClass10_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AddSurfaceGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*, bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x25edffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "AddSurfaceGeometry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.RemoveSurfaceGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x25ee1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "RemoveSurfaceGeometry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.IsSurfaceGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25ee59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "IsSurfaceGeometry", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_textureOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::get_textureOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ee6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_textureOpacity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_textureOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_textureOpacity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25ee6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_textureOpacity",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_edgeRenderingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ee6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_edgeRenderingEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_edgeRenderingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25ee6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeRenderingEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_edgeColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_edgeColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ee70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "get_edgeColor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_edgeColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_edgeColor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25ee718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeColor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetColorMap)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x25ee770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMapControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(
    float_t, float_t, float_t, ::UnityEngine::Gradient*, ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType)>(&::GlobalNamespace::OVRPassthroughLayer::SetColorMapControls)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x25eeb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapControls", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetColorMapMonochromatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25eeebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapMonochromatic", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetBrightnessContrastSaturation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25eef80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetBrightnessContrastSaturation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DisableColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::DisableColorMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25ef238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "DisableColorMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_colorMapEditorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_colorMapEditorType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.set_colorMapEditorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType)>(
    &::GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25ee85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_colorMapEditorType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SetStyleDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::SetStyleDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25ef310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetStyleDirty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AddDeferredSurfaceGeometries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x25ef31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "AddDeferredSurfaceGeometries", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.GetTransformMatrixForPassthroughSurfaceObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OVRPassthroughLayer::*)(::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x25ef824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "GetTransformMatrixForPassthroughSurfaceObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateAndAddMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)(
    ::UnityEngine::GameObject*, ByRef<uint64_t>, ByRef<uint64_t>, ByRef<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x25ef574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "CreateAndAddMesh", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DestroySurfaceGeometries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x25efe44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "DestroySurfaceGeometries",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x25f00c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "UpdateSurfaceGeometryTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateSurfaceGeometryTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(uint64_t, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x25f03e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateSurfaceGeometryTransform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.AllocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(uint32_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::AllocateColorMapData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x25ee8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "AllocateColorMapData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.DeallocateColorMapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::DeallocateColorMapData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25ef26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "DeallocateColorMapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.CreateNeutralColorMapGradient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Gradient* (*)()>(&::GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x25eecec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "CreateNeutralColorMapGradient", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.HasControlsBasedColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25f06a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "HasControlsBasedColorMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.UpdateColorMapFromControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(bool)>(
    &::GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x25eeff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateColorMapFromControls",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.computeBrightnessContrastPosterizeMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::computeBrightnessContrastPosterizeMap)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x25f06cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "computeBrightnessContrastPosterizeMap", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.WriteColorToColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(int32_t, ByRef<::UnityEngine::Color>)>(
    &::GlobalNamespace::OVRPassthroughLayer::WriteColorToColorMap)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x25ee9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "WriteColorToColorMap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.WriteFloatToColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(int32_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::WriteFloatToColorMap)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25f089c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "WriteFloatToColorMap", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.WriteBrightnessContrastSaturationColorMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)(float_t, float_t, float_t)>(
    &::GlobalNamespace::OVRPassthroughLayer::WriteBrightnessContrastSaturationColorMap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25f0840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "WriteBrightnessContrastSaturationColorMap", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.SyncToOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::SyncToOverlay)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x25f0924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SyncToOverlay",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.get_overlayShape
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVROverlay__OverlayShape (::GlobalNamespace::OVRPassthroughLayer::*)()>(
    &::GlobalNamespace::OVRPassthroughLayer::get_overlayShape)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25f0b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                               "get_overlayShape", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::Awake)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x25f0bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25f0dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::LateUpdate)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x25f0dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25f1148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x25f126c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25f133c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer::*)()>(&::GlobalNamespace::OVRPassthroughLayer::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x25f1344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType& GlobalNamespace::OVRPassthroughLayer::__get_projectionSurfaceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionSurfaceType;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType const& GlobalNamespace::OVRPassthroughLayer::__get_projectionSurfaceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___projectionSurfaceType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_projectionSurfaceType(::GlobalNamespace::__OVRPassthroughLayer__ProjectionSurfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___projectionSurfaceType = value;
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayType& GlobalNamespace::OVRPassthroughLayer::__get_overlayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayType;
}
constexpr ::GlobalNamespace::__OVROverlay__OverlayType const& GlobalNamespace::OVRPassthroughLayer::__get_overlayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overlayType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_overlayType(::GlobalNamespace::__OVROverlay__OverlayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overlayType = value;
}
constexpr int32_t& GlobalNamespace::OVRPassthroughLayer::__get_compositionDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionDepth;
}
constexpr int32_t const& GlobalNamespace::OVRPassthroughLayer::__get_compositionDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compositionDepth;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_compositionDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compositionDepth = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__get_hidden() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hidden;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__get_hidden() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hidden;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_hidden(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hidden = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__get_overridePerLayerColorScaleAndOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridePerLayerColorScaleAndOffset;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__get_overridePerLayerColorScaleAndOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overridePerLayerColorScaleAndOffset;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_overridePerLayerColorScaleAndOffset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overridePerLayerColorScaleAndOffset = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVRPassthroughLayer::__get_colorScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScale;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVRPassthroughLayer::__get_colorScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScale;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorScale(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorScale = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OVRPassthroughLayer::__get_colorOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOffset;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OVRPassthroughLayer::__get_colorOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOffset;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorOffset(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorOffset = value;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorType_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorType_;
}
constexpr ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorType_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorType_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorType_(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorType_ = value;
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorGradient;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorGradient;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorGradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorMapEditorGradient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Gradient*& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorGradientOld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorGradientOld;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorGradientOld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorGradientOld;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorGradientOld(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorMapEditorGradientOld)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorContrast() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorContrast;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorContrast() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorContrast;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorContrast(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorContrast = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorContrast_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorContrast_;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorContrast_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorContrast_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorContrast_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorContrast_ = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorBrightness;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorBrightness;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorBrightness = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorBrightness_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorBrightness_;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorBrightness_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorBrightness_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorBrightness_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorBrightness_ = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorPosterize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorPosterize;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorPosterize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorPosterize;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorPosterize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorPosterize = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorPosterize_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorPosterize_;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorPosterize_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorPosterize_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorPosterize_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorPosterize_ = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorSaturation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorSaturation;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorSaturation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorSaturation;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorSaturation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorSaturation = value;
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorSaturation_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorSaturation_;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapEditorSaturation_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapEditorSaturation_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapEditorSaturation_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapEditorSaturation_ = value;
}
constexpr ::GlobalNamespace::OVRCameraRig*& GlobalNamespace::OVRPassthroughLayer::__get_cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& GlobalNamespace::OVRPassthroughLayer::__get_cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRig;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_cameraRig(::GlobalNamespace::OVRCameraRig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraRig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__get_cameraRigInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRigInitialized;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__get_cameraRigInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraRigInitialized;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_cameraRigInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraRigInitialized = value;
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::OVRPassthroughLayer::__get_auxGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auxGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::OVRPassthroughLayer::__get_auxGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___auxGameObject;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_auxGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___auxGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVROverlay*& GlobalNamespace::OVRPassthroughLayer::__get_passthroughOverlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughOverlay;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> const& GlobalNamespace::OVRPassthroughLayer::__get_passthroughOverlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passthroughOverlay;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_passthroughOverlay(::GlobalNamespace::OVROverlay* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___passthroughOverlay)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*&
GlobalNamespace::OVRPassthroughLayer::__get_surfaceGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceGameObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>*> const&
GlobalNamespace::OVRPassthroughLayer::__get_surfaceGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceGameObjects;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_surfaceGameObjects(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::__OVRPassthroughLayer__PassthroughMeshInstance>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___surfaceGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*& GlobalNamespace::OVRPassthroughLayer::__get_deferredSurfaceGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredSurfaceGameObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>*> const&
GlobalNamespace::OVRPassthroughLayer::__get_deferredSurfaceGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredSurfaceGameObjects;
}
constexpr void
GlobalNamespace::OVRPassthroughLayer::__set_deferredSurfaceGameObjects(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__DeferredPassthroughMeshAddition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deferredSurfaceGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*& GlobalNamespace::OVRPassthroughLayer::__get_serializedSurfaceGeometry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedSurfaceGeometry;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>*> const&
GlobalNamespace::OVRPassthroughLayer::__get_serializedSurfaceGeometry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedSurfaceGeometry;
}
constexpr void
GlobalNamespace::OVRPassthroughLayer::__set_serializedSurfaceGeometry(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRPassthroughLayer__SerializedSurfaceGeometry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedSurfaceGeometry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::OVRPassthroughLayer::__get_textureOpacity_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureOpacity_;
}
constexpr float_t const& GlobalNamespace::OVRPassthroughLayer::__get_textureOpacity_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureOpacity_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_textureOpacity_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureOpacity_ = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__get_edgeRenderingEnabled_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeRenderingEnabled_;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__get_edgeRenderingEnabled_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeRenderingEnabled_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_edgeRenderingEnabled_(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edgeRenderingEnabled_ = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::OVRPassthroughLayer::__get_edgeColor_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeColor_;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::OVRPassthroughLayer::__get_edgeColor_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___edgeColor_;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_edgeColor_(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___edgeColor_ = value;
}
constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType& GlobalNamespace::OVRPassthroughLayer::__get_colorMapType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapType;
}
constexpr ::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapType;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapType(::GlobalNamespace::__OVRPlugin__InsightPassthroughColorMapType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapType = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::OVRPassthroughLayer::__get_colorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::OVRPassthroughLayer::__get_tmpColorMapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpColorMapData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::OVRPassthroughLayer::__get_tmpColorMapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmpColorMapData;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_tmpColorMapData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tmpColorMapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& GlobalNamespace::OVRPassthroughLayer::__get_colorMapDataHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapDataHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& GlobalNamespace::OVRPassthroughLayer::__get_colorMapDataHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMapDataHandle;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_colorMapDataHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMapDataHandle = value;
}
constexpr bool& GlobalNamespace::OVRPassthroughLayer::__get_styleDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleDirty;
}
constexpr bool const& GlobalNamespace::OVRPassthroughLayer::__get_styleDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___styleDirty;
}
constexpr void GlobalNamespace::OVRPassthroughLayer::__set_styleDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___styleDirty = value;
}
inline void GlobalNamespace::OVRPassthroughLayer::setStaticF_colorMapNeutralGradient(::UnityEngine::Gradient* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>(
      std::forward<::UnityEngine::Gradient*>(value));
}
inline ::UnityEngine::Gradient* GlobalNamespace::OVRPassthroughLayer::getStaticF_colorMapNeutralGradient() {
  return ::cordl_internals::getStaticField<::UnityEngine::Gradient*, "colorMapNeutralGradient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get>();
}
/// @param updateTransform: bool (default: false)
inline void GlobalNamespace::OVRPassthroughLayer::AddSurfaceGeometry(::UnityEngine::GameObject* obj, bool updateTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "AddSurfaceGeometry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, updateTransform);
}
inline void GlobalNamespace::OVRPassthroughLayer::RemoveSurfaceGeometry(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "RemoveSurfaceGeometry", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::OVRPassthroughLayer::IsSurfaceGeometry(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "IsSurfaceGeometry", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline float_t GlobalNamespace::OVRPassthroughLayer::get_textureOpacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "get_textureOpacity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_textureOpacity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_textureOpacity",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRPassthroughLayer::get_edgeRenderingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "get_edgeRenderingEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_edgeRenderingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeRenderingEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::OVRPassthroughLayer::get_edgeColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "get_edgeColor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_edgeColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_edgeColor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMap(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
/// @param brightness: float_t (default: 0.0)
/// @param posterize: float_t (default: 0.0)
/// @param gradient: ::UnityEngine::Gradient* (default: nullptr)
/// @param colorMapType: ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapControls(float_t contrast, float_t brightness, float_t posterize, ::UnityEngine::Gradient* gradient,
                                                                      ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType colorMapType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapControls", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Gradient*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contrast, brightness, posterize, gradient, colorMapType);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetColorMapMonochromatic(::ArrayW<uint8_t, ::Array<uint8_t>*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetColorMapMonochromatic", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
/// @param brightness: float_t (default: 0.0)
/// @param contrast: float_t (default: 0.0)
/// @param saturation: float_t (default: 0.0)
inline void GlobalNamespace::OVRPassthroughLayer::SetBrightnessContrastSaturation(float_t brightness, float_t contrast, float_t saturation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetBrightnessContrastSaturation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, brightness, contrast, saturation);
}
inline void GlobalNamespace::OVRPassthroughLayer::DisableColorMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "DisableColorMap",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType GlobalNamespace::OVRPassthroughLayer::get_colorMapEditorType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "get_colorMapEditorType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::set_colorMapEditorType(::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "set_colorMapEditorType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPassthroughLayer__ColorMapEditorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::SetStyleDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SetStyleDirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::AddDeferredSurfaceGeometries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "AddDeferredSurfaceGeometries", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OVRPassthroughLayer::GetTransformMatrixForPassthroughSurfaceObject(::UnityEngine::Matrix4x4 worldFromObj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "GetTransformMatrixForPassthroughSurfaceObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, worldFromObj);
}
inline bool GlobalNamespace::OVRPassthroughLayer::CreateAndAddMesh(::UnityEngine::GameObject* obj, ByRef<uint64_t> meshHandle, ByRef<uint64_t> instanceHandle,
                                                                   ByRef<::UnityEngine::Matrix4x4> localToWorld) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "CreateAndAddMesh", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj, meshHandle, instanceHandle, localToWorld);
}
/// @param addBackToDeferredQueue: bool (default: false)
inline void GlobalNamespace::OVRPassthroughLayer::DestroySurfaceGeometries(bool addBackToDeferredQueue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "DestroySurfaceGeometries",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, addBackToDeferredQueue);
}
inline void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "UpdateSurfaceGeometryTransforms", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::UpdateSurfaceGeometryTransform(uint64_t instanceHandle, ::UnityEngine::Matrix4x4 localToWorld) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateSurfaceGeometryTransform", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instanceHandle, localToWorld);
}
/// @param size: uint32_t (default: static_cast<uint32_t>(0x90u))
inline void GlobalNamespace::OVRPassthroughLayer::AllocateColorMapData(uint32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "AllocateColorMapData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void GlobalNamespace::OVRPassthroughLayer::DeallocateColorMapData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "DeallocateColorMapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Gradient* GlobalNamespace::OVRPassthroughLayer::CreateNeutralColorMapGradient() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "CreateNeutralColorMapGradient", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRPassthroughLayer::HasControlsBasedColorMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(),
                                                                             "HasControlsBasedColorMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param forceUpdate: bool (default: false)
inline void GlobalNamespace::OVRPassthroughLayer::UpdateColorMapFromControls(bool forceUpdate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "UpdateColorMapFromControls",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceUpdate);
}
inline void GlobalNamespace::OVRPassthroughLayer::computeBrightnessContrastPosterizeMap(::ArrayW<uint8_t, ::Array<uint8_t>*> result, float_t brightness, float_t contrast, float_t posterize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "computeBrightnessContrastPosterizeMap", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result, brightness, contrast, posterize);
}
inline void GlobalNamespace::OVRPassthroughLayer::WriteColorToColorMap(int32_t colorIndex, ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "WriteColorToColorMap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorIndex, color);
}
inline void GlobalNamespace::OVRPassthroughLayer::WriteFloatToColorMap(int32_t index, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "WriteFloatToColorMap", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
inline void GlobalNamespace::OVRPassthroughLayer::WriteBrightnessContrastSaturationColorMap(float_t brightness, float_t contrast, float_t saturation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "WriteBrightnessContrastSaturationColorMap", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, brightness, contrast, saturation);
}
inline void GlobalNamespace::OVRPassthroughLayer::SyncToOverlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "SyncToOverlay",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVROverlay__OverlayShape GlobalNamespace::OVRPassthroughLayer::get_overlayShape() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "get_overlayShape",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVROverlay__OverlayShape, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRPassthroughLayer::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPassthroughLayer* GlobalNamespace::OVRPassthroughLayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPassthroughLayer*>());
}
inline void GlobalNamespace::OVRPassthroughLayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPassthroughLayer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer::OVRPassthroughLayer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
