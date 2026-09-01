#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSerializable.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSerializable::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorSerializable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3783a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::ColorSerializable::Serialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3783a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::ColorSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3783a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.op_Implicit___UnityEngine__Color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::GlobalNamespace::ColorSerializable)>(&::GlobalNamespace::ColorSerializable::op_Implicit___UnityEngine__Color)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3783b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ColorSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.op_Implicit___GlobalNamespace__ColorSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorSerializable (*)(::UnityEngine::Color)>(
    &::GlobalNamespace::ColorSerializable::op_Implicit___GlobalNamespace__ColorSerializable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3783b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorSerializable::*)(::GlobalNamespace::ColorSerializable)>(&::GlobalNamespace::ColorSerializable::Equals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3783b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::ColorSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorSerializable::*)(::System::Object*)>(&::GlobalNamespace::ColorSerializable::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3783c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { ::i2c::class_of<::GlobalNamespace::ColorSerializable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorSerializable::*)()>(&::GlobalNamespace::ColorSerializable::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3783cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { ::i2c::class_of<::GlobalNamespace::ColorSerializable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSerializable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ColorSerializable::*)()>(&::GlobalNamespace::ColorSerializable::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3783d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { ::i2c::class_of<::GlobalNamespace::ColorSerializable>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorSerializable::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void GlobalNamespace::ColorSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::ColorSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Color GlobalNamespace::ColorSerializable::op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorSerializable c) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ColorSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c);
}
inline ::GlobalNamespace::ColorSerializable GlobalNamespace::ColorSerializable::op_Implicit___GlobalNamespace__ColorSerializable(::UnityEngine::Color c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSerializable>(nullptr, ___internal_method, c);
}
inline bool GlobalNamespace::ColorSerializable::Equals(::GlobalNamespace::ColorSerializable other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::ColorSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::ColorSerializable::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSerializable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::ColorSerializable::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSerializable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::ColorSerializable::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSerializable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ColorSerializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ColorSerializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ColorSerializable>"
constexpr GlobalNamespace::ColorSerializable::operator ::System::IEquatable_1<::GlobalNamespace::ColorSerializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::ColorSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ColorSerializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ColorSerializable>* GlobalNamespace::ColorSerializable::i___System__IEquatable_1___GlobalNamespace__ColorSerializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::ColorSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorSerializable::ColorSerializable(::UnityEngine::Color _color) noexcept {
  this->_color = _color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSerializable::ColorSerializable() {}
