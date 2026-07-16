#pragma once
// IWYU pragma private; include "GlobalNamespace/DeterminismConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeterminismConfig.get_isDeterministic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DeterminismConfig::*)()>(&::GlobalNamespace::DeterminismConfig::get_isDeterministic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3323fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "get_isDeterministic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterminismConfig.set_isDeterministic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeterminismConfig::*)(bool)>(&::GlobalNamespace::DeterminismConfig::set_isDeterministic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3323fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "set_isDeterministic", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterminismConfig.add_determinismSetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeterminismConfig::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::DeterminismConfig::add_determinismSetEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3323fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "add_determinismSetEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterminismConfig.remove_determinismSetEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeterminismConfig::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::DeterminismConfig::remove_determinismSetEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x33240a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "remove_determinismSetEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterminismConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeterminismConfig::*)(bool, ::GlobalNamespace::TimeHelper*)>(&::GlobalNamespace::DeterminismConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3324160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::TimeHelper*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterminismConfig.SetDeterminism
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeterminismConfig::*)(bool)>(&::GlobalNamespace::DeterminismConfig::SetDeterminism)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3324168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "SetDeterminism", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DeterminismConfig::__cordl_internal_get__isDeterministic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDeterministic_k__BackingField;
}
constexpr bool const& GlobalNamespace::DeterminismConfig::__cordl_internal_get__isDeterministic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDeterministic_k__BackingField;
}
constexpr void GlobalNamespace::DeterminismConfig::__cordl_internal_set__isDeterministic_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDeterministic_k__BackingField = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::DeterminismConfig::__cordl_internal_get_determinismSetEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___determinismSetEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::DeterminismConfig::__cordl_internal_get_determinismSetEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___determinismSetEvent;
}
constexpr void GlobalNamespace::DeterminismConfig::__cordl_internal_set_determinismSetEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___determinismSetEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::DeterminismConfig::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::DeterminismConfig::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::DeterminismConfig::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
inline bool GlobalNamespace::DeterminismConfig::get_isDeterministic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "get_isDeterministic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::DeterminismConfig::set_isDeterministic(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "set_isDeterministic", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DeterminismConfig::add_determinismSetEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "add_determinismSetEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DeterminismConfig::remove_determinismSetEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "remove_determinismSetEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DeterminismConfig::_ctor(bool initialDeterminism, ::GlobalNamespace::TimeHelper* timeHelper) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::TimeHelper*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialDeterminism, timeHelper);
}
inline void GlobalNamespace::DeterminismConfig::SetDeterminism(bool isDeterministic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterminismConfig*>(), { "SetDeterminism", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDeterministic);
}
inline ::GlobalNamespace::DeterminismConfig* GlobalNamespace::DeterminismConfig::New_ctor(bool initialDeterminism, ::GlobalNamespace::TimeHelper* timeHelper) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeterminismConfig*>(initialDeterminism, timeHelper));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeterminismConfig::DeterminismConfig() {}
