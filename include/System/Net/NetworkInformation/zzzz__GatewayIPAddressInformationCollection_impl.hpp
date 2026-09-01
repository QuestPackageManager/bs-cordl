#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\GatewayIPAddressInformationCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformation_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(
    &::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6351be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(
    ::ArrayW<::System::Net::NetworkInformation::GatewayIPAddressInformation*>, int32_t)>(&::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::CopyTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6351c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(
    &::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_Count)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6351cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(
    &::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6351d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(
    ::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Add)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6351d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.InternalAdd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(
    ::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::InternalAdd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6351d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                             { "InternalAdd", {}, { ::i2c::type_of<::System::Net::NetworkInformation::GatewayIPAddressInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(
    ::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Contains)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6351dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* (
    ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(&::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6351e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(
    &::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6351e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)(
    ::System::Net::NetworkInformation::GatewayIPAddressInformation*)>(&::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Remove)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6351e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::*)()>(
    &::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6351eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 20 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*&
System::Net::NetworkInformation::GatewayIPAddressInformationCollection::__cordl_internal_get_addresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* const&
System::Net::NetworkInformation::GatewayIPAddressInformationCollection::__cordl_internal_get_addresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr void System::Net::NetworkInformation::GatewayIPAddressInformationCollection::__cordl_internal_set_addresses(
    ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addresses = value;
}
inline void System::Net::NetworkInformation::GatewayIPAddressInformationCollection::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::GatewayIPAddressInformationCollection::CopyTo(::ArrayW<::System::Net::NetworkInformation::GatewayIPAddressInformation*> array, int32_t offset) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset);
}
inline int32_t System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_Count() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::NetworkInformation::GatewayIPAddressInformationCollection::get_IsReadOnly() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Add(::System::Net::NetworkInformation::GatewayIPAddressInformation* address) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::NetworkInformation::GatewayIPAddressInformationCollection::InternalAdd(::System::Net::NetworkInformation::GatewayIPAddressInformation* address) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(),
                                                           { "InternalAdd", {}, { ::i2c::type_of<::System::Net::NetworkInformation::GatewayIPAddressInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline bool System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Contains(::System::Net::NetworkInformation::GatewayIPAddressInformation* address) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, address);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*
System::Net::NetworkInformation::GatewayIPAddressInformationCollection::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::NetworkInformation::GatewayIPAddressInformationCollection::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Remove(::System::Net::NetworkInformation::GatewayIPAddressInformation* address) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, address);
}
inline void System::Net::NetworkInformation::GatewayIPAddressInformationCollection::Clear() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::GatewayIPAddressInformationCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>());
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr System::Net::NetworkInformation::GatewayIPAddressInformationCollection::operator ::System::Collections::Generic::ICollection_1<
    ::System::Net::NetworkInformation::GatewayIPAddressInformation*>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*
System::Net::NetworkInformation::GatewayIPAddressInformationCollection::i___System__Collections__Generic__ICollection_1___System__Net__NetworkInformation__GatewayIPAddressInformation__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr System::Net::NetworkInformation::GatewayIPAddressInformationCollection::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Net::NetworkInformation::GatewayIPAddressInformation*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*
System::Net::NetworkInformation::GatewayIPAddressInformationCollection::i___System__Collections__Generic__IEnumerable_1___System__Net__NetworkInformation__GatewayIPAddressInformation__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::GatewayIPAddressInformation*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Net::NetworkInformation::GatewayIPAddressInformationCollection::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::NetworkInformation::GatewayIPAddressInformationCollection::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection::GatewayIPAddressInformationCollection() {}
