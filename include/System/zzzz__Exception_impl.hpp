#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__Exception__ExceptionMessageKind::__Exception__ExceptionMessageKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__Exception__ExceptionMessageKind::__Exception__ExceptionMessageKind() {}
constexpr ::System::__Exception__ExceptionMessageKind System::__Exception__ExceptionMessageKind::ThreadAbort{ static_cast<int32_t>(0x1) };
constexpr ::System::__Exception__ExceptionMessageKind System::__Exception__ExceptionMessageKind::ThreadInterrupted{ static_cast<int32_t>(0x2) };
constexpr ::System::__Exception__ExceptionMessageKind System::__Exception__ExceptionMessageKind::OutOfMemory{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Exception.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)()>(&::System::Exception::Init)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25e68f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)()>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25e696c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(::StringW)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25e6988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(::StringW, ::System::Exception*)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25e69b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x25e69f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_Message)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25e6e58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (::System::Exception::*)()>(&::System::Exception::get_Data)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25e6f6c;

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
  constexpr static std::size_t addrs = 0x25e6f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetClassName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_InnerException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Exception::*)()>(&::System::Exception::get_InnerException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e6fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_InnerException",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_StackTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e6fe8;

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
  constexpr static std::size_t addrs = 0x25e6ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetStackTrace", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.SetErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(int32_t)>(&::System::Exception::SetErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e7044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "SetErrorCode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Source
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_Source)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x25e704c;

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
  constexpr static std::size_t addrs = 0x25e7158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)(bool, bool)>(&::System::Exception::ToString)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x25e7164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ToString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Exception::GetObjectData)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x25e7408;

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
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x25e78b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "OnDeserialized", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.StripFileInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Exception::*)(::StringW, bool)>(&::System::Exception::StripFileInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e703c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "StripFileInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.RestoreExceptionDispatchInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(
    &::System::Exception::RestoreExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e7934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "RestoreExceptionDispatchInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_HResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Exception::*)()>(&::System::Exception::get_HResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e79d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_HResult",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.set_HResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Exception::*)(int32_t)>(&::System::Exception::set_HResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e79d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "set_HResult", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Exception::*)()>(&::System::Exception::GetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e6fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetMessageFromNativeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::__Exception__ExceptionMessageKind)>(&::System::Exception::GetMessageFromNativeResources)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x25e79e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetMessageFromNativeResources", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Exception__ExceptionMessageKind>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.FixRemotingException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Exception::*)()>(&::System::Exception::FixRemotingException)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25e7a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "FixRemotingException",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ReportUnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&::System::Exception::ReportUnhandledException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25e7b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ReportUnhandledException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Exception::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Exception::__get__className() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____className;
}
constexpr ::StringW const& System::Exception::__get__className() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____className;
}
constexpr void System::Exception::__set__className(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____className)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__get__message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr ::StringW const& System::Exception::__get__message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____message;
}
constexpr void System::Exception::__set__message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IDictionary*& System::Exception::__get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& System::Exception::__get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void System::Exception::__set__data(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Exception*& System::Exception::__get__innerException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerException;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& System::Exception::__get__innerException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerException;
}
constexpr void System::Exception::__set__innerException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____innerException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__get__helpURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpURL;
}
constexpr ::StringW const& System::Exception::__get__helpURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____helpURL;
}
constexpr void System::Exception::__set__helpURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helpURL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Exception::__get__stackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTrace;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Exception::__get__stackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTrace;
}
constexpr void System::Exception::__set__stackTrace(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stackTrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__get__stackTraceString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTraceString;
}
constexpr ::StringW const& System::Exception::__get__stackTraceString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTraceString;
}
constexpr void System::Exception::__set__stackTraceString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stackTraceString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Exception::__get__remoteStackTraceString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackTraceString;
}
constexpr ::StringW const& System::Exception::__get__remoteStackTraceString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackTraceString;
}
constexpr void System::Exception::__set__remoteStackTraceString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____remoteStackTraceString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Exception::__get__remoteStackIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackIndex;
}
constexpr int32_t const& System::Exception::__get__remoteStackIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteStackIndex;
}
constexpr void System::Exception::__set__remoteStackIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteStackIndex = value;
}
constexpr ::System::Object*& System::Exception::__get__dynamicMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicMethods;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Exception::__get__dynamicMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicMethods;
}
constexpr void System::Exception::__set__dynamicMethods(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dynamicMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Exception::__get__HResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HResult;
}
constexpr int32_t const& System::Exception::__get__HResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HResult;
}
constexpr void System::Exception::__set__HResult(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HResult = value;
}
constexpr ::StringW& System::Exception::__get__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
constexpr ::StringW const& System::Exception::__get__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source;
}
constexpr void System::Exception::__set__source(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SafeSerializationManager*& System::Exception::__get__safeSerializationManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeSerializationManager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SafeSerializationManager*> const& System::Exception::__get__safeSerializationManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeSerializationManager;
}
constexpr void System::Exception::__set__safeSerializationManager(::System::Runtime::Serialization::SafeSerializationManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____safeSerializationManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*>& System::Exception::__get_captured_traces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> const& System::Exception::__get_captured_traces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr void System::Exception::__set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*, ::Array<::System::Diagnostics::StackTrace*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___captured_traces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<void*, ::Array<void*>*>& System::Exception::__get_native_trace_ips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_trace_ips;
}
constexpr ::ArrayW<void*, ::Array<void*>*> const& System::Exception::__get_native_trace_ips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_trace_ips;
}
constexpr void System::Exception::__set_native_trace_ips(::ArrayW<void*, ::Array<void*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___native_trace_ips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Exception::__get_caught_in_unmanaged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caught_in_unmanaged;
}
constexpr int32_t const& System::Exception::__get_caught_in_unmanaged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___caught_in_unmanaged;
}
constexpr void System::Exception::__set_caught_in_unmanaged(int32_t value) {
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Exception* System::Exception::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Exception*>());
}
inline void System::Exception::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Exception* System::Exception::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Exception*>(message));
}
inline void System::Exception::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::System::Exception* System::Exception::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Exception*>(message, innerException));
}
inline void System::Exception::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, innerException);
}
inline ::System::Exception* System::Exception::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Exception*>(info, context));
}
inline void System::Exception::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
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
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Exception* System::Exception::get_InnerException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_InnerException",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline ::StringW System::Exception::get_StackTrace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Exception::GetStackTrace(bool needFileInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetStackTrace", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, needFileInfo);
}
inline void System::Exception::SetErrorCode(int32_t hr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "SetErrorCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ToString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, needFileLineInfo, needMessage);
}
inline void System::Exception::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::Exception::OnDeserialized(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "OnDeserialized", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::StringW System::Exception::StripFileInfo(::StringW stackTrace, bool isRemoteStackTrace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "StripFileInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, stackTrace, isRemoteStackTrace);
}
inline void System::Exception::RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "RestoreExceptionDispatchInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exceptionDispatchInfo);
}
inline int32_t System::Exception::get_HResult() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "get_HResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Exception::set_HResult(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "set_HResult", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* System::Exception::GetType() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Exception::GetMessageFromNativeResources(::System::__Exception__ExceptionMessageKind kind) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "GetMessageFromNativeResources", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Exception__ExceptionMessageKind>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, kind);
}
inline ::System::Exception* System::Exception::FixRemotingException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "FixRemotingException",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void System::Exception::ReportUnhandledException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Exception*>::get(), "ReportUnhandledException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::System::Exception::Exception() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
