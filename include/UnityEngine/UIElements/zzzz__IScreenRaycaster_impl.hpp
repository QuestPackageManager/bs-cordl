#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IScreenRaycaster.hpp"
#include "UnityEngine/UIElements/zzzz__IScreenRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IScreenRaycaster.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IScreenRaycaster::*)()>(&::UnityEngine::UIElements::IScreenRaycaster::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IScreenRaycaster*>(), { ::i2c::class_of<::UnityEngine::UIElements::IScreenRaycaster*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IScreenRaycaster.MakeRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>* (
    ::UnityEngine::UIElements::IScreenRaycaster::*)(::UnityEngine::Vector2, int32_t, ::System::Nullable_1<int32_t>)>(&::UnityEngine::UIElements::IScreenRaycaster::MakeRay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IScreenRaycaster*>(), { ::i2c::class_of<::UnityEngine::UIElements::IScreenRaycaster*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IScreenRaycaster::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IScreenRaycaster*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*
UnityEngine::UIElements::IScreenRaycaster::MakeRay(::UnityEngine::Vector2 mousePosition, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IScreenRaycaster*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*>(
      this, ___internal_method, mousePosition, pointerId, targetDisplay);
}
