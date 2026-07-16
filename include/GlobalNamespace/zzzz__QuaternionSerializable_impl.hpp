#pragma once
// IWYU pragma private; include "GlobalNamespace/QuaternionSerializable.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.get_identity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuaternionSerializable (*)()>(&::GlobalNamespace::QuaternionSerializable::get_identity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x377e308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "get_identity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.ToSmallest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Quaternion, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::QuaternionSerializable::ToSmallest)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x377e500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
            { "ToSmallest", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.FromSmallest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::QuaternionSerializable::FromSmallest)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x377e8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
                                                             { "FromSmallest", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::QuaternionSerializable::Serialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x377abb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::QuaternionSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x377a908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuaternionSerializable::*)(::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x377e9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuaternionSerializable::*)(::System::Object*)>(&::GlobalNamespace::QuaternionSerializable::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x377e9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuaternionSerializable::*)(::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::Approximately)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x377ea90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Approximately", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuaternionSerializable::*)()>(&::GlobalNamespace::QuaternionSerializable::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x377eb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::QuaternionSerializable::*)()>(&::GlobalNamespace::QuaternionSerializable::GetSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x377eb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "GetSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::QuaternionSerializable::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x377e378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuaternionSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::QuaternionSerializable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x377ebd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::QuaternionSerializable::*)()>(&::GlobalNamespace::QuaternionSerializable::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x377ebe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x377eb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Implicit___GlobalNamespace__QuaternionSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuaternionSerializable (*)(::UnityEngine::Quaternion)>(
    &::GlobalNamespace::QuaternionSerializable::op_Implicit___GlobalNamespace__QuaternionSerializable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x377af98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuaternionSerializable (*)(::GlobalNamespace::QuaternionSerializable, ::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x377ec20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
                                                { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>(), ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuaternionSerializable.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuaternionSerializable (*)(::GlobalNamespace::QuaternionSerializable, ::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::QuaternionSerializable::op_Subtraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x377ec3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
                                         { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>(), ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::get_identity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "get_identity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable>(nullptr, ___internal_method);
}
inline void GlobalNamespace::QuaternionSerializable::ToSmallest(::UnityEngine::Quaternion q, ::by_ref<int32_t> sa, ::by_ref<int32_t> sb, ::by_ref<int32_t> sc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
          { "ToSmallest", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, q, sa, sb, sc);
}
inline ::UnityEngine::Quaternion GlobalNamespace::QuaternionSerializable::FromSmallest(int32_t sa, int32_t sb, int32_t sc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
                                                                                         { "FromSmallest", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, sa, sb, sc);
}
inline void GlobalNamespace::QuaternionSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::QuaternionSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline bool GlobalNamespace::QuaternionSerializable::Equals(::GlobalNamespace::QuaternionSerializable other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::QuaternionSerializable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::QuaternionSerializable::Approximately(::GlobalNamespace::QuaternionSerializable other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "Approximately", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::QuaternionSerializable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::QuaternionSerializable::GetSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "GetSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::QuaternionSerializable::_ctor(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, q);
}
inline void GlobalNamespace::QuaternionSerializable::_ctor(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline ::StringW GlobalNamespace::QuaternionSerializable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::QuaternionSerializable::op_Implicit___UnityEngine__Quaternion(::GlobalNamespace::QuaternionSerializable q) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::op_Implicit___GlobalNamespace__QuaternionSerializable(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable>(nullptr, ___internal_method, q);
}
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::op_Addition(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
                                              { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>(), ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::QuaternionSerializable GlobalNamespace::QuaternionSerializable::op_Subtraction(::GlobalNamespace::QuaternionSerializable a, ::GlobalNamespace::QuaternionSerializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuaternionSerializable>(),
                                              { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>(), ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuaternionSerializable>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::QuaternionSerializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::QuaternionSerializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>"
constexpr GlobalNamespace::QuaternionSerializable::operator ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>* GlobalNamespace::QuaternionSerializable::i___System__IEquatable_1___GlobalNamespace__QuaternionSerializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::QuaternionSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_b", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_c",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::QuaternionSerializable::QuaternionSerializable(int32_t _a, int32_t _b, int32_t _c) noexcept {
  this->_a = _a;
  this->_b = _b;
  this->_c = _c;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuaternionSerializable::QuaternionSerializable() {}
