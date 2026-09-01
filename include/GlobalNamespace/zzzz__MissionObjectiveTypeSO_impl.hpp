#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionObjectiveTypeSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_objectiveName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveNameLocalized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3756920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_objectiveNameLocalized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_noConditionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375692c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_noConditionValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO.get_objectiveValueFormater
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(
    &::GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_objectiveValueFormater", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionObjectiveTypeSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionObjectiveTypeSO::*)()>(&::GlobalNamespace::MissionObjectiveTypeSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375693c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveName;
}
constexpr ::StringW const& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveName;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_set__objectiveName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectiveName = value;
}
constexpr bool& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__noConditionValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noConditionValue;
}
constexpr bool const& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__noConditionValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noConditionValue;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_set__noConditionValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noConditionValue = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO>& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveValueFormater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveValueFormater;
}
constexpr ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> const& GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_get__objectiveValueFormater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveValueFormater;
}
constexpr void GlobalNamespace::MissionObjectiveTypeSO::__cordl_internal_set__objectiveValueFormater(::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectiveValueFormater = value;
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_objectiveName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MissionObjectiveTypeSO::get_objectiveNameLocalized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_objectiveNameLocalized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionObjectiveTypeSO::get_noConditionValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_noConditionValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO> GlobalNamespace::MissionObjectiveTypeSO::get_objectiveValueFormater() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { "get_objectiveValueFormater", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ObjectiveValueFormatterSO>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionObjectiveTypeSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionObjectiveTypeSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionObjectiveTypeSO* GlobalNamespace::MissionObjectiveTypeSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionObjectiveTypeSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionObjectiveTypeSO::MissionObjectiveTypeSO() {}
