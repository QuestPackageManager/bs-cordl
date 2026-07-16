#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.get_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FloatFxBeatmapEventData* (::GlobalNamespace::FloatFxBeatmapEventData::*)()>(
    &::GlobalNamespace::FloatFxBeatmapEventData::get_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3259abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.get_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FloatFxBeatmapEventData* (::GlobalNamespace::FloatFxBeatmapEventData::*)()>(
    &::GlobalNamespace::FloatFxBeatmapEventData::get_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3259b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FloatFxBeatmapEventData::*)()>(&::GlobalNamespace::FloatFxBeatmapEventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3259bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventData::*)(float_t)>(&::GlobalNamespace::FloatFxBeatmapEventData::set_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3259bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.get_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EaseType (::GlobalNamespace::FloatFxBeatmapEventData::*)()>(&::GlobalNamespace::FloatFxBeatmapEventData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3259bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_easeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.set_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventData::*)(::GlobalNamespace::EaseType)>(&::GlobalNamespace::FloatFxBeatmapEventData::set_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3259bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "set_easeType", {}, { ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventData::*)(float_t, int32_t, int32_t, bool, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::FloatFxBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3259bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.UpdateBy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventData::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(
    &::GlobalNamespace::FloatFxBeatmapEventData::UpdateBy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3259c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "UpdateBy", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::FloatFxBeatmapEventData::*)()>(&::GlobalNamespace::FloatFxBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3259cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::FloatFxBeatmapEventData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3259c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "SubtypeIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::FloatFxBeatmapEventData::*)()>(
    &::GlobalNamespace::FloatFxBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3259d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr bool& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get_usePreviousEventValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr bool const& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get_usePreviousEventValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousEventValue;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_set_usePreviousEventValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousEventValue = value;
}
constexpr float_t& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get__value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_k__BackingField;
}
constexpr float_t const& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get__value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value_k__BackingField;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_set__value_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value_k__BackingField = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get__easeType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType_k__BackingField;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_get__easeType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType_k__BackingField;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventData::__cordl_internal_set__easeType_k__BackingField(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeType_k__BackingField = value;
}
inline void GlobalNamespace::FloatFxBeatmapEventData::setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>*, "_defaults", ::GlobalNamespace::FloatFxBeatmapEventData*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* GlobalNamespace::FloatFxBeatmapEventData::getStaticF__defaults() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>*, "_defaults",
                                           ::GlobalNamespace::FloatFxBeatmapEventData*>();
}
inline ::GlobalNamespace::FloatFxBeatmapEventData* GlobalNamespace::FloatFxBeatmapEventData::get_previousSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxBeatmapEventData* GlobalNamespace::FloatFxBeatmapEventData::get_nextSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBeatmapEventData*>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatFxBeatmapEventData::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxBeatmapEventData::set_value(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "set_value", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::EaseType GlobalNamespace::FloatFxBeatmapEventData::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "get_easeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxBeatmapEventData::set_easeType(::GlobalNamespace::EaseType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "set_easeType", {}, { ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatFxBeatmapEventData::_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, groupId, elementId, usePreviousEventValue, value, easeType);
}
inline void GlobalNamespace::FloatFxBeatmapEventData::UpdateBy(::GlobalNamespace::FloatFxBeatmapEventData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "UpdateBy", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::FloatFxBeatmapEventData::GetCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::FloatFxBeatmapEventData::SubtypeIdentifier(int32_t groupId, int32_t elementId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), { "SubtypeIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, groupId, elementId);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::FloatFxBeatmapEventData::GetDefault() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FloatFxBeatmapEventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxBeatmapEventData* GlobalNamespace::FloatFxBeatmapEventData::New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, float_t value,
                                                                                                      ::GlobalNamespace::EaseType easeType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxBeatmapEventData*>(time, groupId, elementId, usePreviousEventValue, value, easeType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxBeatmapEventData::FloatFxBeatmapEventData() {}
