#pragma once
// IWYU pragma private; include "GlobalNamespace\Vector4Serializable.hpp"
#include "GlobalNamespace/zzzz__Vector4Serializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector4Serializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::Vector4Serializable::Serialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3782328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector4Serializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::Vector4Serializable::Deserialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x37823c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Vector4Serializable::*)(::GlobalNamespace::Vector4Serializable)>(&::GlobalNamespace::Vector4Serializable::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3782450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Vector4Serializable::*)(::GlobalNamespace::Vector4Serializable)>(
    &::GlobalNamespace::Vector4Serializable::Approximately)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3782494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Approximately", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Vector4Serializable::*)(::System::Object*)>(&::GlobalNamespace::Vector4Serializable::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3782508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { ::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vector4Serializable::*)()>(&::GlobalNamespace::Vector4Serializable::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37825b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { ::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Vector4Serializable::*)()>(&::GlobalNamespace::Vector4Serializable::ToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x37825d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { ::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Vector4Serializable::*)()>(&::GlobalNamespace::Vector4Serializable::GetSize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3782730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "GetSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector4Serializable::*)(::UnityEngine::Vector4)>(&::GlobalNamespace::Vector4Serializable::_ctor)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x37827fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Vector4Serializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::Vector4Serializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3782b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.op_Implicit___UnityEngine__Vector4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::GlobalNamespace::Vector4Serializable)>(
    &::GlobalNamespace::Vector4Serializable::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3782b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.op_Implicit___GlobalNamespace__Vector4Serializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Vector4Serializable (*)(::UnityEngine::Vector4)>(
    &::GlobalNamespace::Vector4Serializable::op_Implicit___GlobalNamespace__Vector4Serializable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3782bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Vector4Serializable (*)(::GlobalNamespace::Vector4Serializable, ::GlobalNamespace::Vector4Serializable)>(
    &::GlobalNamespace::Vector4Serializable::op_Addition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3782bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(),
                                                { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Vector4Serializable.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Vector4Serializable (*)(::GlobalNamespace::Vector4Serializable, ::GlobalNamespace::Vector4Serializable)>(
    &::GlobalNamespace::Vector4Serializable::op_Subtraction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3782c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Vector4Serializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::Vector4Serializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline bool GlobalNamespace::Vector4Serializable::Equals(::GlobalNamespace::Vector4Serializable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Vector4Serializable::Approximately(::GlobalNamespace::Vector4Serializable other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "Approximately", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Vector4Serializable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Vector4Serializable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Vector4Serializable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Vector4Serializable::GetSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "GetSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Vector4Serializable::_ctor(::UnityEngine::Vector4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void GlobalNamespace::Vector4Serializable::_ctor(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Vector4 GlobalNamespace::Vector4Serializable::op_Implicit___UnityEngine__Vector4(::GlobalNamespace::Vector4Serializable v) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::Vector4Serializable GlobalNamespace::Vector4Serializable::op_Implicit___GlobalNamespace__Vector4Serializable(::UnityEngine::Vector4 v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Vector4Serializable>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::Vector4Serializable GlobalNamespace::Vector4Serializable::op_Addition(::GlobalNamespace::Vector4Serializable a, ::GlobalNamespace::Vector4Serializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(),
                                              { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Vector4Serializable>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::Vector4Serializable GlobalNamespace::Vector4Serializable::op_Subtraction(::GlobalNamespace::Vector4Serializable a, ::GlobalNamespace::Vector4Serializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Vector4Serializable>(),
                                              { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::Vector4Serializable>(), ::i2c::type_of<::GlobalNamespace::Vector4Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Vector4Serializable>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::Vector4Serializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::Vector4Serializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>"
constexpr GlobalNamespace::Vector4Serializable::operator ::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>* GlobalNamespace::Vector4Serializable::i___System__IEquatable_1___GlobalNamespace__Vector4Serializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Vector4Serializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_x", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_y", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_z",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_w", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Vector4Serializable::Vector4Serializable(int32_t _x, int32_t _y, int32_t _z, int32_t _w) noexcept {
  this->_x = _x;
  this->_y = _y;
  this->_z = _z;
  this->_w = _w;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector4Serializable::Vector4Serializable() {}
