#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\EventInterestAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategoryFlags_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestOptionsInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventInterestOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventInterestAttribute::*)(::ArrayW<::System::Type*>)>(
    &::UnityEngine::UIElements::EventInterestAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ccaf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventInterestAttribute::*)(::UnityEngine::UIElements::EventInterestOptions)>(
    &::UnityEngine::UIElements::EventInterestAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccaf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventInterestOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventInterestAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::EventInterestAttribute::*)(::UnityEngine::UIElements::EventInterestOptionsInternal)>(
    &::UnityEngine::UIElements::EventInterestAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ccaf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventInterestOptionsInternal>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_eventTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventTypes;
}
constexpr ::ArrayW<::System::Type*> const& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_eventTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventTypes;
}
constexpr void UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_set_eventTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventTypes = value;
}
constexpr ::UnityEngine::UIElements::EventCategoryFlags& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_categoryFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryFlags;
}
constexpr ::UnityEngine::UIElements::EventCategoryFlags const& UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_get_categoryFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___categoryFlags;
}
constexpr void UnityEngine::UIElements::EventInterestAttribute::__cordl_internal_set_categoryFlags(::UnityEngine::UIElements::EventCategoryFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___categoryFlags = value;
}
inline void UnityEngine::UIElements::EventInterestAttribute::_ctor(::ArrayW<::System::Type*> eventTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventTypes);
}
inline void UnityEngine::UIElements::EventInterestAttribute::_ctor(::UnityEngine::UIElements::EventInterestOptions interests) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventInterestOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interests);
}
inline void UnityEngine::UIElements::EventInterestAttribute::_ctor(::UnityEngine::UIElements::EventInterestOptionsInternal interests) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventInterestAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventInterestOptionsInternal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interests);
}
inline ::UnityEngine::UIElements::EventInterestAttribute* UnityEngine::UIElements::EventInterestAttribute::New_ctor(::ArrayW<::System::Type*> eventTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventInterestAttribute*>(eventTypes));
}
inline ::UnityEngine::UIElements::EventInterestAttribute* UnityEngine::UIElements::EventInterestAttribute::New_ctor(::UnityEngine::UIElements::EventInterestOptions interests) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventInterestAttribute*>(interests));
}
inline ::UnityEngine::UIElements::EventInterestAttribute* UnityEngine::UIElements::EventInterestAttribute::New_ctor(::UnityEngine::UIElements::EventInterestOptionsInternal interests) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventInterestAttribute*>(interests));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventInterestAttribute::EventInterestAttribute() {}
