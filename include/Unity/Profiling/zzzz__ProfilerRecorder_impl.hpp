#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions::ProfilerRecorder_ControlOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions::ProfilerRecorder_ControlOptions() {}
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions Unity::Profiling::ProfilerRecorder_ControlOptions::Start{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions Unity::Profiling::ProfilerRecorder_ControlOptions::Stop{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions Unity::Profiling::ProfilerRecorder_ControlOptions::Reset{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions Unity::Profiling::ProfilerRecorder_ControlOptions::Release{ static_cast<int32_t>(0x4) };
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions Unity::Profiling::ProfilerRecorder_ControlOptions::SetFilterToCurrentThread{ static_cast<int32_t>(0x5) };
constexpr ::Unity::Profiling::ProfilerRecorder_ControlOptions Unity::Profiling::ProfilerRecorder_ControlOptions::SetToCollectFromAllThreads{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)(
    ::Unity::Profiling::ProfilerCategory, ::cordl_internals::Ptr<char16_t>, int32_t, int32_t, ::Unity::Profiling::ProfilerRecorderOptions)>(&::Unity::Profiling::ProfilerRecorder::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4863f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.StartNew
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerRecorder (*)(
    ::Unity::Profiling::ProfilerCategory, ::StringW, int32_t, ::Unity::Profiling::ProfilerRecorderOptions)>(&::Unity::Profiling::ProfilerRecorder::StartNew)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4864004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "StartNew", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_Valid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x486405c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_Valid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_UnitType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarkerDataUnit (::Unity::Profiling::ProfilerRecorder::*)()>(
    &::Unity::Profiling::ProfilerRecorder::get_UnitType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x48640f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_UnitType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.get_LastValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::get_LastValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x48641dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_LastValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerRecorder (*)(
    ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle, int32_t, ::Unity::Profiling::ProfilerRecorderOptions)>(&::Unity::Profiling::ProfilerRecorder::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4863fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Control
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Profiling::ProfilerRecorder, ::Unity::Profiling::ProfilerRecorder_ControlOptions)>(
    &::Unity::Profiling::ProfilerRecorder::Control)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x48642c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder_ControlOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValueUnitType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarkerDataUnit (*)(::Unity::Profiling::ProfilerRecorder)>(
    &::Unity::Profiling::ProfilerRecorder::GetValueUnitType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x486419c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValueUnitType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetLastValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetLastValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4864228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Profiling::ProfilerRecorder)>(&::Unity::Profiling::ProfilerRecorder::GetValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48640b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4864404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.CheckInitializedAndThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerRecorder::*)()>(&::Unity::Profiling::ProfilerRecorder::CheckInitializedAndThrow)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4864140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                               "CheckInitializedAndThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Create_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>, int32_t, ::Unity::Profiling::ProfilerRecorderOptions, ::ByRef<::Unity::Profiling::ProfilerRecorder>)>(
        &::Unity::Profiling::ProfilerRecorder::Create_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4864268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.Control_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Profiling::ProfilerRecorder>, ::Unity::Profiling::ProfilerRecorder_ControlOptions)>(
    &::Unity::Profiling::ProfilerRecorder::Control_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x486430c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder_ControlOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValueUnitType_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarkerDataUnit (*)(::ByRef<::Unity::Profiling::ProfilerRecorder>)>(
    &::Unity::Profiling::ProfilerRecorder::GetValueUnitType_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4864350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValueUnitType_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetLastValue_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ByRef<::Unity::Profiling::ProfilerRecorder>)>(
    &::Unity::Profiling::ProfilerRecorder::GetLastValue_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x486438c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorder.GetValid_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Profiling::ProfilerRecorder>)>(&::Unity::Profiling::ProfilerRecorder::GetValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48643c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Profiling::ProfilerRecorder::_ctor(::Unity::Profiling::ProfilerCategory category, ::cordl_internals::Ptr<char16_t> statName, int32_t statNameLen, int32_t capacity,
                                                      ::Unity::Profiling::ProfilerRecorderOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category, statName, statNameLen, capacity, options);
}
inline ::Unity::Profiling::ProfilerRecorder Unity::Profiling::ProfilerRecorder::StartNew(::Unity::Profiling::ProfilerCategory category, ::StringW statName, int32_t capacity,
                                                                                         ::Unity::Profiling::ProfilerRecorderOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "StartNew", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorder, false>(nullptr, ___internal_method, category, statName, capacity, options);
}
inline bool Unity::Profiling::ProfilerRecorder::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_Valid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerRecorder::get_UnitType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_UnitType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarkerDataUnit, false>(this, ___internal_method);
}
inline int64_t Unity::Profiling::ProfilerRecorder::get_LastValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "get_LastValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::Unity::Profiling::ProfilerRecorder Unity::Profiling::ProfilerRecorder::Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle statHandle, int32_t maxSampleCount,
                                                                                       ::Unity::Profiling::ProfilerRecorderOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerRecorder, false>(nullptr, ___internal_method, statHandle, maxSampleCount, options);
}
inline void Unity::Profiling::ProfilerRecorder::Control(::Unity::Profiling::ProfilerRecorder handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder_ControlOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, options);
}
inline ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerRecorder::GetValueUnitType(::Unity::Profiling::ProfilerRecorder handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValueUnitType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarkerDataUnit, false>(nullptr, ___internal_method, handle);
}
inline int64_t Unity::Profiling::ProfilerRecorder::GetLastValue(::Unity::Profiling::ProfilerRecorder handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle);
}
inline bool Unity::Profiling::ProfilerRecorder::GetValid(::Unity::Profiling::ProfilerRecorder handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline void Unity::Profiling::ProfilerRecorder::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::CheckInitializedAndThrow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(),
                                                                             "CheckInitializedAndThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Profiling::ProfilerRecorder::Create_Injected(::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle> statHandle, int32_t maxSampleCount,
                                                                ::Unity::Profiling::ProfilerRecorderOptions options, ::ByRef<::Unity::Profiling::ProfilerRecorder> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Create_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorderOptions>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, statHandle, maxSampleCount, options, ret);
}
inline void Unity::Profiling::ProfilerRecorder::Control_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle, ::Unity::Profiling::ProfilerRecorder_ControlOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "Control_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerRecorder_ControlOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, options);
}
inline ::Unity::Profiling::ProfilerMarkerDataUnit Unity::Profiling::ProfilerRecorder::GetValueUnitType_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValueUnitType_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarkerDataUnit, false>(nullptr, ___internal_method, handle);
}
inline int64_t Unity::Profiling::ProfilerRecorder::GetLastValue_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetLastValue_Injected", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, handle);
}
inline bool Unity::Profiling::ProfilerRecorder::GetValid_Injected(::ByRef<::Unity::Profiling::ProfilerRecorder> handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorder>::get(), "GetValid_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Profiling::ProfilerRecorder>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Profiling::ProfilerRecorder::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Profiling::ProfilerRecorder::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorder::ProfilerRecorder(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorder::ProfilerRecorder() {}
constexpr ::Unity::Profiling::ProfilerRecorderOptions Unity::Profiling::ProfilerRecorder::SharedRecorder{ static_cast<int32_t>(0x80) };
