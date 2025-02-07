#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetry.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint.get_NameHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)()>(
    &::GlobalNamespace::OVRTelemetry_MarkerPoint::get_NameHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401f6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_MarkerPoint>::get(),
                                                                               "get_NameHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)(::StringW)>(
    &::GlobalNamespace::OVRTelemetry_MarkerPoint::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x401f6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_MarkerPoint>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_MarkerPoint.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_MarkerPoint::*)()>(&::GlobalNamespace::OVRTelemetry_MarkerPoint::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x401f75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_MarkerPoint>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::OVRTelemetry_MarkerPoint::get_NameHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_MarkerPoint>::get(),
                                                                             "get_NameHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRTelemetry_MarkerPoint::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_MarkerPoint>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void GlobalNamespace::OVRTelemetry_MarkerPoint::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_MarkerPoint>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRTelemetry_MarkerPoint::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRTelemetry_MarkerPoint::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTelemetry_MarkerPoint::OVRTelemetry_MarkerPoint(int32_t _NameHandle_k__BackingField) noexcept {
  this->_NameHandle_k__BackingField = _NameHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_MarkerPoint::OVRTelemetry_MarkerPoint() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(
    int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType, int32_t, int64_t)>(&::GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(::StringW, ::ByRef<int32_t>)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_TelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_TelemetryClient::*)()>(
    &::GlobalNamespace::OVRTelemetry_TelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401f7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::OVRTelemetry_TelemetryClient::CreateMarkerHandle(::StringW name, ::ByRef<int32_t> nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::OVRTelemetry_TelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nameHandle);
}
inline void GlobalNamespace::OVRTelemetry_TelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_TelemetryClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry_TelemetryClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTelemetry_TelemetryClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_TelemetryClient::OVRTelemetry_TelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401f7cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401f7d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401f7d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(
    int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType, int32_t, int64_t)>(&::GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x401f7d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(::StringW, ::ByRef<int32_t>)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x401f7dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401f7e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_NullTelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_NullTelemetryClient::*)()>(
    &::GlobalNamespace::OVRTelemetry_NullTelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401f6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::OVRTelemetry_NullTelemetryClient::CreateMarkerHandle(::StringW name, ::ByRef<int32_t> nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::OVRTelemetry_NullTelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nameHandle);
}
inline void GlobalNamespace::OVRTelemetry_NullTelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_NullTelemetryClient* GlobalNamespace::OVRTelemetry_NullTelemetryClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTelemetry_NullTelemetryClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_NullTelemetryClient::OVRTelemetry_NullTelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x401f7f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x401f804;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x401f81c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(
    int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType, int32_t, int64_t)>(&::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x401f834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(::StringW, ::ByRef<int32_t>)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x401f84c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x401f85c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::*)()>(
    &::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x401f6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::OVRTelemetry_QPLTelemetryClient::CreateMarkerHandle(::StringW name, ::ByRef<int32_t> nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::OVRTelemetry_QPLTelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nameHandle);
}
inline void GlobalNamespace::OVRTelemetry_QPLTelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient* GlobalNamespace::OVRTelemetry_QPLTelemetryClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient::OVRTelemetry_QPLTelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.get_IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRTelemetry::get_IsActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x401f200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "get_IsActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.get_Client
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTelemetry_TelemetryClient* (*)()>(&::GlobalNamespace::OVRTelemetry::get_Client)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x401f220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "get_Client",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(int32_t, int32_t, int64_t)>(&::GlobalNamespace::OVRTelemetry::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x401f2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.SendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::GlobalNamespace::Qpl_OVRPlugin_ResultType)>(&::GlobalNamespace::OVRTelemetry::SendEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x401f358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Qpl_OVRPlugin_ResultType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.AddSDKVersionAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker)>(
    &::GlobalNamespace::OVRTelemetry::AddSDKVersionAnnotation)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x401f48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "AddSDKVersionAnnotation", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry::setStaticF_InactiveClient(::GlobalNamespace::OVRTelemetry_TelemetryClient* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "InactiveClient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>(
      std::forward<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(value));
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry::getStaticF_InactiveClient() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "InactiveClient",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>();
}
inline void GlobalNamespace::OVRTelemetry::setStaticF_ActiveClient(::GlobalNamespace::OVRTelemetry_TelemetryClient* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "ActiveClient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>(
      std::forward<::GlobalNamespace::OVRTelemetry_TelemetryClient*>(value));
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry::getStaticF_ActiveClient() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRTelemetry_TelemetryClient*, "ActiveClient",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>();
}
inline void GlobalNamespace::OVRTelemetry::setStaticF__sdkVersionString(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_sdkVersionString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRTelemetry::getStaticF__sdkVersionString() {
  return ::cordl_internals::getStaticField<::StringW, "_sdkVersionString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>();
}
inline bool GlobalNamespace::OVRTelemetry::get_IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "get_IsActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* GlobalNamespace::OVRTelemetry::get_Client() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "get_Client",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetry_TelemetryClient*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetry::Start(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker, false>(nullptr, ___internal_method, markerId, instanceKey, timestampMs);
}
inline void GlobalNamespace::OVRTelemetry::SendEvent(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "SendEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Qpl_OVRPlugin_ResultType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerId, result);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetry::AddSDKVersionAnnotation(::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "AddSDKVersionAnnotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker, false>(nullptr, ___internal_method, marker);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry::OVRTelemetry() {}
