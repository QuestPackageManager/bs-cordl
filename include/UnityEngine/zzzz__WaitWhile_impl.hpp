#pragma once
// IWYU pragma private; include "UnityEngine\WaitWhile.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitTimeoutMode_impl.hpp"
#include "UnityEngine/zzzz__WaitWhile_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitWhile.get_keepWaiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::WaitWhile::*)()>(&::UnityEngine::WaitWhile::get_keepWaiting)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6aec0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::WaitWhile*>(), { ::i2c::class_of<::UnityEngine::WaitWhile*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitWhile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitWhile::*)(::System::Func_1<bool>*)>(&::UnityEngine::WaitWhile::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6aec1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitWhile*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitWhile.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::WaitWhile::*)()>(&::UnityEngine::WaitWhile::GetTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6aec1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitWhile*>(), { "GetTime", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& UnityEngine::WaitWhile::__cordl_internal_get_m_Predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::WaitWhile::__cordl_internal_get_m_Predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
constexpr void UnityEngine::WaitWhile::__cordl_internal_set_m_Predicate(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Predicate = value;
}
constexpr ::System::Action*& UnityEngine::WaitWhile::__cordl_internal_get_m_TimeoutCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutCallback;
}
constexpr ::System::Action* const& UnityEngine::WaitWhile::__cordl_internal_get_m_TimeoutCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutCallback;
}
constexpr void UnityEngine::WaitWhile::__cordl_internal_set_m_TimeoutCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutCallback = value;
}
constexpr ::UnityEngine::WaitTimeoutMode& UnityEngine::WaitWhile::__cordl_internal_get_m_TimeoutMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutMode;
}
constexpr ::UnityEngine::WaitTimeoutMode const& UnityEngine::WaitWhile::__cordl_internal_get_m_TimeoutMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutMode;
}
constexpr void UnityEngine::WaitWhile::__cordl_internal_set_m_TimeoutMode(::UnityEngine::WaitTimeoutMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutMode = value;
}
constexpr double_t& UnityEngine::WaitWhile::__cordl_internal_get_m_MaxExecutionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExecutionTime;
}
constexpr double_t const& UnityEngine::WaitWhile::__cordl_internal_get_m_MaxExecutionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExecutionTime;
}
constexpr void UnityEngine::WaitWhile::__cordl_internal_set_m_MaxExecutionTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxExecutionTime = value;
}
inline bool UnityEngine::WaitWhile::get_keepWaiting() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::WaitWhile*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::WaitWhile::_ctor(::System::Func_1<bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitWhile*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate);
}
inline double_t UnityEngine::WaitWhile::GetTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitWhile*>(), { "GetTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityEngine::WaitWhile* UnityEngine::WaitWhile::New_ctor(::System::Func_1<bool>* predicate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::WaitWhile*>(predicate));
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitWhile::WaitWhile() {}
