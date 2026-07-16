#pragma once
// IWYU pragma private; include "GlobalNamespace/LightWithIdManager.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__ILightWithId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.add_didChangeSomeColorsThisFrameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::System::Action*)>(
    &::GlobalNamespace::LightWithIdManager::add_didChangeSomeColorsThisFrameEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x587083c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "add_didChangeSomeColorsThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.remove_didChangeSomeColorsThisFrameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::System::Action*)>(
    &::GlobalNamespace::LightWithIdManager::remove_didChangeSomeColorsThisFrameEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58708e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "remove_didChangeSomeColorsThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)()>(&::GlobalNamespace::LightWithIdManager::LateUpdate)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5870994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.RegisterLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::ILightWithId*)>(&::GlobalNamespace::LightWithIdManager::RegisterLight)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5870bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "RegisterLight", {}, { ::i2c::type_of<::GlobalNamespace::ILightWithId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.UnregisterLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::ILightWithId*)>(&::GlobalNamespace::LightWithIdManager::UnregisterLight)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5871024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "UnregisterLight", {}, { ::i2c::type_of<::GlobalNamespace::ILightWithId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.SetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(int32_t, ::UnityEngine::Color)>(&::GlobalNamespace::LightWithIdManager::SetColorForId)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x586e538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "SetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.GetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightWithIdManager::*)(int32_t, bool)>(&::GlobalNamespace::LightWithIdManager::GetColorForId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5871238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "GetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)()>(&::GlobalNamespace::LightWithIdManager::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5871310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::LightWithIdManager::__cordl_internal_get_didChangeSomeColorsThisFrameEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeSomeColorsThisFrameEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LightWithIdManager::__cordl_internal_get_didChangeSomeColorsThisFrameEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeSomeColorsThisFrameEvent;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set_didChangeSomeColorsThisFrameEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeSomeColorsThisFrameEvent = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*>& GlobalNamespace::LightWithIdManager::__cordl_internal_get__lights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*> const& GlobalNamespace::LightWithIdManager::__cordl_internal_get__lights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lights;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set__lights(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lights = value;
}
constexpr ::ArrayW<::System::Nullable_1<::UnityEngine::Color>>& GlobalNamespace::LightWithIdManager::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::System::Nullable_1<::UnityEngine::Color>> const& GlobalNamespace::LightWithIdManager::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set__colors(::ArrayW<::System::Nullable_1<::UnityEngine::Color>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>*& GlobalNamespace::LightWithIdManager::__cordl_internal_get__lightsToUnregister() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsToUnregister;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>* const& GlobalNamespace::LightWithIdManager::__cordl_internal_get__lightsToUnregister() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsToUnregister;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set__lightsToUnregister(::System::Collections::Generic::List_1<::GlobalNamespace::ILightWithId*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightsToUnregister = value;
}
constexpr bool& GlobalNamespace::LightWithIdManager::__cordl_internal_get__didChangeSomeColorsThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didChangeSomeColorsThisFrame;
}
constexpr bool const& GlobalNamespace::LightWithIdManager::__cordl_internal_get__didChangeSomeColorsThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didChangeSomeColorsThisFrame;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set__didChangeSomeColorsThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didChangeSomeColorsThisFrame = value;
}
inline void GlobalNamespace::LightWithIdManager::add_didChangeSomeColorsThisFrameEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "add_didChangeSomeColorsThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightWithIdManager::remove_didChangeSomeColorsThisFrameEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "remove_didChangeSomeColorsThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightWithIdManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightWithIdManager::RegisterLight(::GlobalNamespace::ILightWithId* lightWithId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "RegisterLight", {}, { ::i2c::type_of<::GlobalNamespace::ILightWithId*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightWithId);
}
inline void GlobalNamespace::LightWithIdManager::UnregisterLight(::GlobalNamespace::ILightWithId* lightWithId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "UnregisterLight", {}, { ::i2c::type_of<::GlobalNamespace::ILightWithId*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightWithId);
}
inline void GlobalNamespace::LightWithIdManager::SetColorForId(int32_t lightId, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "SetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightId, color);
}
inline ::UnityEngine::Color GlobalNamespace::LightWithIdManager::GetColorForId(int32_t lightId, bool initializeIfNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "GetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, lightId, initializeIfNull);
}
inline void GlobalNamespace::LightWithIdManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightWithIdManager* GlobalNamespace::LightWithIdManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightWithIdManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightWithIdManager::LightWithIdManager() {}
