#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProfilingSampler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Profiling/zzzz__CustomSampler_def.hpp"
#include "UnityEngine/Profiling/zzzz__Recorder_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)(::StringW)>(&::UnityEngine::Rendering::ProfilingSampler::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67681a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProfilingSampler::Begin)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6768298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "Begin", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ProfilingSampler::End)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67682d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "End", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6768308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_sampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Profiling::CustomSampler* (::UnityEngine::Rendering::ProfilingSampler::*)()>(
    &::UnityEngine::Rendering::ProfilingSampler::get_sampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6768328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_sampler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.set_sampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)(::UnityEngine::Profiling::CustomSampler*)>(
    &::UnityEngine::Rendering::ProfilingSampler::set_sampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6768330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_sampler", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_inlineSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Profiling::CustomSampler* (::UnityEngine::Rendering::ProfilingSampler::*)()>(
    &::UnityEngine::Rendering::ProfilingSampler::get_inlineSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6768338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_inlineSampler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.set_inlineSampler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)(::UnityEngine::Profiling::CustomSampler*)>(
    &::UnityEngine::Rendering::ProfilingSampler::set_inlineSampler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6768340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_inlineSampler", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6768348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)(::StringW)>(&::UnityEngine::Rendering::ProfilingSampler::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6768350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.set_enableRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)(bool)>(&::UnityEngine::Rendering::ProfilingSampler::set_enableRecording)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6768358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_enableRecording", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_gpuElapsedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::get_gpuElapsedTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6768394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_gpuElapsedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_gpuSampleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::get_gpuSampleCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67683fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_gpuSampleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_cpuElapsedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::get_cpuElapsedTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6768440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_cpuElapsedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_cpuSampleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::get_cpuSampleCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x67684a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_cpuSampleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_inlineCpuElapsedTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::get_inlineCpuElapsedTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67684ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_inlineCpuElapsedTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler.get_inlineCpuSampleCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::get_inlineCpuSampleCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6768554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_inlineCpuSampleCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProfilingSampler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProfilingSampler::*)()>(&::UnityEngine::Rendering::ProfilingSampler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6768598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Profiling::CustomSampler*& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get__sampler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampler_k__BackingField;
}
constexpr ::UnityEngine::Profiling::CustomSampler* const& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get__sampler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampler_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProfilingSampler::__cordl_internal_set__sampler_k__BackingField(::UnityEngine::Profiling::CustomSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sampler_k__BackingField = value;
}
constexpr ::UnityEngine::Profiling::CustomSampler*& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get__inlineSampler_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inlineSampler_k__BackingField;
}
constexpr ::UnityEngine::Profiling::CustomSampler* const& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get__inlineSampler_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inlineSampler_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProfilingSampler::__cordl_internal_set__inlineSampler_k__BackingField(::UnityEngine::Profiling::CustomSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inlineSampler_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Rendering::ProfilingSampler::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name_k__BackingField = value;
}
constexpr ::UnityEngine::Profiling::Recorder*& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get_m_Recorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Recorder;
}
constexpr ::UnityEngine::Profiling::Recorder* const& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get_m_Recorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Recorder;
}
constexpr void UnityEngine::Rendering::ProfilingSampler::__cordl_internal_set_m_Recorder(::UnityEngine::Profiling::Recorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Recorder = value;
}
constexpr ::UnityEngine::Profiling::Recorder*& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get_m_InlineRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineRecorder;
}
constexpr ::UnityEngine::Profiling::Recorder* const& UnityEngine::Rendering::ProfilingSampler::__cordl_internal_get_m_InlineRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineRecorder;
}
constexpr void UnityEngine::Rendering::ProfilingSampler::__cordl_internal_set_m_InlineRecorder(::UnityEngine::Profiling::Recorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineRecorder = value;
}
template <typename TEnum> inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::ProfilingSampler::Get(TEnum marker) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "Get", { ::i2c::class_of<TEnum>() }, { ::i2c::type_of<TEnum>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEnum>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*>(nullptr, ___internal_method, marker);
}
inline void UnityEngine::Rendering::ProfilingSampler::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Rendering::ProfilingSampler::Begin(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "Begin", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::ProfilingSampler::End(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "End", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool UnityEngine::Rendering::ProfilingSampler::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Rendering::ProfilingSampler::get_sampler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_sampler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Profiling::CustomSampler*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProfilingSampler::set_sampler(::UnityEngine::Profiling::CustomSampler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_sampler", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Profiling::CustomSampler* UnityEngine::Rendering::ProfilingSampler::get_inlineSampler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_inlineSampler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Profiling::CustomSampler*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProfilingSampler::set_inlineSampler(::UnityEngine::Profiling::CustomSampler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_inlineSampler", {}, { ::i2c::type_of<::UnityEngine::Profiling::CustomSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::ProfilingSampler::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProfilingSampler::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ProfilingSampler::set_enableRecording(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "set_enableRecording", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::ProfilingSampler::get_gpuElapsedTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_gpuElapsedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProfilingSampler::get_gpuSampleCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_gpuSampleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProfilingSampler::get_cpuElapsedTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_cpuElapsedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProfilingSampler::get_cpuSampleCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_cpuSampleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::ProfilingSampler::get_inlineCpuElapsedTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_inlineCpuElapsedTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ProfilingSampler::get_inlineCpuSampleCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { "get_inlineCpuSampleCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProfilingSampler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProfilingSampler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::ProfilingSampler::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProfilingSampler*>(name));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::ProfilingSampler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProfilingSampler*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProfilingSampler::ProfilingSampler() {}
