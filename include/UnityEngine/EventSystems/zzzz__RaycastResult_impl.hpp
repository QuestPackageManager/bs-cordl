#pragma once
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.get_gameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::RaycastResult::*)()>(
    &::UnityEngine::EventSystems::RaycastResult::get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eadf0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                               "get_gameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.set_gameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::RaycastResult::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::EventSystems::RaycastResult::set_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eadf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), "set_gameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.get_isValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::RaycastResult::*)()>(&::UnityEngine::EventSystems::RaycastResult::get_isValid)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2eadf1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), "get_isValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::RaycastResult::*)()>(&::UnityEngine::EventSystems::RaycastResult::Clear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2eadfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::RaycastResult::*)()>(&::UnityEngine::EventSystems::RaycastResult::ToString)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x2ea2d14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), 3));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::RaycastResult::get_gameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                             "get_gameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::RaycastResult::set_gameObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), "set_gameObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::RaycastResult::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), "get_isValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::RaycastResult::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::EventSystems::RaycastResult::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::RaycastResult>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_GameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_cordl_module", ty:
// "::UnityW<::UnityEngine::EventSystems::BaseRaycaster>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "index", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingLayer", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingOrder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldPosition", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "screenPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::RaycastResult::RaycastResult(::UnityW<::UnityEngine::GameObject> m_GameObject, ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> _cordl_module,
                                                                    float_t distance, float_t index, int32_t depth, int32_t sortingLayer, int32_t sortingOrder, ::UnityEngine::Vector3 worldPosition,
                                                                    ::UnityEngine::Vector3 worldNormal, ::UnityEngine::Vector2 screenPosition, int32_t displayIndex) noexcept {
  this->m_GameObject = m_GameObject;
  this->_cordl_module = _cordl_module;
  this->distance = distance;
  this->index = index;
  this->depth = depth;
  this->sortingLayer = sortingLayer;
  this->sortingOrder = sortingOrder;
  this->worldPosition = worldPosition;
  this->worldNormal = worldNormal;
  this->screenPosition = screenPosition;
  this->displayIndex = displayIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::RaycastResult::RaycastResult() {}
