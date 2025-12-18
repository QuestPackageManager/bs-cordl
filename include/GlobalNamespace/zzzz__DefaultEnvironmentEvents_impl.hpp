#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultEnvironmentEvents.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_impl.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent.get_eventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::get_eventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), "get_eventType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), "get_value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent.get_floatValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), "get_floatValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x360b9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_get__eventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_get__eventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventType;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_set__eventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventType = value;
}
constexpr int32_t& GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr int32_t const& GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_set__value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_get__floatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_get__floatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::__cordl_internal_set__floatValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValue = value;
}
inline ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::get_eventType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), "get_eventType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::get_value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), "get_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::get_floatValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), "get_floatValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent* GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent::DefaultEnvironmentEvents_BasicBeatmapEvent() {}
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution.get_useDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::get_useDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(),
                                                 "get_useDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution.get_distributionParam
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::get_distributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(),
                                                 "get_distributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution.get_distributionParamType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::get_distributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(),
                                                 "get_distributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x360b9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_get__useDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDistribution;
}
constexpr bool const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_get__useDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_set__useDistribution(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useDistribution = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_get__distributionParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionParam;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_get__distributionParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionParam;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_set__distributionParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distributionParam = value;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType& GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_get__distributionParamType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionParamType;
}
constexpr ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_get__distributionParamType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distributionParamType;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::__cordl_internal_set__distributionParamType(::GlobalNamespace::BeatmapEventDataBox_DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distributionParamType = value;
}
inline bool GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::get_useDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(),
                                               "get_useDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::get_distributionParam() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(),
                                               "get_distributionParam", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBox_DistributionParamType GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::get_distributionParamType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(),
                                               "get_distributionParamType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventDataBox_DistributionParamType, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution::DefaultEnvironmentEvents_LightGroupDistribution() {}
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering.get_useFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_useFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_useFiltering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering.get_randomType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter_IndexFilterRandomType (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_randomType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_randomType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering.get_limit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_limit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering.get_alsoAffectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_alsoAffectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_alsoAffectType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering.get_seed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_seed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering.get_chunks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_chunks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_chunks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x360b9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__useFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFiltering;
}
constexpr bool const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__useFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useFiltering;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_set__useFiltering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useFiltering = value;
}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__randomType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomType;
}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterRandomType const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__randomType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomType;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_set__randomType(::GlobalNamespace::IndexFilter_IndexFilterRandomType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomType = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_set__limit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limit = value;
}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__alsoAffectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alsoAffectType;
}
constexpr ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__alsoAffectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alsoAffectType;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_set__alsoAffectType(::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alsoAffectType = value;
}
constexpr int32_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr int32_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____seed;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_set__seed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____seed = value;
}
constexpr int32_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunks;
}
constexpr int32_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_get__chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chunks;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::__cordl_internal_set__chunks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chunks = value;
}
inline bool GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_useFiltering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_useFiltering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter_IndexFilterRandomType GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_randomType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_randomType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter_IndexFilterRandomType, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_limit() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_limit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_alsoAffectType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_alsoAffectType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter_IndexFilterLimitAlsoAffectType, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_seed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_seed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::get_chunks() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), "get_chunks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering::DefaultEnvironmentEvents_LightGroupFiltering() {}
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LightGroupSO> (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_lightGroup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_environmentColorType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentColorType (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_environmentColorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_environmentColorType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_brightness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_brightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_brightness",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_brightnessDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_brightnessDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_brightnessDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_brightnessFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_brightnessFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_brightnessFiltering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_rotationX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationX",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_rotationY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationY",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_rotationZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationZ",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_rotationXDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationXDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_rotationXDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_rotationYDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationYDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_rotationYDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_rotationZDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationZDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_rotationZDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_rotationFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationFiltering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_translationX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationX)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_translationX",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_translationY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_translationY",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_translationZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_translationZ",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_translationXDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationXDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_translationXDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_translationYDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationYDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_translationYDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_translationZDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationZDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_translationZDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_translationFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                                 "get_translationFiltering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_floatFxValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_floatFxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_floatFxValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_floatFxDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_floatFxDistribution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360ba9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_floatFxDistribution",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent.get_floatFxFiltering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* (
    ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_floatFxFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360baa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_floatFxFiltering",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x360baac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__environmentColorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColorType;
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__environmentColorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColorType;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__environmentColorType(::GlobalNamespace::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentColorType = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__brightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brightness;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__brightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brightness;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__brightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____brightness = value;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__brightnessDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brightnessDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__brightnessDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brightnessDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__brightnessDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____brightnessDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__brightnessFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brightnessFiltering;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__brightnessFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brightnessFiltering;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__brightnessFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____brightnessFiltering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationX;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationX;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__rotationX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationX = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationY;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationY;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__rotationY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationY = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationZ;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationZ;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__rotationZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationZ = value;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationXDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationXDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationXDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationXDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__rotationXDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationXDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationYDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationYDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationYDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationYDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__rotationYDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationYDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationZDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationZDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationZDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationZDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__rotationZDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationZDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationFiltering;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__rotationFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationFiltering;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__rotationFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationFiltering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationX;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationX;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__translationX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____translationX = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationY;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationY;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__translationY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____translationY = value;
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationZ;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationZ;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__translationZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____translationZ = value;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationXDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationXDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationXDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationXDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__translationXDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____translationXDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationYDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationYDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationYDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationYDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__translationYDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____translationYDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationZDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationZDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationZDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationZDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__translationZDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____translationZDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationFiltering;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__translationFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationFiltering;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__translationFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____translationFiltering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__floatFxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxValue;
}
constexpr float_t const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__floatFxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxValue;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__floatFxValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFxValue = value;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__floatFxDistribution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxDistribution;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__floatFxDistribution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxDistribution;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__floatFxDistribution(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxDistribution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__floatFxFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxFiltering;
}
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* const& GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_get__floatFxFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxFiltering;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::__cordl_internal_set__floatFxFiltering(::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxFiltering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::LightGroupSO> GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_lightGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightGroupSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentColorType GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_environmentColorType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_environmentColorType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentColorType, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_brightness() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_brightness",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_brightnessDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                               "get_brightnessDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_brightnessFiltering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_brightnessFiltering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationX() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationX",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationY() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationY",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationZ() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationZ",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationXDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationXDistribution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationYDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationYDistribution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationZDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationZDistribution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_rotationFiltering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_rotationFiltering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationX() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_translationX",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationY() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_translationY",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationZ() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_translationZ",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationXDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                               "get_translationXDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationYDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                               "get_translationYDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationZDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(),
                                               "get_translationZDistribution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_translationFiltering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_translationFiltering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_floatFxValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_floatFxValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_floatFxDistribution() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_floatFxDistribution",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupDistribution*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::get_floatFxFiltering() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), "get_floatFxFiltering",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupFiltering*, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent* GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent::DefaultEnvironmentEvents_LightGroupEvent() {}
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents.get_basicBeatmapEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*> (
        ::GlobalNamespace::DefaultEnvironmentEvents::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents::get_basicBeatmapEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                                                               "get_basicBeatmapEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents.get_lightGroupEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*> (::GlobalNamespace::DefaultEnvironmentEvents::*)()>(
    &::GlobalNamespace::DefaultEnvironmentEvents::get_lightGroupEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x360b94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                                                               "get_lightGroupEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents.get_isEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::DefaultEnvironmentEvents::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents::get_isEmpty)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x360b954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                                                               "get_isEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEvents._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultEnvironmentEvents::*)()>(&::GlobalNamespace::DefaultEnvironmentEvents::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x360b98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*>&
GlobalNamespace::DefaultEnvironmentEvents::__cordl_internal_get__basicBeatmapEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicBeatmapEvents;
}
constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*> const&
GlobalNamespace::DefaultEnvironmentEvents::__cordl_internal_get__basicBeatmapEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicBeatmapEvents;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents::__cordl_internal_set__basicBeatmapEvents(
    ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____basicBeatmapEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*>&
GlobalNamespace::DefaultEnvironmentEvents::__cordl_internal_get__lightGroupEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupEvents;
}
constexpr ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*> const&
GlobalNamespace::DefaultEnvironmentEvents::__cordl_internal_get__lightGroupEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupEvents;
}
constexpr void GlobalNamespace::DefaultEnvironmentEvents::__cordl_internal_set__lightGroupEvents(
    ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroupEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*>
GlobalNamespace::DefaultEnvironmentEvents::get_basicBeatmapEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                                                             "get_basicBeatmapEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_BasicBeatmapEvent*>*>, false>(
      this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*>
GlobalNamespace::DefaultEnvironmentEvents::get_lightGroupEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                                                             "get_lightGroupEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*, ::Array<::GlobalNamespace::DefaultEnvironmentEvents_LightGroupEvent*>*>, false>(
      this, ___internal_method);
}
inline bool GlobalNamespace::DefaultEnvironmentEvents::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(), "get_isEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::DefaultEnvironmentEvents::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEvents*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DefaultEnvironmentEvents* GlobalNamespace::DefaultEnvironmentEvents::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DefaultEnvironmentEvents*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEvents::DefaultEnvironmentEvents() {}
