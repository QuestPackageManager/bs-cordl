#pragma once
// IWYU pragma private; include "GlobalNamespace\ComboMissionObjectiveChecker.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__ComboMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__ComboController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ComboMissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboMissionObjectiveChecker::*)()>(&::GlobalNamespace::ComboMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5919400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), { ::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboMissionObjectiveChecker.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboMissionObjectiveChecker::*)()>(&::GlobalNamespace::ComboMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x59195c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboMissionObjectiveChecker.HandleComboDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboMissionObjectiveChecker::*)(int32_t)>(&::GlobalNamespace::ComboMissionObjectiveChecker::HandleComboDidChange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59196d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), { "HandleComboDidChange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComboMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ComboMissionObjectiveChecker::*)()>(&::GlobalNamespace::ComboMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591985c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ComboController>& GlobalNamespace::ComboMissionObjectiveChecker::__cordl_internal_get__comboController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr ::UnityW<::GlobalNamespace::ComboController> const& GlobalNamespace::ComboMissionObjectiveChecker::__cordl_internal_get__comboController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr void GlobalNamespace::ComboMissionObjectiveChecker::__cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comboController = value;
}
inline void GlobalNamespace::ComboMissionObjectiveChecker::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboMissionObjectiveChecker::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ComboMissionObjectiveChecker::HandleComboDidChange(int32_t combo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), { "HandleComboDidChange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combo);
}
inline void GlobalNamespace::ComboMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ComboMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ComboMissionObjectiveChecker* GlobalNamespace::ComboMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ComboMissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComboMissionObjectiveChecker::ComboMissionObjectiveChecker() {}
