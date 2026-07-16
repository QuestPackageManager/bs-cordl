#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorArrayLightWithIds.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__MaterialController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId.add_didSetColorEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::*)(::System::Action_2<int32_t, ::UnityEngine::Color>*)>(
    &::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::add_didSetColorEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x586f2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(),
                                                                                           { "add_didSetColorEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, ::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId.remove_didSetColorEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::*)(::System::Action_2<int32_t, ::UnityEngine::Color>*)>(
    &::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::remove_didSetColorEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x586f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(),
                                                             { "remove_didSetColorEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, ::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::*)(int32_t, int32_t)>(
    &::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586f4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x586f4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(), 9 }));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr int32_t const& GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
constexpr ::System::Action_2<int32_t, ::UnityEngine::Color>*& GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::__cordl_internal_get_didSetColorEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetColorEvent;
}
constexpr ::System::Action_2<int32_t, ::UnityEngine::Color>* const& GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::__cordl_internal_get_didSetColorEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSetColorEvent;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::__cordl_internal_set_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSetColorEvent = value;
}
inline void GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::add_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(),
                                                                                         { "add_didSetColorEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, ::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::remove_didSetColorEvent(::System::Action_2<int32_t, ::UnityEngine::Color>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(),
                                                                                         { "remove_didSetColorEvent", {}, { ::i2c::type_of<::System::Action_2<int32_t, ::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::_ctor(int32_t index, int32_t lightId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, lightId);
}
inline void GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::ColorWasSet(::UnityEngine::Color newColor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newColor);
}
inline ::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId* GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::New_ctor(int32_t index, int32_t lightId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>(index, lightId));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId::ColorArrayLightWithIds_ColorArrayLightWithId() {}
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(&::GlobalNamespace::ColorArrayLightWithIds::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x586ee1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(&::GlobalNamespace::ColorArrayLightWithIds::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586f018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(&::GlobalNamespace::ColorArrayLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586f0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* (::GlobalNamespace::ColorArrayLightWithIds::*)()>(
    &::GlobalNamespace::ColorArrayLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.HandleColorLightWithIdDidSetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)(int32_t, ::UnityEngine::Color)>(
    &::GlobalNamespace::ColorArrayLightWithIds::HandleColorLightWithIdDidSetColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x586f12c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(),
                                                             { "HandleColorLightWithIdDidSetColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.SetColorDataToMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(&::GlobalNamespace::ColorArrayLightWithIds::SetColorDataToMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586f0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "SetColorDataToMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.SetColorArrayOffsetToMaterialPropertyBlocks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(
    &::GlobalNamespace::ColorArrayLightWithIds::SetColorArrayOffsetToMaterialPropertyBlocks)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x586f200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "SetColorArrayOffsetToMaterialPropertyBlocks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.RegisterArrayForColorChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(&::GlobalNamespace::ColorArrayLightWithIds::RegisterArrayForColorChanges)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x586ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "RegisterArrayForColorChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds.UnregisterArrayFromColorChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(&::GlobalNamespace::ColorArrayLightWithIds::UnregisterArrayFromColorChanges)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x586f01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "UnregisterArrayFromColorChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIds::*)()>(&::GlobalNamespace::ColorArrayLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x586f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*>& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorArrayLightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorArrayLightWithIds;
}
constexpr ::ArrayW<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*> const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorArrayLightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorArrayLightWithIds;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__colorArrayLightWithIds(::ArrayW<::GlobalNamespace::ColorArrayLightWithIds_ColorArrayLightWithId*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorArrayLightWithIds = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialController>& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__materialController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialController> const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__materialController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialController;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__materialController(::UnityW<::GlobalNamespace::MaterialController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialController = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__materialPropertyBlockControllers(::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockControllers = value;
}
constexpr ::StringW& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayPropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayPropertyName;
}
constexpr ::StringW const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayPropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayPropertyName;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__colorsArrayPropertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorsArrayPropertyName = value;
}
constexpr ::StringW& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayOffsetPropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayOffsetPropertyName;
}
constexpr ::StringW const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayOffsetPropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayOffsetPropertyName;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__colorsArrayOffsetPropertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorsArrayOffsetPropertyName = value;
}
constexpr int32_t& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayPropertyId;
}
constexpr int32_t const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayPropertyId;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__colorsArrayPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorsArrayPropertyId = value;
}
constexpr int32_t& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayOffsetPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayOffsetPropertyId;
}
constexpr int32_t const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArrayOffsetPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArrayOffsetPropertyId;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__colorsArrayOffsetPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorsArrayOffsetPropertyId = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArray;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_get__colorsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorsArray;
}
constexpr void GlobalNamespace::ColorArrayLightWithIds::__cordl_internal_set__colorsArray(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorsArray = value;
}
inline void GlobalNamespace::ColorArrayLightWithIds::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIds::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIds::ProcessNewColorData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GlobalNamespace::ColorArrayLightWithIds::GetLightWithIds() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>*>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIds::HandleColorLightWithIdDidSetColor(int32_t index, ::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(),
                                                           { "HandleColorLightWithIdDidSetColor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, color);
}
inline void GlobalNamespace::ColorArrayLightWithIds::SetColorDataToMaterial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "SetColorDataToMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIds::SetColorArrayOffsetToMaterialPropertyBlocks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "SetColorArrayOffsetToMaterialPropertyBlocks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIds::RegisterArrayForColorChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "RegisterArrayForColorChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIds::UnregisterArrayFromColorChanges() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { "UnregisterArrayFromColorChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorArrayLightWithIds* GlobalNamespace::ColorArrayLightWithIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorArrayLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorArrayLightWithIds::ColorArrayLightWithIds() {}
