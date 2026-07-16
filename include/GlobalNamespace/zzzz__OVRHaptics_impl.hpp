#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHaptics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRHaptics_def.hpp"
#include "GlobalNamespace/zzzz__OVRHapticsClip_def.hpp"
#include "GlobalNamespace/zzzz__OVRHaptics_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.get_SampleRateHz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRHaptics_Config::get_SampleRateHz)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e55f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_SampleRateHz", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.set_SampleRateHz
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRHaptics_Config::set_SampleRateHz)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e55fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_SampleRateHz", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.get_SampleSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRHaptics_Config::get_SampleSizeInBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e56018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_SampleSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.set_SampleSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRHaptics_Config::set_SampleSizeInBytes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e56074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_SampleSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.get_MinimumSafeSamplesQueued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRHaptics_Config::get_MinimumSafeSamplesQueued)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e560d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_MinimumSafeSamplesQueued", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.set_MinimumSafeSamplesQueued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRHaptics_Config::set_MinimumSafeSamplesQueued)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e56130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_MinimumSafeSamplesQueued", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.get_MinimumBufferSamplesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRHaptics_Config::get_MinimumBufferSamplesCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e56190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_MinimumBufferSamplesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.set_MinimumBufferSamplesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRHaptics_Config::set_MinimumBufferSamplesCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e561ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_MinimumBufferSamplesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.get_OptimalBufferSamplesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRHaptics_Config::get_OptimalBufferSamplesCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e5624c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_OptimalBufferSamplesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.set_OptimalBufferSamplesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRHaptics_Config::set_OptimalBufferSamplesCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e562a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_OptimalBufferSamplesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.get_MaximumBufferSamplesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::OVRHaptics_Config::get_MaximumBufferSamplesCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e56308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_MaximumBufferSamplesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.set_MaximumBufferSamplesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::OVRHaptics_Config::set_MaximumBufferSamplesCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e56364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_MaximumBufferSamplesCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_Config.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRHaptics_Config::Load)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5e55040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "Load", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRHaptics_Config::setStaticF__SampleRateHz_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<SampleRateHz>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRHaptics_Config::getStaticF__SampleRateHz_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<SampleRateHz>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>();
}
inline void GlobalNamespace::OVRHaptics_Config::setStaticF__SampleSizeInBytes_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<SampleSizeInBytes>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRHaptics_Config::getStaticF__SampleSizeInBytes_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<SampleSizeInBytes>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>();
}
inline void GlobalNamespace::OVRHaptics_Config::setStaticF__MinimumSafeSamplesQueued_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<MinimumSafeSamplesQueued>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRHaptics_Config::getStaticF__MinimumSafeSamplesQueued_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<MinimumSafeSamplesQueued>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>();
}
inline void GlobalNamespace::OVRHaptics_Config::setStaticF__MinimumBufferSamplesCount_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<MinimumBufferSamplesCount>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRHaptics_Config::getStaticF__MinimumBufferSamplesCount_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<MinimumBufferSamplesCount>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>();
}
inline void GlobalNamespace::OVRHaptics_Config::setStaticF__OptimalBufferSamplesCount_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<OptimalBufferSamplesCount>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRHaptics_Config::getStaticF__OptimalBufferSamplesCount_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<OptimalBufferSamplesCount>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>();
}
inline void GlobalNamespace::OVRHaptics_Config::setStaticF__MaximumBufferSamplesCount_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<MaximumBufferSamplesCount>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRHaptics_Config::getStaticF__MaximumBufferSamplesCount_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<MaximumBufferSamplesCount>k__BackingField", ::GlobalNamespace::OVRHaptics_Config*>();
}
inline int32_t GlobalNamespace::OVRHaptics_Config::get_SampleRateHz() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_SampleRateHz", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRHaptics_Config::set_SampleRateHz(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_SampleRateHz", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRHaptics_Config::get_SampleSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_SampleSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRHaptics_Config::set_SampleSizeInBytes(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_SampleSizeInBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRHaptics_Config::get_MinimumSafeSamplesQueued() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_MinimumSafeSamplesQueued", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRHaptics_Config::set_MinimumSafeSamplesQueued(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_MinimumSafeSamplesQueued", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRHaptics_Config::get_MinimumBufferSamplesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_MinimumBufferSamplesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRHaptics_Config::set_MinimumBufferSamplesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_MinimumBufferSamplesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRHaptics_Config::get_OptimalBufferSamplesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_OptimalBufferSamplesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRHaptics_Config::set_OptimalBufferSamplesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_OptimalBufferSamplesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRHaptics_Config::get_MaximumBufferSamplesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "get_MaximumBufferSamplesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRHaptics_Config::set_MaximumBufferSamplesCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "set_MaximumBufferSamplesCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRHaptics_Config::Load() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_Config*>(), { "Load", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHaptics_Config::OVRHaptics_Config() {}
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsChannel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsChannel::*)(uint32_t)>(&::GlobalNamespace::OVRHaptics_OVRHapticsChannel::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e55404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsChannel.Preempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsChannel::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHaptics_OVRHapticsChannel::Preempt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e563c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Preempt", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsChannel.Queue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsChannel::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHaptics_OVRHapticsChannel::Queue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e564f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Queue", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsChannel.Mix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsChannel::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHaptics_OVRHapticsChannel::Mix)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e565e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Mix", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsChannel.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsChannel::*)()>(&::GlobalNamespace::OVRHaptics_OVRHapticsChannel::Clear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e56ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRHaptics_OVRHapticsOutput*& GlobalNamespace::OVRHaptics_OVRHapticsChannel::__cordl_internal_get_m_output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_output;
}
constexpr ::GlobalNamespace::OVRHaptics_OVRHapticsOutput* const& GlobalNamespace::OVRHaptics_OVRHapticsChannel::__cordl_internal_get_m_output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_output;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsChannel::__cordl_internal_set_m_output(::GlobalNamespace::OVRHaptics_OVRHapticsOutput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_output = value;
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsChannel::_ctor(uint32_t outputIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputIndex);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsChannel::Preempt(::GlobalNamespace::OVRHapticsClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Preempt", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsChannel::Queue(::GlobalNamespace::OVRHapticsClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Queue", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsChannel::Mix(::GlobalNamespace::OVRHapticsClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Mix", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsChannel::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* GlobalNamespace::OVRHaptics_OVRHapticsChannel::New_ctor(uint32_t outputIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(outputIndex));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHaptics_OVRHapticsChannel::OVRHaptics_OVRHapticsChannel() {}
//  Writing Method size for method: ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker.get_ReadCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::*)()>(
    &::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::get_ReadCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e56d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(), { "get_ReadCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker.set_ReadCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::*)(int32_t)>(
    &::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::set_ReadCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e56d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(), { "set_ReadCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker.get_Clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHapticsClip* (::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::*)()>(
    &::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::get_Clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e56d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(), { "get_Clip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker.set_Clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::set_Clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e56da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(),
                                                                                           { "set_Clip", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e56b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::__cordl_internal_get__ReadCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReadCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::__cordl_internal_get__ReadCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReadCount_k__BackingField;
}
constexpr void GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::__cordl_internal_set__ReadCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReadCount_k__BackingField = value;
}
constexpr ::GlobalNamespace::OVRHapticsClip*& GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::__cordl_internal_get__Clip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Clip_k__BackingField;
}
constexpr ::GlobalNamespace::OVRHapticsClip* const& GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::__cordl_internal_get__Clip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Clip_k__BackingField;
}
constexpr void GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::__cordl_internal_set__Clip_k__BackingField(::GlobalNamespace::OVRHapticsClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Clip_k__BackingField = value;
}
inline int32_t GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::get_ReadCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(), { "get_ReadCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::set_ReadCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(), { "set_ReadCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRHapticsClip* GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::get_Clip() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(), { "get_Clip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHapticsClip*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::set_Clip(::GlobalNamespace::OVRHapticsClip* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(),
                                                                                         { "set_Clip", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::_ctor(::GlobalNamespace::OVRHapticsClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker* GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::New_ctor(::GlobalNamespace::OVRHapticsClip* clip) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>(clip));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker() {}
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsOutput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsOutput::*)(uint32_t)>(&::GlobalNamespace::OVRHaptics_OVRHapticsOutput::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5e55280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsOutput.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsOutput::*)()>(&::GlobalNamespace::OVRHaptics_OVRHapticsOutput::Process)> {
  constexpr static std::size_t size = 0x9e4;
  constexpr static std::size_t addrs = 0x5e55578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Process", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsOutput.Preempt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsOutput::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHaptics_OVRHapticsOutput::Preempt)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e563dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Preempt", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsOutput.Queue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsOutput::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHaptics_OVRHapticsOutput::Queue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e5650c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Queue", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsOutput.Mix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsOutput::*)(::GlobalNamespace::OVRHapticsClip*)>(
    &::GlobalNamespace::OVRHaptics_OVRHapticsOutput::Mix)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x5e565fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Mix", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics_OVRHapticsOutput.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRHaptics_OVRHapticsOutput::*)()>(&::GlobalNamespace::OVRHaptics_OVRHapticsOutput::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e56aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_lowLatencyMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lowLatencyMode;
}
constexpr bool const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_lowLatencyMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lowLatencyMode;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_lowLatencyMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_lowLatencyMode = value;
}
constexpr int32_t& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_prevSamplesQueued() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevSamplesQueued;
}
constexpr int32_t const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_prevSamplesQueued() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevSamplesQueued;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_prevSamplesQueued(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_prevSamplesQueued = value;
}
constexpr float_t& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_prevSamplesQueuedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevSamplesQueuedTime;
}
constexpr float_t const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_prevSamplesQueuedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_prevSamplesQueuedTime;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_prevSamplesQueuedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_prevSamplesQueuedTime = value;
}
constexpr int32_t& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_numPredictionHits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numPredictionHits;
}
constexpr int32_t const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_numPredictionHits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numPredictionHits;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_numPredictionHits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_numPredictionHits = value;
}
constexpr int32_t& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_numPredictionMisses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numPredictionMisses;
}
constexpr int32_t const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_numPredictionMisses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numPredictionMisses;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_numPredictionMisses(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_numPredictionMisses = value;
}
constexpr int32_t& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_numUnderruns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numUnderruns;
}
constexpr int32_t const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_numUnderruns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_numUnderruns;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_numUnderruns(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_numUnderruns = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>*&
GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_pendingClips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pendingClips;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>* const&
GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_pendingClips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pendingClips;
}
constexpr void
GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_pendingClips(::System::Collections::Generic::List_1<::GlobalNamespace::OVRHapticsOutput_OVRHaptics_ClipPlaybackTracker*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_pendingClips = value;
}
constexpr uint32_t& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_controller;
}
constexpr uint32_t const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_controller;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_controller(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_controller = value;
}
constexpr ::GlobalNamespace::OVRNativeBuffer*& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_nativeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nativeBuffer;
}
constexpr ::GlobalNamespace::OVRNativeBuffer* const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_m_nativeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nativeBuffer;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_m_nativeBuffer(::GlobalNamespace::OVRNativeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nativeBuffer = value;
}
constexpr int32_t& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_PrevSampleRateHz() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrevSampleRateHz;
}
constexpr int32_t const& GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_get_PrevSampleRateHz() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrevSampleRateHz;
}
constexpr void GlobalNamespace::OVRHaptics_OVRHapticsOutput::__cordl_internal_set_PrevSampleRateHz(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrevSampleRateHz = value;
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsOutput::_ctor(uint32_t controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsOutput::Process() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Process", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsOutput::Preempt(::GlobalNamespace::OVRHapticsClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Preempt", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsOutput::Queue(::GlobalNamespace::OVRHapticsClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Queue", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsOutput::Mix(::GlobalNamespace::OVRHapticsClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Mix", {}, { ::i2c::type_of<::GlobalNamespace::OVRHapticsClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void GlobalNamespace::OVRHaptics_OVRHapticsOutput::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRHaptics_OVRHapticsOutput* GlobalNamespace::OVRHaptics_OVRHapticsOutput::New_ctor(uint32_t controller) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>(controller));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHaptics_OVRHapticsOutput::OVRHaptics_OVRHapticsOutput() {}
//  Writing Method size for method: ::GlobalNamespace::OVRHaptics.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRHaptics::Process)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e55494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics*>(), { "Process", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRHaptics::setStaticF_Channels(::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>, "Channels", ::GlobalNamespace::OVRHaptics*>(
      std::forward<::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*> GlobalNamespace::OVRHaptics::getStaticF_Channels() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>, "Channels", ::GlobalNamespace::OVRHaptics*>();
}
inline void GlobalNamespace::OVRHaptics::setStaticF_LeftChannel(::GlobalNamespace::OVRHaptics_OVRHapticsChannel* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, "LeftChannel", ::GlobalNamespace::OVRHaptics*>(
      std::forward<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(value));
}
inline ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* GlobalNamespace::OVRHaptics::getStaticF_LeftChannel() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, "LeftChannel", ::GlobalNamespace::OVRHaptics*>();
}
inline void GlobalNamespace::OVRHaptics::setStaticF_RightChannel(::GlobalNamespace::OVRHaptics_OVRHapticsChannel* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, "RightChannel", ::GlobalNamespace::OVRHaptics*>(
      std::forward<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*>(value));
}
inline ::GlobalNamespace::OVRHaptics_OVRHapticsChannel* GlobalNamespace::OVRHaptics::getStaticF_RightChannel() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRHaptics_OVRHapticsChannel*, "RightChannel", ::GlobalNamespace::OVRHaptics*>();
}
inline void GlobalNamespace::OVRHaptics::setStaticF_m_outputs(::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>, "m_outputs", ::GlobalNamespace::OVRHaptics*>(
      std::forward<::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*> GlobalNamespace::OVRHaptics::getStaticF_m_outputs() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRHaptics_OVRHapticsOutput*>, "m_outputs", ::GlobalNamespace::OVRHaptics*>();
}
inline void GlobalNamespace::OVRHaptics::Process() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRHaptics*>(), { "Process", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHaptics::OVRHaptics() {}
