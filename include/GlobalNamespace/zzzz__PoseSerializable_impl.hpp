#pragma once
// IWYU pragma private; include "GlobalNamespace/PoseSerializable.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_impl.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "GlobalNamespace/zzzz__QuaternionSerializable_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseSerializable::*)(::GlobalNamespace::Vector3Serializable, ::GlobalNamespace::QuaternionSerializable)>(
    &::GlobalNamespace::PoseSerializable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x377ec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>(), ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.get_identity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PoseSerializable (*)()>(&::GlobalNamespace::PoseSerializable::get_identity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x377ec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "get_identity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::PoseSerializable::Serialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x377ec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::PoseSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x377ecb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PoseSerializable::*)(::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::PoseSerializable::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x377ece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PoseSerializable::*)(::System::Object*)>(&::GlobalNamespace::PoseSerializable::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x377ed4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { ::i2c::class_of<::GlobalNamespace::PoseSerializable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PoseSerializable::*)()>(&::GlobalNamespace::PoseSerializable::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x377ede0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { ::i2c::class_of<::GlobalNamespace::PoseSerializable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PoseSerializable::*)()>(&::GlobalNamespace::PoseSerializable::ToString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x377ee24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { ::i2c::class_of<::GlobalNamespace::PoseSerializable>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PoseSerializable::*)()>(&::GlobalNamespace::PoseSerializable::GetSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x377ef14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "GetSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Implicit___UnityEngine__Pose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::PoseSerializable::op_Implicit___UnityEngine__Pose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x377ef40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Implicit___GlobalNamespace__PoseSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PoseSerializable (*)(::UnityEngine::Pose)>(
    &::GlobalNamespace::PoseSerializable::op_Implicit___GlobalNamespace__PoseSerializable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x377efa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PoseSerializable (*)(::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable)>(
    &::GlobalNamespace::PoseSerializable::op_Addition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x377f024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseSerializable.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PoseSerializable (*)(::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable)>(
    &::GlobalNamespace::PoseSerializable::op_Subtraction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x377f088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PoseSerializable::_ctor(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Vector3Serializable>(), ::i2c::type_of<::GlobalNamespace::QuaternionSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::PoseSerializable::get_identity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "get_identity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PoseSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::PoseSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline bool GlobalNamespace::PoseSerializable::Equals(::GlobalNamespace::PoseSerializable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::PoseSerializable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PoseSerializable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::PoseSerializable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PoseSerializable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::PoseSerializable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PoseSerializable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::PoseSerializable::GetSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "GetSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Pose GlobalNamespace::PoseSerializable::op_Implicit___UnityEngine__Pose(::GlobalNamespace::PoseSerializable p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, p);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::PoseSerializable::op_Implicit___GlobalNamespace__PoseSerializable(::UnityEngine::Pose p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable>(nullptr, ___internal_method, p);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::PoseSerializable::op_Addition(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable>(nullptr, ___internal_method, a, b);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::PoseSerializable::op_Subtraction(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PoseSerializable>(),
                                              { "op_Subtraction", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PoseSerializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::PoseSerializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PoseSerializable>"
constexpr GlobalNamespace::PoseSerializable::operator ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::PoseSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PoseSerializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PoseSerializable>* GlobalNamespace::PoseSerializable::i___System__IEquatable_1___GlobalNamespace__PoseSerializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::PoseSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "position", ty: "::GlobalNamespace::Vector3Serializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty:
// "::GlobalNamespace::QuaternionSerializable", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PoseSerializable::PoseSerializable(::GlobalNamespace::Vector3Serializable position, ::GlobalNamespace::QuaternionSerializable rotation) noexcept {
  this->position = position;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoseSerializable::PoseSerializable() {}
