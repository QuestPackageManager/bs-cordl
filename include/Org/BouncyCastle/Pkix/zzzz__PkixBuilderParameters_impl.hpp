#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\PkixBuilderParameters.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixBuilderParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixBuilderParameters* (*)(::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixBuilderParameters::GetInstance)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35c3618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(),
                                                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)(
    ::Org::BouncyCastle::Utilities::Collections::ISet*, ::Org::BouncyCastle::X509::Store::IX509Selector*)>(&::Org::BouncyCastle::Pkix::PkixBuilderParameters::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35c3708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Selector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.get_MaxPathLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixBuilderParameters::get_MaxPathLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35c379c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.set_MaxPathLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)(int32_t)>(&::Org::BouncyCastle::Pkix::PkixBuilderParameters::set_MaxPathLength)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x35c37a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.GetExcludedCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)()>(
    &::Org::BouncyCastle::Pkix::PkixBuilderParameters::GetExcludedCerts)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x35c3800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.SetExcludedCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet*)>(
    &::Org::BouncyCastle::Pkix::PkixBuilderParameters::SetExcludedCerts)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35c3864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.SetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)(::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixBuilderParameters::SetParams)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x35c38e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixBuilderParameters::Clone)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x35c39ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixBuilderParameters.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixBuilderParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixBuilderParameters::ToString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x35c3a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 3 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Pkix::PkixBuilderParameters::__cordl_internal_get_maxPathLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPathLength;
}
constexpr int32_t const& Org::BouncyCastle::Pkix::PkixBuilderParameters::__cordl_internal_get_maxPathLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPathLength;
}
constexpr void Org::BouncyCastle::Pkix::PkixBuilderParameters::__cordl_internal_set_maxPathLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxPathLength = value;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& Org::BouncyCastle::Pkix::PkixBuilderParameters::__cordl_internal_get_excludedCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedCerts;
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& Org::BouncyCastle::Pkix::PkixBuilderParameters::__cordl_internal_get_excludedCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___excludedCerts;
}
constexpr void Org::BouncyCastle::Pkix::PkixBuilderParameters::__cordl_internal_set_excludedCerts(::Org::BouncyCastle::Utilities::Collections::ISet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___excludedCerts = value;
}
inline ::Org::BouncyCastle::Pkix::PkixBuilderParameters* Org::BouncyCastle::Pkix::PkixBuilderParameters::GetInstance(::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(nullptr, ___internal_method, pkixParams);
}
inline void Org::BouncyCastle::Pkix::PkixBuilderParameters::_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors, ::Org::BouncyCastle::X509::Store::IX509Selector* targetConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Utilities::Collections::ISet*>(), ::i2c::type_of<::Org::BouncyCastle::X509::Store::IX509Selector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trustAnchors, targetConstraints);
}
inline int32_t Org::BouncyCastle::Pkix::PkixBuilderParameters::get_MaxPathLength() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixBuilderParameters::set_MaxPathLength(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixBuilderParameters::GetExcludedCerts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Pkix::PkixBuilderParameters::SetExcludedCerts(::Org::BouncyCastle::Utilities::Collections::ISet* excludedCerts) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, excludedCerts);
}
inline void Org::BouncyCastle::Pkix::PkixBuilderParameters::SetParams(::Org::BouncyCastle::Pkix::PkixParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::System::Object* Org::BouncyCastle::Pkix::PkixBuilderParameters::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixBuilderParameters::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixBuilderParameters* Org::BouncyCastle::Pkix::PkixBuilderParameters::New_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors,
                                                                                                                  ::Org::BouncyCastle::X509::Store::IX509Selector* targetConstraints) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>(trustAnchors, targetConstraints));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixBuilderParameters::PkixBuilderParameters() {}
