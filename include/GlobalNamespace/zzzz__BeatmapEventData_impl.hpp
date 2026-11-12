#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.get_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::BeatmapEventData::*)()>(
    &::GlobalNamespace::BeatmapEventData::get_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.set_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventData::set_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(),
                                                                                           { "set_previousSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.get_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::BeatmapEventData::*)()>(
    &::GlobalNamespace::BeatmapEventData::get_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.set_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventData::set_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "set_nextSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.get_sourceBoxGroupBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapEventData::*)()>(&::GlobalNamespace::BeatmapEventData::get_sourceBoxGroupBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_sourceBoxGroupBeat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.set_sourceBoxGroupBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)(float_t)>(&::GlobalNamespace::BeatmapEventData::set_sourceBoxGroupBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "set_sourceBoxGroupBeat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)(float_t, int32_t, int32_t)>(&::GlobalNamespace::BeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x34f95e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.__SetSourceBoxGroupBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)(float_t)>(&::GlobalNamespace::BeatmapEventData::__SetSourceBoxGroupBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "__SetSourceBoxGroupBeat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.CompareToWithSameTimeAndExecutionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapEventData::*)(::GlobalNamespace::BeatmapDataItem*)>(
    &::GlobalNamespace::BeatmapEventData::CompareToWithSameTimeAndExecutionOrder)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x34f9c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.__ConnectWithPreviousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventData::__ConnectWithPreviousSameTypeEventData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34f9cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "__ConnectWithPreviousSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.__ConnectWithNextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventData::__ConnectWithNextSameTypeEventData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x34f9ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(),
                                                                                           { "__ConnectWithNextSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.__ResetConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapEventData::*)()>(&::GlobalNamespace::BeatmapEventData::__ResetConnections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34f9cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "__ResetConnections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::BeatmapEventData::*)()>(&::GlobalNamespace::BeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::BeatmapEventData::*)(::GlobalNamespace::BeatmapEventData*)>(
    &::GlobalNamespace::BeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x34f9cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "GetDefault", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventData.get_isDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapEventData::*)()>(&::GlobalNamespace::BeatmapEventData::get_isDefault)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x34f9d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_isDefault", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapEventData*& GlobalNamespace::BeatmapEventData::__cordl_internal_get__previousSameTypeEventData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousSameTypeEventData_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapEventData* const& GlobalNamespace::BeatmapEventData::__cordl_internal_get__previousSameTypeEventData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousSameTypeEventData_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapEventData::__cordl_internal_set__previousSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousSameTypeEventData_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapEventData*& GlobalNamespace::BeatmapEventData::__cordl_internal_get__nextSameTypeEventData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSameTypeEventData_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapEventData* const& GlobalNamespace::BeatmapEventData::__cordl_internal_get__nextSameTypeEventData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSameTypeEventData_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapEventData::__cordl_internal_set__nextSameTypeEventData_k__BackingField(::GlobalNamespace::BeatmapEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextSameTypeEventData_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeatmapEventData::__cordl_internal_get__sourceBoxGroupBeat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceBoxGroupBeat_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeatmapEventData::__cordl_internal_get__sourceBoxGroupBeat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceBoxGroupBeat_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapEventData::__cordl_internal_set__sourceBoxGroupBeat_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sourceBoxGroupBeat_k__BackingField = value;
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::BeatmapEventData::get_previousSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventData::set_previousSameTypeEventData(::GlobalNamespace::BeatmapEventData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "set_previousSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::BeatmapEventData::get_nextSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventData::set_nextSameTypeEventData(::GlobalNamespace::BeatmapEventData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "set_nextSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeatmapEventData::get_sourceBoxGroupBeat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_sourceBoxGroupBeat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapEventData::set_sourceBoxGroupBeat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "set_sourceBoxGroupBeat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapEventData::_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, executionOrder, subtypeIdentifier);
}
inline void GlobalNamespace::BeatmapEventData::__SetSourceBoxGroupBeat(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "__SetSourceBoxGroupBeat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat);
}
inline int32_t GlobalNamespace::BeatmapEventData::CompareToWithSameTimeAndExecutionOrder(::GlobalNamespace::BeatmapDataItem* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void GlobalNamespace::BeatmapEventData::__ConnectWithPreviousSameTypeEventData(::GlobalNamespace::BeatmapEventData* newPreviousSameTypeEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "__ConnectWithPreviousSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPreviousSameTypeEvent);
}
inline void GlobalNamespace::BeatmapEventData::__ConnectWithNextSameTypeEventData(::GlobalNamespace::BeatmapEventData* newNextSameTypeEvent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(),
                                                                                         { "__ConnectWithNextSameTypeEventData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newNextSameTypeEvent);
}
inline void GlobalNamespace::BeatmapEventData::__ResetConnections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "__ResetConnections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::BeatmapEventData::GetDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::BeatmapEventData::GetDefault(::GlobalNamespace::BeatmapEventData* nextData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "GetDefault", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method, nextData);
}
inline bool GlobalNamespace::BeatmapEventData::get_isDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapEventData*>(), { "get_isDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::BeatmapEventData::New_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapEventData*>(time, executionOrder, subtypeIdentifier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventData::BeatmapEventData() {}
