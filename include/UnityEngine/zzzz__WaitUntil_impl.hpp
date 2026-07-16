#pragma once
// IWYU pragma private; include "UnityEngine/WaitUntil.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitTimeoutMode_impl.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitUntil.get_keepWaiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::WaitUntil::*)()>(&::UnityEngine::WaitUntil::get_keepWaiting)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6ae8c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::WaitUntil*>(), { ::i2c::class_of<::UnityEngine::WaitUntil*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitUntil._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitUntil::*)(::System::Func_1<bool>*)>(&::UnityEngine::WaitUntil::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ae8d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitUntil*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitUntil.GetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::WaitUntil::*)()>(&::UnityEngine::WaitUntil::GetTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6ae8d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitUntil*>(), { "GetTime", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& UnityEngine::WaitUntil::__cordl_internal_get_m_Predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::WaitUntil::__cordl_internal_get_m_Predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_Predicate(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Predicate = value;
}
constexpr ::System::Action*& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutCallback;
}
constexpr ::System::Action* const& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutCallback;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_TimeoutCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutCallback = value;
}
constexpr ::UnityEngine::WaitTimeoutMode& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutMode;
}
constexpr ::UnityEngine::WaitTimeoutMode const& UnityEngine::WaitUntil::__cordl_internal_get_m_TimeoutMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimeoutMode;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_TimeoutMode(::UnityEngine::WaitTimeoutMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimeoutMode = value;
}
constexpr double_t& UnityEngine::WaitUntil::__cordl_internal_get_m_MaxExecutionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExecutionTime;
}
constexpr double_t const& UnityEngine::WaitUntil::__cordl_internal_get_m_MaxExecutionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxExecutionTime;
}
constexpr void UnityEngine::WaitUntil::__cordl_internal_set_m_MaxExecutionTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxExecutionTime = value;
}
inline bool UnityEngine::WaitUntil::get_keepWaiting() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::WaitUntil*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::WaitUntil::_ctor(::System::Func_1<bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitUntil*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, predicate);
}
inline double_t UnityEngine::WaitUntil::GetTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitUntil*>(), { "GetTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::UnityEngine::WaitUntil* UnityEngine::WaitUntil::New_ctor(::System::Func_1<bool>* predicate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::WaitUntil*>(predicate));
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitUntil::WaitUntil() {}
