#pragma once
// IWYU pragma private; include "UnityEngine\AssemblyVersion.hpp"
#include "UnityEngine/zzzz__AssemblyVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssemblyVersion.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::AssemblyVersion, ::UnityEngine::AssemblyVersion)>(&::UnityEngine::AssemblyVersion::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6adcbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyVersion>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::AssemblyVersion>(), ::i2c::type_of<::UnityEngine::AssemblyVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssemblyVersion.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AssemblyVersion::*)()>(&::UnityEngine::AssemblyVersion::ToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6adcbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyVersion>(), { ::i2c::class_of<::UnityEngine::AssemblyVersion>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssemblyVersion.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AssemblyVersion::*)(::System::Object*)>(&::UnityEngine::AssemblyVersion::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6adcd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyVersion>(), { ::i2c::class_of<::UnityEngine::AssemblyVersion>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssemblyVersion.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AssemblyVersion::*)()>(&::UnityEngine::AssemblyVersion::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6adce08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyVersion>(), { ::i2c::class_of<::UnityEngine::AssemblyVersion>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::AssemblyVersion::op_Equality(::UnityEngine::AssemblyVersion lhs, ::UnityEngine::AssemblyVersion rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssemblyVersion>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::AssemblyVersion>(), ::i2c::type_of<::UnityEngine::AssemblyVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::StringW UnityEngine::AssemblyVersion::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssemblyVersion>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::AssemblyVersion::Equals(::System::Object* other) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssemblyVersion>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::AssemblyVersion::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssemblyVersion>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "build", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "revision", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AssemblyVersion::AssemblyVersion(uint16_t major, uint16_t minor, uint16_t build, uint16_t revision) noexcept {
  this->major = major;
  this->minor = minor;
  this->build = build;
  this->revision = revision;
}
// Ctor Parameters []
constexpr ::UnityEngine::AssemblyVersion::AssemblyVersion() {}
