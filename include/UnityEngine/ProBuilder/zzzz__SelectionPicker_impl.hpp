#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\SelectionPicker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__SelectionPicker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PickerOptions_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickVerticesInRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<int32_t>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                              ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*, ::UnityEngine::ProBuilder::PickerOptions,
                                                              float_t)>(&::UnityEngine::ProBuilder::SelectionPicker::PickVerticesInRect)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x66dfb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                                                             { "PickVerticesInRect",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickFacesInRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                                                       ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
                                                                                       ::UnityEngine::ProBuilder::PickerOptions, float_t)>(
    &::UnityEngine::ProBuilder::SelectionPicker::PickFacesInRect)> {
  constexpr static std::size_t size = 0x1034;
  constexpr static std::size_t addrs = 0x66e0d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                                                             { "PickFacesInRect",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickEdgesInRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>,
    ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* (*)(::UnityEngine::Camera*, ::UnityEngine::Rect,
                                                                                      ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*,
                                                                                      ::UnityEngine::ProBuilder::PickerOptions, float_t)>(
    &::UnityEngine::ProBuilder::SelectionPicker::PickEdgesInRect)> {
  constexpr static std::size_t size = 0x980;
  constexpr static std::size_t addrs = 0x66e2408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                                                             { "PickEdgesInRect",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                                 ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::SelectionPicker.PickFace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Face* (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::ProBuilderMesh*)>(
    &::UnityEngine::ProBuilder::SelectionPicker::PickFace)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x66e35e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                            { "PickFace", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*
UnityEngine::ProBuilder::SelectionPicker::PickVerticesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect,
                                                             ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selectable,
                                                             ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                                                           { "PickVerticesInRect",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<int32_t>*>*>(
      nullptr, ___internal_method, cam, rect, selectable, options, pixelsPerPoint);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*
UnityEngine::ProBuilder::SelectionPicker::PickFacesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect,
                                                          ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selectable,
                                                          ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                                                           { "PickFacesInRect",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*>(
      nullptr, ___internal_method, cam, rect, selectable, options, pixelsPerPoint);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*
UnityEngine::ProBuilder::SelectionPicker::PickEdgesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect,
                                                          ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>* selectable,
                                                          ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                                                           { "PickEdgesInRect",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>>*>(),
                                                               ::i2c::type_of<::UnityEngine::ProBuilder::PickerOptions>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*>(
      nullptr, ___internal_method, cam, rect, selectable, options, pixelsPerPoint);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::SelectionPicker::PickFace(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 mousePosition,
                                                                                           ::UnityEngine::ProBuilder::ProBuilderMesh* pickable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::SelectionPicker*>(),
                          { "PickFace", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::ProBuilder::ProBuilderMesh*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*>(nullptr, ___internal_method, camera, mousePosition, pickable);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::SelectionPicker::SelectionPicker() {}
