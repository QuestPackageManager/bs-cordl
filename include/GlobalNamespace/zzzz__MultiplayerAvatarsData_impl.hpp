#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerAvatarsData.hpp"
#include "GlobalNamespace/zzzz__BitMask128_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*, ::System::Collections::Generic::IEnumerable_1<uint32_t>*)>(&::GlobalNamespace::MultiplayerAvatarsData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3779928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*,
                                                                                                           ::GlobalNamespace::BitMask128)>(&::GlobalNamespace::MultiplayerAvatarsData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3779998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(),
                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>(), ::i2c::type_of<::GlobalNamespace::BitMask128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37799a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.SerializeAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerAvatarsData::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::SerializeAvatarsData)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x37799cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "SerializeAvatarsData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::MultiplayerAvatarsData::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3779b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::MultiplayerAvatarsData::Deserialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3779b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.DeserializeAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::MultiplayerAvatarsData::DeserializeAvatarsData)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3779bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "DeserializeAvatarsData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarsData::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::MultiplayerAvatarsData::Equals)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3779d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarsData::*)(::System::Object*)>(&::GlobalNamespace::MultiplayerAvatarsData::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3779e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerAvatarsData::*)()>(&::GlobalNamespace::MultiplayerAvatarsData::GetHashCode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3779ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerAvatarsData.SupportsOptionalAvatarDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerAvatarsData::*)(uint32_t)>(&::GlobalNamespace::MultiplayerAvatarsData::SupportsOptionalAvatarDataType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x377a060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "SupportsOptionalAvatarDataType", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerAvatarsData::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                                                           ::System::Collections::Generic::IEnumerable_1<uint32_t>* supportedAvatarTypeIdHashes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, multiplayerAvatarsData, supportedAvatarTypeIdHashes);
}
inline void GlobalNamespace::MultiplayerAvatarsData::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                                                           ::GlobalNamespace::BitMask128 supportedAvatarTypeIdHashesBloomFilter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>(), ::i2c::type_of<::GlobalNamespace::BitMask128>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, multiplayerAvatarsData, supportedAvatarTypeIdHashesBloomFilter);
}
inline void GlobalNamespace::MultiplayerAvatarsData::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::MultiplayerAvatarsData::SerializeAvatarsData(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "SerializeAvatarsData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::MultiplayerAvatarsData::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::MultiplayerAvatarsData::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(nullptr, ___internal_method, reader);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* GlobalNamespace::MultiplayerAvatarsData::DeserializeAvatarsData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "DeserializeAvatarsData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*>(nullptr, ___internal_method, reader);
}
inline bool GlobalNamespace::MultiplayerAvatarsData::Equals(::GlobalNamespace::MultiplayerAvatarsData other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::MultiplayerAvatarsData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::MultiplayerAvatarsData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerAvatarsData::SupportsOptionalAvatarDataType(uint32_t typeHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerAvatarsData>(), { "SupportsOptionalAvatarDataType", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, typeHash);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr GlobalNamespace::MultiplayerAvatarsData::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*
GlobalNamespace::MultiplayerAvatarsData::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__MultiplayerAvatarsData_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerAvatarsData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::MultiplayerAvatarsData::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::MultiplayerAvatarsData::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr GlobalNamespace::MultiplayerAvatarsData::operator ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>"
constexpr ::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>* GlobalNamespace::MultiplayerAvatarsData::i___System__IEquatable_1___GlobalNamespace__MultiplayerAvatarsData_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::MultiplayerAvatarsData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "multiplayerAvatarsData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>*", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "supportedAvatarTypeIdHashesBloomFilter", ty: "::GlobalNamespace::BitMask128", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerAvatarsData::MultiplayerAvatarsData(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerAvatarData>* multiplayerAvatarsData,
                                                                            ::GlobalNamespace::BitMask128 supportedAvatarTypeIdHashesBloomFilter) noexcept {
  this->multiplayerAvatarsData = multiplayerAvatarsData;
  this->supportedAvatarTypeIdHashesBloomFilter = supportedAvatarTypeIdHashesBloomFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerAvatarsData::MultiplayerAvatarsData() {}
