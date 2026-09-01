#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerStateHash.hpp"
#include "GlobalNamespace/zzzz__BitMask128_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStateHash::*)(::GlobalNamespace::BitMask128)>(&::GlobalNamespace::PlayerStateHash::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x333f554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BitMask128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStateHash::*)(::StringW)>(&::GlobalNamespace::PlayerStateHash::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x333f55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStateHash::*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::GlobalNamespace::PlayerStateHash::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x333f5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerStateHash::*)(::StringW)>(&::GlobalNamespace::PlayerStateHash::Contains)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x333f62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.AddState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerStateHash (::GlobalNamespace::PlayerStateHash::*)(::StringW)>(&::GlobalNamespace::PlayerStateHash::AddState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x333f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "AddState", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerStateHash::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::PlayerStateHash::Serialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332db4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerStateHash (::GlobalNamespace::PlayerStateHash::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayerStateHash::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x333f6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerStateHash (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::PlayerStateHash::Deserialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332db74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerStateHash::*)()>(&::GlobalNamespace::PlayerStateHash::ToString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x333f700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.ToShortString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerStateHash::*)()>(&::GlobalNamespace::PlayerStateHash::ToShortString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x333f77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "ToShortString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.ToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::PlayerStateHash::*)()>(&::GlobalNamespace::PlayerStateHash::ToBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x333f7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "ToBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerStateHash::*)()>(&::GlobalNamespace::PlayerStateHash::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x333f814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerStateHash::*)(::GlobalNamespace::PlayerStateHash)>(&::GlobalNamespace::PlayerStateHash::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x333f82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::PlayerStateHash>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerStateHash::*)(::System::Object*)>(&::GlobalNamespace::PlayerStateHash::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x333f850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::PlayerStateHash>)>(&::GlobalNamespace::PlayerStateHash::TryParse)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x333f8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(),
                                                             { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlayerStateHash>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerStateHash (*)(::StringW)>(&::GlobalNamespace::PlayerStateHash::Parse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x333fa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerStateHash.FromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerStateHash (*)(::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::PlayerStateHash::FromBytes)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x333fa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerStateHash::_ctor(::GlobalNamespace::BitMask128 bloomFilter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BitMask128>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bloomFilter);
}
inline void GlobalNamespace::PlayerStateHash::_ctor(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
inline void GlobalNamespace::PlayerStateHash::_ctor(::System::Collections::Generic::HashSet_1<::StringW>* stateHashSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateHashSet);
}
inline bool GlobalNamespace::PlayerStateHash::Contains(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, state);
}
inline ::GlobalNamespace::PlayerStateHash GlobalNamespace::PlayerStateHash::AddState(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "AddState", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStateHash>(*this, ___internal_method, state);
}
inline void GlobalNamespace::PlayerStateHash::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::PlayerStateHash GlobalNamespace::PlayerStateHash::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStateHash>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::PlayerStateHash GlobalNamespace::PlayerStateHash::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStateHash>(nullptr, ___internal_method, reader);
}
inline ::StringW GlobalNamespace::PlayerStateHash::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerStateHash::ToShortString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "ToShortString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t> GlobalNamespace::PlayerStateHash::ToBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "ToBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerStateHash::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::PlayerStateHash::Equals(::GlobalNamespace::PlayerStateHash other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::PlayerStateHash>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::PlayerStateHash::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::PlayerStateHash::TryParse(::StringW stringSerializedMask, ::by_ref<::GlobalNamespace::PlayerStateHash> playerStateHash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlayerStateHash>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringSerializedMask, playerStateHash);
}
inline ::GlobalNamespace::PlayerStateHash GlobalNamespace::PlayerStateHash::Parse(::StringW stringSerializedMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStateHash>(nullptr, ___internal_method, stringSerializedMask);
}
inline ::GlobalNamespace::PlayerStateHash GlobalNamespace::PlayerStateHash::FromBytes(::ArrayW<uint8_t> bytes, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerStateHash>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerStateHash>(nullptr, ___internal_method, bytes, offset);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>"
constexpr GlobalNamespace::PlayerStateHash::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*
GlobalNamespace::PlayerStateHash::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__PlayerStateHash_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::PlayerStateHash>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::PlayerStateHash::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::PlayerStateHash::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>"
constexpr GlobalNamespace::PlayerStateHash::operator ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>* GlobalNamespace::PlayerStateHash::i___System__IEquatable_1___GlobalNamespace__PlayerStateHash_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::PlayerStateHash>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_bloomFilter", ty: "::GlobalNamespace::BitMask128", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerStateHash::PlayerStateHash(::GlobalNamespace::BitMask128 _bloomFilter) noexcept {
  this->_bloomFilter = _bloomFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerStateHash::PlayerStateHash() {}
