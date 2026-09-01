#pragma once
// IWYU pragma private; include "Tweening\SongTimeTweeningManager.hpp"
#include "Tweening/zzzz__TweeningManager_impl.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: ::Tweening::SongTimeTweeningManager.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tweening::SongTimeTweeningManager::*)()>(&::Tweening::SongTimeTweeningManager::GetTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5975c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::SongTimeTweeningManager*>(), { ::i2c::class_of<::Tweening::SongTimeTweeningManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::SongTimeTweeningManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::SongTimeTweeningManager::*)()>(&::Tweening::SongTimeTweeningManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5975d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::SongTimeTweeningManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAudioTimeSource*& Tweening::SongTimeTweeningManager::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& Tweening::SongTimeTweeningManager::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void Tweening::SongTimeTweeningManager::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
inline float_t Tweening::SongTimeTweeningManager::GetTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::SongTimeTweeningManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Tweening::SongTimeTweeningManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::SongTimeTweeningManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tweening::SongTimeTweeningManager* Tweening::SongTimeTweeningManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::SongTimeTweeningManager*>());
}
// Ctor Parameters []
constexpr ::Tweening::SongTimeTweeningManager::SongTimeTweeningManager() {}
