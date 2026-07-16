#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedReflectionProbe.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BakedReflectionProbe_def.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeDataSO_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe.get_reflectionProbeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ReflectionProbeDataSO> (::GlobalNamespace::BakedReflectionProbe::*)()>(
    &::GlobalNamespace::BakedReflectionProbe::get_reflectionProbeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e1408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_reflectionProbeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe.set_reflectionProbeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedReflectionProbe::*)(::GlobalNamespace::ReflectionProbeDataSO*)>(
    &::GlobalNamespace::BakedReflectionProbe::set_reflectionProbeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e1410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(),
                                                                                           { "set_reflectionProbeData", {}, { ::i2c::type_of<::GlobalNamespace::ReflectionProbeDataSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BakedReflectionProbe::*)()>(&::GlobalNamespace::BakedReflectionProbe::get_position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58e1418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe.get_resolutionBeforeDownsample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BakedReflectionProbe::*)()>(&::GlobalNamespace::BakedReflectionProbe::get_resolutionBeforeDownsample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e1438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_resolutionBeforeDownsample", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe.get_downsampleByHalfCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BakedReflectionProbe::*)()>(&::GlobalNamespace::BakedReflectionProbe::get_downsampleByHalfCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e1440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_downsampleByHalfCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedReflectionProbe::*)()>(&::GlobalNamespace::BakedReflectionProbe::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58e1448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe.SendDataToShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedReflectionProbe::*)()>(&::GlobalNamespace::BakedReflectionProbe::SendDataToShaders)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x58e150c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "SendDataToShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedReflectionProbe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedReflectionProbe::*)()>(&::GlobalNamespace::BakedReflectionProbe::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58e1730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__resolutionBeforeDownsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolutionBeforeDownsample;
}
constexpr int32_t const& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__resolutionBeforeDownsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolutionBeforeDownsample;
}
constexpr void GlobalNamespace::BakedReflectionProbe::__cordl_internal_set__resolutionBeforeDownsample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolutionBeforeDownsample = value;
}
constexpr int32_t& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__downsampleByHalfCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsampleByHalfCount;
}
constexpr int32_t const& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__downsampleByHalfCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsampleByHalfCount;
}
constexpr void GlobalNamespace::BakedReflectionProbe::__cordl_internal_set__downsampleByHalfCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downsampleByHalfCount = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
constexpr void GlobalNamespace::BakedReflectionProbe::__cordl_internal_set__size(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void GlobalNamespace::BakedReflectionProbe::__cordl_internal_set__offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr ::UnityW<::GlobalNamespace::ReflectionProbeDataSO>& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__reflectionProbeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeData;
}
constexpr ::UnityW<::GlobalNamespace::ReflectionProbeDataSO> const& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__reflectionProbeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeData;
}
constexpr void GlobalNamespace::BakedReflectionProbe::__cordl_internal_set__reflectionProbeData(::UnityW<::GlobalNamespace::ReflectionProbeDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbeData = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__blackCubemap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackCubemap;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& GlobalNamespace::BakedReflectionProbe::__cordl_internal_get__blackCubemap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackCubemap;
}
constexpr void GlobalNamespace::BakedReflectionProbe::__cordl_internal_set__blackCubemap(::UnityW<::UnityEngine::Cubemap> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blackCubemap = value;
}
inline void GlobalNamespace::BakedReflectionProbe::setStaticF__reflectionProbeBoundsMinPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_reflectionProbeBoundsMinPropertyId", ::GlobalNamespace::BakedReflectionProbe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedReflectionProbe::getStaticF__reflectionProbeBoundsMinPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_reflectionProbeBoundsMinPropertyId", ::GlobalNamespace::BakedReflectionProbe*>();
}
inline void GlobalNamespace::BakedReflectionProbe::setStaticF__reflectionProbeBoundsMaxPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_reflectionProbeBoundsMaxPropertyId", ::GlobalNamespace::BakedReflectionProbe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedReflectionProbe::getStaticF__reflectionProbeBoundsMaxPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_reflectionProbeBoundsMaxPropertyId", ::GlobalNamespace::BakedReflectionProbe*>();
}
inline void GlobalNamespace::BakedReflectionProbe::setStaticF__reflectionProbePositionPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_reflectionProbePositionPropertyId", ::GlobalNamespace::BakedReflectionProbe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedReflectionProbe::getStaticF__reflectionProbePositionPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_reflectionProbePositionPropertyId", ::GlobalNamespace::BakedReflectionProbe*>();
}
inline void GlobalNamespace::BakedReflectionProbe::setStaticF__reflectionProbeTexture1PropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_reflectionProbeTexture1PropertyId", ::GlobalNamespace::BakedReflectionProbe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedReflectionProbe::getStaticF__reflectionProbeTexture1PropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_reflectionProbeTexture1PropertyId", ::GlobalNamespace::BakedReflectionProbe*>();
}
inline void GlobalNamespace::BakedReflectionProbe::setStaticF__reflectionProbeTexture2PropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_reflectionProbeTexture2PropertyId", ::GlobalNamespace::BakedReflectionProbe*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedReflectionProbe::getStaticF__reflectionProbeTexture2PropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_reflectionProbeTexture2PropertyId", ::GlobalNamespace::BakedReflectionProbe*>();
}
inline ::UnityW<::GlobalNamespace::ReflectionProbeDataSO> GlobalNamespace::BakedReflectionProbe::get_reflectionProbeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_reflectionProbeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ReflectionProbeDataSO>>(this, ___internal_method);
}
inline void GlobalNamespace::BakedReflectionProbe::set_reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(),
                                                                                         { "set_reflectionProbeData", {}, { ::i2c::type_of<::GlobalNamespace::ReflectionProbeDataSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BakedReflectionProbe::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BakedReflectionProbe::get_resolutionBeforeDownsample() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_resolutionBeforeDownsample", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BakedReflectionProbe::get_downsampleByHalfCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "get_downsampleByHalfCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BakedReflectionProbe::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakedReflectionProbe::SendDataToShaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { "SendDataToShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakedReflectionProbe::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedReflectionProbe*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakedReflectionProbe* GlobalNamespace::BakedReflectionProbe::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakedReflectionProbe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedReflectionProbe::BakedReflectionProbe() {}
