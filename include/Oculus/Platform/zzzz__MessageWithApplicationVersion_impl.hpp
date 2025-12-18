#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithApplicationVersion.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithApplicationVersion_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithApplicationVersion::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithApplicationVersion::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c28bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion.GetApplicationVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (::Oculus::Platform::MessageWithApplicationVersion::*)()>(
    &::Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c2b870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationVersion.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ApplicationVersion* (
    ::Oculus::Platform::MessageWithApplicationVersion::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c2b8b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(), 74));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithApplicationVersion::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetApplicationVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithApplicationVersion*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationVersion*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithApplicationVersion* Oculus::Platform::MessageWithApplicationVersion::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithApplicationVersion*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithApplicationVersion::MessageWithApplicationVersion() {}
