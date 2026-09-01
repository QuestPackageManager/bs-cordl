#pragma once
// IWYU pragma private; include "System\Security\Cryptography\X509Certificates\X509ExtensionCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ExtensionCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ExtensionEnumerator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x63b07f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63b084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.get_IsSynchronized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63b086c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_IsSynchronized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.get_SyncRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63b088c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_SyncRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Extension* (
    ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)(::StringW)>(&::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Item)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x63b0890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)(
    ::System::Security::Cryptography::X509Certificates::X509Extension*)>(&::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::Add)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x63b0c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Extension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.System_Collections_ICollection_CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)(::System::Array*, int32_t)>(
    &::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x63b0c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(),
                                                             { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* (
    ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(&::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63b0d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::*)()>(
    &::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x63b0e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Security::Cryptography::X509Certificates::X509ExtensionCollection::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr ::System::Collections::ArrayList* const& System::Security::Cryptography::X509Certificates::X509ExtensionCollection::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ExtensionCollection::__cordl_internal_set__list(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
inline void System::Security::Cryptography::X509Certificates::X509ExtensionCollection::setStaticF_Empty(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Empty", ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509ExtensionCollection::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Empty", ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>();
}
inline void System::Security::Cryptography::X509Certificates::X509ExtensionCollection::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Extension* System::Security::Cryptography::X509Certificates::X509ExtensionCollection::get_Item(::StringW oid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Extension*>(this, ___internal_method, oid);
}
inline int32_t System::Security::Cryptography::X509Certificates::X509ExtensionCollection::Add(::System::Security::Cryptography::X509Certificates::X509Extension* extension) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Extension*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, extension);
}
inline void System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator* System::Security::Cryptography::X509Certificates::X509ExtensionCollection::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Security::Cryptography::X509Certificates::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection* System::Security::Cryptography::X509Certificates::X509ExtensionCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr System::Security::Cryptography::X509Certificates::X509ExtensionCollection::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Security::Cryptography::X509Certificates::X509ExtensionCollection::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Security::Cryptography::X509Certificates::X509ExtensionCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Security::Cryptography::X509Certificates::X509ExtensionCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::X509Certificates::X509ExtensionCollection::X509ExtensionCollection() {}
