#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/MatchSparse.hpp"
#include "System/Text/RegularExpressions/zzzz__Match_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__MatchSparse_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__GroupCollection_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::MatchSparse::*)(
    ::System::Text::RegularExpressions::Regex*, ::System::Collections::Hashtable*, int32_t, ::StringW, int32_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::MatchSparse::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f848a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::MatchSparse.get_Groups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::GroupCollection* (::System::Text::RegularExpressions::MatchSparse::*)()>(
    &::System::Text::RegularExpressions::MatchSparse::get_Groups)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2f84950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::MatchSparse::__cordl_internal_get__caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Text::RegularExpressions::MatchSparse::__cordl_internal_get__caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caps;
}
constexpr void System::Text::RegularExpressions::MatchSparse::__cordl_internal_set__caps(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____caps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Text::RegularExpressions::MatchSparse* System::Text::RegularExpressions::MatchSparse::New_ctor(::System::Text::RegularExpressions::Regex* regex,
                                                                                                                ::System::Collections::Hashtable* caps, int32_t capcount, ::StringW text,
                                                                                                                int32_t begpos, int32_t len, int32_t startpos) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::MatchSparse*>(regex, caps, capcount, text, begpos, len, startpos));
}
inline void System::Text::RegularExpressions::MatchSparse::_ctor(::System::Text::RegularExpressions::Regex* regex, ::System::Collections::Hashtable* caps, int32_t capcount, ::StringW text,
                                                                 int32_t begpos, int32_t len, int32_t startpos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regex, caps, capcount, text, begpos, len, startpos);
}
inline ::System::Text::RegularExpressions::GroupCollection* System::Text::RegularExpressions::MatchSparse::get_Groups() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::MatchSparse*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::GroupCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::MatchSparse::MatchSparse() {}
