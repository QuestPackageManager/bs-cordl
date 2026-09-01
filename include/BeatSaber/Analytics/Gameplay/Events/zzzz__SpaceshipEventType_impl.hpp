#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\Events\SpaceshipEventType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipEventType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3265290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3265298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32652a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::__cordl_internal_set__Value_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Value_k__BackingField = value;
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_Start(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Start", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_Start() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Start", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_End(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "End", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_End() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "End", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_EndAbort(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "EndAbort", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_EndAbort() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "EndAbort", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_Pause(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Pause", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_Pause() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Pause", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_Resume(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Resume", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_Resume() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Resume", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_ChangeSetting(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "ChangeSetting", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_ChangeSetting() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "ChangeSetting", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_Heartbeat(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Heartbeat", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_Heartbeat() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Heartbeat", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_Update(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Update", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_Update() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "Update", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_ColorsOverride(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "ColorsOverride", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_ColorsOverride() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "ColorsOverride", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::setStaticF_EnvironmentOverride(::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "EnvironmentOverride", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::getStaticF_EnvironmentOverride() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*, "EnvironmentOverride", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>();
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType* BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType*>(value));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipEventType::SpaceshipEventType() {}
