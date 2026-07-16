#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicSpectrogramData.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BasicSpectrogramData_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.get_Samples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::get_Samples)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59a0ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "get_Samples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.get_ProcessedSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<float_t>* (::GlobalNamespace::BasicSpectrogramData::*)()>(
    &::GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59a0da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "get_ProcessedSamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59a0f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a1048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.ProcessSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)(::ArrayW<float_t>, ::System::Collections::Generic::List_1<float_t>*)>(
    &::GlobalNamespace::BasicSpectrogramData::ProcessSamples)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x59a0de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(),
                                                             { "ProcessSamples", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData.GetFakeSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)(::ArrayW<float_t>)>(&::GlobalNamespace::BasicSpectrogramData::GetFakeSamples)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x59a0c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "GetFakeSamples", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicSpectrogramData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicSpectrogramData::*)()>(&::GlobalNamespace::BasicSpectrogramData::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59a1050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DeterminismConfig*& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__determinismConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr ::GlobalNamespace::DeterminismConfig* const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__determinismConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____determinismConfig = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr float_t& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__instantChangeThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantChangeThreshold;
}
constexpr float_t const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__instantChangeThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantChangeThreshold;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__instantChangeThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instantChangeThreshold = value;
}
constexpr bool& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasData;
}
constexpr bool const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasData;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__hasData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasData = value;
}
constexpr bool& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasProcessedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasProcessedData;
}
constexpr bool const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__hasProcessedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasProcessedData;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__hasProcessedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasProcessedData = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__samples(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samples = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__processedSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processedSamples;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::BasicSpectrogramData::__cordl_internal_get__processedSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processedSamples;
}
constexpr void GlobalNamespace::BasicSpectrogramData::__cordl_internal_set__processedSamples(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processedSamples = value;
}
inline ::ArrayW<float_t> GlobalNamespace::BasicSpectrogramData::get_Samples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "get_Samples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<float_t>* GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "get_ProcessedSamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<float_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicSpectrogramData::ProcessSamples(::ArrayW<float_t> sourceSamples, ::System::Collections::Generic::List_1<float_t>* processedSamples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(),
                                                           { "ProcessSamples", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceSamples, processedSamples);
}
inline void GlobalNamespace::BasicSpectrogramData::GetFakeSamples(::ArrayW<float_t> samples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { "GetFakeSamples", {}, { ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples);
}
inline void GlobalNamespace::BasicSpectrogramData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BasicSpectrogramData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicSpectrogramData* GlobalNamespace::BasicSpectrogramData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicSpectrogramData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicSpectrogramData::BasicSpectrogramData() {}
