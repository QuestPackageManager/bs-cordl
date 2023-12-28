#pragma once
#include "GlobalNamespace/zzzz__ColorSchemeNetSerializable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsNetSerializable::*)()>(
    &::GlobalNamespace::PlayerSpecificSettingsNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe52590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsNetSerializable::*)(
    ::StringW, ::StringW, bool, bool, float_t, float_t, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color,
    ::UnityEngine::Color)>(&::GlobalNamespace::PlayerSpecificSettingsNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xe52630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::PlayerSpecificSettingsNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xe523a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpecificSettingsNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpecificSettingsNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::PlayerSpecificSettingsNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe52598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::PlayerSpecificSettingsNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsNetSerializable::__set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsNetSerializable::__set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr bool const& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsNetSerializable::__set_leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHanded = value;
}
constexpr bool& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_automaticPlayerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticPlayerHeight;
}
constexpr bool const& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_automaticPlayerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticPlayerHeight;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsNetSerializable::__set_automaticPlayerHeight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___automaticPlayerHeight = value;
}
constexpr float_t& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_playerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr float_t const& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_playerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsNetSerializable::__set_playerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerHeight = value;
}
constexpr float_t& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_headPosToPlayerHeightOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosToPlayerHeightOffset;
}
constexpr float_t const& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_headPosToPlayerHeightOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headPosToPlayerHeightOffset;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsNetSerializable::__set_headPosToPlayerHeightOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headPosToPlayerHeightOffset = value;
}
constexpr ::GlobalNamespace::ColorSchemeNetSerializable& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_colorScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr ::GlobalNamespace::ColorSchemeNetSerializable const& GlobalNamespace::PlayerSpecificSettingsNetSerializable::__get_colorScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorScheme;
}
constexpr void GlobalNamespace::PlayerSpecificSettingsNetSerializable::__set_colorScheme(::GlobalNamespace::ColorSchemeNetSerializable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorScheme = value;
}
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GlobalNamespace::PlayerSpecificSettingsNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>());
}
inline void GlobalNamespace::PlayerSpecificSettingsNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*
GlobalNamespace::PlayerSpecificSettingsNetSerializable::New_ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight,
                                                                 float_t headPosToPlayerHeightOffset, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                 ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                                                                 ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>(userId, userName, leftHanded, automaticPlayerHeight, playerHeight, headPosToPlayerHeightOffset,
                                                                                                     saberAColor, saberBColor, obstaclesColor, environmentColor0, environmentColor1,
                                                                                                     environmentColor0Boost, environmentColor1Boost));
}
inline void GlobalNamespace::PlayerSpecificSettingsNetSerializable::_ctor(::StringW userId, ::StringW userName, bool leftHanded, bool automaticPlayerHeight, float_t playerHeight,
                                                                          float_t headPosToPlayerHeightOffset, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                          ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                                                                          ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, userName, leftHanded, automaticPlayerHeight, playerHeight, headPosToPlayerHeightOffset, saberAColor,
                                                          saberBColor, obstaclesColor, environmentColor0, environmentColor1, environmentColor0Boost, environmentColor1Boost);
}
inline void GlobalNamespace::PlayerSpecificSettingsNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::PlayerSpecificSettingsNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable::PlayerSpecificSettingsNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
