#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\NameConstraints.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__NameConstraints_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::NameConstraints* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::NameConstraints::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x36614b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::NameConstraints::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::NameConstraints::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x366163c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::NameConstraints::*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*)>(
    &::Org::BouncyCastle::Asn1::X509::NameConstraints::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3661948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::NameConstraints::*)(::System::Collections::IList*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::NameConstraints::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x366194c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints.CreateSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerSequence* (::Org::BouncyCastle::Asn1::X509::NameConstraints::*)(::System::Collections::IList*)>(
    &::Org::BouncyCastle::Asn1::X509::NameConstraints::CreateSequence)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x3661984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "CreateSequence", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints.get_PermittedSubtrees
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::X509::NameConstraints::*)()>(
    &::Org::BouncyCastle::Asn1::X509::NameConstraints::get_PermittedSubtrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3661c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "get_PermittedSubtrees", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints.get_ExcludedSubtrees
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::X509::NameConstraints::*)()>(
    &::Org::BouncyCastle::Asn1::X509::NameConstraints::get_ExcludedSubtrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3661c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "get_ExcludedSubtrees", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::NameConstraints.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::NameConstraints::*)()>(
    &::Org::BouncyCastle::Asn1::X509::NameConstraints::ToAsn1Object)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3661c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::NameConstraints::__cordl_internal_get_permitted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permitted;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::NameConstraints::__cordl_internal_get_permitted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___permitted;
}
constexpr void Org::BouncyCastle::Asn1::X509::NameConstraints::__cordl_internal_set_permitted(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___permitted = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::NameConstraints::__cordl_internal_get_excluded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excluded;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::NameConstraints::__cordl_internal_get_excluded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excluded;
}
constexpr void Org::BouncyCastle::Asn1::X509::NameConstraints::__cordl_internal_set_excluded(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excluded = value;
}
inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* Org::BouncyCastle::Asn1::X509::NameConstraints::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::NameConstraints::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::NameConstraints::_ctor(::System::Collections::ArrayList* permitted, ::System::Collections::ArrayList* excluded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, excluded);
}
inline void Org::BouncyCastle::Asn1::X509::NameConstraints::_ctor(::System::Collections::IList* permitted, ::System::Collections::IList* excluded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permitted, excluded);
}
inline ::Org::BouncyCastle::Asn1::DerSequence* Org::BouncyCastle::Asn1::X509::NameConstraints::CreateSequence(::System::Collections::IList* subtrees) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "CreateSequence", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerSequence*>(this, ___internal_method, subtrees);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::X509::NameConstraints::get_PermittedSubtrees() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "get_PermittedSubtrees", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::X509::NameConstraints::get_ExcludedSubtrees() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), { "get_ExcludedSubtrees", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::NameConstraints::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* Org::BouncyCastle::Asn1::X509::NameConstraints::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* Org::BouncyCastle::Asn1::X509::NameConstraints::New_ctor(::System::Collections::ArrayList* permitted,
                                                                                                                  ::System::Collections::ArrayList* excluded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(permitted, excluded));
}
inline ::Org::BouncyCastle::Asn1::X509::NameConstraints* Org::BouncyCastle::Asn1::X509::NameConstraints::New_ctor(::System::Collections::IList* permitted, ::System::Collections::IList* excluded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::NameConstraints*>(permitted, excluded));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::NameConstraints::NameConstraints() {}
