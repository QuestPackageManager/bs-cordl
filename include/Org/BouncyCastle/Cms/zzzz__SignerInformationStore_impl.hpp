#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/SignerInformationStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerID_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformationStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformationStore::*)(::Org::BouncyCastle::Cms::SignerInformation*)>(
    &::Org::BouncyCastle::Cms::SignerInformationStore::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x36d4d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformationStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::SignerInformationStore::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::Cms::SignerInformationStore::_ctor)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x36d4edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformationStore.GetFirstSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::SignerInformation* (::Org::BouncyCastle::Cms::SignerInformationStore::*)(::Org::BouncyCastle::Cms::SignerID*)>(
    &::Org::BouncyCastle::Cms::SignerInformationStore::GetFirstSigner)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x36d544c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "GetFirstSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformationStore.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::SignerInformationStore::*)()>(&::Org::BouncyCastle::Cms::SignerInformationStore::get_Count)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x36d55e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformationStore.GetSigners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::Cms::SignerInformationStore::*)()>(
    &::Org::BouncyCastle::Cms::SignerInformationStore::GetSigners)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36d5690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "GetSigners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SignerInformationStore.GetSigners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::Cms::SignerInformationStore::*)(::Org::BouncyCastle::Cms::SignerID*)>(
    &::Org::BouncyCastle::Cms::SignerInformationStore::GetSigners)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x36d56f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "GetSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerID*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::SignerInformationStore::__cordl_internal_get_all() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::SignerInformationStore::__cordl_internal_get_all() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr void Org::BouncyCastle::Cms::SignerInformationStore::__cordl_internal_set_all(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___all = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::SignerInformationStore::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::SignerInformationStore::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void Org::BouncyCastle::Cms::SignerInformationStore::__cordl_internal_set_table(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___table = value;
}
inline void Org::BouncyCastle::Cms::SignerInformationStore::_ctor(::Org::BouncyCastle::Cms::SignerInformation* signerInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signerInfo);
}
inline void Org::BouncyCastle::Cms::SignerInformationStore::_ctor(::System::Collections::ICollection* signerInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signerInfos);
}
inline ::Org::BouncyCastle::Cms::SignerInformation* Org::BouncyCastle::Cms::SignerInformationStore::GetFirstSigner(::Org::BouncyCastle::Cms::SignerID* selector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "GetFirstSigner", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerID*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::SignerInformation*>(this, ___internal_method, selector);
}
inline int32_t Org::BouncyCastle::Cms::SignerInformationStore::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Cms::SignerInformationStore::GetSigners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "GetSigners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Cms::SignerInformationStore::GetSigners(::Org::BouncyCastle::Cms::SignerID* selector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::SignerInformationStore*>(), { "GetSigners", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::SignerID*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, selector);
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::SignerInformationStore::New_ctor(::Org::BouncyCastle::Cms::SignerInformation* signerInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInformationStore*>(signerInfo));
}
inline ::Org::BouncyCastle::Cms::SignerInformationStore* Org::BouncyCastle::Cms::SignerInformationStore::New_ctor(::System::Collections::ICollection* signerInfos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::SignerInformationStore*>(signerInfos));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::SignerInformationStore::SignerInformationStore() {}
