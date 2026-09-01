#pragma once
// IWYU pragma private; include "GlobalNamespace\LightWithIdManager.hpp"
#include "GlobalNamespace/zzzz__ILightWithId_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__ILightWithId_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager_LightMapData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager_LightMapData::*)()>(&::GlobalNamespace::LightWithIdManager_LightMapData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586e8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager_LightMapData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ILightWithId*>& GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_get_lightInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightInstances;
}
constexpr ::ArrayW<::GlobalNamespace::ILightWithId*> const& GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_get_lightInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightInstances;
}
constexpr void GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_set_lightInstances(::ArrayW<::GlobalNamespace::ILightWithId*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightInstances = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr bool& GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_get_hasColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasColor;
}
constexpr bool const& GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_get_hasColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasColor;
}
constexpr void GlobalNamespace::LightWithIdManager_LightMapData::__cordl_internal_set_hasColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasColor = value;
}
inline void GlobalNamespace::LightWithIdManager_LightMapData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager_LightMapData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightWithIdManager_LightMapData* GlobalNamespace::LightWithIdManager_LightMapData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightWithIdManager_LightMapData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightWithIdManager_LightMapData::LightWithIdManager_LightMapData() {}
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager___c::*)()>(&::GlobalNamespace::LightWithIdManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586f148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager___c._OnEnable_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightWithIdManager___c::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::LightWithIdManager___c::_OnEnable_b__9_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x586f14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager___c*>(), { "<OnEnable>b__9_0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightWithIdManager___c::setStaticF___9(::GlobalNamespace::LightWithIdManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LightWithIdManager___c*, "<>9", ::GlobalNamespace::LightWithIdManager___c*>(std::forward<::GlobalNamespace::LightWithIdManager___c*>(value));
}
inline ::GlobalNamespace::LightWithIdManager___c* GlobalNamespace::LightWithIdManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LightWithIdManager___c*, "<>9", ::GlobalNamespace::LightWithIdManager___c*>();
}
inline void GlobalNamespace::LightWithIdManager___c::setStaticF___9__9_0(::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>*, "<>9__9_0", ::GlobalNamespace::LightWithIdManager___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>* GlobalNamespace::LightWithIdManager___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::LightGroup>, int32_t>*, "<>9__9_0", ::GlobalNamespace::LightWithIdManager___c*>();
}
inline void GlobalNamespace::LightWithIdManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightWithIdManager___c::_OnEnable_b__9_0(::GlobalNamespace::LightGroup* lg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager___c*>(), { "<OnEnable>b__9_0", {}, { ::i2c::type_of<::GlobalNamespace::LightGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lg);
}
inline ::GlobalNamespace::LightWithIdManager___c* GlobalNamespace::LightWithIdManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightWithIdManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightWithIdManager___c::LightWithIdManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.add_didChangeSomeColorsThisFrameEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::System::Action*)>(
    &::GlobalNamespace::LightWithIdManager::add_didChangeSomeColorsThisFrameEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x586de70;

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
  constexpr static std::size_t addrs = 0x586df1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "remove_didChangeSomeColorsThisFrameEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)()>(&::GlobalNamespace::LightWithIdManager::OnEnable)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x586dfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)()>(&::GlobalNamespace::LightWithIdManager::LateUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x586e22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.RegisterLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::ILightWithId*)>(&::GlobalNamespace::LightWithIdManager::RegisterLight)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x586e260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "RegisterLight", {}, { ::i2c::type_of<::GlobalNamespace::ILightWithId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.UnregisterLight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::ILightWithId*)>(&::GlobalNamespace::LightWithIdManager::UnregisterLight)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x586e8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "UnregisterLight", {}, { ::i2c::type_of<::GlobalNamespace::ILightWithId*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.SetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(int32_t, ::UnityEngine::Color)>(&::GlobalNamespace::LightWithIdManager::SetColorForId)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x586bb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "SetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.SetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(int32_t, int32_t, ::UnityEngine::Color)>(
    &::GlobalNamespace::LightWithIdManager::SetColorForId)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x586b9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                                             { "SetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.SetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::LightWithIdManager_LightMapData*, ::UnityEngine::Color)>(
    &::GlobalNamespace::LightWithIdManager::SetColorForId)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x586ece8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                                { "SetColorForId", {}, { ::i2c::type_of<::GlobalNamespace::LightWithIdManager_LightMapData*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.GetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightWithIdManager::*)(int32_t, bool)>(&::GlobalNamespace::LightWithIdManager::GetColorForId)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x586ee7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "GetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.GetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightWithIdManager::*)(int32_t, int32_t, bool)>(
    &::GlobalNamespace::LightWithIdManager::GetColorForId)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x586ef28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                                                                           { "GetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager.GetColorForId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LightWithIdManager::*)(::GlobalNamespace::LightWithIdManager_LightMapData*, ::by_ref<::UnityEngine::Color>)>(
    &::GlobalNamespace::LightWithIdManager::GetColorForId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x586ef00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                                { "GetColorForId", {}, { ::i2c::type_of<::GlobalNamespace::LightWithIdManager_LightMapData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightWithIdManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightWithIdManager::*)()>(&::GlobalNamespace::LightWithIdManager::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x586efc0;

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
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>>& GlobalNamespace::LightWithIdManager::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> const& GlobalNamespace::LightWithIdManager::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroups = value;
}
constexpr ::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>& GlobalNamespace::LightWithIdManager::__cordl_internal_get__oldMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oldMapping;
}
constexpr ::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*> const& GlobalNamespace::LightWithIdManager::__cordl_internal_get__oldMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oldMapping;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set__oldMapping(::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oldMapping = value;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>>& GlobalNamespace::LightWithIdManager::__cordl_internal_get__newMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newMapping;
}
constexpr ::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>> const& GlobalNamespace::LightWithIdManager::__cordl_internal_get__newMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newMapping;
}
constexpr void GlobalNamespace::LightWithIdManager::__cordl_internal_set__newMapping(::ArrayW<::ArrayW<::GlobalNamespace::LightWithIdManager_LightMapData*>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newMapping = value;
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
inline void GlobalNamespace::LightWithIdManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
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
inline void GlobalNamespace::LightWithIdManager::SetColorForId(int32_t groupId, int32_t elementId, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                                           { "SetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, color);
}
inline void GlobalNamespace::LightWithIdManager::SetColorForId(::GlobalNamespace::LightWithIdManager_LightMapData* lightMapData, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                              { "SetColorForId", {}, { ::i2c::type_of<::GlobalNamespace::LightWithIdManager_LightMapData*>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightMapData, color);
}
inline ::UnityEngine::Color GlobalNamespace::LightWithIdManager::GetColorForId(int32_t lightId, bool initializeIfNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(), { "GetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, lightId, initializeIfNull);
}
inline ::UnityEngine::Color GlobalNamespace::LightWithIdManager::GetColorForId(int32_t groupId, int32_t elementId, bool initializeIfNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                                                                         { "GetColorForId", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, groupId, elementId, initializeIfNull);
}
inline bool GlobalNamespace::LightWithIdManager::GetColorForId(::GlobalNamespace::LightWithIdManager_LightMapData* lightMapData, ::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightWithIdManager*>(),
                                              { "GetColorForId", {}, { ::i2c::type_of<::GlobalNamespace::LightWithIdManager_LightMapData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lightMapData, color);
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
