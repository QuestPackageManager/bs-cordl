#pragma once
// IWYU pragma private; include "UnityEngine/AssemblyFullName.hpp"
#include "UnityEngine/zzzz__AssemblyVersion_impl.hpp"
#include "UnityEngine/zzzz__AssemblyFullName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssemblyFullName.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AssemblyFullName::*)(::System::Object*)>(&::UnityEngine::AssemblyFullName::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6ad9b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyFullName>(), { ::i2c::class_of<::UnityEngine::AssemblyFullName>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssemblyFullName.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AssemblyFullName::*)()>(&::UnityEngine::AssemblyFullName::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ad9c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyFullName>(), { ::i2c::class_of<::UnityEngine::AssemblyFullName>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssemblyFullName.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AssemblyFullName::*)()>(&::UnityEngine::AssemblyFullName::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6ad9cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyFullName>(), { ::i2c::class_of<::UnityEngine::AssemblyFullName>(), 3 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::AssemblyFullName::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssemblyFullName>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::AssemblyFullName::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssemblyFullName>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::AssemblyFullName::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssemblyFullName>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Version", ty: "::UnityEngine::AssemblyVersion", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "PublicKeyToken", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Culture", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AssemblyFullName::AssemblyFullName(::StringW Name, ::UnityEngine::AssemblyVersion Version, ::StringW PublicKeyToken, ::StringW Culture) noexcept {
  this->Name = Name;
  this->Version = Version;
  this->PublicKeyToken = PublicKeyToken;
  this->Culture = Culture;
}
// Ctor Parameters []
constexpr ::UnityEngine::AssemblyFullName::AssemblyFullName() {}
