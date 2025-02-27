#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PartData.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributesStore_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_MaterialData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__TransformData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType::HEU_PartData_PartOutputType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType::HEU_PartData_PartOutputType() {}
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType HoudiniEngineUnity::HEU_PartData_PartOutputType::NONE{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType HoudiniEngineUnity::HEU_PartData_PartOutputType::MESH{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType HoudiniEngineUnity::HEU_PartData_PartOutputType::VOLUME{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType HoudiniEngineUnity::HEU_PartData_PartOutputType::CURVE{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType HoudiniEngineUnity::HEU_PartData_PartOutputType::INSTANCER{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData___c::*)()>(&::HoudiniEngineUnity::HEU_PartData___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a43ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c._CopyGameObjectComponents_b__85_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PartData___c::*)(::UnityEngine::LOD, ::UnityEngine::LOD)>(
    &::HoudiniEngineUnity::HEU_PartData___c::_CopyGameObjectComponents_b__85_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a43ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get(), "<CopyGameObjectComponents>b__85_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_PartData___c::setStaticF___9(::HoudiniEngineUnity::HEU_PartData___c* value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::HEU_PartData___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get>(
      std::forward<::HoudiniEngineUnity::HEU_PartData___c*>(value));
}
inline ::HoudiniEngineUnity::HEU_PartData___c* HoudiniEngineUnity::HEU_PartData___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::HEU_PartData___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get>();
}
inline void HoudiniEngineUnity::HEU_PartData___c::setStaticF___9__85_0(::System::Comparison_1<::UnityEngine::LOD>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::LOD>*, "<>9__85_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::LOD>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::LOD>* HoudiniEngineUnity::HEU_PartData___c::getStaticF___9__85_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::LOD>*, "<>9__85_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get>();
}
inline void HoudiniEngineUnity::HEU_PartData___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_PartData___c::_CopyGameObjectComponents_b__85_0(::UnityEngine::LOD a, ::UnityEngine::LOD b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c*>::get(),
                                                                             "<CopyGameObjectComponents>b__85_0", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LOD>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::HoudiniEngineUnity::HEU_PartData___c* HoudiniEngineUnity::HEU_PartData___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PartData___c*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PartData___c::HEU_PartData___c() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::*)()>(
    &::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a41cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0._CopyChildGameObjects_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::*)(::UnityEngine::Transform*)>(
    &::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::_CopyChildGameObjects_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3a43edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0*>::get(), "<CopyChildGameObjects>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::__cordl_internal_get_previousTransformValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* const&
HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::__cordl_internal_get_previousTransformValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr void
HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::__cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousTransformValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::_CopyChildGameObjects_b__0(::UnityEngine::Transform* trans) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0*>::get(), "<CopyChildGameObjects>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trans);
}
inline ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0* HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass86_0::HEU_PartData___c__DisplayClass86_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::*)()>(
    &::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a42710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0._BakePartToGameObject_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::*)(::UnityEngine::Transform*)>(
    &::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::_BakePartToGameObject_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3a43fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0*>::get(), "<BakePartToGameObject>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::__cordl_internal_get_previousTransformValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* const&
HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::__cordl_internal_get_previousTransformValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr void
HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::__cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousTransformValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::_BakePartToGameObject_b__0(::UnityEngine::Transform* trans) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0*>::get(), "<BakePartToGameObject>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trans);
}
inline ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0* HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_0::HEU_PartData___c__DisplayClass88_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::*)()>(
    &::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a42718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1._BakePartToGameObject_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::*)(::UnityEngine::Transform*)>(
    &::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::_BakePartToGameObject_b__1)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3a440ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1*>::get(), "<BakePartToGameObject>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::__cordl_internal_get_previousTransformValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* const&
HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::__cordl_internal_get_previousTransformValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousTransformValues;
}
constexpr void
HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::__cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previousTransformValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::_BakePartToGameObject_b__1(::UnityEngine::Transform* trans) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1*>::get(), "<BakePartToGameObject>b__1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trans);
}
inline ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1* HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PartData___c__DisplayClass88_1::HEU_PartData___c__DisplayClass88_1() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_PartID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_PartID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_PartID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_PartName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_PartName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_PartName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_ParentGeoNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_GeoNode> (::HoudiniEngineUnity::HEU_PartData::*)()>(
    &::HoudiniEngineUnity::HEU_PartData::get_ParentGeoNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_ParentGeoNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_ParentAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> (::HoudiniEngineUnity::HEU_PartData::*)()>(
    &::HoudiniEngineUnity::HEU_PartData::get_ParentAsset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3a3d1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_ParentAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartInstancer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartInstancer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a3d284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartInstancer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsAttribInstancer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsAttribInstancer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsAttribInstancer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsInstancerAnyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsInstancerAnyType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3a3d29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsInstancerAnyType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartInstanced
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartInstanced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartInstanced",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetPartPointCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::GetPartPointCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetPartPointCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsObjectInstancer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsObjectInstancer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsObjectInstancer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_ObjectInstancesBeenGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(
    &::HoudiniEngineUnity::HEU_PartData::get_ObjectInstancesBeenGenerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_ObjectInstancesBeenGenerated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.set_ObjectInstancesBeenGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(
    &::HoudiniEngineUnity::HEU_PartData::set_ObjectInstancesBeenGenerated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a3d2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "set_ObjectInstancesBeenGenerated",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartVolume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a3ac28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartVolume",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a3d2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartCurve",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartMesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a3d304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartMesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsPartEditable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::IsPartEditable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartEditable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.HaveInstancesBeenGenerated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::HaveInstancesBeenGenerated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "HaveInstancesBeenGenerated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_MeshVertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::get_MeshVertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "get_MeshVertexCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_GeneratedOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_GeneratedOutput* (::HoudiniEngineUnity::HEU_PartData::*)()>(
    &::HoudiniEngineUnity::HEU_PartData::get_GeneratedOutput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "get_GeneratedOutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.get_OutputGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_PartData::*)()>(
    &::HoudiniEngineUnity::HEU_PartData::get_OutputGameObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a3d334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "get_OutputGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a3d358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, int32_t, ::HoudiniEngineUnity::HEU_GeoNode*, ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>,
    ::HoudiniEngineUnity::HEU_PartData_PartOutputType, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::Initialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3a3d3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData_PartOutputType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetGameObjectName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::StringW)>(&::HoudiniEngineUnity::HEU_PartData::SetGameObjectName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3a3d5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetGameObjectName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_PartData::SetGameObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a3d700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetGameObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetVolumeLayerName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::StringW)>(&::HoudiniEngineUnity::HEU_PartData::SetVolumeLayerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetVolumeLayerName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetVolumeLayerName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::GetVolumeLayerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a3d72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetVolumeLayerName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyAllData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::DestroyAllData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3a3d734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "DestroyAllData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ApplyHAPITransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(
    &::HoudiniEngineUnity::HEU_PartData::ApplyHAPITransform)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3a3da10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ApplyHAPITransform", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetDebugInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Text::StringBuilder*)>(
    &::HoudiniEngineUnity::HEU_PartData::GetDebugInfo)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x3a3db6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetDebugInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsUsingMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_MaterialData*)>(
    &::HoudiniEngineUnity::HEU_PartData::IsUsingMaterial)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3a3dd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsUsingMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetClonableObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_PartData::GetClonableObjects)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3a3ddbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetClonableObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetClonableParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*)>(&::HoudiniEngineUnity::HEU_PartData::GetClonableParts)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3a3deb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetClonableParts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetOutputGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_PartData::GetOutputGameObjects)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3a3dfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetOutputGameObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*)>(&::HoudiniEngineUnity::HEU_PartData::GetOutput)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3a3e0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetOutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetHDAPartWithGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_PartData> (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_PartData::GetHDAPartWithGameObject)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a3e15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetHDAPartWithGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetObjectInstancer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::SetObjectInstancer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a3e1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetObjectInstancer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearInstances)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3a3c3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ClearInstances",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearObjectInstanceInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearObjectInstanceInfos)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3a3d868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "ClearObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearInvalidObjectInstanceInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(
    &::HoudiniEngineUnity::HEU_PartData::ClearInvalidObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x3a3c4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ClearInvalidObjectInstanceInfos",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearGeneratedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearGeneratedData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a3e1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ClearGeneratedData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearGeneratedMeshOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearGeneratedMeshOutput)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3a3e204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "ClearGeneratedMeshOutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ClearGeneratedVolumeOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ClearGeneratedVolumeOutput)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a3e28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "ClearGeneratedVolumeOutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GeneratePartInstances
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_PartData::GeneratePartInstances)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x3a3e2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GeneratePartInstances", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromObjectID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectID)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x3a3be94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromObjectID", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_ObjectNode*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObject)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x3a3eec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromObjectIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectIds)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x3a3ac38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromObjectIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateInstancesFromUnityAssetPathAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::StringW)>(
    &::HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromUnityAssetPathAttribute)> {
  constexpr static std::size_t size = 0xc64;
  constexpr static std::size_t addrs = 0x3a3b230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromUnityAssetPathAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CreateNewInstanceFromObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::UnityEngine::GameObject*, int32_t, ::UnityEngine::Transform*, ::ByRef<::HoudiniEngineUnity::HAPI_Transform>, int32_t, ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Vector3,
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::UnityEngine::GameObject*, bool)>(&::HoudiniEngineUnity::HEU_PartData::CreateNewInstanceFromObject)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x3a3eabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CreateNewInstanceFromObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateAttributesStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_PartData::GenerateAttributesStore)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3a3f414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateAttributesStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_Curve> (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(
    &::HoudiniEngineUnity::HEU_PartData::GetCurve)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3a3f4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetCurve",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetVisiblity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::SetVisiblity)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3a3f560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetVisiblity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CalculateVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::CalculateVisibility)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3a3f738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CalculateVisibility", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetColliderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(bool)>(&::HoudiniEngineUnity::HEU_PartData::SetColliderState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a3f768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetColliderState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CalculateColliderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::CalculateColliderState)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x3a3f784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "CalculateColliderState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CopyGameObjectComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::StringW,
                         ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*,
                         ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*, bool, ::ByRef<::StringW>, ::ByRef<::UnityEngine::Object*>,
                         ::StringW, bool, bool, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*)>(&::HoudiniEngineUnity::HEU_PartData::CopyGameObjectComponents)> {
  constexpr static std::size_t size = 0x1e40;
  constexpr static std::size_t addrs = 0x3a3fa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CopyGameObjectComponents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CopyChildGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::StringW,
                         ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*,
                         ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*, bool, ::ByRef<::StringW>, ::ByRef<::UnityEngine::Object*>,
                         ::StringW, bool, bool, bool)>(&::HoudiniEngineUnity::HEU_PartData::CopyChildGameObjects)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x3a418b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CopyChildGameObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.BakePartToNewGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::HoudiniEngineUnity::HEU_PartData::*)(
    ::UnityEngine::Transform*, bool, ::ByRef<::StringW>, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*,
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*, ::ByRef<::UnityEngine::Object*>, ::StringW, bool)>(
    &::HoudiniEngineUnity::HEU_PartData::BakePartToNewGameObject)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3a41cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "BakePartToNewGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.BakePartToGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::StringW, bool, bool, bool, bool, ::ByRef<::StringW>,
                         ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*,
                         ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*, ::ByRef<::UnityEngine::Object*>, ::StringW, bool, bool)>(
        &::HoudiniEngineUnity::HEU_PartData::BakePartToGameObject)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x3a41f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "BakePartToGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 15>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.BakePartToGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::UnityEngine::GameObject*, bool, bool, bool, ::ByRef<::StringW>, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*,
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*, ::ByRef<::UnityEngine::Object*>, ::StringW, bool, bool)>(
    &::HoudiniEngineUnity::HEU_PartData::BakePartToGameObject)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3a41e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "BakePartToGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GenerateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*, bool, bool, bool, bool)>(
    &::HoudiniEngineUnity::HEU_PartData::GenerateMesh)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x3a39190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ProcessCurvePart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_PartData::ProcessCurvePart)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3a42720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ProcessCurvePart", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SyncAttributesStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>)>(&::HoudiniEngineUnity::HEU_PartData::SyncAttributesStore)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3a42850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SyncAttributesStore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetupAttributeGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_PartData::SetupAttributeGeometry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3a396f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetupAttributeGeometry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyAttributesStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::DestroyAttributesStore)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3a3d938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "DestroyAttributesStore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.PopulateObjectInstanceInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*)>(&::HoudiniEngineUnity::HEU_PartData::PopulateObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a3c82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "PopulateObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetObjectInstanceInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*)>(&::HoudiniEngineUnity::HEU_PartData::SetObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3a43488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetObjectInstanceInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* (
    ::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a435f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                               "GetObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.CreateObjectInstanceInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> (::HoudiniEngineUnity::HEU_PartData::*)(
    ::UnityEngine::GameObject*, int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_PartData::CreateObjectInstanceInfo)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3a3f290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CreateObjectInstanceInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetObjectInstanceInfoWithObjectPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> (::HoudiniEngineUnity::HEU_PartData::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectPath)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3a3f1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetObjectInstanceInfoWithObjectPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.GetObjectInstanceInfoWithObjectID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> (::HoudiniEngineUnity::HEU_PartData::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectID)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3a3e9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetObjectInstanceInfoWithObjectID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetTerrainOffsetPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::Vector3)>(
    &::HoudiniEngineUnity::HEU_PartData::SetTerrainOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a435f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetTerrainOffsetPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.SetTerrainData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PartData::*)(::UnityEngine::TerrainData*, ::StringW, ::StringW)>(
    &::HoudiniEngineUnity::HEU_PartData::SetTerrainData)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3a43604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetTerrainData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.AppendBakedCloneName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::HoudiniEngineUnity::HEU_PartData::AppendBakedCloneName)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3a41e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "AppendBakedCloneName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PartData::*)()>(&::HoudiniEngineUnity::HEU_PartData::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3a437a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*)>(
    &::HoudiniEngineUnity::HEU_PartData::DestroyParts)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3a43814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "DestroyParts", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.DestroyPart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_PartData*)>(&::HoudiniEngineUnity::HEU_PartData::DestroyPart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3a39578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "DestroyPart", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PartData.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PartData::*)(::HoudiniEngineUnity::HEU_PartData*)>(
    &::HoudiniEngineUnity::HEU_PartData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x3a438e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partID;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__partID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partName;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__partName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__objectNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__objectNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectNodeID;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__objectNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectNodeID = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__geoID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__geoID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoID;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__geoID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____geoID = value;
}
constexpr ::HoudiniEngineUnity::HAPI_PartType& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partType;
}
constexpr ::HoudiniEngineUnity::HAPI_PartType const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partType;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__partType(::HoudiniEngineUnity::HAPI_PartType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partType = value;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_GeoNode>& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__geoNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoNode;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__geoNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoNode;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__geoNode(::UnityW<::HoudiniEngineUnity::HEU_GeoNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____geoNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isAttribInstancer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAttribInstancer;
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isAttribInstancer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAttribInstancer;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__isAttribInstancer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAttribInstancer = value;
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isPartInstanced() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartInstanced;
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isPartInstanced() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartInstanced;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__isPartInstanced(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPartInstanced = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partPointCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partPointCount;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partPointCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partPointCount;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__partPointCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partPointCount = value;
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isObjectInstancer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isObjectInstancer;
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isObjectInstancer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isObjectInstancer;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__isObjectInstancer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isObjectInstancer = value;
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__objectInstancesGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectInstancesGenerated;
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__objectInstancesGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectInstancesGenerated;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__objectInstancesGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectInstancesGenerated = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__objectInstanceInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectInstanceInfos;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__objectInstanceInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectInstanceInfos;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__objectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectInstanceInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__terrainOffsetPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainOffsetPosition;
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__terrainOffsetPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainOffsetPosition;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__terrainOffsetPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terrainOffsetPosition = value;
}
constexpr ::UnityW<::UnityEngine::Object>& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__assetDBTerrainData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetDBTerrainData;
}
constexpr ::UnityW<::UnityEngine::Object> const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__assetDBTerrainData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assetDBTerrainData;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__assetDBTerrainData(::UnityW<::UnityEngine::Object> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetDBTerrainData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isPartEditable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartEditable;
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__isPartEditable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPartEditable;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__isPartEditable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPartEditable = value;
}
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partOutputType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partOutputType;
}
constexpr ::HoudiniEngineUnity::HEU_PartData_PartOutputType const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__partOutputType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partOutputType;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__partOutputType(::HoudiniEngineUnity::HEU_PartData_PartOutputType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partOutputType = value;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_Curve>& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curve;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_Curve> const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curve;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__curve(::UnityW<::HoudiniEngineUnity::HEU_Curve> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__attributesStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributesStore;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__attributesStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributesStore;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__attributesStore(::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributesStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__haveInstancesBeenGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haveInstancesBeenGenerated;
}
constexpr bool const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__haveInstancesBeenGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haveInstancesBeenGenerated;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__haveInstancesBeenGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____haveInstancesBeenGenerated = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__meshVertexCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshVertexCount;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__meshVertexCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshVertexCount;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__meshVertexCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshVertexCount = value;
}
constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput*& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__generatedOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generatedOutput;
}
constexpr ::HoudiniEngineUnity::HEU_GeneratedOutput* const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__generatedOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____generatedOutput;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__generatedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____generatedOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__volumeLayerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeLayerName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PartData::__cordl_internal_get__volumeLayerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____volumeLayerName;
}
constexpr void HoudiniEngineUnity::HEU_PartData::__cordl_internal_set__volumeLayerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeLayerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t HoudiniEngineUnity::HEU_PartData::get_PartID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_PartID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::get_PartName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_PartName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_GeoNode> HoudiniEngineUnity::HEU_PartData::get_ParentGeoNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_ParentGeoNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> HoudiniEngineUnity::HEU_PartData::get_ParentAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_ParentAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartInstancer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartInstancer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsAttribInstancer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsAttribInstancer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsInstancerAnyType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsInstancerAnyType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartInstanced() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartInstanced",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_PartData::GetPartPointCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetPartPointCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsObjectInstancer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsObjectInstancer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::get_ObjectInstancesBeenGenerated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "get_ObjectInstancesBeenGenerated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::set_ObjectInstancesBeenGenerated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "set_ObjectInstancesBeenGenerated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartVolume",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartCurve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartCurve",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsPartEditable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsPartEditable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PartData::HaveInstancesBeenGenerated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "HaveInstancesBeenGenerated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_PartData::get_MeshVertexCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_MeshVertexCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_GeneratedOutput* HoudiniEngineUnity::HEU_PartData::get_GeneratedOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_GeneratedOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_GeneratedOutput*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> HoudiniEngineUnity::HEU_PartData::get_OutputGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "get_OutputGameObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID, int32_t geoID, int32_t objectNodeID,
                                                         ::HoudiniEngineUnity::HEU_GeoNode* geoNode, ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo,
                                                         ::HoudiniEngineUnity::HEU_PartData_PartOutputType partOutputType, bool isEditable, bool isObjectInstancer, bool isAttribInstancer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData_PartOutputType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, partID, geoID, objectNodeID, geoNode, partInfo, partOutputType, isEditable, isObjectInstancer,
                                                          isAttribInstancer);
}
inline void HoudiniEngineUnity::HEU_PartData::SetGameObjectName(::StringW partName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetGameObjectName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, partName);
}
inline void HoudiniEngineUnity::HEU_PartData::SetGameObject(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetGameObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameObject);
}
inline void HoudiniEngineUnity::HEU_PartData::SetVolumeLayerName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetVolumeLayerName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::GetVolumeLayerName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetVolumeLayerName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyAllData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "DestroyAllData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ApplyHAPITransform(::ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ApplyHAPITransform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hapiTransform);
}
inline void HoudiniEngineUnity::HEU_PartData::GetDebugInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetDebugInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsUsingMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_MaterialData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, materialData);
}
inline void HoudiniEngineUnity::HEU_PartData::GetClonableObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* clonableObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetClonableObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clonableObjects);
}
inline void HoudiniEngineUnity::HEU_PartData::GetClonableParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* clonableParts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetClonableParts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clonableParts);
}
inline void HoudiniEngineUnity::HEU_PartData::GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetOutputGameObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputObjects);
}
inline void HoudiniEngineUnity::HEU_PartData::GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetOutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outputs);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> HoudiniEngineUnity::HEU_PartData::GetHDAPartWithGameObject(::UnityEngine::GameObject* inGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetHDAPartWithGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_PartData>, false>(this, ___internal_method, inGameObject);
}
inline void HoudiniEngineUnity::HEU_PartData::SetObjectInstancer(bool bObjectInstancer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetObjectInstancer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bObjectInstancer);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearInstances() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ClearInstances",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearObjectInstanceInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "ClearObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearInvalidObjectInstanceInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "ClearInvalidObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearGeneratedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ClearGeneratedData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearGeneratedMeshOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "ClearGeneratedMeshOutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::ClearGeneratedVolumeOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "ClearGeneratedVolumeOutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GeneratePartInstances", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectID(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t objectNodeID,
                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromObjectID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, objectNodeID, instancePrefixes);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObject(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_ObjectNode* sourceObject,
                                                                          ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, sourceObject, instancePrefixes);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromObjectIds(::HoudiniEngineUnity::HEU_SessionBase* session, ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromObjectIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, instancePrefixes);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateInstancesFromUnityAssetPathAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW unityInstanceAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateInstancesFromUnityAssetPathAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, unityInstanceAttr);
}
inline void HoudiniEngineUnity::HEU_PartData::CreateNewInstanceFromObject(::UnityEngine::GameObject* sourceObject, int32_t instanceIndex, ::UnityEngine::Transform* parentTransform,
                                                                          ::ByRef<::HoudiniEngineUnity::HAPI_Transform> hapiTransform, int32_t instancedObjectNodeID, ::StringW instancedObjectPath,
                                                                          ::UnityEngine::Vector3 rotationOffset, ::UnityEngine::Vector3 scaleOffset,
                                                                          ::ArrayW<::StringW, ::Array<::StringW>*> instancePrefixes, ::UnityEngine::GameObject* collisionSrcGO, bool copyParentFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CreateNewInstanceFromObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceObject, instanceIndex, parentTransform, hapiTransform, instancedObjectNodeID, instancedObjectPath,
                                                          rotationOffset, scaleOffset, instancePrefixes, collisionSrcGO, copyParentFlags);
}
inline void HoudiniEngineUnity::HEU_PartData::GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateAttributesStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_Curve> HoudiniEngineUnity::HEU_PartData::GetCurve(bool bEditableOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetCurve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_Curve>, false>(this, ___internal_method, bEditableOnly);
}
inline void HoudiniEngineUnity::HEU_PartData::SetVisiblity(bool bVisibility) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetVisiblity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bVisibility);
}
inline void HoudiniEngineUnity::HEU_PartData::CalculateVisibility(bool bParentVisibility, bool bParentDisplayGeo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CalculateVisibility", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bParentVisibility, bParentDisplayGeo);
}
inline void HoudiniEngineUnity::HEU_PartData::SetColliderState(bool bEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetColliderState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bEnabled);
}
inline void HoudiniEngineUnity::HEU_PartData::CalculateColliderState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "CalculateColliderState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
HoudiniEngineUnity::HEU_PartData::CopyGameObjectComponents(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::StringW assetName,
                                                           ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                                                           ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                                                           bool bWriteMeshesToAssetDatabase, ::ByRef<::StringW> bakedAssetPath, ::ByRef<::UnityEngine::Object*> assetDBObject,
                                                           ::StringW assetObjectFileName, bool bDeleteExistingComponents, bool bDontDeletePersistantResources,
                                                           ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* lodTransformValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CopyGameObjectComponents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, partData, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials,
                                                          bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources,
                                                          lodTransformValues);
}
inline void
HoudiniEngineUnity::HEU_PartData::CopyChildGameObjects(::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* sourceGO, ::UnityEngine::GameObject* targetGO, ::StringW assetName,
                                                       ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                                                       ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                                                       bool bWriteMeshesToAssetDatabase, ::ByRef<::StringW> bakedAssetPath, ::ByRef<::UnityEngine::Object*> assetDBObject,
                                                       ::StringW assetObjectFileName, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bKeepPreviousTransformValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CopyChildGameObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, partData, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials,
                                                          bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources,
                                                          bKeepPreviousTransformValues);
}
inline ::UnityW<::UnityEngine::GameObject>
HoudiniEngineUnity::HEU_PartData::BakePartToNewGameObject(::UnityEngine::Transform* parentTransform, bool bWriteMeshesToAssetDatabase, ::ByRef<::StringW> bakedAssetPath,
                                                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
                                                          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials,
                                                          ::ByRef<::UnityEngine::Object*> assetDBObject, ::StringW assetObjectFileName, bool bReconnectPrefabInstances) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "BakePartToNewGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, parentTransform, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap,
                                                                                         sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances);
}
inline void HoudiniEngineUnity::HEU_PartData::BakePartToGameObject(
    ::HoudiniEngineUnity::HEU_PartData* partData, ::UnityEngine::GameObject* srcGO, ::UnityEngine::GameObject* targetGO, ::StringW assetName, bool bIsInstancer, bool bDeleteExistingComponents,
    bool bDontDeletePersistantResources, bool bWriteMeshesToAssetDatabase, ::ByRef<::StringW> bakedAssetPath,
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials, ::ByRef<::UnityEngine::Object*> assetDBObject,
    ::StringW assetObjectFileName, bool bReconnectPrefabInstances, bool bKeepPreviousTransformValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "BakePartToGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 15>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, partData, srcGO, targetGO, assetName, bIsInstancer, bDeleteExistingComponents, bDontDeletePersistantResources,
                                                          bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName,
                                                          bReconnectPrefabInstances, bKeepPreviousTransformValues);
}
inline void HoudiniEngineUnity::HEU_PartData::BakePartToGameObject(
    ::UnityEngine::GameObject* targetGO, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bWriteMeshesToAssetDatabase, ::ByRef<::StringW> bakedAssetPath,
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>* sourceToTargetMeshMap,
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* sourceToCopiedMaterials, ::ByRef<::UnityEngine::Object*> assetDBObject,
    ::StringW assetObjectFileName, bool bReconnectPrefabInstances, bool bKeepPreviousTransformValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "BakePartToGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>, ::UnityW<::UnityEngine::Mesh>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetGO, bDeleteExistingComponents, bDontDeletePersistantResources, bWriteMeshesToAssetDatabase, bakedAssetPath,
                                                          sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances, bKeepPreviousTransformValues);
}
inline bool HoudiniEngineUnity::HEU_PartData::GenerateMesh(::HoudiniEngineUnity::HEU_SessionBase* session, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GenerateMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups);
}
inline void HoudiniEngineUnity::HEU_PartData::ProcessCurvePart(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "ProcessCurvePart", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_PartData::SyncAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, ::ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SyncAttributesStore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::HoudiniEngineUnity::HAPI_PartInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partInfo);
}
inline void HoudiniEngineUnity::HEU_PartData::SetupAttributeGeometry(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetupAttributeGeometry", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyAttributesStore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "DestroyAttributesStore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* objInstanceInfos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "PopulateObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, objInstanceInfos);
}
inline void HoudiniEngineUnity::HEU_PartData::SetObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* sourceObjectInstanceInfos) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceObjectInstanceInfos);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(),
                                                                             "GetObjectInstanceInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>*, false>(this, ___internal_method);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> HoudiniEngineUnity::HEU_PartData::CreateObjectInstanceInfo(::UnityEngine::GameObject* instancedObject, int32_t instancedObjectNodeID,
                                                                                                                         ::StringW instancedObjectPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "CreateObjectInstanceInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>, false>(this, ___internal_method, instancedObject, instancedObjectNodeID, instancedObjectPath);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectPath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetObjectInstanceInfoWithObjectPath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>, false>(this, ___internal_method, path);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo> HoudiniEngineUnity::HEU_PartData::GetObjectInstanceInfoWithObjectID(int32_t objNodeID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "GetObjectInstanceInfoWithObjectID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>, false>(this, ___internal_method, objNodeID);
}
inline void HoudiniEngineUnity::HEU_PartData::SetTerrainOffsetPosition(::UnityEngine::Vector3 offsetPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetTerrainOffsetPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offsetPosition);
}
inline void HoudiniEngineUnity::HEU_PartData::SetTerrainData(::UnityEngine::TerrainData* terrainData, ::StringW exportPathRelative, ::StringW exportPathUser) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "SetTerrainData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, terrainData, exportPathRelative, exportPathUser);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::AppendBakedCloneName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "AppendBakedCloneName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline ::StringW HoudiniEngineUnity::HEU_PartData::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* parts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "DestroyParts", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parts);
}
inline void HoudiniEngineUnity::HEU_PartData::DestroyPart(::HoudiniEngineUnity::HEU_PartData* part) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "DestroyPart", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, part);
}
inline bool HoudiniEngineUnity::HEU_PartData::IsEquivalentTo(::HoudiniEngineUnity::HEU_PartData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PartData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_PartData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PartData*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>"
constexpr HoudiniEngineUnity::HEU_PartData::operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*
HoudiniEngineUnity::HEU_PartData::i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_PartData__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PartData::HEU_PartData() {}
