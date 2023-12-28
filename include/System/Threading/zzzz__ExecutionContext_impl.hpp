#pragma once
#include "System/Threading/zzzz__ExecutionContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IllogicalCallContext_def.hpp"
#include "System/Threading/zzzz__IAsyncLocal_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Threading/zzzz__ExecutionContextSwitcher_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::__ExecutionContext__Flags::__ExecutionContext__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::__ExecutionContext__Flags::__ExecutionContext__Flags() {}
constexpr ::System::Threading::__ExecutionContext__Flags System::Threading::__ExecutionContext__Flags::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Threading::__ExecutionContext__Flags System::Threading::__ExecutionContext__Flags::IsNewCapture{ static_cast<int32_t>(0x1) };
constexpr ::System::Threading::__ExecutionContext__Flags System::Threading::__ExecutionContext__Flags::IsFlowSuppressed{ static_cast<int32_t>(0x2) };
constexpr ::System::Threading::__ExecutionContext__Flags System::Threading::__ExecutionContext__Flags::IsPreAllocatedDefault{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__ExecutionContext__Reader::*)(::System::Threading::ExecutionContext*)>(
    &::System::Threading::__ExecutionContext__Reader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26183fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.DangerousGetRawExecutionContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::__ExecutionContext__Reader::*)()>(
    &::System::Threading::__ExecutionContext__Reader::DangerousGetRawExecutionContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2618404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                               "DangerousGetRawExecutionContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::__ExecutionContext__Reader::*)()>(
    &::System::Threading::__ExecutionContext__Reader::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26179ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                               "get_IsNull", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.IsDefaultFTContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::__ExecutionContext__Reader::*)(bool)>(
    &::System::Threading::__ExecutionContext__Reader::IsDefaultFTContext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26179fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(), "IsDefaultFTContext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.get_IsFlowSuppressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::__ExecutionContext__Reader::*)()>(
    &::System::Threading::__ExecutionContext__Reader::get_IsFlowSuppressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x261840c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                               "get_IsFlowSuppressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.get_SynchronizationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::__ExecutionContext__Reader::*)()>(
    &::System::Threading::__ExecutionContext__Reader::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2617cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                               "get_SynchronizationContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.get_SynchronizationContextNoFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::__ExecutionContext__Reader::*)()>(
    &::System::Threading::__ExecutionContext__Reader::get_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2617cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                               "get_SynchronizationContextNoFlow", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader (
    ::System::Threading::__ExecutionContext__Reader::*)()>(&::System::Threading::__ExecutionContext__Reader::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2618144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                               "get_LogicalCallContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ExecutionContext__Reader.HasSameLocalValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::__ExecutionContext__Reader::*)(::System::Threading::ExecutionContext*)>(
    &::System::Threading::__ExecutionContext__Reader::HasSameLocalValues)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2617a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(), "HasSameLocalValues", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::__ExecutionContext__Reader::_ctor(::System::Threading::ExecutionContext* ec) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ec);
}
inline ::System::Threading::ExecutionContext* System::Threading::__ExecutionContext__Reader::DangerousGetRawExecutionContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                             "DangerousGetRawExecutionContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*, false>(this, ___internal_method);
}
inline bool System::Threading::__ExecutionContext__Reader::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                             "get_IsNull", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::__ExecutionContext__Reader::IsDefaultFTContext(bool ignoreSyncCtx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(), "IsDefaultFTContext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ignoreSyncCtx);
}
inline bool System::Threading::__ExecutionContext__Reader::get_IsFlowSuppressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                             "get_IsFlowSuppressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::__ExecutionContext__Reader::get_SynchronizationContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                             "get_SynchronizationContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::__ExecutionContext__Reader::get_SynchronizationContextNoFlow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                             "get_SynchronizationContextNoFlow", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader System::Threading::__ExecutionContext__Reader::get_LogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                             "get_LogicalCallContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::__LogicalCallContext__Reader, false>(this, ___internal_method);
}
inline bool System::Threading::__ExecutionContext__Reader::HasSameLocalValues(::System::Threading::ExecutionContext* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ExecutionContext__Reader>::get(), "HasSameLocalValues", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Threading::__ExecutionContext__Reader::__ExecutionContext__Reader(::System::Threading::ExecutionContext* m_ec) noexcept {
  this->m_ec = m_ec;
}
// Ctor Parameters []
constexpr ::System::Threading::__ExecutionContext__Reader::__ExecutionContext__Reader() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::__ExecutionContext__CaptureOptions::__ExecutionContext__CaptureOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Threading::__ExecutionContext__CaptureOptions::__ExecutionContext__CaptureOptions() {}
constexpr ::System::Threading::__ExecutionContext__CaptureOptions System::Threading::__ExecutionContext__CaptureOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Threading::__ExecutionContext__CaptureOptions System::Threading::__ExecutionContext__CaptureOptions::IgnoreSyncCtx{ static_cast<int32_t>(0x1) };
constexpr ::System::Threading::__ExecutionContext__CaptureOptions System::Threading::__ExecutionContext__CaptureOptions::OptimizeDefaultCase{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_isNewCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_isNewCapture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26171f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "get_isNewCapture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_isNewCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::set_isNewCapture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x261720c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_isNewCapture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_isFlowSuppressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::get_isFlowSuppressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2617228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "get_isFlowSuppressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_isFlowSuppressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(
    &::System::Threading::ExecutionContext::set_isFlowSuppressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2617234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_isFlowSuppressed",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_IsPreAllocatedDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_IsPreAllocatedDefault)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2617250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "get_IsPreAllocatedDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261725c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2617264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.SetLocalValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::IAsyncLocal*, ::System::Object*, bool)>(
    &::System::Threading::ExecutionContext::SetLocalValue)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2617294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "SetLocalValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IAsyncLocal*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.OnAsyncLocalContextChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ExecutionContext*)>(
    &::System::Threading::ExecutionContext::OnAsyncLocalContextChanged)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x2616d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "OnAsyncLocalContextChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_LogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26175ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "get_LogicalCallContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_LogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(
    &::System::Threading::ExecutionContext::set_LogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2617658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_LogicalCallContext", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_IllogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IllogicalCallContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_IllogicalCallContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2617660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "get_IllogicalCallContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_IllogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Runtime::Remoting::Messaging::IllogicalCallContext*)>(
    &::System::Threading::ExecutionContext::set_IllogicalCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26176cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_IllogicalCallContext", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_SynchronizationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26176d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "get_SynchronizationContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_SynchronizationContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Threading::SynchronizationContext*)>(
    &::System::Threading::ExecutionContext::set_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26176dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_SynchronizationContext", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.get_SynchronizationContextNoFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::get_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26176e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "get_SynchronizationContextNoFlow", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.set_SynchronizationContextNoFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(::System::Threading::SynchronizationContext*)>(
    &::System::Threading::ExecutionContext::set_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26176ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_SynchronizationContextNoFlow", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)()>(&::System::Threading::ExecutionContext::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26176f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*)>(
    &::System::Threading::ExecutionContext::Run)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2613fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Run", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, bool)>(
    &::System::Threading::ExecutionContext::Run)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26176f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Run", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.RunInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*)>(
    &::System::Threading::ExecutionContext::RunInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x261797c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "RunInternal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.RunInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::ExecutionContext*, ::System::Threading::ContextCallback*, ::System::Object*, bool)>(
    &::System::Threading::ExecutionContext::RunInternal)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2617774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "RunInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.EstablishCopyOnWriteScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Threading::ExecutionContextSwitcher>)>(
    &::System::Threading::ExecutionContext::EstablishCopyOnWriteScope)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2617c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "EstablishCopyOnWriteScope", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.EstablishCopyOnWriteScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Thread*, bool, ByRef<::System::Threading::ExecutionContextSwitcher>)>(
    &::System::Threading::ExecutionContext::EstablishCopyOnWriteScope)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2617a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "EstablishCopyOnWriteScope", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.SetExecutionContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContextSwitcher (*)(::System::Threading::ExecutionContext*, bool)>(
    &::System::Threading::ExecutionContext::SetExecutionContext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2617ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "SetExecutionContext", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.CreateCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::CreateCopy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2617d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "CreateCopy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.CreateMutableCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::ExecutionContext::*)()>(
    &::System::Threading::ExecutionContext::CreateMutableCopy)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2617e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "CreateMutableCopy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.IsFlowSuppressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::ExecutionContext::IsFlowSuppressed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2617f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                               "IsFlowSuppressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Capture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext* (*)()>(&::System::Threading::ExecutionContext::Capture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2610724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Capture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.FastCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext* (*)()>(&::System::Threading::ExecutionContext::FastCapture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26180f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "FastCapture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.Capture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Threading::ExecutionContext* (*)(ByRef<::System::Threading::StackCrawlMark>, ::System::Threading::__ExecutionContext__CaptureOptions)>(&::System::Threading::ExecutionContext::Capture)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2617f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Capture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ExecutionContext__CaptureOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::ExecutionContext::GetObjectData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x261815c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContext::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Threading::ExecutionContext::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x261826c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContext.IsDefaultFTContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContext::*)(bool)>(&::System::Threading::ExecutionContext::IsDefaultFTContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2617a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "IsDefaultFTContext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::ExecutionContext::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Threading::ExecutionContext::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::System::Threading::SynchronizationContext*& System::Threading::ExecutionContext::__get__syncContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& System::Threading::ExecutionContext::__get__syncContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContext;
}
constexpr void System::Threading::ExecutionContext::__set__syncContext(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::SynchronizationContext*& System::Threading::ExecutionContext::__get__syncContextNoFlow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContextNoFlow;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& System::Threading::ExecutionContext::__get__syncContextNoFlow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncContextNoFlow;
}
constexpr void System::Threading::ExecutionContext::__set__syncContextNoFlow(::System::Threading::SynchronizationContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncContextNoFlow)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& System::Threading::ExecutionContext::__get__logicalCallContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicalCallContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::LogicalCallContext*> const& System::Threading::ExecutionContext::__get__logicalCallContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicalCallContext;
}
constexpr void System::Threading::ExecutionContext::__set__logicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logicalCallContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext*& System::Threading::ExecutionContext::__get__illogicalCallContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____illogicalCallContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IllogicalCallContext*> const& System::Threading::ExecutionContext::__get__illogicalCallContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____illogicalCallContext;
}
constexpr void System::Threading::ExecutionContext::__set__illogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____illogicalCallContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::__ExecutionContext__Flags& System::Threading::ExecutionContext::__get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr ::System::Threading::__ExecutionContext__Flags const& System::Threading::ExecutionContext::__get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void System::Threading::ExecutionContext::__set__flags(::System::Threading::__ExecutionContext__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*& System::Threading::ExecutionContext::__get__localValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>*> const&
System::Threading::ExecutionContext::__get__localValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localValues;
}
constexpr void System::Threading::ExecutionContext::__set__localValues(::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*& System::Threading::ExecutionContext::__get__localChangeNotifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChangeNotifications;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*> const&
System::Threading::ExecutionContext::__get__localChangeNotifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localChangeNotifications;
}
constexpr void System::Threading::ExecutionContext::__set__localChangeNotifications(::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localChangeNotifications)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::ExecutionContext::setStaticF_s_dummyDefaultEC(::System::Threading::ExecutionContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::ExecutionContext*, "s_dummyDefaultEC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get>(
      std::forward<::System::Threading::ExecutionContext*>(value));
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::getStaticF_s_dummyDefaultEC() {
  return ::cordl_internals::getStaticField<::System::Threading::ExecutionContext*, "s_dummyDefaultEC",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get>();
}
inline void System::Threading::ExecutionContext::setStaticF_Default(::System::Threading::ExecutionContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::ExecutionContext*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get>(
      std::forward<::System::Threading::ExecutionContext*>(value));
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::Threading::ExecutionContext*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get>();
}
inline bool System::Threading::ExecutionContext::get_isNewCapture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "get_isNewCapture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_isNewCapture(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_isNewCapture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Threading::ExecutionContext::get_isFlowSuppressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                             "get_isFlowSuppressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_isFlowSuppressed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_isFlowSuppressed",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Threading::ExecutionContext::get_IsPreAllocatedDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                             "get_IsPreAllocatedDefault", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ExecutionContext*>());
}
inline void System::Threading::ExecutionContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor(bool isPreAllocatedDefault) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ExecutionContext*>(isPreAllocatedDefault));
}
inline void System::Threading::ExecutionContext::_ctor(bool isPreAllocatedDefault) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isPreAllocatedDefault);
}
inline void System::Threading::ExecutionContext::SetLocalValue(::System::Threading::IAsyncLocal* local, ::System::Object* newValue, bool needChangeNotifications) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "SetLocalValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::IAsyncLocal*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, local, newValue, needChangeNotifications);
}
inline void System::Threading::ExecutionContext::OnAsyncLocalContextChanged(::System::Threading::ExecutionContext* previous, ::System::Threading::ExecutionContext* current) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "OnAsyncLocalContextChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previous, current);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Threading::ExecutionContext::get_LogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                             "get_LogicalCallContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_LogicalCallContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* System::Threading::ExecutionContext::get_IllogicalCallContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                             "get_IllogicalCallContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IllogicalCallContext*, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_IllogicalCallContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IllogicalCallContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::SynchronizationContext* System::Threading::ExecutionContext::get_SynchronizationContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                             "get_SynchronizationContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_SynchronizationContext(::System::Threading::SynchronizationContext* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_SynchronizationContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::SynchronizationContext* System::Threading::ExecutionContext::get_SynchronizationContextNoFlow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(),
                                                                             "get_SynchronizationContextNoFlow", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "set_SynchronizationContextNoFlow", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SynchronizationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Threading::ExecutionContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContext::Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Run", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state);
}
inline void System::Threading::ExecutionContext::Run(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state,
                                                     bool preserveSyncCtx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Run", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state, preserveSyncCtx);
}
inline void System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "RunInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state);
}
inline void System::Threading::ExecutionContext::RunInternal(::System::Threading::ExecutionContext* executionContext, ::System::Threading::ContextCallback* callback, ::System::Object* state,
                                                             bool preserveSyncCtx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "RunInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ContextCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, executionContext, callback, state, preserveSyncCtx);
}
inline void System::Threading::ExecutionContext::EstablishCopyOnWriteScope(ByRef<::System::Threading::ExecutionContextSwitcher> ecsw) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "EstablishCopyOnWriteScope", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ecsw);
}
inline void System::Threading::ExecutionContext::EstablishCopyOnWriteScope(::System::Threading::Thread* currentThread, bool knownNullWindowsIdentity,
                                                                           ByRef<::System::Threading::ExecutionContextSwitcher> ecsw) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "EstablishCopyOnWriteScope", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::ExecutionContextSwitcher>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, currentThread, knownNullWindowsIdentity, ecsw);
}
inline ::System::Threading::ExecutionContextSwitcher System::Threading::ExecutionContext::SetExecutionContext(::System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "SetExecutionContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContextSwitcher, false>(nullptr, ___internal_method, executionContext, preserveSyncCtx);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::CreateCopy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "CreateCopy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*, false>(this, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::CreateMutableCopy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "CreateMutableCopy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*, false>(this, ___internal_method);
}
inline bool System::Threading::ExecutionContext::IsFlowSuppressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "IsFlowSuppressed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::Capture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Capture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::FastCapture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "FastCapture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::Capture(ByRef<::System::Threading::StackCrawlMark> stackMark,
                                                                                           ::System::Threading::__ExecutionContext__CaptureOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "Capture", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ExecutionContext__CaptureOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*, false>(nullptr, ___internal_method, stackMark, options);
}
inline void System::Threading::ExecutionContext::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ExecutionContext*>(info, context));
}
inline void System::Threading::ExecutionContext::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline bool System::Threading::ExecutionContext::IsDefaultFTContext(bool ignoreSyncCtx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContext*>::get(), "IsDefaultFTContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ignoreSyncCtx);
}
// Ctor Parameters []
constexpr ::System::Threading::ExecutionContext::ExecutionContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
