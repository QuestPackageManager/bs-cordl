#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\Target.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Target_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Target_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::X509::Target_Choice::Target_Choice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::Target_Choice::Target_Choice() {}
constexpr ::Org::BouncyCastle::Asn1::X509::Target_Choice Org::BouncyCastle::Asn1::X509::Target_Choice::Name{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Asn1::X509::Target_Choice Org::BouncyCastle::Asn1::X509::Target_Choice::Group{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Target* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::Target::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3666754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Target::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(
    &::Org::BouncyCastle::Asn1::X509::Target::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36668d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Target::*)(
    ::Org::BouncyCastle::Asn1::X509::Target_Choice, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::X509::Target::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x36669d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Target_Choice>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.get_TargetGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::X509::Target::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Target::get_TargetGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3666a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.get_TargetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::X509::Target::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Target::get_TargetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3666a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::Target::*)()>(&::Org::BouncyCastle::Asn1::X509::Target::ToAsn1Object)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3666a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::X509::Target::__cordl_internal_get_targetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetName;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::X509::Target::__cordl_internal_get_targetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetName;
}
constexpr void Org::BouncyCastle::Asn1::X509::Target::__cordl_internal_set_targetName(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetName = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::X509::Target::__cordl_internal_get_targetGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetGroup;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::X509::Target::__cordl_internal_get_targetGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetGroup;
}
constexpr void Org::BouncyCastle::Asn1::X509::Target::__cordl_internal_set_targetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetGroup = value;
}
inline ::Org::BouncyCastle::Asn1::X509::Target* Org::BouncyCastle::Asn1::X509::Target::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Target*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::Target::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagObj);
}
inline void Org::BouncyCastle::Asn1::X509::Target::_ctor(::Org::BouncyCastle::Asn1::X509::Target_Choice type, ::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::Target_Choice>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, name);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::X509::Target::get_TargetGroup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::X509::Target::get_TargetName() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::Target::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Target*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Target* Org::BouncyCastle::Asn1::X509::Target::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagObj) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Target*>(tagObj));
}
inline ::Org::BouncyCastle::Asn1::X509::Target* Org::BouncyCastle::Asn1::X509::Target::New_ctor(::Org::BouncyCastle::Asn1::X509::Target_Choice type,
                                                                                                ::Org::BouncyCastle::Asn1::X509::GeneralName* name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Target*>(type, name));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::X509::Target::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::X509::Target::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::Target::Target() {}
