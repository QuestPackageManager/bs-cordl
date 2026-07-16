#pragma once
// IWYU pragma private; include "System/OrdinalComparer.hpp"
#include "System/zzzz__StringComparer_impl.hpp"
#include "System/zzzz__OrdinalComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::OrdinalComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::OrdinalComparer::*)(bool)>(&::System::OrdinalComparer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5c238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OrdinalComparer*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalComparer.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::OrdinalComparer::*)(::StringW, ::StringW)>(&::System::OrdinalComparer::Compare)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5c2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalComparer*>(), { ::i2c::class_of<::System::OrdinalComparer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::OrdinalComparer::*)(::StringW, ::StringW)>(&::System::OrdinalComparer::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c5c304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalComparer*>(), { ::i2c::class_of<::System::OrdinalComparer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::OrdinalComparer::*)(::StringW)>(&::System::OrdinalComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c5c388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalComparer*>(), { ::i2c::class_of<::System::OrdinalComparer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalComparer.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::OrdinalComparer::*)(::System::Object*)>(&::System::OrdinalComparer::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c5c420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalComparer*>(), { ::i2c::class_of<::System::OrdinalComparer*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::OrdinalComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::OrdinalComparer::*)()>(&::System::OrdinalComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5c4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::OrdinalComparer*>(), { ::i2c::class_of<::System::OrdinalComparer*>(), 2 }));
    return ___internal_method;
  }
};
constexpr bool& System::OrdinalComparer::__cordl_internal_get__ignoreCase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreCase;
}
constexpr bool const& System::OrdinalComparer::__cordl_internal_get__ignoreCase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreCase;
}
constexpr void System::OrdinalComparer::__cordl_internal_set__ignoreCase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreCase = value;
}
inline void System::OrdinalComparer::_ctor(bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::OrdinalComparer*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignoreCase);
}
inline int32_t System::OrdinalComparer::Compare(::StringW x, ::StringW y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalComparer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline bool System::OrdinalComparer::Equals(::StringW x, ::StringW y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalComparer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t System::OrdinalComparer::GetHashCode(::StringW obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalComparer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline bool System::OrdinalComparer::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalComparer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::OrdinalComparer::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::OrdinalComparer*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::OrdinalComparer* System::OrdinalComparer::New_ctor(bool ignoreCase) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::OrdinalComparer*>(ignoreCase));
}
// Ctor Parameters []
constexpr ::System::OrdinalComparer::OrdinalComparer() {}
