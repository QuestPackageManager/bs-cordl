#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserCapabilityList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserCapabilityList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithUserCapabilityList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUserCapabilityList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f1b338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserCapabilityList.GetUserCapabilityList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserCapabilityList* (::Oculus::Platform::MessageWithUserCapabilityList::*)()>(
    &::Oculus::Platform::MessageWithUserCapabilityList::GetUserCapabilityList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f1f560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserCapabilityList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserCapabilityList* (
    ::Oculus::Platform::MessageWithUserCapabilityList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithUserCapabilityList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f1f59c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithUserCapabilityList* Oculus::Platform::MessageWithUserCapabilityList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithUserCapabilityList*>(c_message));
}
inline void Oculus::Platform::MessageWithUserCapabilityList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::MessageWithUserCapabilityList::GetUserCapabilityList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::MessageWithUserCapabilityList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserCapabilityList*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUserCapabilityList::MessageWithUserCapabilityList() {}
