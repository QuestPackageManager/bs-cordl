#pragma once
// IWYU pragma private; include "BeatSaber\Analytics\Gameplay\EventsBuilderFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderFactory_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilderSharedCache_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__EventsBuilder_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::EventsBuilder* (::BeatSaber::Analytics::Gameplay::EventsBuilderFactory::*)()>(
    &::BeatSaber::Analytics::Gameplay::EventsBuilderFactory::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3262eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Gameplay::EventsBuilderFactory::*)()>(&::BeatSaber::Analytics::Gameplay::EventsBuilderFactory::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3262f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache*& BeatSaber::Analytics::Gameplay::EventsBuilderFactory::__cordl_internal_get__eventsBuilderSharedCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderSharedCache;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* const& BeatSaber::Analytics::Gameplay::EventsBuilderFactory::__cordl_internal_get__eventsBuilderSharedCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventsBuilderSharedCache;
}
constexpr void BeatSaber::Analytics::Gameplay::EventsBuilderFactory::__cordl_internal_set__eventsBuilderSharedCache(::BeatSaber::Analytics::Gameplay::EventsBuilderSharedCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventsBuilderSharedCache = value;
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilder* BeatSaber::Analytics::Gameplay::EventsBuilderFactory::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::EventsBuilder*>(this, ___internal_method);
}
inline void BeatSaber::Analytics::Gameplay::EventsBuilderFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory* BeatSaber::Analytics::Gameplay::EventsBuilderFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Gameplay::EventsBuilderFactory*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Gameplay::EventsBuilderFactory::EventsBuilderFactory() {}
