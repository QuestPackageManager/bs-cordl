#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PhysicsDocumentPicker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PhysicsDocumentPicker_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PhysicsDocumentPicker.Pick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PhysicsDocumentPicker::*)(
    ::UnityEngine::Ray, float_t, int32_t, ::by_ref<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::UIElements::UIDocument*>, ::by_ref<::UnityEngine::UIElements::VisualElement*>,
    ::by_ref<float_t>)>(&::UnityEngine::UIElements::PhysicsDocumentPicker::Pick)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x72421c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(),
                                                             { "Pick",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PhysicsDocumentPicker.TryPickWithCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PhysicsDocumentPicker::*)(
    int32_t, ::UnityEngine::Ray, float_t, int32_t, ::by_ref<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::UIElements::UIDocument*>, ::by_ref<::UnityEngine::UIElements::VisualElement*>,
    ::by_ref<float_t>, ::by_ref<bool>)>(&::UnityEngine::UIElements::PhysicsDocumentPicker::TryPickWithCapture)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x724296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(),
                                                { "TryPickWithCapture",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PhysicsDocumentPicker.GetCapturingDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::PhysicsDocumentPicker::*)(int32_t, ::by_ref<::UnityEngine::UIElements::UIDocument*>)>(
    &::UnityEngine::UIElements::PhysicsDocumentPicker::GetCapturingDocument)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x7242b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(),
                                                             { "GetCapturingDocument", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PhysicsDocumentPicker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PhysicsDocumentPicker::*)()>(&::UnityEngine::UIElements::PhysicsDocumentPicker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7242f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PhysicsDocumentPicker::Pick(::UnityEngine::Ray worldRay, float_t maxDistance, int32_t layerMask, ::by_ref<::UnityEngine::Collider*> collider,
                                                                 ::by_ref<::UnityEngine::UIElements::UIDocument*> document, ::by_ref<::UnityEngine::UIElements::VisualElement*> pickedElement,
                                                                 ::by_ref<float_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(),
                                                           { "Pick",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldRay, maxDistance, layerMask, collider, document, pickedElement, distance);
}
inline bool UnityEngine::UIElements::PhysicsDocumentPicker::TryPickWithCapture(int32_t pointerId, ::UnityEngine::Ray worldRay, float_t maxDistance, int32_t layerMask,
                                                                               ::by_ref<::UnityEngine::Collider*> collider, ::by_ref<::UnityEngine::UIElements::UIDocument*> document,
                                                                               ::by_ref<::UnityEngine::UIElements::VisualElement*> elementUnderPointer, ::by_ref<float_t> distance,
                                                                               ::by_ref<bool> captured) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(),
                                              { "TryPickWithCapture",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::VisualElement*>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId, worldRay, maxDistance, layerMask, collider, document, elementUnderPointer, distance, captured);
}
inline bool UnityEngine::UIElements::PhysicsDocumentPicker::GetCapturingDocument(int32_t pointerId, ::by_ref<::UnityEngine::UIElements::UIDocument*> capturingDocument) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(),
                                                           { "GetCapturingDocument", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId, capturingDocument);
}
inline void UnityEngine::UIElements::PhysicsDocumentPicker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PhysicsDocumentPicker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PhysicsDocumentPicker* UnityEngine::UIElements::PhysicsDocumentPicker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PhysicsDocumentPicker*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PhysicsDocumentPicker::PhysicsDocumentPicker() {}
