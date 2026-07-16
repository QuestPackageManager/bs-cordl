#pragma once
// IWYU pragma private; include "System/Exception.hpp"
#include "System/Diagnostics/zzzz__StackTrace_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)()>(&::System::Exception::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c7c9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)()>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7ca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(::StringW)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c7ca20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(::StringW, ::System::Exception*)>(&::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c7ca44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Exception::_ctor)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5c7ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Exception*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_Message)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c7cee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ::i2c::class_of<::System::Exception*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::Exception::*)()>(&::System::Exception::get_Data)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c7d004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ::i2c::class_of<::System::Exception*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetClassName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::GetClassName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c7cfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetClassName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_InnerException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Exception::*)()>(&::System::Exception::get_InnerException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7d068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "get_InnerException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_StackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_StackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7d070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ::i2c::class_of<::System::Exception*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetStackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)(bool)>(&::System::Exception::GetStackTrace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c7d078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetStackTrace", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.SetErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(int32_t)>(&::System::Exception::SetErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7d0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "SetErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::get_Source)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c7d0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ::i2c::class_of<::System::Exception*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)()>(&::System::Exception::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c7d1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ::i2c::class_of<::System::Exception*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)(bool, bool)>(&::System::Exception::ToString)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5c7d1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "ToString", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Exception::GetObjectData)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x5c7d3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ::i2c::class_of<::System::Exception*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Exception::OnDeserialized)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c7d888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.StripFileInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Exception::*)(::StringW, bool)>(&::System::Exception::StripFileInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7d0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "StripFileInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.RestoreExceptionDispatchInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*)>(
    &::System::Exception::RestoreExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c7d8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "RestoreExceptionDispatchInfo", {}, { ::i2c::type_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.get_HResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Exception::*)()>(&::System::Exception::get_HResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7d998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "get_HResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.set_HResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Exception::*)(int32_t)>(&::System::Exception::set_HResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "set_HResult", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Exception::*)()>(&::System::Exception::GetType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c7d05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.GetMessageFromNativeResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception_ExceptionMessageKind)>(&::System::Exception::GetMessageFromNativeResources)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c7d9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetMessageFromNativeResources", {}, { ::i2c::type_of<::System::Exception_ExceptionMessageKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.FixRemotingException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Exception::*)()>(&::System::Exception::FixRemotingException)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c7da4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "FixRemotingException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Exception.ReportUnhandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::System::Exception::ReportUnhandledException)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c7db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "ReportUnhandledException", {}, { ::i2c::type_of<::System::Exception*>() } })));
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
  this->____className = value;
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
  this->____message = value;
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
  this->____data = value;
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
  this->____innerException = value;
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
  this->____helpURL = value;
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
  this->____stackTrace = value;
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
  this->____stackTraceString = value;
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
  this->____remoteStackTraceString = value;
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
  this->____dynamicMethods = value;
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
  this->____source = value;
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
  this->____safeSerializationManager = value;
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*>& System::Exception::__cordl_internal_get_captured_traces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr ::ArrayW<::System::Diagnostics::StackTrace*> const& System::Exception::__cordl_internal_get_captured_traces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___captured_traces;
}
constexpr void System::Exception::__cordl_internal_set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___captured_traces = value;
}
constexpr ::ArrayW<::System::IntPtr>& System::Exception::__cordl_internal_get_native_trace_ips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_trace_ips;
}
constexpr ::ArrayW<::System::IntPtr> const& System::Exception::__cordl_internal_get_native_trace_ips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___native_trace_ips;
}
constexpr void System::Exception::__cordl_internal_set_native_trace_ips(::ArrayW<::System::IntPtr> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___native_trace_ips = value;
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
  ::cordl_internals::setStaticField<::System::Object*, "s_EDILock", ::System::Exception*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Exception::getStaticF_s_EDILock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_EDILock", ::System::Exception*>();
}
inline void System::Exception::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Exception::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Exception::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Exception::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void System::Exception::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Exception*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::Exception::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Exception*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::IDictionary* System::Exception::get_Data() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Exception*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method);
}
inline ::StringW System::Exception::GetClassName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetClassName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Exception* System::Exception::get_InnerException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "get_InnerException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline ::StringW System::Exception::get_StackTrace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Exception*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Exception::GetStackTrace(bool needFileInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetStackTrace", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, needFileInfo);
}
inline void System::Exception::SetErrorCode(int32_t hr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "SetErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hr);
}
inline ::StringW System::Exception::get_Source() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Exception*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Exception::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Exception*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Exception::ToString(bool needFileLineInfo, bool needMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "ToString", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, needFileLineInfo, needMessage);
}
inline void System::Exception::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Exception*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Exception::OnDeserialized(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::StringW System::Exception::StripFileInfo(::StringW stackTrace, bool isRemoteStackTrace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "StripFileInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, stackTrace, isRemoteStackTrace);
}
inline void System::Exception::RestoreExceptionDispatchInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionDispatchInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "RestoreExceptionDispatchInfo", {}, { ::i2c::type_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exceptionDispatchInfo);
}
inline int32_t System::Exception::get_HResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "get_HResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Exception::set_HResult(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "set_HResult", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* System::Exception::GetType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Exception::GetMessageFromNativeResources(::System::Exception_ExceptionMessageKind kind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "GetMessageFromNativeResources", {}, { ::i2c::type_of<::System::Exception_ExceptionMessageKind>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, kind);
}
inline ::System::Exception* System::Exception::FixRemotingException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "FixRemotingException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method);
}
inline void System::Exception::ReportUnhandledException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Exception*>(), { "ReportUnhandledException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception);
}
inline ::System::Exception* System::Exception::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Exception*>());
}
inline ::System::Exception* System::Exception::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Exception*>(message));
}
inline ::System::Exception* System::Exception::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Exception*>(message, innerException));
}
inline ::System::Exception* System::Exception::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Exception*>(info, context));
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
