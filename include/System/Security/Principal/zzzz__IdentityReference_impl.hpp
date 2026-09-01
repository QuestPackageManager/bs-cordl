#pragma once
// IWYU pragma private; include "System\Security\Principal\IdentityReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::IdentityReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::IdentityReference::*)()>(&::System::Security::Principal::IdentityReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b137dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityReference.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::IdentityReference::*)()>(&::System::Security::Principal::IdentityReference::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(), { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityReference.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Principal::IdentityReference::*)(::System::Object*)>(&::System::Security::Principal::IdentityReference::Equals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(), { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityReference.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Principal::IdentityReference::*)()>(&::System::Security::Principal::IdentityReference::GetHashCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(), { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityReference.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::IdentityReference::*)()>(&::System::Security::Principal::IdentityReference::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(), { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityReference.Translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::IdentityReference* (::System::Security::Principal::IdentityReference::*)(::System::Type*)>(
    &::System::Security::Principal::IdentityReference::Translate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(), { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::IdentityReference.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Principal::IdentityReference*, ::System::Security::Principal::IdentityReference*)>(
    &::System::Security::Principal::IdentityReference::op_Equality)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b137e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(),
                            { "op_Equality", {}, { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<::System::Security::Principal::IdentityReference*>() } })));
    return ___internal_method;
  }
};
inline void System::Security::Principal::IdentityReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::IdentityReference::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Security::Principal::IdentityReference::Equals(::System::Object* o) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t System::Security::Principal::IdentityReference::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::IdentityReference::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Principal::IdentityReference* System::Security::Principal::IdentityReference::Translate(::System::Type* targetType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::IdentityReference*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::IdentityReference*>(this, ___internal_method, targetType);
}
inline bool System::Security::Principal::IdentityReference::op_Equality(::System::Security::Principal::IdentityReference* left, ::System::Security::Principal::IdentityReference* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Principal::IdentityReference*>(),
                          { "op_Equality", {}, { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<::System::Security::Principal::IdentityReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Security::Principal::IdentityReference* System::Security::Principal::IdentityReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::IdentityReference*>());
}
// Ctor Parameters []
constexpr ::System::Security::Principal::IdentityReference::IdentityReference() {}
