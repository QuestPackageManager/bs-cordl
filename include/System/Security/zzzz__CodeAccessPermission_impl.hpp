#pragma once
// IWYU pragma private; include "System\Security\CodeAccessPermission.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::CodeAccessPermission._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::CodeAccessPermission::*)()>(&::System::Security::CodeAccessPermission::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aeef2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.Demand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::CodeAccessPermission::*)()>(&::System::Security::CodeAccessPermission::Demand)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5aeef30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { "Demand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::CodeAccessPermission::*)(::System::Object*)>(&::System::Security::CodeAccessPermission::Equals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5aef03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::CodeAccessPermission::*)()>(&::System::Security::CodeAccessPermission::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5aef148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.IsSubsetOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::CodeAccessPermission::*)(::System::Security::IPermission*)>(&::System::Security::CodeAccessPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::CodeAccessPermission::*)()>(&::System::Security::CodeAccessPermission::ToString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5aef15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.ToXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Security::CodeAccessPermission::*)()>(&::System::Security::CodeAccessPermission::ToXml)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.CheckPermissionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Permissions::PermissionState (*)(::System::Security::Permissions::PermissionState, bool)>(
    &::System::Security::CodeAccessPermission::CheckPermissionState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5aef184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(),
                                                             { "CheckPermissionState", {}, { ::i2c::type_of<::System::Security::Permissions::PermissionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::CodeAccessPermission.System_Security_IPermission_Demand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::CodeAccessPermission::*)()>(&::System::Security::CodeAccessPermission::System_Security_IPermission_Demand)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aef228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { "System.Security.IPermission.Demand", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::CodeAccessPermission::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::CodeAccessPermission::Demand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { "Demand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Security::CodeAccessPermission::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Security::CodeAccessPermission::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::CodeAccessPermission::IsSubsetOf(::System::Security::IPermission* target) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline ::StringW System::Security::CodeAccessPermission::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::SecurityElement* System::Security::CodeAccessPermission::ToXml() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::CodeAccessPermission*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
inline ::System::Security::Permissions::PermissionState System::Security::CodeAccessPermission::CheckPermissionState(::System::Security::Permissions::PermissionState state, bool allowUnrestricted) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(),
                                                           { "CheckPermissionState", {}, { ::i2c::type_of<::System::Security::Permissions::PermissionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Permissions::PermissionState>(nullptr, ___internal_method, state, allowUnrestricted);
}
inline void System::Security::CodeAccessPermission::System_Security_IPermission_Demand() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::CodeAccessPermission*>(), { "System.Security.IPermission.Demand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::CodeAccessPermission* System::Security::CodeAccessPermission::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::CodeAccessPermission*>());
}
/// @brief Convert operator to "::System::Security::IPermission"
constexpr System::Security::CodeAccessPermission::operator ::System::Security::IPermission*() noexcept {
  return static_cast<::System::Security::IPermission*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::IPermission"
constexpr ::System::Security::IPermission* System::Security::CodeAccessPermission::i___System__Security__IPermission() noexcept {
  return static_cast<::System::Security::IPermission*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Security::ISecurityEncodable"
constexpr System::Security::CodeAccessPermission::operator ::System::Security::ISecurityEncodable*() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::ISecurityEncodable"
constexpr ::System::Security::ISecurityEncodable* System::Security::CodeAccessPermission::i___System__Security__ISecurityEncodable() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::CodeAccessPermission::CodeAccessPermission() {}
