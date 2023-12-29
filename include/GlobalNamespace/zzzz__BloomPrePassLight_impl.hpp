#pragma once
#include "GlobalNamespace/zzzz__BloomPrePassLight_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightTypeSO_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
constexpr ::UnityEngine::Vector3& GlobalNamespace::__BloomPrePassLight__VertexData::__get_vertex() {
  return this->___vertex;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_vertex() const {
  return this->___vertex;
}
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_vertex(::UnityEngine::Vector3 value) {
  this->___vertex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__BloomPrePassLight__VertexData::__get_viewPos() {
  return this->___viewPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_viewPos() const {
  return this->___viewPos;
}
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_viewPos(::UnityEngine::Vector3 value) {
  this->___viewPos = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__BloomPrePassLight__VertexData::__get_color() {
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_color() const {
  return this->___color;
}
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_color(::UnityEngine::Color value) {
  this->___color = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::__BloomPrePassLight__VertexData::__get_uv() {
  return this->___uv;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__BloomPrePassLight__VertexData::__get_uv() const {
  return this->___uv;
}
constexpr void GlobalNamespace::__BloomPrePassLight__VertexData::__set_uv(::UnityEngine::Vector3 value) {
  this->___uv = value;
}
// Ctor Parameters [CppParam { name: "vertex", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}")
// }]
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData::__BloomPrePassLight__VertexData(::UnityEngine::Vector3 vertex, ::UnityEngine::Vector3 viewPos, ::UnityEngine::Color color,
                                                                                              ::UnityEngine::Vector3 uv) noexcept {
  this->vertex = vertex;
  this->viewPos = viewPos;
  this->color = color;
  this->uv = uv;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData::__BloomPrePassLight__VertexData() {}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex0() {
  return this->___vertex0;
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex0() const {
  return this->___vertex0;
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex0(::GlobalNamespace::__BloomPrePassLight__VertexData value) {
  this->___vertex0 = value;
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex1() {
  return this->___vertex1;
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex1() const {
  return this->___vertex1;
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex1(::GlobalNamespace::__BloomPrePassLight__VertexData value) {
  this->___vertex1 = value;
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex2() {
  return this->___vertex2;
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex2() const {
  return this->___vertex2;
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex2(::GlobalNamespace::__BloomPrePassLight__VertexData value) {
  this->___vertex2 = value;
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex3() {
  return this->___vertex3;
}
constexpr ::GlobalNamespace::__BloomPrePassLight__VertexData const& GlobalNamespace::__BloomPrePassLight__QuadData::__get_vertex3() const {
  return this->___vertex3;
}
constexpr void GlobalNamespace::__BloomPrePassLight__QuadData::__set_vertex3(::GlobalNamespace::__BloomPrePassLight__VertexData value) {
  this->___vertex3 = value;
}
// Ctor Parameters [CppParam { name: "vertex0", ty: "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex1", ty:
// "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex2", ty: "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "vertex3", ty: "::GlobalNamespace::__BloomPrePassLight__VertexData", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BloomPrePassLight__QuadData::__BloomPrePassLight__QuadData(::GlobalNamespace::__BloomPrePassLight__VertexData vertex0,
                                                                                          ::GlobalNamespace::__BloomPrePassLight__VertexData vertex1,
                                                                                          ::GlobalNamespace::__BloomPrePassLight__VertexData vertex2,
                                                                                          ::GlobalNamespace::__BloomPrePassLight__VertexData vertex3) noexcept {
  this->vertex0 = vertex0;
  this->vertex1 = vertex1;
  this->vertex2 = vertex2;
  this->vertex3 = vertex3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassLight__QuadData::__BloomPrePassLight__QuadData() {}
//  Writing Method size for method: ::GlobalNamespace::__BloomPrePassLight__LightsDataItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomPrePassLight__LightsDataItem::*)(
    ::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*)>(&::GlobalNamespace::__BloomPrePassLight__LightsDataItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1fb1990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO*& GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightTypeSO*> const& GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr void GlobalNamespace::__BloomPrePassLight__LightsDataItem::__set_lightType(::GlobalNamespace::BloomPrePassLightTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*& GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lights;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*> const&
GlobalNamespace::__BloomPrePassLight__LightsDataItem::__get_lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lights;
}
constexpr void GlobalNamespace::__BloomPrePassLight__LightsDataItem::__set_lights(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BloomPrePassLight__LightsDataItem*
GlobalNamespace::__BloomPrePassLight__LightsDataItem::New_ctor(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                               ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>* lights) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>(lightType, lights));
}
inline void GlobalNamespace::__BloomPrePassLight__LightsDataItem::_ctor(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                                        ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>* lights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightType, lights);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BloomPrePassLight__LightsDataItem::__BloomPrePassLight__LightsDataItem() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_bloomLightsDict
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>* (*)()>(
        &::GlobalNamespace::BloomPrePassLight::get_bloomLightsDict)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fb1554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                               "get_bloomLightsDict", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_lightsDataItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>* (*)()>(
    &::GlobalNamespace::BloomPrePassLight::get_lightsDataItems)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fb15ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                               "get_lightsDataItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.get_isDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::get_isDirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fb1604;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fb18bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fb1984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.RegisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::RegisterLight)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x1fb1608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "RegisterLight",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.UnregisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::UnregisterLight)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1fb18c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "UnregisterLight",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.DidRegisterLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::DidRegisterLight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.FillMeshData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BloomPrePassLight::*)(ByRef<int32_t>, ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*>,
                                                               ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GlobalNamespace::BloomPrePassLight::FillMeshData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassLight._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassLight::*)()>(&::GlobalNamespace::BloomPrePassLight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fb19bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO*& GlobalNamespace::BloomPrePassLight::__get__lightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightTypeSO*> const& GlobalNamespace::BloomPrePassLight::__get__lightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightType;
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__lightType(::GlobalNamespace::BloomPrePassLightTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BloomPrePassLightTypeSO*& GlobalNamespace::BloomPrePassLight::__get__registeredWithLightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredWithLightType;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomPrePassLightTypeSO*> const& GlobalNamespace::BloomPrePassLight::__get__registeredWithLightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredWithLightType;
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__registeredWithLightType(::GlobalNamespace::BloomPrePassLightTypeSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registeredWithLightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BloomPrePassLight::__get__isRegistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRegistered;
}
constexpr bool const& GlobalNamespace::BloomPrePassLight::__get__isRegistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRegistered;
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__isRegistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRegistered = value;
}
constexpr bool& GlobalNamespace::BloomPrePassLight::__get__isBeingDestroyed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBeingDestroyed;
}
constexpr bool const& GlobalNamespace::BloomPrePassLight::__get__isBeingDestroyed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isBeingDestroyed;
}
constexpr void GlobalNamespace::BloomPrePassLight::__set__isBeingDestroyed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isBeingDestroyed = value;
}
inline void GlobalNamespace::BloomPrePassLight::setStaticF__bloomLightsDict(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*, "_bloomLightsDict",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*
GlobalNamespace::BloomPrePassLight::getStaticF__bloomLightsDict() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*, "_bloomLightsDict",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>();
}
inline void GlobalNamespace::BloomPrePassLight::setStaticF__lightsDataItems(::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*, "_lightsDataItems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>* GlobalNamespace::BloomPrePassLight::getStaticF__lightsDataItems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*, "_lightsDataItems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get>();
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*
GlobalNamespace::BloomPrePassLight::get_bloomLightsDict() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                             "get_bloomLightsDict", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BloomPrePassLightTypeSO*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BloomPrePassLight*>*>*, false>(
      nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>* GlobalNamespace::BloomPrePassLight::get_lightsDataItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(),
                                                                             "get_lightsDataItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__BloomPrePassLight__LightsDataItem*>*, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::BloomPrePassLight::get_isDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "get_isDirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::RegisterLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "RegisterLight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::UnregisterLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "UnregisterLight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::DidRegisterLight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "DidRegisterLight",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassLight::FillMeshData(ByRef<int32_t> lightNum,
                                                             ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> lightQuads,
                                                             ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t lineWidth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "FillMeshData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightNum, lightQuads, viewMatrix, projectionMatrix, lineWidth);
}
inline void GlobalNamespace::BloomPrePassLight::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), "Refresh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassLight* GlobalNamespace::BloomPrePassLight::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomPrePassLight*>());
}
inline void GlobalNamespace::BloomPrePassLight::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassLight*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassLight::BloomPrePassLight() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
