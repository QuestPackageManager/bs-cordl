#pragma once
// IWYU pragma private; include "GlobalNamespace\OculusMetrics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusMetrics.RecordMetrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OculusMetrics* (*)(int32_t)>(&::GlobalNamespace::OculusMetrics::RecordMetrics)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58eef18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "RecordMetrics", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusMetrics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusMetrics::*)(int32_t)>(&::GlobalNamespace::OculusMetrics::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x58eef74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusMetrics.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusMetrics::*)()>(&::GlobalNamespace::OculusMetrics::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ef154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusMetrics.CaptureFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusMetrics::*)()>(&::GlobalNamespace::OculusMetrics::CaptureFrame)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x58ef158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "CaptureFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusMetrics.GenerateListReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OculusMetrics::*)()>(&::GlobalNamespace::OculusMetrics::GenerateListReport)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x58ef35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "GenerateListReport", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusMetrics.GenerateTableReport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OculusMetrics::*)()>(&::GlobalNamespace::OculusMetrics::GenerateTableReport)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x58ef558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "GenerateTableReport", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& GlobalNamespace::OculusMetrics::__cordl_internal_get__metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::OculusMetrics::__cordl_internal_get__metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metrics;
}
constexpr void GlobalNamespace::OculusMetrics::__cordl_internal_set__metrics(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metrics = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::OculusMetrics::__cordl_internal_get__sample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sample;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::OculusMetrics::__cordl_internal_get__sample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sample;
}
constexpr void GlobalNamespace::OculusMetrics::__cordl_internal_set__sample(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sample = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::OculusMetrics::__cordl_internal_get__samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::OculusMetrics::__cordl_internal_get__samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____samples;
}
constexpr void GlobalNamespace::OculusMetrics::__cordl_internal_set__samples(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____samples = value;
}
inline ::GlobalNamespace::OculusMetrics* GlobalNamespace::OculusMetrics::RecordMetrics(int32_t initialFrameCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "RecordMetrics", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OculusMetrics*>(nullptr, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::OculusMetrics::_ctor(int32_t initialFrameCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialFrameCapacity);
}
inline void GlobalNamespace::OculusMetrics::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusMetrics::CaptureFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "CaptureFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OculusMetrics::GenerateListReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "GenerateListReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OculusMetrics::GenerateTableReport() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusMetrics*>(), { "GenerateTableReport", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusMetrics* GlobalNamespace::OculusMetrics::New_ctor(int32_t initialFrameCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusMetrics*>(initialFrameCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OculusMetrics::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OculusMetrics::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusMetrics::OculusMetrics() {}
