#pragma once
// IWYU pragma private; include "GlobalNamespace\VarIntExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VarIntExtensions_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.PutVarInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::Utils::NetDataWriter*, int32_t)>(&::GlobalNamespace::VarIntExtensions::PutVarInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x377ddf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                                                           { "PutVarInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetVarInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::VarIntExtensions::GetVarInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x377e1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.PutVarUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::Utils::NetDataWriter*, uint32_t)>(&::GlobalNamespace::VarIntExtensions::PutVarUInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377ac84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "PutVarUInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetVarUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::VarIntExtensions::GetVarUInt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x377ac04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarUInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.PutVarLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::Utils::NetDataWriter*, int64_t)>(&::GlobalNamespace::VarIntExtensions::PutVarLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3785430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "PutVarLong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetVarLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::VarIntExtensions::GetVarLong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x378544c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarLong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.PutVarULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LiteNetLib::Utils::NetDataWriter*, uint64_t)>(&::GlobalNamespace::VarIntExtensions::PutVarULong)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3785468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "PutVarULong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetVarULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::VarIntExtensions::GetVarULong)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x37854b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarULong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.TryGetVarUInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LiteNetLib::Utils::NetDataReader*, ::by_ref<uint32_t>)>(&::GlobalNamespace::VarIntExtensions::TryGetVarUInt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x378552c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                             { "TryGetVarUInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.TryGetVarULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::LiteNetLib::Utils::NetDataReader*, ::by_ref<uint64_t>)>(&::GlobalNamespace::VarIntExtensions::TryGetVarULong)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x378556c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                             { "TryGetVarULong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::VarIntExtensions::GetSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3781fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::GlobalNamespace::VarIntExtensions::GetSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x378561c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::GlobalNamespace::VarIntExtensions::GetSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x37855e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VarIntExtensions.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::GlobalNamespace::VarIntExtensions::GetSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3785640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VarIntExtensions::PutVarInt(::LiteNetLib::Utils::NetDataWriter* writer, int32_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                                                         { "PutVarInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, val);
}
inline int32_t GlobalNamespace::VarIntExtensions::GetVarInt(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, reader);
}
inline void GlobalNamespace::VarIntExtensions::PutVarUInt(::LiteNetLib::Utils::NetDataWriter* writer, uint32_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                                                         { "PutVarUInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, val);
}
inline uint32_t GlobalNamespace::VarIntExtensions::GetVarUInt(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarUInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, reader);
}
inline void GlobalNamespace::VarIntExtensions::PutVarLong(::LiteNetLib::Utils::NetDataWriter* writer, int64_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                                                         { "PutVarLong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, val);
}
inline int64_t GlobalNamespace::VarIntExtensions::GetVarLong(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarLong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, reader);
}
inline void GlobalNamespace::VarIntExtensions::PutVarULong(::LiteNetLib::Utils::NetDataWriter* writer, uint64_t val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "PutVarULong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, val);
}
inline uint64_t GlobalNamespace::VarIntExtensions::GetVarULong(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetVarULong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, reader);
}
inline bool GlobalNamespace::VarIntExtensions::TryGetVarUInt(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<uint32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                           { "TryGetVarUInt", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, value);
}
inline bool GlobalNamespace::VarIntExtensions::TryGetVarULong(::LiteNetLib::Utils::NetDataReader* reader, ::by_ref<uint64_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(),
                                                           { "TryGetVarULong", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, value);
}
inline int32_t GlobalNamespace::VarIntExtensions::GetSize(int32_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
inline int32_t GlobalNamespace::VarIntExtensions::GetSize(uint32_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
inline int32_t GlobalNamespace::VarIntExtensions::GetSize(int64_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
inline int32_t GlobalNamespace::VarIntExtensions::GetSize(uint64_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VarIntExtensions*>(), { "GetSize", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VarIntExtensions::VarIntExtensions() {}
