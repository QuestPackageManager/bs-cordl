#pragma once
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AuthenticationToken__Platform::__AuthenticationToken__Platform(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AuthenticationToken__Platform::__AuthenticationToken__Platform() {}
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::Test{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::OculusRift{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::OculusQuest{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::Steam{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::PS4{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::PS4Dev{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::PS4Cert{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::PS5{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::PS5Dev{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::PS5Cert{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::__AuthenticationToken__Platform::Oculus{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AuthenticationToken::*)(
    ::GlobalNamespace::__AuthenticationToken__Platform, ::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::AuthenticationToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe293f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AuthenticationToken__Platform>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AuthenticationToken::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::AuthenticationToken::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe29404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AuthenticationToken (::GlobalNamespace::AuthenticationToken::*)(
    ::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::AuthenticationToken::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe295b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AuthenticationToken (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::AuthenticationToken::Deserialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xe295dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.FromHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW)>(&::GlobalNamespace::AuthenticationToken::FromHex)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe294c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "FromHex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.GetHexVal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(char16_t)>(&::GlobalNamespace::AuthenticationToken::GetHexVal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xe29794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "GetHexVal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.FromUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW)>(&::GlobalNamespace::AuthenticationToken::FromUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe29498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "FromUtf8", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.ToHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::AuthenticationToken::ToHex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe296fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "ToHex", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AuthenticationToken.ToUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::AuthenticationToken::ToUtf8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe296cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "ToUtf8", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
constexpr GlobalNamespace::AuthenticationToken::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::AuthenticationToken::_ctor(::GlobalNamespace::__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName, ::StringW sessionToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AuthenticationToken__Platform>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform, userId, userName, sessionToken);
}
inline void GlobalNamespace::AuthenticationToken::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::AuthenticationToken GlobalNamespace::AuthenticationToken::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "CreateFromSerializedData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::AuthenticationToken GlobalNamespace::AuthenticationToken::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AuthenticationToken, false>(nullptr, ___internal_method, reader);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::AuthenticationToken::FromHex(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "FromHex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, str);
}
inline uint8_t GlobalNamespace::AuthenticationToken::GetHexVal(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "GetHexVal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, c);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::AuthenticationToken::FromUtf8(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "FromUtf8", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, str);
}
inline ::StringW GlobalNamespace::AuthenticationToken::ToHex(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "ToHex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
inline ::StringW GlobalNamespace::AuthenticationToken::ToUtf8(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AuthenticationToken>::get(), "ToUtf8", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters [CppParam { name: "platform", ty: "::GlobalNamespace::__AuthenticationToken__Platform", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "::StringW",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sessionToken", ty: "::StringW", modifiers:
// "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::AuthenticationToken::AuthenticationToken(::GlobalNamespace::__AuthenticationToken__Platform platform, ::StringW userId, ::StringW userName,
                                                                      ::StringW sessionToken) noexcept {
  this->platform = platform;
  this->userId = userId;
  this->userName = userName;
  this->sessionToken = sessionToken;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AuthenticationToken::AuthenticationToken() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
