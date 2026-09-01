#pragma once
// IWYU pragma private; include "GlobalNamespace\SyncStateId.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncStateId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncStateId::*)(uint8_t)>(&::GlobalNamespace::SyncStateId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33420f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SyncStateId::*)(::GlobalNamespace::SyncStateId)>(&::GlobalNamespace::SyncStateId::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33420f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SyncStateId::*)(::System::Object*)>(&::GlobalNamespace::SyncStateId::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3342108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { ::i2c::class_of<::GlobalNamespace::SyncStateId>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SyncStateId::*)()>(&::GlobalNamespace::SyncStateId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3342184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { ::i2c::class_of<::GlobalNamespace::SyncStateId>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SyncStateId::*)()>(&::GlobalNamespace::SyncStateId::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x334218c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { ::i2c::class_of<::GlobalNamespace::SyncStateId>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SyncStateId, ::GlobalNamespace::SyncStateId)>(&::GlobalNamespace::SyncStateId::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33421ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>(), ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SyncStateId, ::GlobalNamespace::SyncStateId)>(&::GlobalNamespace::SyncStateId::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33421bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>(), ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::SyncStateId::*)()>(&::GlobalNamespace::SyncStateId::Increment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33421cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Increment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.Before
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SyncStateId::*)(::GlobalNamespace::SyncStateId)>(&::GlobalNamespace::SyncStateId::Before)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33421dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Before", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncStateId::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::SyncStateId::Serialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3342208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.SerializeWithFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncStateId::*)(::LiteNetLib::Utils::NetDataWriter*, bool)>(&::GlobalNamespace::SyncStateId::SerializeWithFlag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3342228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "SerializeWithFlag", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SyncStateId (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::SyncStateId::Deserialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3342258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.DeserializeWithFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SyncStateId (*)(::LiteNetLib::Utils::NetDataReader*, ::by_ref<bool>)>(&::GlobalNamespace::SyncStateId::DeserializeWithFlag)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x334226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(),
                                                             { "DeserializeWithFlag", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncStateId.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::SyncStateId::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::SyncStateId::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3342298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SyncStateId::_ctor(uint8_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
inline bool GlobalNamespace::SyncStateId::Equals(::GlobalNamespace::SyncStateId other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::SyncStateId::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SyncStateId>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::SyncStateId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SyncStateId>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::SyncStateId::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SyncStateId>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::SyncStateId::op_Equality(::GlobalNamespace::SyncStateId a, ::GlobalNamespace::SyncStateId b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>(), ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::SyncStateId::op_Inequality(::GlobalNamespace::SyncStateId a, ::GlobalNamespace::SyncStateId b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>(), ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::SyncStateId::Increment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Increment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId>(*this, ___internal_method);
}
inline bool GlobalNamespace::SyncStateId::Before(::GlobalNamespace::SyncStateId other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Before", {}, { ::i2c::type_of<::GlobalNamespace::SyncStateId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void GlobalNamespace::SyncStateId::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::SyncStateId::SerializeWithFlag(::LiteNetLib::Utils::NetDataWriter* writer, bool flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "SerializeWithFlag", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer, flag);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::SyncStateId::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::SyncStateId::DeserializeWithFlag(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<bool> flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(),
                                                           { "DeserializeWithFlag", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId>(nullptr, ___internal_method, reader, flag);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::SyncStateId::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncStateId>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId>(*this, ___internal_method, reader);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>"
constexpr GlobalNamespace::SyncStateId::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*
GlobalNamespace::SyncStateId::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__SyncStateId_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::SyncStateId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::SyncStateId::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::SyncStateId::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SyncStateId>"
constexpr GlobalNamespace::SyncStateId::operator ::System::IEquatable_1<::GlobalNamespace::SyncStateId>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::SyncStateId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SyncStateId>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SyncStateId>* GlobalNamespace::SyncStateId::i___System__IEquatable_1___GlobalNamespace__SyncStateId_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::SyncStateId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_id", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SyncStateId::SyncStateId(uint8_t _id) noexcept {
  this->_id = _id;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncStateId::SyncStateId() {}
