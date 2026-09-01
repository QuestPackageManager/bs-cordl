#pragma once
// IWYU pragma private; include "System\Security\AccessControl\RawAcl.hpp"
#include "System/Security/AccessControl/zzzz__GenericAcl_impl.hpp"
#include "System/Security/AccessControl/zzzz__RawAcl_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(uint8_t, int32_t)>(&::System::Security::AccessControl::RawAcl::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b1d3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::AccessControl::RawAcl::*)()>(&::System::Security::AccessControl::RawAcl::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b209b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::GenericAce* (::System::Security::AccessControl::RawAcl::*)(int32_t)>(
    &::System::Security::AccessControl::RawAcl::get_Item)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b20a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(int32_t, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::RawAcl::set_Item)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b20a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), { ::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.InsertAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(int32_t, ::System::Security::AccessControl::GenericAce*)>(
    &::System::Security::AccessControl::RawAcl::InsertAce)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b1eab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(),
                                                             { "InsertAce", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::RawAcl.RemoveAce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::RawAcl::*)(int32_t)>(&::System::Security::AccessControl::RawAcl::RemoveAce)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b1e53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), { "RemoveAce", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& System::Security::AccessControl::RawAcl::__cordl_internal_get_revision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr uint8_t const& System::Security::AccessControl::RawAcl::__cordl_internal_get_revision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___revision;
}
constexpr void System::Security::AccessControl::RawAcl::__cordl_internal_set_revision(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___revision = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*& System::Security::AccessControl::RawAcl::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* const& System::Security::AccessControl::RawAcl::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void System::Security::AccessControl::RawAcl::__cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
inline void System::Security::AccessControl::RawAcl::_ctor(uint8_t revision, int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, revision, capacity);
}
inline int32_t System::Security::AccessControl::RawAcl::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::AccessControl::GenericAce* System::Security::AccessControl::RawAcl::get_Item(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::GenericAce*>(this, ___internal_method, index);
}
inline void System::Security::AccessControl::RawAcl::set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void System::Security::AccessControl::RawAcl::InsertAce(int32_t index, ::System::Security::AccessControl::GenericAce* ace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(),
                                                           { "InsertAce", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::AccessControl::GenericAce*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, ace);
}
inline void System::Security::AccessControl::RawAcl::RemoveAce(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::RawAcl*>(), { "RemoveAce", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Security::AccessControl::RawAcl* System::Security::AccessControl::RawAcl::New_ctor(uint8_t revision, int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::RawAcl*>(revision, capacity));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::RawAcl::RawAcl() {}
