#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\RecipientInformationStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientID_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformationStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::RecipientInformationStore::*)(::System::Collections::ICollection*)>(
    &::Org::BouncyCastle::Cms::RecipientInformationStore::_ctor)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x36ae68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformationStore.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::RecipientInformation* (
    ::Org::BouncyCastle::Cms::RecipientInformationStore::*)(::Org::BouncyCastle::Cms::RecipientID*)>(&::Org::BouncyCastle::Cms::RecipientInformationStore::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36d3558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { "get_Item", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformationStore.GetFirstRecipient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::RecipientInformation* (
    ::Org::BouncyCastle::Cms::RecipientInformationStore::*)(::Org::BouncyCastle::Cms::RecipientID*)>(&::Org::BouncyCastle::Cms::RecipientInformationStore::GetFirstRecipient)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x36d355c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(),
                                                                                           { "GetFirstRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformationStore.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::RecipientInformationStore::*)()>(&::Org::BouncyCastle::Cms::RecipientInformationStore::get_Count)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x36d36f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformationStore.GetRecipients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::Cms::RecipientInformationStore::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformationStore::GetRecipients)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36d37a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { "GetRecipients", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformationStore.GetRecipients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::Cms::RecipientInformationStore::*)(::Org::BouncyCastle::Cms::RecipientID*)>(
    &::Org::BouncyCastle::Cms::RecipientInformationStore::GetRecipients)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x36d3800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(),
                                                                                           { "GetRecipients", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cms::RecipientInformationStore::__cordl_internal_get_all() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Cms::RecipientInformationStore::__cordl_internal_get_all() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___all;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformationStore::__cordl_internal_set_all(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___all = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::RecipientInformationStore::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::RecipientInformationStore::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformationStore::__cordl_internal_set_table(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___table = value;
}
inline void Org::BouncyCastle::Cms::RecipientInformationStore::_ctor(::System::Collections::ICollection* recipientInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, recipientInfos);
}
inline ::Org::BouncyCastle::Cms::RecipientInformation* Org::BouncyCastle::Cms::RecipientInformationStore::get_Item(::Org::BouncyCastle::Cms::RecipientID* selector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { "get_Item", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientInformation*>(this, ___internal_method, selector);
}
inline ::Org::BouncyCastle::Cms::RecipientInformation* Org::BouncyCastle::Cms::RecipientInformationStore::GetFirstRecipient(::Org::BouncyCastle::Cms::RecipientID* selector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(),
                                                                                         { "GetFirstRecipient", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientInformation*>(this, ___internal_method, selector);
}
inline int32_t Org::BouncyCastle::Cms::RecipientInformationStore::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Cms::RecipientInformationStore::GetRecipients() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(), { "GetRecipients", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::Cms::RecipientInformationStore::GetRecipients(::Org::BouncyCastle::Cms::RecipientID* selector) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformationStore*>(),
                                                                                         { "GetRecipients", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, selector);
}
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::RecipientInformationStore::New_ctor(::System::Collections::ICollection* recipientInfos) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::RecipientInformationStore*>(recipientInfos));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore::RecipientInformationStore() {}
