#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\RaycastResult.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.get_gameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::EventSystems::RaycastResult::*)()>(
    &::UnityEngine::EventSystems::RaycastResult::get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e24564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "get_gameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.set_gameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::RaycastResult::*)(::UnityEngine::GameObject*)>(&::UnityEngine::EventSystems::RaycastResult::set_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e2456c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "set_gameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::RaycastResult::*)()>(&::UnityEngine::EventSystems::RaycastResult::get_isValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e24574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::RaycastResult::*)()>(&::UnityEngine::EventSystems::RaycastResult::Clear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e24610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycastResult.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::RaycastResult::*)()>(&::UnityEngine::EventSystems::RaycastResult::ToString)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x6e18db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { ::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::EventSystems::RaycastResult::get_gameObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "get_gameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::RaycastResult::set_gameObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "set_gameObject", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::EventSystems::RaycastResult::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::EventSystems::RaycastResult::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW UnityEngine::EventSystems::RaycastResult::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::RaycastResult>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_GameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cordl_module", ty:
// "::UnityW<::UnityEngine::EventSystems::BaseRaycaster>", modifiers: "", def_value: Some("{}") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "index", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingGroupID", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingGroupOrder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sortingLayer", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sortingOrder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "worldNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenPosition", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::RaycastResult::RaycastResult(::UnityW<::UnityEngine::GameObject> m_GameObject, ::UnityW<::UnityEngine::EventSystems::BaseRaycaster> _cordl_module,
                                                                    float_t distance, float_t index, int32_t depth, int32_t sortingGroupID, int32_t sortingGroupOrder, int32_t sortingLayer,
                                                                    int32_t sortingOrder, ::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldNormal,
                                                                    ::UnityEngine::Vector2 screenPosition, int32_t displayIndex) noexcept {
  this->m_GameObject = m_GameObject;
  this->_cordl_module = _cordl_module;
  this->distance = distance;
  this->index = index;
  this->depth = depth;
  this->sortingGroupID = sortingGroupID;
  this->sortingGroupOrder = sortingGroupOrder;
  this->sortingLayer = sortingLayer;
  this->sortingOrder = sortingOrder;
  this->worldPosition = worldPosition;
  this->worldNormal = worldNormal;
  this->screenPosition = screenPosition;
  this->displayIndex = displayIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::RaycastResult::RaycastResult() {}
