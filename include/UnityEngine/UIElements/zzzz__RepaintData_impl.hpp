#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RepaintData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RepaintData_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.get_currentOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::UIElements::RepaintData::*)()>(&::UnityEngine::UIElements::RepaintData::get_currentOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6db4078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "get_currentOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.get_currentWorldClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::RepaintData::*)()>(&::UnityEngine::UIElements::RepaintData::get_currentWorldClip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6db408c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "get_currentWorldClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.get_repaintEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Event* (::UnityEngine::UIElements::RepaintData::*)()>(&::UnityEngine::UIElements::RepaintData::get_repaintEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db4098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "get_repaintEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData.set_repaintEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepaintData::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::RepaintData::set_repaintEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db40a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "set_repaintEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RepaintData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RepaintData::*)()>(&::UnityEngine::UIElements::RepaintData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6db40a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Matrix4x4& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentOffset_k__BackingField;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentOffset_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__currentOffset_k__BackingField(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentOffset_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::RepaintData::__cordl_internal_get__mousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__mousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__mousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mousePosition_k__BackingField = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentWorldClip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentWorldClip_k__BackingField;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__currentWorldClip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentWorldClip_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__currentWorldClip_k__BackingField(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentWorldClip_k__BackingField = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::RepaintData::__cordl_internal_get__repaintEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repaintEvent_k__BackingField;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UIElements::RepaintData::__cordl_internal_get__repaintEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repaintEvent_k__BackingField;
}
constexpr void UnityEngine::UIElements::RepaintData::__cordl_internal_set__repaintEvent_k__BackingField(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____repaintEvent_k__BackingField = value;
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::RepaintData::get_currentOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "get_currentOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::RepaintData::get_currentWorldClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "get_currentWorldClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityEngine::Event* UnityEngine::UIElements::RepaintData::get_repaintEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "get_repaintEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Event*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RepaintData::set_repaintEvent(::UnityEngine::Event* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { "set_repaintEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::RepaintData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RepaintData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RepaintData* UnityEngine::UIElements::RepaintData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RepaintData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RepaintData::RepaintData() {}
