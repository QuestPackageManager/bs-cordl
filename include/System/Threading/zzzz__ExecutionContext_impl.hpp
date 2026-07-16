#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IllogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__ContextCallback_1_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContextSwitcher_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ExecutionContext_Flags::ExecutionContext_Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::ExecutionContext_Flags::ExecutionContext_Flags() {}
constexpr ::System::Threading::ExecutionContext_Flags System::Threading::ExecutionContext_Flags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Threading::ExecutionContext_Flags System::Threading::ExecutionContext_Flags::IsNewCapture{ static_cast<int32_t>(0x1) };
constexpr ::System::Threading::ExecutionContext_Flags System::Threading::ExecutionContext_Flags::IsFlowSuppressed{ static_cast<int32_t>(0x2) };
constexpr ::System::Threading::ExecutionContext_Flags System::Threading::ExecutionContext_Flags::IsPreAllocatedDefault{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext_Reader::*)(::System::Threading::ExecutionContext*)>(
    &::System::Threading::ExecutionContext_Reader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caf9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.DangerousGetRawExecutionContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::ExecutionContext_Reader::*)()>(
    &::System::Threading::ExecutionContext_Reader::DangerousGetRawExecutionContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caf9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "DangerousGetRawExecutionContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext_Reader::*)()>(&::System::Threading::ExecutionContext_Reader::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5caf00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.IsDefaultFTContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext_Reader::*)(bool)>(&::System::Threading::ExecutionContext_Reader::IsDefaultFTContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5caf01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "IsDefaultFTContext", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.get_IsFlowSuppressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext_Reader::*)()>(&::System::Threading::ExecutionContext_Reader::get_IsFlowSuppressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5caf9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_IsFlowSuppressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.get_SynchronizationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::ExecutionContext_Reader::*)()>(
    &::System::Threading::ExecutionContext_Reader::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5caf2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_SynchronizationContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.get_SynchronizationContextNoFlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::ExecutionContext_Reader::*)()>(
    &::System::Threading::ExecutionContext_Reader::get_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5caf300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_SynchronizationContextNoFlow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader (::System::Threading::ExecutionContext_Reader::*)()>(
    &::System::Threading::ExecutionContext_Reader::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5caf734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_LogicalCallContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext_Reader.HasSameLocalValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext_Reader::*)(::System::Threading::ExecutionContext*)>(
    &::System::Threading::ExecutionContext_Reader::HasSameLocalValues)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5caf098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "HasSameLocalValues", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::ExecutionContext_Reader::_ctor(::System::Threading::ExecutionContext* ec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ec);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext_Reader::DangerousGetRawExecutionContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "DangerousGetRawExecutionContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(*this, ___internal_method);
}
inline bool System::Threading::ExecutionContext_Reader::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Threading::ExecutionContext_Reader::IsDefaultFTContext(bool ignoreSyncCtx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "IsDefaultFTContext", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ignoreSyncCtx);
}
inline bool System::Threading::ExecutionContext_Reader::get_IsFlowSuppressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_IsFlowSuppressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::ExecutionContext_Reader::get_SynchronizationContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_SynchronizationContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(*this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::ExecutionContext_Reader::get_SynchronizationContextNoFlow() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_SynchronizationContextNoFlow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(*this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader System::Threading::ExecutionContext_Reader::get_LogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "get_LogicalCallContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext_Reader>(*this, ___internal_method);
}
inline bool System::Threading::ExecutionContext_Reader::HasSameLocalValues(::System::Threading::ExecutionContext* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext_Reader>(), { "HasSameLocalValues", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ExecutionContext_Reader::ExecutionContext_Reader(::System::Threading::ExecutionContext* m_ec) noexcept {
  this->m_ec = m_ec;
}
// Ctor Parameters []
constexpr ::System::Threading::ExecutionContext_Reader::ExecutionContext_Reader() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ExecutionContext_CaptureOptions::ExecutionContext_CaptureOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::ExecutionContext_CaptureOptions::ExecutionContext_CaptureOptions() {}
constexpr ::System::Threading::ExecutionContext_CaptureOptions System::Threading::ExecutionContext_CaptureOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Threading::ExecutionContext_CaptureOptions System::Threading::ExecutionContext_CaptureOptions::IgnoreSyncCtx{ static_cast<int32_t>(0x1) };
constexpr ::System::Threading::ExecutionContext_CaptureOptions System::Threading::ExecutionContext_CaptureOptions::OptimizeDefaultCase{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_isNewCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_isNewCapture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cae8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_isNewCapture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_isNewCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::set_isNewCapture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cae8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "set_isNewCapture", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_isFlowSuppressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_isFlowSuppressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cae8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_isFlowSuppressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_isFlowSuppressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::set_isFlowSuppressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cae8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "set_isFlowSuppressed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_IsPreAllocatedDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_IsPreAllocatedDefault)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cae8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_IsPreAllocatedDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cae8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cae900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.SetLocalValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::IAsyncLocal*, ::System::Object*, bool)>(&::System::Threading::ExecutionContext::SetLocalValue)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5cae910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                { "SetLocalValue", {}, { ::i2c::type_of<::System::Threading::IAsyncLocal*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.OnAsyncLocalContextChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ExecutionContext*)>(
    &::System::Threading::ExecutionContext::OnAsyncLocalContextChanged)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5cae484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                            { "OnAsyncLocalContextChanged", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5caec48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_LogicalCallContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_LogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(
    &::System::Threading::ExecutionContext::set_LogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caeca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                             { "set_LogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_IllogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IllogicalCallContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_IllogicalCallContext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5caeca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_IllogicalCallContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_IllogicalCallContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Remoting::Messaging::IllogicalCallContext*)>(
    &::System::Threading::ExecutionContext::set_IllogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caed00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                             { "set_IllogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_SynchronizationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caed08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_SynchronizationContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_SynchronizationContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Threading::SynchronizationContext*)>(
    &::System::Threading::ExecutionContext::set_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caed10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                                                           { "set_SynchronizationContext", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_SynchronizationContextNoFlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_SynchronizationContextNoFlow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_SynchronizationContextNoFlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Threading::SynchronizationContext*)>(
    &::System::Threading::ExecutionContext::set_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5caed20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                             { "set_SynchronizationContextNoFlow", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5caed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*)>(
    &::System::Threading::ExecutionContext::Run)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cab584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Threading::ExecutionContext*>(),
                         { "Run", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, bool)>(
    &::System::Threading::ExecutionContext::Run)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5caed2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                             { "Run",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.RunInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*)>(
    &::System::Threading::ExecutionContext::RunInternal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5caef98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Threading::ExecutionContext*>(),
            { "RunInternal", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.RunInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, bool)>(
    &::System::Threading::ExecutionContext::RunInternal)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5caedac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                             { "RunInternal",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.EstablishCopyOnWriteScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Threading::ExecutionContextSwitcher>)>(&::System::Threading::ExecutionContext::EstablishCopyOnWriteScope)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5caf25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                             { "EstablishCopyOnWriteScope", {}, { ::i2c::type_of<::by_ref<::System::Threading::ExecutionContextSwitcher>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.EstablishCopyOnWriteScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Thread*, bool, ::by_ref<::System::Threading::ExecutionContextSwitcher>)>(
    &::System::Threading::ExecutionContext::EstablishCopyOnWriteScope)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5caf0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                         { "EstablishCopyOnWriteScope",
                                           {},
                                           { ::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::ExecutionContextSwitcher>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.SetExecutionContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContextSwitcher (*)(::System::Threading::ExecutionContext*, bool)>(
    &::System::Threading::ExecutionContext::SetExecutionContext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5caf0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                             { "SetExecutionContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.CreateCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::CreateCopy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5caf318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "CreateCopy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.CreateMutableCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::CreateMutableCopy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5caf448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "CreateMutableCopy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.IsFlowSuppressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::ExecutionContext::IsFlowSuppressed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5caf538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "IsFlowSuppressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Capture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (*)()>(&::System::Threading::ExecutionContext::Capture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ca75b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "Capture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.FastCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (*)()>(&::System::Threading::ExecutionContext::FastCapture)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5caf6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "FastCapture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Capture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (*)(::by_ref<::System::Threading::StackCrawlMark>, ::System::Threading::ExecutionContext_CaptureOptions)>(
    &::System::Threading::ExecutionContext::Capture)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5caf56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                            { "Capture", {}, { ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<::System::Threading::ExecutionContext_CaptureOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::ExecutionContext::GetObjectData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5caf74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Threading::ExecutionContext*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContext::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5caf850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.IsDefaultFTContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::IsDefaultFTContext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5caf034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "IsDefaultFTContext", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& System::Threading::ExecutionContext::__cordl_internal_get__syncContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContext;
}
constexpr ::System::Threading::SynchronizationContext* const& System::Threading::ExecutionContext::__cordl_internal_get__syncContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContext;
}
constexpr void System::Threading::ExecutionContext::__cordl_internal_set__syncContext(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncContext = value;
}
constexpr ::System::Threading::SynchronizationContext*& System::Threading::ExecutionContext::__cordl_internal_get__syncContextNoFlow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContextNoFlow;
}
constexpr ::System::Threading::SynchronizationContext* const& System::Threading::ExecutionContext::__cordl_internal_get__syncContextNoFlow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContextNoFlow;
}
constexpr void System::Threading::ExecutionContext::__cordl_internal_set__syncContextNoFlow(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncContextNoFlow = value;
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& System::Threading::ExecutionContext::__cordl_internal_get__logicalCallContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicalCallContext;
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext* const& System::Threading::ExecutionContext::__cordl_internal_get__logicalCallContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicalCallContext;
}
constexpr void System::Threading::ExecutionContext::__cordl_internal_set__logicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logicalCallContext = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext*& System::Threading::ExecutionContext::__cordl_internal_get__illogicalCallContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____illogicalCallContext;
}
constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext* const& System::Threading::ExecutionContext::__cordl_internal_get__illogicalCallContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____illogicalCallContext;
}
constexpr void System::Threading::ExecutionContext::__cordl_internal_set__illogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____illogicalCallContext = value;
}
constexpr ::System::Threading::ExecutionContext_Flags& System::Threading::ExecutionContext::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr ::System::Threading::ExecutionContext_Flags const& System::Threading::ExecutionContext::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void System::Threading::ExecutionContext::__cordl_internal_set__flags(::System::Threading::ExecutionContext_Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*& System::Threading::ExecutionContext::__cordl_internal_get__localValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localValues;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* const& System::Threading::ExecutionContext::__cordl_internal_get__localValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localValues;
}
constexpr void System::Threading::ExecutionContext::__cordl_internal_set__localValues(::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localValues = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*& System::Threading::ExecutionContext::__cordl_internal_get__localChangeNotifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChangeNotifications;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* const& System::Threading::ExecutionContext::__cordl_internal_get__localChangeNotifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChangeNotifications;
}
constexpr void System::Threading::ExecutionContext::__cordl_internal_set__localChangeNotifications(::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localChangeNotifications = value;
}
inline void System::Threading::ExecutionContext::setStaticF_s_dummyDefaultEC(::System::Threading::ExecutionContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::ExecutionContext*, "s_dummyDefaultEC", ::System::Threading::ExecutionContext*>(std::forward<::System::Threading::ExecutionContext*>(value));
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::getStaticF_s_dummyDefaultEC() {
  return ::cordl_internals::getStaticField<::System::Threading::ExecutionContext*, "s_dummyDefaultEC", ::System::Threading::ExecutionContext*>();
}
inline void System::Threading::ExecutionContext::setStaticF_Default(::System::Threading::ExecutionContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::ExecutionContext*, "Default", ::System::Threading::ExecutionContext*>(std::forward<::System::Threading::ExecutionContext*>(value));
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::Threading::ExecutionContext*, "Default", ::System::Threading::ExecutionContext*>();
}
inline bool System::Threading::ExecutionContext::get_isNewCapture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_isNewCapture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_isNewCapture(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "set_isNewCapture", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Threading::ExecutionContext::get_isFlowSuppressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_isFlowSuppressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_isFlowSuppressed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "set_isFlowSuppressed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Threading::ExecutionContext::get_IsPreAllocatedDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_IsPreAllocatedDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::_ctor(bool isPreAllocatedDefault) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPreAllocatedDefault);
}
inline void System::Threading::ExecutionContext::SetLocalValue(::System::Threading::IAsyncLocal* local, ::System::Object* newValue, bool needChangeNotifications) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                              { "SetLocalValue", {}, { ::i2c::type_of<::System::Threading::IAsyncLocal*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, local, newValue, needChangeNotifications);
}
inline void System::Threading::ExecutionContext::OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* previous, ::System::Threading::ExecutionContext* current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                       { "OnAsyncLocalContextChanged", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previous, current);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Threading::ExecutionContext::get_LogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_LogicalCallContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                           { "set_LogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* System::Threading::ExecutionContext::get_IllogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_IllogicalCallContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                           { "set_IllogicalCallContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::SynchronizationContext* System::Threading::ExecutionContext::get_SynchronizationContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_SynchronizationContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_SynchronizationContext(::System::Threading::SynchronizationContext* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                                                         { "set_SynchronizationContext", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::SynchronizationContext* System::Threading::ExecutionContext::get_SynchronizationContextNoFlow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "get_SynchronizationContextNoFlow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "set_SynchronizationContextNoFlow", {}, { ::i2c::type_of<::System::Threading::SynchronizationContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Threading::ExecutionContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                          { "Run", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, executionContext, callback, state);
}
inline void System::Threading::ExecutionContext::Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state,
                                                     bool preserveSyncCtx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                           { "Run",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, executionContext, callback, state, preserveSyncCtx);
}
inline void System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::ExecutionContext*>(),
          { "RunInternal", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, executionContext, callback, state);
}
inline void System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state,
                                                             bool preserveSyncCtx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                           { "RunInternal",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, executionContext, callback, state, preserveSyncCtx);
}
template <typename TState>
inline void System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback_1<TState>* callback,
                                                             ::by_ref<TState> state) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                          { "RunInternal",
                            { ::i2c::class_of<TState>() },
                            { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback_1<TState>*>(), ::i2c::type_of<::by_ref<TState>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, executionContext, callback, state);
}
template <typename TState>
inline void System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback_1<TState>* callback, ::by_ref<TState> state,
                                                             bool preserveSyncCtx) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                           { "RunInternal",
                                                             { ::i2c::class_of<TState>() },
                                                             { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<::System::Threading::ContextCallback_1<TState>*>(),
                                                               ::i2c::type_of<::by_ref<TState>>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, executionContext, callback, state, preserveSyncCtx);
}
inline void System::Threading::ExecutionContext::EstablishCopyOnWriteScope(::by_ref<::System::Threading::ExecutionContextSwitcher> ecsw) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                           { "EstablishCopyOnWriteScope", {}, { ::i2c::type_of<::by_ref<::System::Threading::ExecutionContextSwitcher>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ecsw);
}
inline void System::Threading::ExecutionContext::EstablishCopyOnWriteScope(::System::Threading::Thread* currentThread, bool knownNullWindowsIdentity,
                                                                           ::by_ref<::System::Threading::ExecutionContextSwitcher> ecsw) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Threading::ExecutionContext*>(),
          { "EstablishCopyOnWriteScope", {}, { ::i2c::type_of<::System::Threading::Thread*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::ExecutionContextSwitcher>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentThread, knownNullWindowsIdentity, ecsw);
}
inline ::System::Threading::ExecutionContextSwitcher System::Threading::ExecutionContext::SetExecutionContext(::System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                                                           { "SetExecutionContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContextSwitcher>(nullptr, ___internal_method, executionContext, preserveSyncCtx);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::CreateCopy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "CreateCopy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(this, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::CreateMutableCopy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "CreateMutableCopy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(this, ___internal_method);
}
inline bool System::Threading::ExecutionContext::IsFlowSuppressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "IsFlowSuppressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::Capture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "Capture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(nullptr, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::FastCapture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "FastCapture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(nullptr, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::Capture(::by_ref<::System::Threading::StackCrawlMark> stackMark,
                                                                                           ::System::Threading::ExecutionContext_CaptureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                          { "Capture", {}, { ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<::System::Threading::ExecutionContext_CaptureOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(nullptr, ___internal_method, stackMark, options);
}
inline void System::Threading::ExecutionContext::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Threading::ExecutionContext::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline bool System::Threading::ExecutionContext::IsDefaultFTContext(bool ignoreSyncCtx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContext*>(), { "IsDefaultFTContext", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ignoreSyncCtx);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ExecutionContext*>());
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor(bool isPreAllocatedDefault) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ExecutionContext*>(isPreAllocatedDefault));
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ExecutionContext*>(info, context));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::ExecutionContext::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::ExecutionContext::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Threading::ExecutionContext::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Threading::ExecutionContext::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::ExecutionContext::ExecutionContext() {}
