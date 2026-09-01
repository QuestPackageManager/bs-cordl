#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\Physics2DRaycaster.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__Physics2DRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::Physics2DRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::Physics2DRaycaster::*)()>(&::UnityEngine::EventSystems::Physics2DRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e23554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::Physics2DRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::Physics2DRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::Physics2DRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::EventSystems::Physics2DRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x6e2356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::Physics2DRaycaster*>(), { ::i2c::class_of<::UnityEngine::EventSystems::Physics2DRaycaster*>(), 17 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RaycastHit2D>& UnityEngine::EventSystems::Physics2DRaycaster::__cordl_internal_get_m_Hits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D> const& UnityEngine::EventSystems::Physics2DRaycaster::__cordl_internal_get_m_Hits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hits;
}
constexpr void UnityEngine::EventSystems::Physics2DRaycaster::__cordl_internal_set_m_Hits(::ArrayW<::UnityEngine::RaycastHit2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Hits = value;
}
inline void UnityEngine::EventSystems::Physics2DRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::Physics2DRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::Physics2DRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                   ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::Physics2DRaycaster*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline ::UnityEngine::EventSystems::Physics2DRaycaster* UnityEngine::EventSystems::Physics2DRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::Physics2DRaycaster*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::Physics2DRaycaster::Physics2DRaycaster() {}
