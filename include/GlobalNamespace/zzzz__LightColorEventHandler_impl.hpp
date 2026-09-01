#pragma once
// IWYU pragma private; include "GlobalNamespace\LightColorEventHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightColorEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler_GetColorDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler_GetColorDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::LightColorEventHandler_GetColorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5991a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler_GetColorDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightColorEventHandler_GetColorDelegate::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(
    &::GlobalNamespace::LightColorEventHandler_GetColorDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59936b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler_GetColorDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::LightColorEventHandler_GetColorDelegate::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t,
                                                                                                                                               ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::LightColorEventHandler_GetColorDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59936c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler_GetColorDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightColorEventHandler_GetColorDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::LightColorEventHandler_GetColorDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5993784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightColorEventHandler_GetColorDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Color GlobalNamespace::LightColorEventHandler_GetColorDelegate::Invoke(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, colorType, colorBoost, brightness);
}
inline ::System::IAsyncResult* GlobalNamespace::LightColorEventHandler_GetColorDelegate::BeginInvoke(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, colorType, colorBoost, brightness, callback, object);
}
inline ::UnityEngine::Color GlobalNamespace::LightColorEventHandler_GetColorDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, result);
}
inline ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* GlobalNamespace::LightColorEventHandler_GetColorDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate::LightColorEventHandler_GetColorDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler_InitData::*)(
    int32_t, ::GlobalNamespace::LightWithIdManager*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::ColorManager*, ::GlobalNamespace::IBpmController*,
    ::GlobalNamespace::LightColorEventHandler_GetColorDelegate*)>(&::GlobalNamespace::LightColorEventHandler_InitData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59937ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_InitData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                    ::i2c::type_of<::GlobalNamespace::ColorManager*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>(),
                                                    ::i2c::type_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler_InitData::*)(
    int32_t, int32_t, ::GlobalNamespace::LightWithIdManager*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::ColorManager*, ::GlobalNamespace::IBpmController*,
    ::GlobalNamespace::LightColorEventHandler_GetColorDelegate*)>(&::GlobalNamespace::LightColorEventHandler_InitData::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5991af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_InitData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                                                    ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                    ::i2c::type_of<::GlobalNamespace::IBpmController*>(), ::i2c::type_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr int32_t const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightId;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightId = value;
}
constexpr int32_t& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightManager;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightManager = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tweeningManager = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorManager;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorManager = value;
}
constexpr ::GlobalNamespace::IBpmController*& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_bpmController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmController;
}
constexpr ::GlobalNamespace::IBpmController* const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_bpmController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpmController;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_bpmController(::GlobalNamespace::IBpmController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bpmController = value;
}
constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate*& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_getColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getColor;
}
constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* const& GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_get_getColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getColor;
}
constexpr void GlobalNamespace::LightColorEventHandler_InitData::__cordl_internal_set_getColor(::GlobalNamespace::LightColorEventHandler_GetColorDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getColor = value;
}
inline void GlobalNamespace::LightColorEventHandler_InitData::_ctor(int32_t lightId, ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                    ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::IBpmController* bpmController,
                                                                    ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_InitData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                  ::i2c::type_of<::GlobalNamespace::ColorManager*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>(),
                                                  ::i2c::type_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightId, lightManager, tweeningManager, colorManager, bpmController, getColor);
}
inline void GlobalNamespace::LightColorEventHandler_InitData::_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                    ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                                                                    ::GlobalNamespace::IBpmController* bpmController, ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler_InitData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                                                  ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                  ::i2c::type_of<::GlobalNamespace::IBpmController*>(), ::i2c::type_of<::GlobalNamespace::LightColorEventHandler_GetColorDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, lightManager, tweeningManager, colorManager, bpmController, getColor);
}
inline ::GlobalNamespace::LightColorEventHandler_InitData* GlobalNamespace::LightColorEventHandler_InitData::New_ctor(int32_t lightId, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                                                                      ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                                      ::GlobalNamespace::ColorManager* colorManager,
                                                                                                                      ::GlobalNamespace::IBpmController* bpmController,
                                                                                                                      ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightColorEventHandler_InitData*>(lightId, lightManager, tweeningManager, colorManager, bpmController, getColor));
}
inline ::GlobalNamespace::LightColorEventHandler_InitData*
GlobalNamespace::LightColorEventHandler_InitData::New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                           ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::ColorManager* colorManager,
                                                           ::GlobalNamespace::IBpmController* bpmController, ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* getColor) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LightColorEventHandler_InitData*>(groupId, elementId, lightManager, tweeningManager, colorManager, bpmController, getColor));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorEventHandler_InitData::LightColorEventHandler_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler::*)(::GlobalNamespace::LightColorEventHandler_InitData*)>(
    &::GlobalNamespace::LightColorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5991b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightColorEventHandler_InitData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler::*)()>(&::GlobalNamespace::LightColorEventHandler::Cleanup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x598f804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler.HandleColorEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::LightColorEventHandler::HandleColorEvent)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x599257c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(),
                                                                                           { "HandleColorEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler.UseBoostColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler::*)(bool)>(&::GlobalNamespace::LightColorEventHandler::UseBoostColors)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5992ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { "UseBoostColors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, float_t, float_t, float_t, float_t, bool)>(&::GlobalNamespace::LightColorEventHandler::SetData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5993548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(),
                            { "SetData",
                              {},
                              { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorEventHandler.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightColorEventHandler::*)(float_t)>(&::GlobalNamespace::LightColorEventHandler::SetColor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x59933ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { "SetColor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr int32_t const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightId = value;
}
constexpr int32_t& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr int32_t const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupId = value;
}
constexpr int32_t& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId;
}
constexpr int32_t const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementId = value;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__lightManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__lightManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightManager;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightManager = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::GlobalNamespace::IBpmController*& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__bpmController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmController;
}
constexpr ::GlobalNamespace::IBpmController* const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__bpmController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpmController;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__bpmController(::GlobalNamespace::IBpmController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bpmController = value;
}
constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate*& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__getColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getColor;
}
constexpr ::GlobalNamespace::LightColorEventHandler_GetColorDelegate* const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__getColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getColor;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__getColor(::GlobalNamespace::LightColorEventHandler_GetColorDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____getColor = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__floatTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__floatTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__floatTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatTween = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__fromColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__fromColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromColor;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__fromColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__toColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__toColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toColor;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__toColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__alternativeFromColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeFromColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__alternativeFromColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeFromColor;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__alternativeFromColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternativeFromColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__alternativeToColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeToColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__alternativeToColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternativeToColor;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__alternativeToColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternativeToColor = value;
}
constexpr float_t& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__fromStrobeFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeFrequency;
}
constexpr float_t const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__fromStrobeFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeFrequency;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__fromStrobeFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromStrobeFrequency = value;
}
constexpr float_t& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__toStrobeFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeFrequency;
}
constexpr float_t const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__toStrobeFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeFrequency;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__toStrobeFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toStrobeFrequency = value;
}
constexpr float_t& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__fromStrobeBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeBrightness;
}
constexpr float_t const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__fromStrobeBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromStrobeBrightness;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__fromStrobeBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromStrobeBrightness = value;
}
constexpr float_t& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__toStrobeBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeBrightness;
}
constexpr float_t const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__toStrobeBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toStrobeBrightness;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__toStrobeBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toStrobeBrightness = value;
}
constexpr bool& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__strobeFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strobeFade;
}
constexpr bool const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__strobeFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strobeFade;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__strobeFade(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strobeFade = value;
}
constexpr bool& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__usingBoostColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingBoostColors;
}
constexpr bool const& GlobalNamespace::LightColorEventHandler::__cordl_internal_get__usingBoostColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingBoostColors;
}
constexpr void GlobalNamespace::LightColorEventHandler::__cordl_internal_set__usingBoostColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingBoostColors = value;
}
inline void GlobalNamespace::LightColorEventHandler::_ctor(::GlobalNamespace::LightColorEventHandler_InitData* initData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightColorEventHandler_InitData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData);
}
inline void GlobalNamespace::LightColorEventHandler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightColorEventHandler::HandleColorEvent(::GlobalNamespace::LightColorBeatmapEventData* currentEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(),
                                                                                         { "HandleColorEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentEventData);
}
inline void GlobalNamespace::LightColorEventHandler::UseBoostColors(bool useBoostColors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { "UseBoostColors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useBoostColors);
}
inline void GlobalNamespace::LightColorEventHandler::SetData(::UnityEngine::Color fromColor, ::UnityEngine::Color toColor, ::UnityEngine::Color alternativeFromColor,
                                                             ::UnityEngine::Color alternativeToColor, float_t fromStrobeBeatFrequency, float_t toStrobeBeatFrequency, float_t fromStrobeBrightness,
                                                             float_t toStrobeBrightness, bool strobeFade) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(),
                          { "SetData",
                            {},
                            { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromColor, toColor, alternativeFromColor, alternativeToColor, fromStrobeBeatFrequency, toStrobeBeatFrequency,
                                                   fromStrobeBrightness, toStrobeBrightness, strobeFade);
}
inline void GlobalNamespace::LightColorEventHandler::SetColor(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightColorEventHandler*>(), { "SetColor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::LightColorEventHandler* GlobalNamespace::LightColorEventHandler::New_ctor(::GlobalNamespace::LightColorEventHandler_InitData* initData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightColorEventHandler*>(initData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightColorEventHandler::LightColorEventHandler() {}
