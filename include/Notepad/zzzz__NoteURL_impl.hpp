#pragma once
#include "Notepad/zzzz__NoteURL_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Notepad::NoteURL::NoteURL(::StringW name, ::StringW url) noexcept {
  this->name = name;
  this->url = url;
}
// Ctor Parameters []
constexpr ::Notepad::NoteURL::NoteURL() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
