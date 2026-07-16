#pragma once
// IWYU pragma private; include "Meta/XR/Samples/SampleMetadata.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/Samples/zzzz__SampleMetadata_def.hpp"
//  Writing Method size for method: ::Meta::XR::Samples::SampleMetadata.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::SampleMetadata::*)()>(&::Meta::XR::Samples::SampleMetadata::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e4e6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::SampleMetadata.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::SampleMetadata::*)()>(&::Meta::XR::Samples::SampleMetadata::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4e720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::SampleMetadata.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::SampleMetadata::*)()>(&::Meta::XR::Samples::SampleMetadata::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e4e724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::SampleMetadata.OnEditorShutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::SampleMetadata::*)()>(&::Meta::XR::Samples::SampleMetadata::OnEditorShutdown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e4eb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "OnEditorShutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::SampleMetadata.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::SampleMetadata::*)(int32_t)>(&::Meta::XR::Samples::SampleMetadata::SendEvent)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5e4e7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "SendEvent", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Samples::SampleMetadata._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Samples::SampleMetadata::*)()>(&::Meta::XR::Samples::SampleMetadata::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4eb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& Meta::XR::Samples::SampleMetadata::__cordl_internal_get__timestampOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timestampOpen;
}
constexpr float_t const& Meta::XR::Samples::SampleMetadata::__cordl_internal_get__timestampOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timestampOpen;
}
constexpr void Meta::XR::Samples::SampleMetadata::__cordl_internal_set__timestampOpen(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timestampOpen = value;
}
inline void Meta::XR::Samples::SampleMetadata::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::Samples::SampleMetadata::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::Samples::SampleMetadata::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::Samples::SampleMetadata::OnEditorShutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "OnEditorShutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::Samples::SampleMetadata::SendEvent(int32_t eventType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { "SendEvent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void Meta::XR::Samples::SampleMetadata::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::Samples::SampleMetadata*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::Samples::SampleMetadata* Meta::XR::Samples::SampleMetadata::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::Samples::SampleMetadata*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::Samples::SampleMetadata::SampleMetadata() {}
