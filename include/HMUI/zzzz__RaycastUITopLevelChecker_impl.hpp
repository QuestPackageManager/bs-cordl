#pragma once
// IWYU pragma private; include "HMUI\RaycastUITopLevelChecker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__RaycastUITopLevelChecker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x587c3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RaycastUITopLevelChecker*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker.get_isOnTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::get_isOnTop)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x587c42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RaycastUITopLevelChecker*>(), { "get_isOnTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x587c648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RaycastUITopLevelChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& HMUI::RaycastUITopLevelChecker::__cordl_internal_get_results() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___results;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& HMUI::RaycastUITopLevelChecker::__cordl_internal_get_results() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___results;
}
constexpr void HMUI::RaycastUITopLevelChecker::__cordl_internal_set_results(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___results = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& HMUI::RaycastUITopLevelChecker::__cordl_internal_get__canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& HMUI::RaycastUITopLevelChecker::__cordl_internal_get__canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr void HMUI::RaycastUITopLevelChecker::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvas = value;
}
inline void HMUI::RaycastUITopLevelChecker::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RaycastUITopLevelChecker*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::RaycastUITopLevelChecker::get_isOnTop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RaycastUITopLevelChecker*>(), { "get_isOnTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::RaycastUITopLevelChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::RaycastUITopLevelChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::RaycastUITopLevelChecker* HMUI::RaycastUITopLevelChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::RaycastUITopLevelChecker*>());
}
// Ctor Parameters []
constexpr ::HMUI::RaycastUITopLevelChecker::RaycastUITopLevelChecker() {}
