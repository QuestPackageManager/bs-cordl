#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoundary_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRBoundary__Node::__OVRBoundary__Node(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRBoundary__Node::__OVRBoundary__Node() {}
constexpr ::GlobalNamespace::__OVRBoundary__Node GlobalNamespace::__OVRBoundary__Node::HandLeft{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRBoundary__Node GlobalNamespace::__OVRBoundary__Node::HandRight{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRBoundary__Node GlobalNamespace::__OVRBoundary__Node::Head{ static_cast<int32_t>(0x9) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryType::__OVRBoundary__BoundaryType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryType::__OVRBoundary__BoundaryType() {}
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryType GlobalNamespace::__OVRBoundary__BoundaryType::OuterBoundary{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryType GlobalNamespace::__OVRBoundary__BoundaryType::PlayArea{ static_cast<int32_t>(0x100) };
// Ctor Parameters [CppParam { name: "IsTriggering", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ClosestPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestPointNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryTestResult::__OVRBoundary__BoundaryTestResult(bool IsTriggering, float_t ClosestDistance, ::UnityEngine::Vector3 ClosestPoint,
                                                                                                  ::UnityEngine::Vector3 ClosestPointNormal) noexcept {
  this->IsTriggering = IsTriggering;
  this->ClosestDistance = ClosestDistance;
  this->ClosestPoint = ClosestPoint;
  this->ClosestPointNormal = ClosestPointNormal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRBoundary__BoundaryTestResult::__OVRBoundary__BoundaryTestResult() {}
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetConfigured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::GetConfigured)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27ffec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetConfigured",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.TestNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRBoundary__BoundaryTestResult (::GlobalNamespace::OVRBoundary::*)(
    ::GlobalNamespace::__OVRBoundary__Node, ::GlobalNamespace::__OVRBoundary__BoundaryType)>(&::GlobalNamespace::OVRBoundary::TestNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2808544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "TestNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__Node>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.TestPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRBoundary__BoundaryTestResult (::GlobalNamespace::OVRBoundary::*)(
    ::UnityEngine::Vector3, ::GlobalNamespace::__OVRBoundary__BoundaryType)>(&::GlobalNamespace::OVRBoundary::TestPoint)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2808608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "TestPoint", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetGeometry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::GlobalNamespace::OVRBoundary::*)(
    ::GlobalNamespace::__OVRBoundary__BoundaryType)>(&::GlobalNamespace::OVRBoundary::GetGeometry)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x27fff5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetGeometry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRBoundary::*)(::GlobalNamespace::__OVRBoundary__BoundaryType)>(
    &::GlobalNamespace::OVRBoundary::GetDimensions)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2808790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetDimensions", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.GetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::GetVisible)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2808864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetVisible",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary.SetVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRBoundary::*)(bool)>(&::GlobalNamespace::OVRBoundary::SetVisible)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x28088fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "SetVisible", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRBoundary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRBoundary::*)()>(&::GlobalNamespace::OVRBoundary::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2808998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::OVRBoundary::__cordl_internal_get_cachedGeometryList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedGeometryList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& GlobalNamespace::OVRBoundary::__cordl_internal_get_cachedGeometryList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedGeometryList;
}
constexpr void GlobalNamespace::OVRBoundary::__cordl_internal_set_cachedGeometryList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cachedGeometryList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedVector3fSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "cachedVector3fSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRBoundary::getStaticF_cachedVector3fSize() {
  return ::cordl_internals::getStaticField<int32_t, "cachedVector3fSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>();
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedGeometryNativeBuffer(::GlobalNamespace::OVRNativeBuffer* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRNativeBuffer*, "cachedGeometryNativeBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>(
      std::forward<::GlobalNamespace::OVRNativeBuffer*>(value));
}
inline ::GlobalNamespace::OVRNativeBuffer* GlobalNamespace::OVRBoundary::getStaticF_cachedGeometryNativeBuffer() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRNativeBuffer*, "cachedGeometryNativeBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>();
}
inline void GlobalNamespace::OVRBoundary::setStaticF_cachedGeometryManagedBuffer(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "cachedGeometryManagedBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::OVRBoundary::getStaticF_cachedGeometryManagedBuffer() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "cachedGeometryManagedBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get>();
}
inline bool GlobalNamespace::OVRBoundary::GetConfigured() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetConfigured",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRBoundary__BoundaryTestResult GlobalNamespace::OVRBoundary::TestNode(::GlobalNamespace::__OVRBoundary__Node node,
                                                                                                   ::GlobalNamespace::__OVRBoundary__BoundaryType boundaryType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "TestNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__Node>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRBoundary__BoundaryTestResult, false>(this, ___internal_method, node, boundaryType);
}
inline ::GlobalNamespace::__OVRBoundary__BoundaryTestResult GlobalNamespace::OVRBoundary::TestPoint(::UnityEngine::Vector3 point, ::GlobalNamespace::__OVRBoundary__BoundaryType boundaryType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "TestPoint", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRBoundary__BoundaryTestResult, false>(this, ___internal_method, point, boundaryType);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GlobalNamespace::OVRBoundary::GetGeometry(::GlobalNamespace::__OVRBoundary__BoundaryType boundaryType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetGeometry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method, boundaryType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRBoundary::GetDimensions(::GlobalNamespace::__OVRBoundary__BoundaryType boundaryType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetDimensions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRBoundary__BoundaryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, boundaryType);
}
inline bool GlobalNamespace::OVRBoundary::GetVisible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "GetVisible",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRBoundary::SetVisible(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), "SetVisible", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRBoundary* GlobalNamespace::OVRBoundary::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRBoundary*>());
}
inline void GlobalNamespace::OVRBoundary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRBoundary*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRBoundary::OVRBoundary() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
