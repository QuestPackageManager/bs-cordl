#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipSegmentType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipSegmentType_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3265384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::*)(::StringW)>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326538c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::*)()>(
    &::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3265394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::__cordl_internal_set__Value_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Value_k__BackingField = value;
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Loading(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Loading", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Loading() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Loading", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Lobby(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Lobby", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Lobby() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Lobby", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Main(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Main", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Main() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Main", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Menu(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Menu", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Menu() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Menu", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Store(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Store", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Store() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Store", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Tutorial(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Tutorial", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Tutorial() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Tutorial", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Cutscene(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Cutscene", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Cutscene() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Cutscene", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::setStaticF_Other(::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* value) {
  ::cordl_internals::setStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Other", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(
      std::forward<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::getStaticF_Other() {
  return ::cordl_internals::getStaticField<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*, "Other", ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>();
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType* BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::New_ctor(::StringW value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType*>(value));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::Events::SpaceshipSegmentType::SpaceshipSegmentType() {}
