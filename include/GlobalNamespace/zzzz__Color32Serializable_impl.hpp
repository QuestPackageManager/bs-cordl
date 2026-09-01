#pragma once
// IWYU pragma private; include "GlobalNamespace\Color32Serializable.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "GlobalNamespace/zzzz__Color32Serializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Color32Serializable::*)(::UnityEngine::Color32)>(&::GlobalNamespace::Color32Serializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3783d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Color32Serializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::Color32Serializable::Serialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3783d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Color32Serializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::Color32Serializable::Deserialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3783dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.op_Implicit___UnityEngine__Color32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::GlobalNamespace::Color32Serializable)>(
    &::GlobalNamespace::Color32Serializable::op_Implicit___UnityEngine__Color32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3783e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::Color32Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.op_Implicit___GlobalNamespace__Color32Serializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Color32Serializable (*)(::UnityEngine::Color32)>(
    &::GlobalNamespace::Color32Serializable::op_Implicit___GlobalNamespace__Color32Serializable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3783e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Color32Serializable::*)(::GlobalNamespace::Color32Serializable)>(&::GlobalNamespace::Color32Serializable::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3783e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Color32Serializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Color32Serializable::*)(::System::Object*)>(&::GlobalNamespace::Color32Serializable::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3783e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { ::i2c::class_of<::GlobalNamespace::Color32Serializable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Color32Serializable::*)()>(&::GlobalNamespace::Color32Serializable::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3783f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { ::i2c::class_of<::GlobalNamespace::Color32Serializable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Color32Serializable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Color32Serializable::*)()>(&::GlobalNamespace::Color32Serializable::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3783f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { ::i2c::class_of<::GlobalNamespace::Color32Serializable>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Color32Serializable::_ctor(::UnityEngine::Color32 color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void GlobalNamespace::Color32Serializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::Color32Serializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Color32 GlobalNamespace::Color32Serializable::op_Implicit___UnityEngine__Color32(::GlobalNamespace::Color32Serializable c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::Color32Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c);
}
inline ::GlobalNamespace::Color32Serializable GlobalNamespace::Color32Serializable::op_Implicit___GlobalNamespace__Color32Serializable(::UnityEngine::Color32 c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color32>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Color32Serializable>(nullptr, ___internal_method, c);
}
inline bool GlobalNamespace::Color32Serializable::Equals(::GlobalNamespace::Color32Serializable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Color32Serializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Color32Serializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Color32Serializable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Color32Serializable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Color32Serializable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Color32Serializable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Color32Serializable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Color32Serializable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::Color32Serializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::Color32Serializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Color32Serializable>"
constexpr GlobalNamespace::Color32Serializable::operator ::System::IEquatable_1<::GlobalNamespace::Color32Serializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Color32Serializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Color32Serializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Color32Serializable>* GlobalNamespace::Color32Serializable::i___System__IEquatable_1___GlobalNamespace__Color32Serializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Color32Serializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Color32Serializable::Color32Serializable(::UnityEngine::Color32 _color) noexcept {
  this->_color = _color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Color32Serializable::Color32Serializable() {}
