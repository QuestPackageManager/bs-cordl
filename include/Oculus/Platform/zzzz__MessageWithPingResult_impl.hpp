#pragma once
#include "Oculus/Platform/Models/zzzz__PingResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPingResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__PingResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPingResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithPingResult::*)(void*)>(&::Oculus::Platform::MessageWithPingResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2719784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPingResult.GetPingResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PingResult* (::Oculus::Platform::MessageWithPingResult::*)()>(
    &::Oculus::Platform::MessageWithPingResult::GetPingResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271e6a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPingResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PingResult* (::Oculus::Platform::MessageWithPingResult::*)(void*)>(
    &::Oculus::Platform::MessageWithPingResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x271e6dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithPingResult* Oculus::Platform::MessageWithPingResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithPingResult*>(c_message));
}
inline void Oculus::Platform::MessageWithPingResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::PingResult* Oculus::Platform::MessageWithPingResult::GetPingResult() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PingResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PingResult* Oculus::Platform::MessageWithPingResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPingResult*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PingResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPingResult::MessageWithPingResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
