#pragma once
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestionList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCalApplicationSuggestionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestionList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationSuggestionList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCalApplicationSuggestionList::*)(void*)>(
    &::Oculus::Platform::MessageWithCalApplicationSuggestionList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25951cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationSuggestionList.GetCalApplicationSuggestionList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationSuggestionList* (
    ::Oculus::Platform::MessageWithCalApplicationSuggestionList::*)()>(&::Oculus::Platform::MessageWithCalApplicationSuggestionList::GetCalApplicationSuggestionList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2595224;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationSuggestionList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationSuggestionList* (
    ::Oculus::Platform::MessageWithCalApplicationSuggestionList::*)(void*)>(&::Oculus::Platform::MessageWithCalApplicationSuggestionList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2595260;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithCalApplicationSuggestionList* Oculus::Platform::MessageWithCalApplicationSuggestionList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>(c_message));
}
inline void Oculus::Platform::MessageWithCalApplicationSuggestionList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CalApplicationSuggestionList* Oculus::Platform::MessageWithCalApplicationSuggestionList::GetCalApplicationSuggestionList() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(),
                                               "GetCalApplicationSuggestionList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationSuggestionList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CalApplicationSuggestionList* Oculus::Platform::MessageWithCalApplicationSuggestionList::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationSuggestionList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCalApplicationSuggestionList::MessageWithCalApplicationSuggestionList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif