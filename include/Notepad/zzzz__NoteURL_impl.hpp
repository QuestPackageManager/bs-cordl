#pragma once
// IWYU pragma private; include "Notepad/NoteURL.hpp"
#include "Notepad/zzzz__NoteURL_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Notepad::NoteURL::NoteURL(::StringW name, ::StringW url) noexcept {
  this->name = name;
  this->url = url;
}
// Ctor Parameters []
constexpr ::Notepad::NoteURL::NoteURL() {}
