#pragma once
// IWYU pragma private; include "System/Runtime/Interop/UnsafeNativeMethods.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Interop/zzzz__UnsafeNativeMethods_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/Runtime/Interop/zzzz__SafeEventLogWriteHandle_def.hpp"
#include "System/Runtime/Interop/zzzz__UnsafeNativeMethods_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr uint64_t& System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_get_DataPointer() {
  return this->___DataPointer;
}
constexpr uint64_t const& System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_get_DataPointer() const {
  return this->___DataPointer;
}
constexpr void System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_set_DataPointer(uint64_t value) {
  this->___DataPointer = value;
}
constexpr uint32_t& System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_get_Size() {
  return this->___Size;
}
constexpr uint32_t const& System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_get_Size() const {
  return this->___Size;
}
constexpr void System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_set_Size(uint32_t value) {
  this->___Size = value;
}
constexpr int32_t& System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_get_Reserved() {
  return this->___Reserved;
}
constexpr int32_t const& System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_get_Reserved() const {
  return this->___Reserved;
}
constexpr void System::Runtime::Interop::UnsafeNativeMethods_EventData::__cordl_internal_set_Reserved(int32_t value) {
  this->___Reserved = value;
}
// Ctor Parameters [CppParam { name: "DataPointer", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Reserved", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EventData::UnsafeNativeMethods_EventData(uint64_t DataPointer, uint32_t Size, int32_t Reserved) noexcept {
  this->DataPointer = DataPointer;
  this->Size = Size;
  this->Reserved = Reserved;
}
// Ctor Parameters []
constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EventData::UnsafeNativeMethods_EventData() {}
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f6e66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::*)(
    ::ByRef<::System::Guid>, ::ByRefConst<int32_t>, ::ByRefConst<uint8_t>, ::ByRefConst<int64_t>, ::ByRefConst<int64_t>, ::ByRefConst<void*>, ::ByRefConst<void*>)>(
    &::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6e6ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::Invoke(::ByRef<::System::Guid> sourceId, ::ByRefConst<int32_t> isEnabled, ::ByRefConst<uint8_t> level,
                                                                                    ::ByRefConst<int64_t> matchAnyKeywords, ::ByRefConst<int64_t> matchAllKeywords, ::ByRefConst<void*> filterData,
                                                                                    ::ByRefConst<void*> callbackContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sourceId, isEnabled, level, matchAnyKeywords, matchAllKeywords, filterData, callbackContext);
}
inline ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::UnsafeNativeMethods_EtwEnableCallback() {}
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventRegister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (*)(::ByRef<::System::Guid>, ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>, ::ByRefConst<void*>, ::ByRef<int64_t>)>(
        &::System::Runtime::Interop::UnsafeNativeMethods::EventRegister)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f6e258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventRegister", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<void*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventUnregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRefConst<int64_t>)>(&::System::Runtime::Interop::UnsafeNativeMethods::EventUnregister)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f6e300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventUnregister", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRefConst<int64_t>, ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>)>(
    &::System::Runtime::Interop::UnsafeNativeMethods::EventEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6e380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRefConst<int64_t>, ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::ByRefConst<uint32_t>,
                                                                                               ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EventData*>)>(
    &::System::Runtime::Interop::UnsafeNativeMethods::EventWrite)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f6e40c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventWrite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<uint32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EventData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventActivityIdControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ByRefConst<int32_t>, ::ByRef<::System::Guid>)>(
    &::System::Runtime::Interop::UnsafeNativeMethods::EventActivityIdControl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f6e4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventActivityIdControl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.ReportEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, uint16_t, uint16_t, uint32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, uint16_t, uint32_t,
                         ::System::Runtime::InteropServices::HandleRef, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Runtime::Interop::UnsafeNativeMethods::ReportEvent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f6e530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "ReportEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::HandleRef>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.RegisterEventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Interop::SafeEventLogWriteHandle* (*)(::StringW, ::StringW)>(
    &::System::Runtime::Interop::UnsafeNativeMethods::RegisterEventSource)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f6e0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "RegisterEventSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventRegister(::ByRef<::System::Guid> providerId,
                                                                             ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*> enableCallback,
                                                                             ::ByRefConst<void*> callbackContext, ::ByRef<int64_t> registrationHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventRegister", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<void*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, providerId, enableCallback, callbackContext, registrationHandle);
}
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventUnregister(::ByRefConst<int64_t> registrationHandle) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventUnregister",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, registrationHandle);
}
inline bool System::Runtime::Interop::UnsafeNativeMethods::EventEnabled(::ByRefConst<int64_t> registrationHandle, ::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, registrationHandle, eventDescriptor);
}
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventWrite(::ByRefConst<int64_t> registrationHandle, ::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor,
                                                                          ::ByRefConst<uint32_t> userDataCount, ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EventData*> userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventWrite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int64_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<uint32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EventData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, registrationHandle, eventDescriptor, userDataCount, userData);
}
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventActivityIdControl(::ByRefConst<int32_t> ControlCode, ::ByRef<::System::Guid> ActivityId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "EventActivityIdControl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRefConst<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, ControlCode, ActivityId);
}
inline bool System::Runtime::Interop::UnsafeNativeMethods::ReportEvent(::System::Runtime::InteropServices::SafeHandle* hEventLog, uint16_t type, uint16_t category, uint32_t eventID,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> userSID, uint16_t numStrings, uint32_t dataLen,
                                                                       ::System::Runtime::InteropServices::HandleRef strings, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "ReportEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::SafeHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::HandleRef>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hEventLog, type, category, eventID, userSID, numStrings, dataLen, strings, rawData);
}
inline ::System::Runtime::Interop::SafeEventLogWriteHandle* System::Runtime::Interop::UnsafeNativeMethods::RegisterEventSource(::StringW uncServerName, ::StringW sourceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Interop::UnsafeNativeMethods*>::get(), "RegisterEventSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Interop::SafeEventLogWriteHandle*, false>(nullptr, ___internal_method, uncServerName, sourceName);
}
// Ctor Parameters []
constexpr ::System::Runtime::Interop::UnsafeNativeMethods::UnsafeNativeMethods() {}
