#pragma once
#include "GlobalNamespace/zzzz__OVRTelemetry_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetry_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__MarkerPoint.get_NameHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRTelemetry__MarkerPoint::*)()>(
    &::GlobalNamespace::__OVRTelemetry__MarkerPoint::get_NameHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27933ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__MarkerPoint>::get(),
                                                                               "get_NameHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__MarkerPoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__MarkerPoint::*)(::StringW)>(
    &::GlobalNamespace::__OVRTelemetry__MarkerPoint::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27933b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__MarkerPoint>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__MarkerPoint.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__MarkerPoint::*)()>(
    &::GlobalNamespace::__OVRTelemetry__MarkerPoint::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x279343c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__MarkerPoint>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__OVRTelemetry__MarkerPoint::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__OVRTelemetry__MarkerPoint::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline int32_t GlobalNamespace::__OVRTelemetry__MarkerPoint::get_NameHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__MarkerPoint>::get(),
                                                                             "get_NameHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRTelemetry__MarkerPoint::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__MarkerPoint>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void GlobalNamespace::__OVRTelemetry__MarkerPoint::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__MarkerPoint>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRTelemetry__MarkerPoint::__OVRTelemetry__MarkerPoint(int32_t _NameHandle_k__BackingField) noexcept {
  this->_NameHandle_k__BackingField = _NameHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTelemetry__MarkerPoint::__OVRTelemetry__MarkerPoint() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__TelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__TelemetryClient::*)(int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__TelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__TelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__TelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__TelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__TelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__TelemetryClient::*)(
    int32_t, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType, int32_t, int64_t)>(&::GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__TelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTelemetry__TelemetryClient::*)(::StringW, ByRef<int32_t>)>(
    &::GlobalNamespace::__OVRTelemetry__TelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__TelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTelemetry__TelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::__OVRTelemetry__TelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__TelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__TelemetryClient::*)()>(
    &::GlobalNamespace::__OVRTelemetry__TelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27934a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, instanceKey, timestampMs);
}
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
/// @param resultTypeId: ::GlobalNamespace::__OVRPlugin__Qpl__ResultType (default: static_cast<int16_t>(0x2))
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__TelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::__OVRTelemetry__TelemetryClient::CreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::__OVRTelemetry__TelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nameHandle);
}
inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* GlobalNamespace::__OVRTelemetry__TelemetryClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>());
}
inline void GlobalNamespace::__OVRTelemetry__TelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTelemetry__TelemetryClient::__OVRTelemetry__TelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::*)(int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27934ac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27934b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27934b4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::*)(
    int32_t, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType, int32_t, int64_t)>(&::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27934b8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::*)(::StringW, ByRef<int32_t>)>(
    &::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27934bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27934c8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::*)()>(
    &::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x279339c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, instanceKey, timestampMs);
}
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
/// @param resultTypeId: ::GlobalNamespace::__OVRPlugin__Qpl__ResultType (default: static_cast<int16_t>(0x2))
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__NullTelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::__OVRTelemetry__NullTelemetryClient::CreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::__OVRTelemetry__NullTelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nameHandle);
}
inline ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient* GlobalNamespace::__OVRTelemetry__NullTelemetryClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>());
}
inline void GlobalNamespace::__OVRTelemetry__NullTelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient::__OVRTelemetry__NullTelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient.MarkerStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::*)(int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27934d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient.MarkerPointCached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::*)(int32_t, int32_t, int32_t, int64_t)>(
    &::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerPointCached)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27934e4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient.MarkerAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::*)(int32_t, ::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27934fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient.MarkerEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::*)(
    int32_t, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType, int32_t, int64_t)>(&::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerEnd)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2793514;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient.CreateMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::*)(::StringW, ByRef<int32_t>)>(
    &::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::CreateMarkerHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x279352c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient.DestroyMarkerHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::*)(int32_t)>(
    &::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::DestroyMarkerHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x279353c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::*)()>(
    &::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27933a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, instanceKey, timestampMs);
}
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, nameHandle, instanceKey, timestampMs);
}
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
inline void GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, annotationKey, annotationValue, instanceKey);
}
/// @param resultTypeId: ::GlobalNamespace::__OVRPlugin__Qpl__ResultType (default: static_cast<int16_t>(0x2))
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline void GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::MarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, resultTypeId, instanceKey, timestampMs);
}
inline bool GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::CreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, nameHandle);
}
inline bool GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::DestroyMarkerHandle(int32_t nameHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nameHandle);
}
inline ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient* GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>());
}
inline void GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient::__OVRTelemetry__QPLTelemetryClient() {}
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.get_IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRTelemetry::get_IsActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2792ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "get_IsActive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.get_Client
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRTelemetry__TelemetryClient* (*)()>(&::GlobalNamespace::OVRTelemetry::get_Client)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2792ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "get_Client",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(int32_t, int32_t, int64_t)>(&::GlobalNamespace::OVRTelemetry::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2792f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "Start", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.SendEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType)>(&::GlobalNamespace::OVRTelemetry::SendEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x279302c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "SendEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Qpl__ResultType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTelemetry.AddSDKVersionAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::OVRTelemetryMarker)>(
    &::GlobalNamespace::OVRTelemetry::AddSDKVersionAnnotation)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2793168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "AddSDKVersionAnnotation", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTelemetry::setStaticF_InactiveClient(::GlobalNamespace::__OVRTelemetry__TelemetryClient* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTelemetry__TelemetryClient*, "InactiveClient",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>(
      std::forward<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>(value));
}
inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* GlobalNamespace::OVRTelemetry::getStaticF_InactiveClient() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTelemetry__TelemetryClient*, "InactiveClient",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>();
}
inline void GlobalNamespace::OVRTelemetry::setStaticF_ActiveClient(::GlobalNamespace::__OVRTelemetry__TelemetryClient* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRTelemetry__TelemetryClient*, "ActiveClient", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get>(
      std::forward<::GlobalNamespace::__OVRTelemetry__TelemetryClient*>(value));
}
inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* GlobalNamespace::OVRTelemetry::getStaticF_ActiveClient() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRTelemetry__TelemetryClient*, "ActiveClient",
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
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* GlobalNamespace::OVRTelemetry::get_Client() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "get_Client",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRTelemetry__TelemetryClient*, false>(nullptr, ___internal_method);
}
/// @param instanceKey: int32_t (default: static_cast<int32_t>(0x0))
/// @param timestampMs: int64_t (default: static_cast<int64_t>(0xffffffffffffffff))
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetry::Start(int32_t markerId, int32_t instanceKey, int64_t timestampMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "Start", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker, false>(nullptr, ___internal_method, markerId, instanceKey, timestampMs);
}
/// @param result: ::GlobalNamespace::__OVRPlugin__Qpl__ResultType (default: static_cast<int16_t>(0x2))
inline void GlobalNamespace::OVRTelemetry::SendEvent(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "SendEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Qpl__ResultType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerId, result);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRTelemetry::AddSDKVersionAnnotation(::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRTelemetry*>::get(), "AddSDKVersionAnnotation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker, false>(nullptr, ___internal_method, marker);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTelemetry::OVRTelemetry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
