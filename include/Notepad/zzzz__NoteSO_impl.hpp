#pragma once
// IWYU pragma private; include "Notepad/NoteSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Notepad/zzzz__NoteSO_def.hpp"
#include "Notepad/zzzz__NoteURL_def.hpp"
//  Writing Method size for method: ::Notepad::NoteSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Notepad::NoteSO::*)()>(&::Notepad::NoteSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22ab950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NoteSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Notepad::NoteSO::__cordl_internal_get_title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr ::StringW const& Notepad::NoteSO::__cordl_internal_get_title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___title;
}
constexpr void Notepad::NoteSO::__cordl_internal_set_title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Notepad::NoteSO::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::StringW const& Notepad::NoteSO::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Notepad::NoteSO::__cordl_internal_set_content(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*>& Notepad::NoteSO::__cordl_internal_get_urls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___urls;
}
constexpr ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> const& Notepad::NoteSO::__cordl_internal_get_urls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___urls;
}
constexpr void Notepad::NoteSO::__cordl_internal_set_urls(::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___urls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Notepad::NoteSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Notepad::NoteSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Notepad::NoteSO* Notepad::NoteSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Notepad::NoteSO*>());
}
// Ctor Parameters []
constexpr ::Notepad::NoteSO::NoteSO() {}
