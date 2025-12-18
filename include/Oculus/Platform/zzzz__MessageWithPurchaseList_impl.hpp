#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPurchaseList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPurchaseList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithPurchaseList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPurchaseList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c29940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPurchaseList.GetPurchaseList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PurchaseList* (::Oculus::Platform::MessageWithPurchaseList::*)()>(
    &::Oculus::Platform::MessageWithPurchaseList::GetPurchaseList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c2e5f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPurchaseList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::PurchaseList* (::Oculus::Platform::MessageWithPurchaseList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPurchaseList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2e634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(), 74));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPurchaseList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::PurchaseList* Oculus::Platform::MessageWithPurchaseList::GetPurchaseList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(), 60)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PurchaseList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PurchaseList* Oculus::Platform::MessageWithPurchaseList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPurchaseList*>::get(), 74)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PurchaseList*, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPurchaseList* Oculus::Platform::MessageWithPurchaseList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithPurchaseList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPurchaseList::MessageWithPurchaseList() {}
