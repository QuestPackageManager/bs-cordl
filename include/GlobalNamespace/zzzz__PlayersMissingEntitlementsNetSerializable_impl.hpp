#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayersMissingEntitlementsNetSerializable.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable.get_playersWithoutEntitlements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)()>(
    &::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::get_playersWithoutEntitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3780e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), { "get_playersWithoutEntitlements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* (*)()>(&::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3780e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), { "Obtain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)()>(
    &::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3780eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* (
    ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Init)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3780f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3781018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3781154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayersMissingEntitlementsNetSerializable::__cordl_internal_get__playersWithoutEntitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersWithoutEntitlements;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayersMissingEntitlementsNetSerializable::__cordl_internal_get__playersWithoutEntitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersWithoutEntitlements;
}
constexpr void GlobalNamespace::PlayersMissingEntitlementsNetSerializable::__cordl_internal_set__playersWithoutEntitlements(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersWithoutEntitlements = value;
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayersMissingEntitlementsNetSerializable::get_playersWithoutEntitlements() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), { "get_playersWithoutEntitlements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), { "Obtain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayersMissingEntitlementsNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*
GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Init(::System::Collections::Generic::IEnumerable_1<::StringW>* playersWithoutEntitlements) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(this, ___internal_method, playersWithoutEntitlements);
}
inline void GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* GlobalNamespace::PlayersMissingEntitlementsNetSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::PlayersMissingEntitlementsNetSerializable() {}
