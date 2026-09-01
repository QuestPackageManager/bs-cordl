#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\PkixCrlUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCrlUtilities_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CrlStoreSelector_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::Org::BouncyCastle::Pkix::PkixParameters*, ::System::DateTime)>(
    &::Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x35d87f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet* (
    ::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x35d94e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities.FindCrls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (
    ::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x35d8f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(),
                                                { "FindCrls", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCrlUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCrlUtilities::*)()>(&::Org::BouncyCastle::Pkix::PkixCrlUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35d87f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect,
                                                                                                              ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix, ::System::DateTime currentDate) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, crlselect, paramsPkix, currentDate);
}
inline ::Org::BouncyCastle::Utilities::Collections::ISet* Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect,
                                                                                                              ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet*>(this, ___internal_method, crlselect, paramsPkix);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Pkix::PkixCrlUtilities::FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlSelect,
                                                                                               ::System::Collections::IList* crlStores) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(),
                                              { "FindCrls", {}, { ::i2c::type_of<::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, crlSelect, crlStores);
}
inline void Org::BouncyCastle::Pkix::PkixCrlUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* Org::BouncyCastle::Pkix::PkixCrlUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixCrlUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCrlUtilities::PkixCrlUtilities() {}
