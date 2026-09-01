#pragma once
// IWYU pragma private; include "System\Security\Principal\NTAccount.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_impl.hpp"
#include "System/Security/Principal/zzzz__NTAccount_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::NTAccount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::NTAccount::*)(::StringW)>(&::System::Security::Principal::NTAccount::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b13844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::NTAccount.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::NTAccount::*)()>(&::System::Security::Principal::NTAccount::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1390c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(), { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::NTAccount.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Principal::NTAccount::*)(::System::Object*)>(&::System::Security::Principal::NTAccount::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b13914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(), { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::NTAccount.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Principal::NTAccount::*)()>(&::System::Security::Principal::NTAccount::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b13a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(), { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::NTAccount.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::NTAccount::*)()>(&::System::Security::Principal::NTAccount::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b13a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(), { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::NTAccount.Translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::IdentityReference* (::System::Security::Principal::NTAccount::*)(::System::Type*)>(
    &::System::Security::Principal::NTAccount::Translate)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5b13a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(), { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::NTAccount.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Principal::NTAccount*, ::System::Security::Principal::NTAccount*)>(
    &::System::Security::Principal::NTAccount::op_Equality)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b139b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::System::Security::Principal::NTAccount*>(), ::i2c::type_of<::System::Security::Principal::NTAccount*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Principal::NTAccount::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::StringW const& System::Security::Principal::NTAccount::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void System::Security::Principal::NTAccount::__cordl_internal_set__value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
inline void System::Security::Principal::NTAccount::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::Security::Principal::NTAccount::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Security::Principal::NTAccount::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t System::Security::Principal::NTAccount::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::NTAccount::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Principal::IdentityReference* System::Security::Principal::NTAccount::Translate(::System::Type* targetType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::NTAccount*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::IdentityReference*>(this, ___internal_method, targetType);
}
inline bool System::Security::Principal::NTAccount::op_Equality(::System::Security::Principal::NTAccount* left, ::System::Security::Principal::NTAccount* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::NTAccount*>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::System::Security::Principal::NTAccount*>(), ::i2c::type_of<::System::Security::Principal::NTAccount*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Security::Principal::NTAccount* System::Security::Principal::NTAccount::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::NTAccount*>(name));
}
// Ctor Parameters []
constexpr ::System::Security::Principal::NTAccount::NTAccount() {}
