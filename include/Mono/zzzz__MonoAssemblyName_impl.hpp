#pragma once
// IWYU pragma private; include "Mono/MonoAssemblyName.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::MonoAssemblyName__public_key_token_e__FixedBuffer::MonoAssemblyName__public_key_token_e__FixedBuffer(uint8_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::Mono::MonoAssemblyName__public_key_token_e__FixedBuffer::MonoAssemblyName__public_key_token_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "culture", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "hash_value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "public_key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "public_key_token", ty: "::Mono::MonoAssemblyName__public_key_token_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "hash_alg", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hash_len", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "build", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "revision", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "arch", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::MonoAssemblyName::MonoAssemblyName(::System::IntPtr  name, ::System::IntPtr  culture, ::System::IntPtr  hash_value, ::System::IntPtr  public_key, ::Mono::MonoAssemblyName__public_key_token_e__FixedBuffer  public_key_token, uint32_t  hash_alg, uint32_t  hash_len, uint32_t  flags, uint16_t  major, uint16_t  minor, uint16_t  build, uint16_t  revision, uint16_t  arch) noexcept  {
this->name = name;
this->culture = culture;
this->hash_value = hash_value;
this->public_key = public_key;
this->public_key_token = public_key_token;
this->hash_alg = hash_alg;
this->hash_len = hash_len;
this->flags = flags;
this->major = major;
this->minor = minor;
this->build = build;
this->revision = revision;
this->arch = arch;
}
// Ctor Parameters []
constexpr ::Mono::MonoAssemblyName::MonoAssemblyName()   {
}
