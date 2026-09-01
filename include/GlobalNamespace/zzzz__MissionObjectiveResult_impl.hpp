#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionObjectiveResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveResult.get_missionObjective
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MissionObjective* (::GlobalNamespace::MissionObjectiveResult::*)()>(
    &::GlobalNamespace::MissionObjectiveResult::get_missionObjective)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37565fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "get_missionObjective", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveResult.set_missionObjective
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveResult::*)(::GlobalNamespace::MissionObjective*)>(
    &::GlobalNamespace::MissionObjectiveResult::set_missionObjective)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "set_missionObjective", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveResult.get_cleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionObjectiveResult::*)()>(&::GlobalNamespace::MissionObjectiveResult::get_cleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "get_cleared", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveResult.set_cleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveResult::*)(bool)>(&::GlobalNamespace::MissionObjectiveResult::set_cleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "set_cleared", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveResult.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MissionObjectiveResult::*)()>(&::GlobalNamespace::MissionObjectiveResult::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375661c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveResult.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveResult::*)(int32_t)>(&::GlobalNamespace::MissionObjectiveResult::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "set_value", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveResult::*)(::GlobalNamespace::MissionObjective*, bool, int32_t)>(
    &::GlobalNamespace::MissionObjectiveResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375662c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MissionObjective*& GlobalNamespace::MissionObjectiveResult::__cordl_internal_get__missionObjective_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjective_k__BackingField;
}
constexpr ::GlobalNamespace::MissionObjective* const& GlobalNamespace::MissionObjectiveResult::__cordl_internal_get__missionObjective_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjective_k__BackingField;
}
constexpr void GlobalNamespace::MissionObjectiveResult::__cordl_internal_set__missionObjective_k__BackingField(::GlobalNamespace::MissionObjective* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjective_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MissionObjectiveResult::__cordl_internal_get__cleared_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared_k__BackingField;
}
constexpr bool const& GlobalNamespace::MissionObjectiveResult::__cordl_internal_get__cleared_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared_k__BackingField;
}
constexpr void GlobalNamespace::MissionObjectiveResult::__cordl_internal_set__cleared_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cleared_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::MissionObjectiveResult::__cordl_internal_get__value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MissionObjectiveResult::__cordl_internal_get__value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_k__BackingField;
}
constexpr void GlobalNamespace::MissionObjectiveResult::__cordl_internal_set__value_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value_k__BackingField = value;
}
inline ::GlobalNamespace::MissionObjective* GlobalNamespace::MissionObjectiveResult::get_missionObjective() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "get_missionObjective", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionObjective*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveResult::set_missionObjective(::GlobalNamespace::MissionObjective* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "set_missionObjective", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MissionObjectiveResult::get_cleared() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "get_cleared", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveResult::set_cleared(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "set_cleared", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MissionObjectiveResult::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveResult::set_value(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(), { "set_value", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionObjectiveResult::_ctor(::GlobalNamespace::MissionObjective* missionObjective, bool cleared, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveResult*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::MissionObjective*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionObjective, cleared, value);
}
inline ::GlobalNamespace::MissionObjectiveResult* GlobalNamespace::MissionObjectiveResult::New_ctor(::GlobalNamespace::MissionObjective* missionObjective, bool cleared, int32_t value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveResult*>(missionObjective, cleared, value));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveResult::MissionObjectiveResult() {}
