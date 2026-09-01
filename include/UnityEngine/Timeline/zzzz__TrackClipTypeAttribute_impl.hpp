#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TrackClipTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackClipTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackClipTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackClipTypeAttribute::*)(::System::Type*)>(&::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69cb3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackClipTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackClipTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TrackClipTypeAttribute::*)(::System::Type*, bool)>(&::UnityEngine::Timeline::TrackClipTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69cb400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackClipTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Timeline::TrackClipTypeAttribute::__cordl_internal_get_inspectedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedType;
}
constexpr ::System::Type* const& UnityEngine::Timeline::TrackClipTypeAttribute::__cordl_internal_get_inspectedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inspectedType;
}
constexpr void UnityEngine::Timeline::TrackClipTypeAttribute::__cordl_internal_set_inspectedType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inspectedType = value;
}
constexpr bool& UnityEngine::Timeline::TrackClipTypeAttribute::__cordl_internal_get_allowAutoCreate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoCreate;
}
constexpr bool const& UnityEngine::Timeline::TrackClipTypeAttribute::__cordl_internal_get_allowAutoCreate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowAutoCreate;
}
constexpr void UnityEngine::Timeline::TrackClipTypeAttribute::__cordl_internal_set_allowAutoCreate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowAutoCreate = value;
}
inline void UnityEngine::Timeline::TrackClipTypeAttribute::_ctor(::System::Type* clipClass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackClipTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipClass);
}
inline void UnityEngine::Timeline::TrackClipTypeAttribute::_ctor(::System::Type* clipClass, bool allowAutoCreate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackClipTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipClass, allowAutoCreate);
}
inline ::UnityEngine::Timeline::TrackClipTypeAttribute* UnityEngine::Timeline::TrackClipTypeAttribute::New_ctor(::System::Type* clipClass) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TrackClipTypeAttribute*>(clipClass));
}
inline ::UnityEngine::Timeline::TrackClipTypeAttribute* UnityEngine::Timeline::TrackClipTypeAttribute::New_ctor(::System::Type* clipClass, bool allowAutoCreate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TrackClipTypeAttribute*>(clipClass, allowAutoCreate));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackClipTypeAttribute::TrackClipTypeAttribute() {}
