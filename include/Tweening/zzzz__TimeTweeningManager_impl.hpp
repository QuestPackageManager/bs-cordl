#pragma once
// IWYU pragma private; include "Tweening\TimeTweeningManager.hpp"
#include "Tweening/zzzz__TweeningManager_impl.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
//  Writing Method size for method: ::Tweening::TimeTweeningManager.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tweening::TimeTweeningManager::*)()>(&::Tweening::TimeTweeningManager::GetTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6449204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::TimeTweeningManager*>(), { ::i2c::class_of<::Tweening::TimeTweeningManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::TimeTweeningManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::TimeTweeningManager::*)()>(&::Tweening::TimeTweeningManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x644922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TimeTweeningManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t Tweening::TimeTweeningManager::GetTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::TimeTweeningManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Tweening::TimeTweeningManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::TimeTweeningManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tweening::TimeTweeningManager* Tweening::TimeTweeningManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::TimeTweeningManager*>());
}
// Ctor Parameters []
constexpr ::Tweening::TimeTweeningManager::TimeTweeningManager() {}
