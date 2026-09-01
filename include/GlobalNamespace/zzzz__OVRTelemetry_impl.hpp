#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRTelemetry.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint.get_NameHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)()>(&::GlobalNamespace::OVRTelemetry_MarkerPoint::get_NameHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edeb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(), { "get_NameHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)(::StringW)>(&::GlobalNamespace::OVRTelemetry_MarkerPoint::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5edeb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)()>(&::GlobalNamespace::OVRTelemetry_MarkerPoint::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5edeba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::OVRTelemetry_MarkerPoint::get_NameHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(), { "get_NameHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRTelemetry_MarkerPoint::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline void GlobalNamespace::OVRTelemetry_MarkerPoint::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkerPoint>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRTelemetry_MarkerPoint::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTelemetry_MarkerPoint::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTelemetry_MarkerPoint::OVRTelemetry_MarkerPoint(int32_t _NameHandle_k__BackingField) noexcept {
  this->_NameHandle_k__BackingField = _NameHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_MarkerPoint::OVRTelemetry_MarkerPoint() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, int32_t, int64_t, ::StringW)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*, int32_t, int32_t,
                                                                                                                 int64_t)>(&::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Variant, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, bool, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5edec0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                                                { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, int64_t, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5edec24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                                                { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, double_t, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5edec3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                                                { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, uint8_t*, int32_t, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5edec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                            { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, int64_t*, int32_t, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5edec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                            { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, double_t*, int32_t, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5edec8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                         { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, ::GlobalNamespace::OVRPlugin_Bool*, int32_t, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5edeca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                                                             { "MarkerAnnotation",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Bool*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(::StringW, ::by_ref<int32_t>)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t)>(&::GlobalNamespace::OVRTelemetry_TelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)()>(&::GlobalNamespace::OVRTelemetry_TelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edecc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs, ::StringW joinId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, instanceKey, timestampMs, joinId);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPoint(int32_t markerId, ::StringW name, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, name, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPoint(int32_t markerId, ::StringW name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation* annotations, int32_t annotationCount,
                                                                       int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, name, annotations, annotationCount, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW key, ::GlobalNamespace::Qpl_OVRPlugin_Variant value, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, key, value, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, bool annotationValue, int32_t instanceKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                                                           { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, int64_t annotationValue, int32_t instanceKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                                              { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, double_t annotationValue, int32_t instanceKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                                              { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, uint8_t* annotationValues, int32_t count, int32_t instanceKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                          { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValues, count, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, int64_t* annotationValues, int32_t count, int32_t instanceKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                          { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValues, count, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, double_t* annotationValues, int32_t count, int32_t instanceKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                          { "MarkerAnnotation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<double_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValues, count, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::GlobalNamespace::OVRPlugin_Bool* annotationValues, int32_t count,
                                                                            int32_t instanceKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(),
                          { "MarkerAnnotation",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Bool*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValues, count, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::OVRTelemetry_TelemetryClient::CreateMarkerHandle(::StringW name, ::by_ref<int32_t> nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::OVRTelemetry_TelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nameHandle);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry_TelemetryClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTelemetry_TelemetryClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_TelemetryClient::OVRTelemetry_TelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, int32_t, int64_t, ::StringW)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edecc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edeccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, ::StringW, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edecd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, ::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*, int32_t, int32_t,
                                                                                                                     int64_t)>(&::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, ::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Variant, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edecd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(::StringW, ::by_ref<int32_t>)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5edece4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5edecf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)()>(&::GlobalNamespace::OVRTelemetry_NullTelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edeb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs, ::StringW joinId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, instanceKey, timestampMs, joinId);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPoint(int32_t markerId, ::StringW name, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, name, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPoint(int32_t markerId, ::StringW name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation* annotations, int32_t annotationCount,
                                                                           int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, name, annotations, annotationCount, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW key, ::GlobalNamespace::Qpl_OVRPlugin_Variant value, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, key, value, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::OVRTelemetry_NullTelemetryClient::CreateMarkerHandle(::StringW name, ::by_ref<int32_t> nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::OVRTelemetry_NullTelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nameHandle);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_NullTelemetryClient* GlobalNamespace::OVRTelemetry_NullTelemetryClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_NullTelemetryClient::OVRTelemetry_NullTelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, int32_t, int64_t, ::StringW)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5edecf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eded34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, ::StringW, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eded4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, ::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*, int32_t, int32_t,
                                                                                                                    int64_t)>(&::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5eded64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eded84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, ::StringW, ::GlobalNamespace::Qpl_OVRPlugin_Variant, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5eded9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ededb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(::StringW, ::by_ref<int32_t>)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ededd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5edede0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)()>(&::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5edeb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs, ::StringW joinId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, instanceKey, timestampMs, joinId);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPoint(int32_t markerId, ::StringW name, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, name, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPoint(int32_t markerId, ::StringW name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation* annotations, int32_t annotationCount,
                                                                          int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, name, annotations, annotationCount, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW key, ::GlobalNamespace::Qpl_OVRPlugin_Variant value, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, key, value, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::OVRTelemetry_QPLTelemetryClient::CreateMarkerHandle(::StringW name, ::by_ref<int32_t> nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::OVRTelemetry_QPLTelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nameHandle);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient* GlobalNamespace::OVRTelemetry_QPLTelemetryClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::OVRTelemetry_QPLTelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkersAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTelemetry_MarkersAttribute::*)()>(&::GlobalNamespace::OVRTelemetry_MarkersAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ededec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkersAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry_MarkersAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry_MarkersAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_MarkersAttribute* GlobalNamespace::OVRTelemetry_MarkersAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRTelemetry_MarkersAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_MarkersAttribute::OVRTelemetry_MarkersAttribute() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.get_IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRTelemetry::get_IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ede4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "get_IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.get_Client
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetry_TelemetryClient* (*)()>(&::GlobalNamespace::OVRTelemetry::get_Client)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ede4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "get_Client", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(int32_t, int32_t, int64_t)>(&::GlobalNamespace::OVRTelemetry::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ede498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "Start", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType)>(&::GlobalNamespace::OVRTelemetry::SendEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ede5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "SendEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.AddSDKVersionAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker)>(&::GlobalNamespace::OVRTelemetry::AddSDKVersionAnnotation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ede6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "AddSDKVersionAnnotation", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.GetPlayModeOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::OVRTelemetry::GetPlayModeOrigin)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ede874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "GetPlayModeOrigin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.AddPlayModeOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker)>(&::GlobalNamespace::OVRTelemetry::AddPlayModeOrigin)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ede94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "AddPlayModeOrigin", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.GetTelemetrySettingString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::GlobalNamespace::OVRTelemetry::GetTelemetrySettingString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ede9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "GetTelemetrySettingString", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry::setStaticF_InactiveClient(::GlobalNamespace::OVRTelemetry_TelemetryClient* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "InactiveClient", ::GlobalNamespace::OVRTelemetry*>(
      std::forward<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(value));
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry::getStaticF_InactiveClient() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "InactiveClient", ::GlobalNamespace::OVRTelemetry*>();
}
inline void GlobalNamespace::OVRTelemetry::setStaticF_ActiveClient(::GlobalNamespace::OVRTelemetry_TelemetryClient* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "ActiveClient", ::GlobalNamespace::OVRTelemetry*>(
      std::forward<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(value));
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry::getStaticF_ActiveClient() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "ActiveClient", ::GlobalNamespace::OVRTelemetry*>();
}
inline void GlobalNamespace::OVRTelemetry::setStaticF__sdkVersionString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_sdkVersionString", ::GlobalNamespace::OVRTelemetry*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRTelemetry::getStaticF__sdkVersionString() {
  return ::cordl_internals::getStaticField<::StringW, "_sdkVersionString", ::GlobalNamespace::OVRTelemetry*>();
}
inline bool GlobalNamespace::OVRTelemetry::get_IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "get_IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry::get_Client() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "get_Client", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetry::Start(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "Start", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, markerId, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry::SendEvent(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "SendEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Qpl_OVRPlugin_ResultType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, markerId, result);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetry::AddSDKVersionAnnotation(::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "AddSDKVersionAnnotation", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, marker);
}
inline ::StringW GlobalNamespace::OVRTelemetry::GetPlayModeOrigin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "GetPlayModeOrigin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetry::AddPlayModeOrigin(::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "AddPlayModeOrigin", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, marker);
}
inline ::StringW GlobalNamespace::OVRTelemetry::GetTelemetrySettingString(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRTelemetry*>(), { "GetTelemetrySettingString", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry::OVRTelemetry() {}
