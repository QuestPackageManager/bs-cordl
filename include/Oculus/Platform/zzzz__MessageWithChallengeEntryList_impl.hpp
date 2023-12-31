#pragma once
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeEntryList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithChallengeEntryList::*)(void*)>(
    &::Oculus::Platform::MessageWithChallengeEntryList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26eeed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeEntryList.GetChallengeEntryList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeEntryList* (::Oculus::Platform::MessageWithChallengeEntryList::*)()>(
    &::Oculus::Platform::MessageWithChallengeEntryList::GetChallengeEntryList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f16e0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithChallengeEntryList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ChallengeEntryList* (::Oculus::Platform::MessageWithChallengeEntryList::*)(void*)>(
    &::Oculus::Platform::MessageWithChallengeEntryList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f171c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithChallengeEntryList* Oculus::Platform::MessageWithChallengeEntryList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithChallengeEntryList*>(c_message));
}
inline void Oculus::Platform::MessageWithChallengeEntryList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::MessageWithChallengeEntryList::GetChallengeEntryList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::MessageWithChallengeEntryList::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithChallengeEntryList*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ChallengeEntryList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithChallengeEntryList::MessageWithChallengeEntryList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
