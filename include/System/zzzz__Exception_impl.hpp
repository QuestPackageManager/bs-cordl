#pragma once
// IWYU pragma private; include "System/Exception.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Exception_ExceptionMessageKind::Exception_ExceptionMessageKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Exception_ExceptionMessageKind::Exception_ExceptionMessageKind() {}
constexpr ::System::Exception_ExceptionMessageKind System::Exception_ExceptionMessageKind::ThreadAbort{ static_cast<int32_t>(0x1) };
constexpr ::System::Exception_ExceptionMessageKind System::Exception_ExceptionMessageKind::ThreadInterrupted{ static_cast<int32_t>(0x2) };
constexpr ::System::Exception_ExceptionMessageKind System::Exception_ExceptionMessageKind::OutOfMemory{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Exception.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)()>(&::System::Exception::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e22bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)()>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3e22c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(::StringW)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3e22c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(::StringW, ::System::Exception*)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e22cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x3e22ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_Message)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3e23140;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::System::Exception::*)()>(&::System::Exception::get_Data)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3e23254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::GetClassName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3e23218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetClassName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_InnerException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Exception::*)()>(&::System::Exception::get_InnerException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e232c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_InnerException",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_StackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e232c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetStackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)(bool)>(&::System::Exception::GetStackTrace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e232d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetStackTrace", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.SetErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(int32_t)>(&::System::Exception::SetErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e23324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "SetErrorCode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_Source)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3e2332c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3e23438;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)(bool, bool)>(&::System::Exception::ToString)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3e23444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Exception::GetObjectData)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x3e2362c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.OnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Exception::OnDeserialized)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e23ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.StripFileInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)(::StringW, bool)>(&::System::Exception::StripFileInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e2331c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "StripFileInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.RestoreExceptionDispatchInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(
    &::System::Exception::RestoreExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3e23b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "RestoreExceptionDispatchInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_HResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Exception::*)()>(&::System::Exception::get_HResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e23be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_HResult",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.set_HResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(int32_t)>(&::System::Exception::set_HResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e23bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "set_HResult", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Exception::*)()>(&::System::Exception::GetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e232b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetMessageFromNativeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception_ExceptionMessageKind)>(&::System::Exception::GetMessageFromNativeResources)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3e23bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetMessageFromNativeResources", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception_ExceptionMessageKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.FixRemotingException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Exception::*)()>(&::System::Exception::FixRemotingException)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3e23c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "FixRemotingException",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ReportUnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::System::Exception::ReportUnhandledException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e23d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ReportUnhandledException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Exception::__cordl_internal_get__className() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____className;
}
constexpr ::StringW const& System::Exception::__cordl_internal_get__className() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____className;
}
constexpr void System::Exception::__cordl_internal_set__className(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____className)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__cordl_internal_get__message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr ::StringW const& System::Exception::__cordl_internal_get__message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr void System::Exception::__cordl_internal_set__message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& System::Exception::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::System::Collections::IDictionary* const& System::Exception::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void System::Exception::__cordl_internal_set__data(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Exception*& System::Exception::__cordl_internal_get__innerException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerException;
}
constexpr ::System::Exception* const& System::Exception::__cordl_internal_get__innerException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerException;
}
constexpr void System::Exception::__cordl_internal_set__innerException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____innerException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__cordl_internal_get__helpURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpURL;
}
constexpr ::StringW const& System::Exception::__cordl_internal_get__helpURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpURL;
}
constexpr void System::Exception::__cordl_internal_set__helpURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helpURL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Exception::__cordl_internal_get__stackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTrace;
}
constexpr ::System::Object* const& System::Exception::__cordl_internal_get__stackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTrace;
}
constexpr void System::Exception::__cordl_internal_set__stackTrace(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stackTrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__cordl_internal_get__stackTraceString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTraceString;
}
constexpr ::StringW const& System::Exception::__cordl_internal_get__stackTraceString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTraceString;
}
constexpr void System::Exception::__cordl_internal_set__stackTraceString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stackTraceString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__cordl_internal_get__remoteStackTraceString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackTraceString;
}
constexpr ::StringW const& System::Exception::__cordl_internal_get__remoteStackTraceString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackTraceString;
}
constexpr void System::Exception::__cordl_internal_set__remoteStackTraceString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____remoteStackTraceString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Exception::__cordl_internal_get__remoteStackIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackIndex;
}
constexpr int32_t const& System::Exception::__cordl_internal_get__remoteStackIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackIndex;
}
constexpr void System::Exception::__cordl_internal_set__remoteStackIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteStackIndex = value;
}
constexpr ::System::Object*& System::Exception::__cordl_internal_get__dynamicMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicMethods;
}
constexpr ::System::Object* const& System::Exception::__cordl_internal_get__dynamicMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicMethods;
}
constexpr void System::Exception::__cordl_internal_set__dynamicMethods(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dynamicMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Exception::__cordl_internal_get__HResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HResult;
}
constexpr int32_t const& System::Exception::__cordl_internal_get__HResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HResult;
}
constexpr void System::Exception::__cordl_internal_set__HResult(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HResult = value;
}
constexpr ::StringW& System::Exception::__cordl_internal_get__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
constexpr ::StringW const& System::Exception::__cordl_internal_get__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
constexpr void System::Exception::__cordl_internal_set__source(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SafeSerializationManager*& System::Exception::__cordl_internal_get__safeSerializationManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeSerializationManager;
}
constexpr ::System::Runtime::Serialization::SafeSerializationManager* const& System::Exception::__cordl_internal_get__safeSerializationManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeSerializationManager;
}
constexpr void System::Exception::__cordl_internal_set__safeSerializationManager(::System::Runtime::Serialization::SafeSerializationManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____safeSerializationManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>& System::Exception::__cordl_internal_get_captured_traces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> const& System::Exception::__cordl_internal_get_captured_traces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr void System::Exception::__cordl_internal_set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___captured_traces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*>& System::Exception::__cordl_internal_get_native_trace_ips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_trace_ips;
}
constexpr ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> const& System::Exception::__cordl_internal_get_native_trace_ips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_trace_ips;
}
constexpr void System::Exception::__cordl_internal_set_native_trace_ips(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___native_trace_ips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Exception::__cordl_internal_get_caught_in_unmanaged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caught_in_unmanaged;
}
constexpr int32_t const& System::Exception::__cordl_internal_get_caught_in_unmanaged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caught_in_unmanaged;
}
constexpr void System::Exception::__cordl_internal_set_caught_in_unmanaged(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___caught_in_unmanaged = value;
}
inline void System::Exception::setStaticF_s_EDILock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_EDILock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Exception::getStaticF_s_EDILock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_EDILock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get>();
}
inline void System::Exception::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Exception::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Exception::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void System::Exception::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, innerException);
}
inline void System::Exception::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::StringW System::Exception::get_Message() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Exception::get_Data() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method);
}
inline ::StringW System::Exception::GetClassName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetClassName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Exception* System::Exception::get_InnerException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_InnerException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline ::StringW System::Exception::get_StackTrace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Exception::GetStackTrace(bool needFileInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetStackTrace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, needFileInfo);
}
inline void System::Exception::SetErrorCode(int32_t hr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "SetErrorCode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hr);
}
inline ::StringW System::Exception::get_Source() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Exception::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Exception::ToString(bool needFileLineInfo, bool needMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, needFileLineInfo, needMessage);
}
inline void System::Exception::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Exception::OnDeserialized(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "OnDeserialized", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::StringW System::Exception::StripFileInfo(::StringW stackTrace, bool isRemoteStackTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "StripFileInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, stackTrace, isRemoteStackTrace);
}
inline void System::Exception::RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "RestoreExceptionDispatchInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exceptionDispatchInfo);
}
inline int32_t System::Exception::get_HResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_HResult",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Exception::set_HResult(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "set_HResult", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* System::Exception::GetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Exception::GetMessageFromNativeResources(::System::Exception_ExceptionMessageKind kind) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetMessageFromNativeResources", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception_ExceptionMessageKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, kind);
}
inline ::System::Exception* System::Exception::FixRemotingException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "FixRemotingException",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void System::Exception::ReportUnhandledException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ReportUnhandledException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception);
}
inline ::System::Exception* System::Exception::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Exception*>());
}
inline ::System::Exception* System::Exception::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Exception*>(message));
}
inline ::System::Exception* System::Exception::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Exception*>(message, innerException));
}
inline ::System::Exception* System::Exception::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Exception*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Exception::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Exception::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Exception::Exception() {}
