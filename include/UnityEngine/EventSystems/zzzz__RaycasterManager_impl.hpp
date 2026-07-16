#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/RaycasterManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycasterManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycasterManager.AddRaycaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::BaseRaycaster*)>(&::UnityEngine::EventSystems::RaycasterManager::AddRaycaster)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6e1fa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycasterManager*>(),
                                                                                           { "AddRaycaster", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseRaycaster*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycasterManager.GetRaycasters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* (*)()>(
    &::UnityEngine::EventSystems::RaycasterManager::GetRaycasters)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6e1fb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycasterManager*>(), { "GetRaycasters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::RaycasterManager.RemoveRaycasters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::BaseRaycaster*)>(&::UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6e1fba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycasterManager*>(),
                                                                                           { "RemoveRaycasters", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseRaycaster*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::EventSystems::RaycasterManager::setStaticF_s_Raycasters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>*, "s_Raycasters", ::UnityEngine::EventSystems::RaycasterManager*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* UnityEngine::EventSystems::RaycasterManager::getStaticF_s_Raycasters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>*, "s_Raycasters",
                                           ::UnityEngine::EventSystems::RaycasterManager*>();
}
inline void UnityEngine::EventSystems::RaycasterManager::AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycasterManager*>(), { "AddRaycaster", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseRaycaster*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseRaycaster);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>* UnityEngine::EventSystems::RaycasterManager::GetRaycasters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycasterManager*>(), { "GetRaycasters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::EventSystems::BaseRaycaster>>*>(nullptr, ___internal_method);
}
inline void UnityEngine::EventSystems::RaycasterManager::RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::RaycasterManager*>(),
                                                                                         { "RemoveRaycasters", {}, { ::i2c::type_of<::UnityEngine::EventSystems::BaseRaycaster*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseRaycaster);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::RaycasterManager::RaycasterManager() {}
