#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContext_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CallContext::*)()>(
    &::System::Runtime::Remoting::Messaging::CallContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2598ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.SetCurrentCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(
    &::System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2598ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(), "SetCurrentCallContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.SetLogicalCallContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(
        &::System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2598ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(), "SetLogicalCallContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.LogicalGetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::StringW)>(&::System::Runtime::Remoting::Messaging::CallContext::LogicalGetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2598f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(), "LogicalGetData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CallContext.LogicalSetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Object*)>(&::System::Runtime::Remoting::Messaging::CallContext::LogicalSetData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2598f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(),
                                                                               "LogicalSetData", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Messaging::CallContext* System::Runtime::Remoting::Messaging::CallContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Messaging::CallContext*>());
}
inline void System::Runtime::Remoting::Messaging::CallContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CallContext::SetCurrentCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(), "SetCurrentCallContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, ctx);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext*
System::Runtime::Remoting::Messaging::CallContext::SetLogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(), "SetLogicalCallContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::LogicalCallContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*, false>(nullptr, ___internal_method, callCtx);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CallContext::LogicalGetData(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(), "LogicalGetData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, name);
}
inline void System::Runtime::Remoting::Messaging::CallContext::LogicalSetData(::StringW name, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CallContext*>::get(), "LogicalSetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, data);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::CallContext::CallContext() {}
