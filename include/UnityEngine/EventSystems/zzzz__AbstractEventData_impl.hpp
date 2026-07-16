#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/AbstractEventData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__AbstractEventData_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::AbstractEventData.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::AbstractEventData::*)()>(&::UnityEngine::EventSystems::AbstractEventData::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e14890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), { ::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AbstractEventData.Use
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::AbstractEventData::*)()>(&::UnityEngine::EventSystems::AbstractEventData::Use)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e14898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), { ::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AbstractEventData.get_used
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::AbstractEventData::*)()>(&::UnityEngine::EventSystems::AbstractEventData::get_used)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e148a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), { ::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::AbstractEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::AbstractEventData::*)()>(&::UnityEngine::EventSystems::AbstractEventData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e148ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::EventSystems::AbstractEventData::__cordl_internal_get_m_Used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Used;
}
constexpr bool const& UnityEngine::EventSystems::AbstractEventData::__cordl_internal_get_m_Used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Used;
}
constexpr void UnityEngine::EventSystems::AbstractEventData::__cordl_internal_set_m_Used(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Used = value;
}
inline void UnityEngine::EventSystems::AbstractEventData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::AbstractEventData::Use() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::AbstractEventData::get_used() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::AbstractEventData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::AbstractEventData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::AbstractEventData* UnityEngine::EventSystems::AbstractEventData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::AbstractEventData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::AbstractEventData::AbstractEventData() {}
