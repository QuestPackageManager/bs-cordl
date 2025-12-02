#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MultipartFile.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MultipartFile_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "bytes", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "contentType", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::GraphQL::Client::MultipartFile::MultipartFile(::StringW key, ::StringW filename, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::StringW contentType) noexcept {
  this->key = key;
  this->filename = filename;
  this->bytes = bytes;
  this->contentType = contentType;
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::MultipartFile::MultipartFile() {}
