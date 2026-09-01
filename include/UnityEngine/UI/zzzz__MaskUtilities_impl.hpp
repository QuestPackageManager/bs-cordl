#pragma once
// IWYU pragma private; include "UnityEngine\UI\MaskUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__MaskUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__IClippable_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities.Notify2DMaskStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*)>(&::UnityEngine::UI::MaskUtilities::Notify2DMaskStateChanged)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6e00fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "Notify2DMaskStateChanged", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities.NotifyStencilStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*)>(&::UnityEngine::UI::MaskUtilities::NotifyStencilStateChanged)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6dff584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "NotifyStencilStateChanged", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities.FindRootSortOverrideCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*)>(&::UnityEngine::UI::MaskUtilities::FindRootSortOverrideCanvas)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6dffd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "FindRootSortOverrideCanvas", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities.GetStencilDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::UnityEngine::UI::MaskUtilities::GetStencilDepth)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6dffef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(),
                                                             { "GetStencilDepth", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities.IsDescendantOrSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::UnityEngine::UI::MaskUtilities::IsDescendantOrSelf)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6e01258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(),
                                                             { "IsDescendantOrSelf", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities.GetRectMaskForClippable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::RectMask2D> (*)(::UnityEngine::UI::IClippable*)>(&::UnityEngine::UI::MaskUtilities::GetRectMaskForClippable)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6e009e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "GetRectMaskForClippable", {}, { ::i2c::type_of<::UnityEngine::UI::IClippable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities.GetRectMasksForClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::RectMask2D*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*)>(
    &::UnityEngine::UI::MaskUtilities::GetRectMasksForClip)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x6e013a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(),
            { "GetRectMasksForClip", {}, { ::i2c::type_of<::UnityEngine::UI::RectMask2D*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MaskUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::MaskUtilities::*)()>(&::UnityEngine::UI::MaskUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e01754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::MaskUtilities::Notify2DMaskStateChanged(::UnityEngine::Component* mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "Notify2DMaskStateChanged", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mask);
}
inline void UnityEngine::UI::MaskUtilities::NotifyStencilStateChanged(::UnityEngine::Component* mask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "NotifyStencilStateChanged", {}, { ::i2c::type_of<::UnityEngine::Component*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mask);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::UI::MaskUtilities::FindRootSortOverrideCanvas(::UnityEngine::Transform* start) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "FindRootSortOverrideCanvas", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, start);
}
inline int32_t UnityEngine::UI::MaskUtilities::GetStencilDepth(::UnityEngine::Transform* transform, ::UnityEngine::Transform* stopAfter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(),
                                                           { "GetStencilDepth", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, transform, stopAfter);
}
inline bool UnityEngine::UI::MaskUtilities::IsDescendantOrSelf(::UnityEngine::Transform* father, ::UnityEngine::Transform* child) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(),
                                                           { "IsDescendantOrSelf", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, father, child);
}
inline ::UnityW<::UnityEngine::UI::RectMask2D> UnityEngine::UI::MaskUtilities::GetRectMaskForClippable(::UnityEngine::UI::IClippable* clippable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { "GetRectMaskForClippable", {}, { ::i2c::type_of<::UnityEngine::UI::IClippable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::RectMask2D>>(nullptr, ___internal_method, clippable);
}
inline void UnityEngine::UI::MaskUtilities::GetRectMasksForClip(::UnityEngine::UI::RectMask2D* clipper, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* masks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(),
          { "GetRectMasksForClip", {}, { ::i2c::type_of<::UnityEngine::UI::RectMask2D*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clipper, masks);
}
inline void UnityEngine::UI::MaskUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MaskUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UI::MaskUtilities* UnityEngine::UI::MaskUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::MaskUtilities*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::MaskUtilities::MaskUtilities() {}
