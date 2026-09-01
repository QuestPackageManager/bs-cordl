#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberMovementData.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__IBladeMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_bladeSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::get_bladeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370a684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "get_bladeSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_lastAddedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::SaberMovementData::*)()>(
    &::GlobalNamespace::SaberMovementData::get_lastAddedData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x370a68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "get_lastAddedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.get_prevAddedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BladeMovementDataElement (::GlobalNamespace::SaberMovementData::*)()>(
    &::GlobalNamespace::SaberMovementData::get_prevAddedData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x370a6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "get_prevAddedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x370a744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.AddDataProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::SaberMovementData::AddDataProcessor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x370a7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "AddDataProcessor", {}, { ::i2c::type_of<::GlobalNamespace::ISaberMovementDataProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.RemoveDataProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::SaberMovementData::RemoveDataProcessor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x370a848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(),
                                                                                           { "RemoveDataProcessor", {}, { ::i2c::type_of<::GlobalNamespace::ISaberMovementDataProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.RequestLastDataProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::GlobalNamespace::ISaberMovementDataProcessor*)>(
    &::GlobalNamespace::SaberMovementData::RequestLastDataProcessing)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x370a8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "RequestLastDataProcessing", {}, { ::i2c::type_of<::GlobalNamespace::ISaberMovementDataProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.AddNewData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::SaberMovementData::AddNewData)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x370aa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(),
                                                             { "AddNewData", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeAdditionalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberMovementData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t, ::by_ref<::UnityEngine::Vector3>,
                                                                                                      ::by_ref<float_t>)>(&::GlobalNamespace::SaberMovementData::ComputeAdditionalData)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x370aeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeAdditionalData",
                                                                                        {},
                                                                                        { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputePlaneNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SaberMovementData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SaberMovementData::ComputePlaneNormal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x370b0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputePlaneNormal",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeCutPlaneNormal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x370b230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeCutPlaneNormal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)(float_t)>(&::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370b2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeSwingRating", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)()>(&::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x370b58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeSwingRating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberMovementData.ComputeSwingRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberMovementData::*)(bool, float_t)>(&::GlobalNamespace::SaberMovementData::ComputeSwingRating)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x370b2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeSwingRating", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement>& GlobalNamespace::SaberMovementData::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement> const& GlobalNamespace::SaberMovementData::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::SaberMovementData::__cordl_internal_set__data(::ArrayW<::GlobalNamespace::BladeMovementDataElement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>*& GlobalNamespace::SaberMovementData::__cordl_internal_get__dataProcessors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProcessors;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>* const& GlobalNamespace::SaberMovementData::__cordl_internal_get__dataProcessors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataProcessors;
}
constexpr void GlobalNamespace::SaberMovementData::__cordl_internal_set__dataProcessors(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataProcessors = value;
}
constexpr int32_t& GlobalNamespace::SaberMovementData::__cordl_internal_get__nextAddIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextAddIndex;
}
constexpr int32_t const& GlobalNamespace::SaberMovementData::__cordl_internal_get__nextAddIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextAddIndex;
}
constexpr void GlobalNamespace::SaberMovementData::__cordl_internal_set__nextAddIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextAddIndex = value;
}
constexpr int32_t& GlobalNamespace::SaberMovementData::__cordl_internal_get__validCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validCount;
}
constexpr int32_t const& GlobalNamespace::SaberMovementData::__cordl_internal_get__validCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validCount;
}
constexpr void GlobalNamespace::SaberMovementData::__cordl_internal_set__validCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validCount = value;
}
constexpr float_t& GlobalNamespace::SaberMovementData::__cordl_internal_get__bladeSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bladeSpeed;
}
constexpr float_t const& GlobalNamespace::SaberMovementData::__cordl_internal_get__bladeSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bladeSpeed;
}
constexpr void GlobalNamespace::SaberMovementData::__cordl_internal_set__bladeSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bladeSpeed = value;
}
inline float_t GlobalNamespace::SaberMovementData::get_bladeSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "get_bladeSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::SaberMovementData::get_lastAddedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "get_lastAddedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement>(this, ___internal_method);
}
inline ::GlobalNamespace::BladeMovementDataElement GlobalNamespace::SaberMovementData::get_prevAddedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "get_prevAddedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BladeMovementDataElement>(this, ___internal_method);
}
inline void GlobalNamespace::SaberMovementData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberMovementData::AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "AddDataProcessor", {}, { ::i2c::type_of<::GlobalNamespace::ISaberMovementDataProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::SaberMovementData::RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(),
                                                                                         { "RemoveDataProcessor", {}, { ::i2c::type_of<::GlobalNamespace::ISaberMovementDataProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::SaberMovementData::RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor* dataProcessor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(),
                                                                                         { "RequestLastDataProcessing", {}, { ::i2c::type_of<::GlobalNamespace::ISaberMovementDataProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataProcessor);
}
inline void GlobalNamespace::SaberMovementData::AddNewData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(),
                                                           { "AddNewData", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topPos, bottomPos, time);
}
inline void GlobalNamespace::SaberMovementData::ComputeAdditionalData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, int32_t idxOffset,
                                                                      ::by_ref<::UnityEngine::Vector3> segmentNormal, ::by_ref<float_t> segmentAngle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeAdditionalData",
                                                                                      {},
                                                                                      { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(),
                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topPos, bottomPos, idxOffset, segmentNormal, segmentAngle);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SaberMovementData::ComputePlaneNormal(::UnityEngine::Vector3 tp0, ::UnityEngine::Vector3 bp0, ::UnityEngine::Vector3 tp1, ::UnityEngine::Vector3 bp1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputePlaneNormal",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                            ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, tp0, bp0, tp1, bp1);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SaberMovementData::ComputeCutPlaneNormal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeCutPlaneNormal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberMovementData::ComputeSwingRating(float_t overrideSegmentAngle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeSwingRating", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, overrideSegmentAngle);
}
inline float_t GlobalNamespace::SaberMovementData::ComputeSwingRating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeSwingRating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberMovementData::ComputeSwingRating(bool overrideSegmenAngle, float_t overrideValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberMovementData*>(), { "ComputeSwingRating", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, overrideSegmenAngle, overrideValue);
}
inline ::GlobalNamespace::SaberMovementData* GlobalNamespace::SaberMovementData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberMovementData*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBladeMovementData"
constexpr GlobalNamespace::SaberMovementData::operator ::GlobalNamespace::IBladeMovementData*() noexcept {
  return static_cast<::GlobalNamespace::IBladeMovementData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBladeMovementData"
constexpr ::GlobalNamespace::IBladeMovementData* GlobalNamespace::SaberMovementData::i___GlobalNamespace__IBladeMovementData() noexcept {
  return static_cast<::GlobalNamespace::IBladeMovementData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISaberMovementData"
constexpr GlobalNamespace::SaberMovementData::operator ::GlobalNamespace::ISaberMovementData*() noexcept {
  return static_cast<::GlobalNamespace::ISaberMovementData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISaberMovementData"
constexpr ::GlobalNamespace::ISaberMovementData* GlobalNamespace::SaberMovementData::i___GlobalNamespace__ISaberMovementData() noexcept {
  return static_cast<::GlobalNamespace::ISaberMovementData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberMovementData::SaberMovementData() {}
