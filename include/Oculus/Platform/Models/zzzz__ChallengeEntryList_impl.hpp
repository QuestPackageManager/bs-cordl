#pragma once
#include "Oculus/Platform/Models/zzzz__ChallengeEntry_impl.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ChallengeEntryList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ChallengeEntryList::*)(void*)>(
    &::Oculus::Platform::Models::ChallengeEntryList::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x27058e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ChallengeEntryList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::ChallengeEntryList::__get_TotalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalCount;
}
constexpr uint64_t const& Oculus::Platform::Models::ChallengeEntryList::__get_TotalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalCount;
}
constexpr void Oculus::Platform::Models::ChallengeEntryList::__set_TotalCount(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalCount = value;
}
inline ::Oculus::Platform::Models::ChallengeEntryList* Oculus::Platform::Models::ChallengeEntryList::New_ctor(void* a) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::ChallengeEntryList*>(a));
}
inline void Oculus::Platform::Models::ChallengeEntryList::_ctor(void* a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ChallengeEntryList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ChallengeEntryList::ChallengeEntryList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
