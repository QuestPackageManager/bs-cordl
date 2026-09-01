#pragma once
// IWYU pragma private; include "GlobalNamespace\Vector3Serializable.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector3Serializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::Vector3Serializable::Serialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x377f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector3Serializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::Vector3Serializable::Deserialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x377f144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Vector3Serializable::*)(::GlobalNamespace::Vector3Serializable)>(&::GlobalNamespace::Vector3Serializable::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3781cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Vector3Serializable::*)(::GlobalNamespace::Vector3Serializable)>(
    &::GlobalNamespace::Vector3Serializable::Approximately)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3781cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Approximately", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Vector3Serializable::*)(::System::Object*)>(&::GlobalNamespace::Vector3Serializable::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3781d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { ::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vector3Serializable::*)()>(&::GlobalNamespace::Vector3Serializable::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3781de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { ::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Vector3Serializable::*)()>(&::GlobalNamespace::Vector3Serializable::ToString)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3781e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { ::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vector3Serializable::*)()>(&::GlobalNamespace::Vector3Serializable::GetSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3781f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "GetSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector3Serializable::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Vector3Serializable::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3782020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector3Serializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::Vector3Serializable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37822bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::Vector3Serializable)>(
    &::GlobalNamespace::Vector3Serializable::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37822c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.op_Implicit___GlobalNamespace__Vector3Serializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Vector3Serializable (*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::Vector3Serializable::op_Implicit___GlobalNamespace__Vector3Serializable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x377f818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Vector3Serializable (*)(::GlobalNamespace::Vector3Serializable, ::GlobalNamespace::Vector3Serializable)>(
    &::GlobalNamespace::Vector3Serializable::op_Addition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37822f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(),
                                                { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector3Serializable.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Vector3Serializable (*)(::GlobalNamespace::Vector3Serializable, ::GlobalNamespace::Vector3Serializable)>(
    &::GlobalNamespace::Vector3Serializable::op_Subtraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x378230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vector3Serializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::Vector3Serializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline bool GlobalNamespace::Vector3Serializable::Equals(::GlobalNamespace::Vector3Serializable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Vector3Serializable::Approximately(::GlobalNamespace::Vector3Serializable other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "Approximately", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Vector3Serializable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Vector3Serializable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Vector3Serializable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Vector3Serializable::GetSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "GetSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Vector3Serializable::_ctor(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void GlobalNamespace::Vector3Serializable::_ctor(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Vector3Serializable::op_Implicit___UnityEngine__Vector3(::GlobalNamespace::Vector3Serializable v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::Vector3Serializable GlobalNamespace::Vector3Serializable::op_Implicit___GlobalNamespace__Vector3Serializable(::UnityEngine::Vector3 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Vector3Serializable>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::Vector3Serializable GlobalNamespace::Vector3Serializable::op_Addition(::GlobalNamespace::Vector3Serializable a, ::GlobalNamespace::Vector3Serializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(),
                                              { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Vector3Serializable>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::Vector3Serializable GlobalNamespace::Vector3Serializable::op_Subtraction(::GlobalNamespace::Vector3Serializable a, ::GlobalNamespace::Vector3Serializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector3Serializable>(),
                                              { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector3Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Vector3Serializable>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::Vector3Serializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::Vector3Serializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>"
constexpr GlobalNamespace::Vector3Serializable::operator ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>* GlobalNamespace::Vector3Serializable::i___System__IEquatable_1___GlobalNamespace__Vector3Serializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Vector3Serializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_z",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Vector3Serializable::Vector3Serializable(int32_t _x, int32_t _y, int32_t _z) noexcept {
  this->_x = _x;
  this->_y = _y;
  this->_z = _z;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector3Serializable::Vector3Serializable() {}
