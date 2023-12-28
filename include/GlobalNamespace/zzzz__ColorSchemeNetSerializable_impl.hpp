#pragma once
#include "GlobalNamespace/zzzz__ColorNoAlphaSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorNoAlphaSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeNetSerializable::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::ColorSchemeNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xe2a7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeNetSerializable>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ColorSchemeNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe2a938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeNetSerializable>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemeNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ColorSchemeNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe2a9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeNetSerializable>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ColorSchemeNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::ColorSchemeNetSerializable::_ctor(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor,
                                                               ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColor0Boost,
                                                               ::UnityEngine::Color environmentColor1Boost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeNetSerializable>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberAColor, saberBColor, obstaclesColor, environmentColor0, environmentColor1, environmentColor0Boost,
                                                          environmentColor1Boost);
}
inline void GlobalNamespace::ColorSchemeNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeNetSerializable>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ColorSchemeNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeNetSerializable>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
// Ctor Parameters [CppParam { name: "saberAColor", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberBColor", ty:
// "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "obstaclesColor", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "environmentColor0", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "environmentColor1", ty:
// "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "environmentColor0Boost", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "environmentColor1Boost", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorSchemeNetSerializable::ColorSchemeNetSerializable(::GlobalNamespace::ColorNoAlphaSerializable saberAColor, ::GlobalNamespace::ColorNoAlphaSerializable saberBColor,
                                                                                    ::GlobalNamespace::ColorNoAlphaSerializable obstaclesColor,
                                                                                    ::GlobalNamespace::ColorNoAlphaSerializable environmentColor0,
                                                                                    ::GlobalNamespace::ColorNoAlphaSerializable environmentColor1,
                                                                                    ::GlobalNamespace::ColorNoAlphaSerializable environmentColor0Boost,
                                                                                    ::GlobalNamespace::ColorNoAlphaSerializable environmentColor1Boost) noexcept {
  this->saberAColor = saberAColor;
  this->saberBColor = saberBColor;
  this->obstaclesColor = obstaclesColor;
  this->environmentColor0 = environmentColor0;
  this->environmentColor1 = environmentColor1;
  this->environmentColor0Boost = environmentColor0Boost;
  this->environmentColor1Boost = environmentColor1Boost;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeNetSerializable::ColorSchemeNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
