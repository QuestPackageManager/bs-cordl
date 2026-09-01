#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\RuntimeClipBase.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_impl.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeClipBase_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClipBase.get_start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::RuntimeClipBase::*)()>(&::UnityEngine::Timeline::RuntimeClipBase::get_start)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClipBase.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::RuntimeClipBase::*)()>(&::UnityEngine::Timeline::RuntimeClipBase::get_duration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClipBase.get_intervalStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::RuntimeClipBase::*)()>(&::UnityEngine::Timeline::RuntimeClipBase::get_intervalStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69c5a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClipBase.get_intervalEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::RuntimeClipBase::*)()>(&::UnityEngine::Timeline::RuntimeClipBase::get_intervalEnd)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69c5a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::RuntimeClipBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::RuntimeClipBase::*)()>(&::UnityEngine::Timeline::RuntimeClipBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c5414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline double_t UnityEngine::Timeline::RuntimeClipBase::get_start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::RuntimeClipBase::get_duration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int64_t UnityEngine::Timeline::RuntimeClipBase::get_intervalStart() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t UnityEngine::Timeline::RuntimeClipBase::get_intervalEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::RuntimeClipBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::RuntimeClipBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::RuntimeClipBase* UnityEngine::Timeline::RuntimeClipBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::RuntimeClipBase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::RuntimeClipBase::RuntimeClipBase() {}
