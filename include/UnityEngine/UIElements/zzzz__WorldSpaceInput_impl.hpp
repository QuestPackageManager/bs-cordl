#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceInput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceInput_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput_PickResult.ComputeCollisionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::WorldSpaceInput_PickResult::*)(::UnityEngine::Ray)>(
    &::UnityEngine::UIElements::WorldSpaceInput_PickResult::ComputeCollisionData)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x724c6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput_PickResult>(), { "ComputeCollisionData", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::WorldSpaceInput_PickResult::setStaticF_Empty(::UnityEngine::UIElements::WorldSpaceInput_PickResult value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::WorldSpaceInput_PickResult, "Empty", ::UnityEngine::UIElements::WorldSpaceInput_PickResult>(
      std::forward<::UnityEngine::UIElements::WorldSpaceInput_PickResult>(value));
}
inline ::UnityEngine::UIElements::WorldSpaceInput_PickResult UnityEngine::UIElements::WorldSpaceInput_PickResult::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::WorldSpaceInput_PickResult, "Empty", ::UnityEngine::UIElements::WorldSpaceInput_PickResult>();
}
inline void UnityEngine::UIElements::WorldSpaceInput_PickResult::ComputeCollisionData(::UnityEngine::Ray ray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput_PickResult>(), { "ComputeCollisionData", {}, { ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ray);
}
// Ctor Parameters [CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "document", ty:
// "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pickedElement", ty: "::UnityEngine::UIElements::VisualElement*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None },
// CppParam { name: "localPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::WorldSpaceInput_PickResult::WorldSpaceInput_PickResult(::UnityW<::UnityEngine::Collider> collider, ::UnityW<::UnityEngine::UIElements::UIDocument> document,
                                                                                            ::UnityEngine::UIElements::VisualElement* pickedElement, float_t distance, ::UnityEngine::Vector3 normal,
                                                                                            ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 localPoint) noexcept {
  this->collider = collider;
  this->document = document;
  this->pickedElement = pickedElement;
  this->distance = distance;
  this->normal = normal;
  this->point = point;
  this->localPoint = localPoint;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldSpaceInput_PickResult::WorldSpaceInput_PickResult() {}
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.Pick3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Ray, ::by_ref<float_t>)>(
    &::UnityEngine::UIElements::WorldSpaceInput::Pick3D)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x7242cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                         { "Pick3D", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.Pick3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::IPanel*, ::UnityEngine::Ray,
                                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::WorldSpaceInput::Pick3D)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x724c3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "Pick3D",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.Pick3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray,
                                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::WorldSpaceInput::Pick3D)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x724c544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "Pick3D",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PickDocument3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::WorldSpaceInput_PickResult (*)(::UnityEngine::Ray, float_t, int32_t)>(
    &::UnityEngine::UIElements::WorldSpaceInput::PickDocument3D)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x7242230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "PickDocument3D", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.Pick_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Ray,
                                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::WorldSpaceInput::Pick_Internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x724c360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "Pick_Internal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray,
                                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::WorldSpaceInput::PerformPick)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x724c5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "PerformPick",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray,
                                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::WorldSpaceInput::PerformPick2D)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x724c8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "PerformPick2D",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray,
                                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::WorldSpaceInput::PerformPick3D)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x724c958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "PerformPick3D",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick2D_LocalPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector3,
                                                                                                     ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::WorldSpaceInput::PerformPick2D_LocalPoint)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x724cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                             { "PerformPick2D_LocalPoint",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.GetPicking3DWorldBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::WorldSpaceInput::GetPicking3DWorldBounds)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x724b22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                                                           { "GetPicking3DWorldBounds", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.GetPicking3DLocalBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::WorldSpaceInput::GetPicking3DLocalBounds)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x724c604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                                                           { "GetPicking3DLocalBounds", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::Pick3D(::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::Ray worldRay,
                                                                                                  ::by_ref<float_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                       { "Pick3D", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, document, worldRay, distance);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::Pick3D(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::Ray panelRay,
                                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "Pick3D",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, panel, panelRay, outResults);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::Pick3D(::UnityEngine::UIElements::VisualElement* rootVisualElement, ::UnityEngine::Ray localRay,
                                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "Pick3D",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, rootVisualElement, localRay, outResults);
}
inline ::UnityEngine::UIElements::WorldSpaceInput_PickResult UnityEngine::UIElements::WorldSpaceInput::PickDocument3D(::UnityEngine::Ray worldRay, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "PickDocument3D", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WorldSpaceInput_PickResult>(nullptr, ___internal_method, worldRay, maxDistance, layerMask);
}
inline ::UnityEngine::UIElements::VisualElement*
UnityEngine::UIElements::WorldSpaceInput::Pick_Internal(::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::Ray documentRay,
                                                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "Pick_Internal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, document, documentRay, outResults);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::PerformPick(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Ray ray,
                                                                                                       ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "PerformPick",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, ray, outResults);
}
inline ::UnityEngine::UIElements::VisualElement*
UnityEngine::UIElements::WorldSpaceInput::PerformPick2D(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Ray ray,
                                                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "PerformPick2D",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, ray, outResults);
}
inline ::UnityEngine::UIElements::VisualElement*
UnityEngine::UIElements::WorldSpaceInput::PerformPick3D(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Ray ray,
                                                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* outResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "PerformPick3D",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, ray, outResults);
}
inline ::UnityEngine::UIElements::VisualElement*
UnityEngine::UIElements::WorldSpaceInput::PerformPick2D_LocalPoint(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector3 localPoint,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                           { "PerformPick2D_LocalPoint",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, localPoint, picked);
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::WorldSpaceInput::GetPicking3DWorldBounds(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                                                         { "GetPicking3DWorldBounds", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::WorldSpaceInput::GetPicking3DLocalBounds(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                                                                                         { "GetPicking3DLocalBounds", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldSpaceInput::WorldSpaceInput() {}
