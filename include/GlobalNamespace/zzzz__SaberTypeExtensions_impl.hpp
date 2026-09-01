#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberTypeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaberTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberTypeExtensions.MatchesColorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SaberType, ::GlobalNamespace::ColorType)>(&::GlobalNamespace::SaberTypeExtensions::MatchesColorType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x377ec80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(),
                                                             { "MatchesColorType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>(), ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTypeExtensions.Node
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::SaberTypeExtensions::Node)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3781824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "Node", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTypeExtensions.MainSaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SaberType (*)(bool)>(&::GlobalNamespace::SaberTypeExtensions::MainSaber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3781834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "MainSaber", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTypeExtensions.ToHandString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::SaberTypeExtensions::ToHandString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3781840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "ToHandString", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTypeExtensions.ToSaberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SaberType (*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::SaberTypeExtensions::ToSaberType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x37818b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "ToSaberType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberTypeExtensions.ToColorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (*)(::GlobalNamespace::SaberType)>(&::GlobalNamespace::SaberTypeExtensions::ToColorType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3781938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "ToColorType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SaberTypeExtensions::MatchesColorType(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(),
                                                           { "MatchesColorType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>(), ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, saberType, colorType);
}
inline ::UnityEngine::XR::XRNode GlobalNamespace::SaberTypeExtensions::Node(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "Node", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(nullptr, ___internal_method, saberType);
}
inline ::GlobalNamespace::SaberType GlobalNamespace::SaberTypeExtensions::MainSaber(bool leftHanded) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "MainSaber", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaberType>(nullptr, ___internal_method, leftHanded);
}
inline ::StringW GlobalNamespace::SaberTypeExtensions::ToHandString(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "ToHandString", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, saberType);
}
inline ::GlobalNamespace::SaberType GlobalNamespace::SaberTypeExtensions::ToSaberType(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "ToSaberType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SaberType>(nullptr, ___internal_method, colorType);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::SaberTypeExtensions::ToColorType(::GlobalNamespace::SaberType saberType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberTypeExtensions*>(), { "ToColorType", {}, { ::i2c::type_of<::GlobalNamespace::SaberType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(nullptr, ___internal_method, saberType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberTypeExtensions::SaberTypeExtensions() {}
