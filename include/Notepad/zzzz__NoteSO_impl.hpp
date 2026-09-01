#pragma once
// IWYU pragma private; include "Notepad\NoteSO.hpp"
#include "Notepad/zzzz__NoteURL_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Notepad/zzzz__NoteSO_def.hpp"
//  Writing Method size for method: ::Notepad::NoteSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Notepad::NoteSO::*)()>(&::Notepad::NoteSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x331b760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Notepad::NoteSO*>(), { ".ctor", {}, {} })));
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
  this->___title = value;
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
  this->___content = value;
}
constexpr ::ArrayW<::Notepad::NoteURL>& Notepad::NoteSO::__cordl_internal_get_urls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___urls;
}
constexpr ::ArrayW<::Notepad::NoteURL> const& Notepad::NoteSO::__cordl_internal_get_urls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___urls;
}
constexpr void Notepad::NoteSO::__cordl_internal_set_urls(::ArrayW<::Notepad::NoteURL> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___urls = value;
}
inline void Notepad::NoteSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Notepad::NoteSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Notepad::NoteSO* Notepad::NoteSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Notepad::NoteSO*>());
}
// Ctor Parameters []
constexpr ::Notepad::NoteSO::NoteSO() {}
