#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBeatmapEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__LightAxis_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightRotationBeatmapEventData* (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::get_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x325a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightRotationBeatmapEventData* (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::get_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x325a564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_groupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(&::GlobalNamespace::LightRotationBeatmapEventData::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_groupId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_groupId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(int32_t)>(&::GlobalNamespace::LightRotationBeatmapEventData::set_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_groupId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_elementId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(&::GlobalNamespace::LightRotationBeatmapEventData::get_elementId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_elementId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_elementId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(int32_t)>(&::GlobalNamespace::LightRotationBeatmapEventData::set_elementId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_elementId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_usePreviousEventValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(&::GlobalNamespace::LightRotationBeatmapEventData::get_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_usePreviousEventValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_usePreviousEventValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(bool)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::set_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_usePreviousEventValue", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EaseType (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_easeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::set_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_easeType", {}, { ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_axis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightAxis (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::get_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_axis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_axis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(::GlobalNamespace::LightAxis)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::set_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_axis", {}, { ::i2c::type_of<::GlobalNamespace::LightAxis>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_loopCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(&::GlobalNamespace::LightRotationBeatmapEventData::get_loopCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_loopCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_loopCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(int32_t)>(&::GlobalNamespace::LightRotationBeatmapEventData::set_loopCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_loopCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_rotationDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightRotationDirection (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::get_rotationDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_rotationDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_rotationDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(::GlobalNamespace::LightRotationDirection)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::set_rotationDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(),
                                                                                           { "set_rotationDirection", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(&::GlobalNamespace::LightRotationBeatmapEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.set_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(float_t)>(&::GlobalNamespace::LightRotationBeatmapEventData::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_rotation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(
    float_t, int32_t, int32_t, bool, ::GlobalNamespace::EaseType, ::GlobalNamespace::LightAxis, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(
    &::GlobalNamespace::LightRotationBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x325a660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<::GlobalNamespace::LightAxis>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.ChangeRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightRotationBeatmapEventData::*)(float_t)>(&::GlobalNamespace::LightRotationBeatmapEventData::ChangeRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325a764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "ChangeRotation", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x325a76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::GlobalNamespace::LightAxis)>(&::GlobalNamespace::LightRotationBeatmapEventData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x325a744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(),
                                                             { "SubtypeIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::LightRotationBeatmapEventData::*)()>(
    &::GlobalNamespace::LightRotationBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x325a828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__groupId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__groupId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupId_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__groupId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupId_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__elementId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__elementId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementId_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__elementId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementId_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__usePreviousEventValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usePreviousEventValue_k__BackingField;
}
constexpr bool const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__usePreviousEventValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usePreviousEventValue_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__usePreviousEventValue_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usePreviousEventValue_k__BackingField = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__easeType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType_k__BackingField;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__easeType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__easeType_k__BackingField(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeType_k__BackingField = value;
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__axis_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axis_k__BackingField;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__axis_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axis_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__axis_k__BackingField(::GlobalNamespace::LightAxis value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____axis_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__loopCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loopCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__loopCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loopCount_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__loopCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loopCount_k__BackingField = value;
}
constexpr ::GlobalNamespace::LightRotationDirection& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__rotationDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDirection_k__BackingField;
}
constexpr ::GlobalNamespace::LightRotationDirection const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__rotationDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationDirection_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__rotationDirection_k__BackingField(::GlobalNamespace::LightRotationDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationDirection_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr float_t const& GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_get__rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr void GlobalNamespace::LightRotationBeatmapEventData::__cordl_internal_set__rotation_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation_k__BackingField = value;
}
inline void GlobalNamespace::LightRotationBeatmapEventData::setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>*, "_defaults",
                                    ::GlobalNamespace::LightRotationBeatmapEventData*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* GlobalNamespace::LightRotationBeatmapEventData::getStaticF__defaults() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>*, "_defaults",
                                           ::GlobalNamespace::LightRotationBeatmapEventData*>();
}
inline ::GlobalNamespace::LightRotationBeatmapEventData* GlobalNamespace::LightRotationBeatmapEventData::get_previousSameTypeEventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationBeatmapEventData* GlobalNamespace::LightRotationBeatmapEventData::get_nextSameTypeEventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationBeatmapEventData*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightRotationBeatmapEventData::get_groupId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_groupId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_groupId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_groupId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LightRotationBeatmapEventData::get_elementId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_elementId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_elementId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_elementId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LightRotationBeatmapEventData::get_usePreviousEventValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_usePreviousEventValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_usePreviousEventValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_usePreviousEventValue", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::EaseType GlobalNamespace::LightRotationBeatmapEventData::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_easeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_easeType(::GlobalNamespace::EaseType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_easeType", {}, { ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LightAxis GlobalNamespace::LightRotationBeatmapEventData::get_axis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_axis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightAxis>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_axis(::GlobalNamespace::LightAxis value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_axis", {}, { ::i2c::type_of<::GlobalNamespace::LightAxis>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LightRotationBeatmapEventData::get_loopCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_loopCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_loopCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_loopCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LightRotationDirection GlobalNamespace::LightRotationBeatmapEventData::get_rotationDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_rotationDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightRotationDirection>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_rotationDirection(::GlobalNamespace::LightRotationDirection value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(),
                                                                                         { "set_rotationDirection", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::LightRotationBeatmapEventData::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::set_rotation(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "set_rotation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                  ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::EaseType>(),
                              ::i2c::type_of<::GlobalNamespace::LightAxis>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightRotationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, groupId, elementId, usePreviousEventValue, easeType, axis, rotation, loopCount, rotationDirection);
}
inline void GlobalNamespace::LightRotationBeatmapEventData::ChangeRotation(float_t rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), { "ChangeRotation", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotation);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::LightRotationBeatmapEventData::GetCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightRotationBeatmapEventData::SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(),
                                                           { "SubtypeIdentifier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, groupId, elementId, axis);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::LightRotationBeatmapEventData::GetDefault() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightRotationBeatmapEventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::LightRotationBeatmapEventData* GlobalNamespace::LightRotationBeatmapEventData::New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue,
                                                                                                                  ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis,
                                                                                                                  float_t rotation, int32_t loopCount,
                                                                                                                  ::GlobalNamespace::LightRotationDirection rotationDirection) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LightRotationBeatmapEventData*>(time, groupId, elementId, usePreviousEventValue, easeType, axis, rotation, loopCount, rotationDirection));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationBeatmapEventData::LightRotationBeatmapEventData() {}
