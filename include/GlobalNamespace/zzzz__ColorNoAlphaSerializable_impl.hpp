#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorNoAlphaSerializable.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__ColorNoAlphaSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoAlphaSerializable::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorNoAlphaSerializable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3783f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoAlphaSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ColorNoAlphaSerializable::Serialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3783f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoAlphaSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ColorNoAlphaSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3783f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.op_Implicit___UnityEngine__Color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::GlobalNamespace::ColorNoAlphaSerializable)>(
    &::GlobalNamespace::ColorNoAlphaSerializable::op_Implicit___UnityEngine__Color)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3784010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ColorNoAlphaSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.op_Implicit___GlobalNamespace__ColorNoAlphaSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorNoAlphaSerializable (*)(::UnityEngine::Color)>(
    &::GlobalNamespace::ColorNoAlphaSerializable::op_Implicit___GlobalNamespace__ColorNoAlphaSerializable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3784014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorNoAlphaSerializable::*)(::GlobalNamespace::ColorNoAlphaSerializable)>(
    &::GlobalNamespace::ColorNoAlphaSerializable::Equals)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3784018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::ColorNoAlphaSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColorNoAlphaSerializable::*)(::System::Object*)>(&::GlobalNamespace::ColorNoAlphaSerializable::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3784120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { ::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorNoAlphaSerializable::*)()>(&::GlobalNamespace::ColorNoAlphaSerializable::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37841a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { ::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoAlphaSerializable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ColorNoAlphaSerializable::*)()>(&::GlobalNamespace::ColorNoAlphaSerializable::ToString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3784210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { ::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), 3 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorNoAlphaSerializable::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void GlobalNamespace::ColorNoAlphaSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::ColorNoAlphaSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Color GlobalNamespace::ColorNoAlphaSerializable::op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorNoAlphaSerializable c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ColorNoAlphaSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, c);
}
inline ::GlobalNamespace::ColorNoAlphaSerializable GlobalNamespace::ColorNoAlphaSerializable::op_Implicit___GlobalNamespace__ColorNoAlphaSerializable(::UnityEngine::Color c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorNoAlphaSerializable>(nullptr, ___internal_method, c);
}
inline bool GlobalNamespace::ColorNoAlphaSerializable::Equals(::GlobalNamespace::ColorNoAlphaSerializable other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::ColorNoAlphaSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::ColorNoAlphaSerializable::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::ColorNoAlphaSerializable::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::ColorNoAlphaSerializable::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorNoAlphaSerializable>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ColorNoAlphaSerializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ColorNoAlphaSerializable::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>"
constexpr GlobalNamespace::ColorNoAlphaSerializable::operator ::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>* GlobalNamespace::ColorNoAlphaSerializable::i___System__IEquatable_1___GlobalNamespace__ColorNoAlphaSerializable_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::ColorNoAlphaSerializable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorNoAlphaSerializable::ColorNoAlphaSerializable(::UnityEngine::Color _color) noexcept {
  this->_color = _color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorNoAlphaSerializable::ColorNoAlphaSerializable() {}
