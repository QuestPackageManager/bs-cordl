#pragma once
#include "GlobalNamespace/zzzz__DiscoveryPolicy_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_impl.hpp"
#include "GlobalNamespace/zzzz__InvitePolicy_impl.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__DiscoveryPolicy_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerControlSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
#include "GlobalNamespace/zzzz__InvitePolicy_def.hpp"
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerConfiguration::*)(
    int32_t, ::GlobalNamespace::DiscoveryPolicy, ::GlobalNamespace::InvitePolicy, ::GlobalNamespace::GameplayServerMode, ::GlobalNamespace::SongSelectionMode,
    ::GlobalNamespace::GameplayServerControlSettings)>(&::GlobalNamespace::GameplayServerConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10975c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DiscoveryPolicy>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::InvitePolicy>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerMode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongSelectionMode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerControlSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(ByRef<::GlobalNamespace::GameplayServerConfiguration>)>(
    &::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x109a454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x109a4c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(::System::Object*)>(
    &::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x109a4c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::GameplayServerConfiguration::*)()>(
    &::GlobalNamespace::GameplayServerConfiguration::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x109a58c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::GlobalNamespace::GameplayServerConfiguration>, ByRef<::GlobalNamespace::GameplayServerConfiguration>)>(&::GlobalNamespace::GameplayServerConfiguration::op_Equality)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x109a5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ByRef<::GlobalNamespace::GameplayServerConfiguration>, ByRef<::GlobalNamespace::GameplayServerConfiguration>)>(&::GlobalNamespace::GameplayServerConfiguration::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x109a5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerConfiguration::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::GameplayServerConfiguration::Serialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x109a5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerConfiguration::*)(
    ::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x109a664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::GameplayServerConfiguration::Deserialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x109a698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.WithMaxPlayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerConfiguration::*)(int32_t)>(
    &::GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x109a730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "WithMaxPlayerCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr GlobalNamespace::GameplayServerConfiguration::operator ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*
GlobalNamespace::GameplayServerConfiguration::i___System__IEquatable_1___GlobalNamespace__GameplayServerConfiguration_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr GlobalNamespace::GameplayServerConfiguration::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*
GlobalNamespace::GameplayServerConfiguration::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__GameplayServerConfiguration_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::GameplayServerConfiguration::_ctor(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy,
                                                                ::GlobalNamespace::GameplayServerMode gameplayServerMode, ::GlobalNamespace::SongSelectionMode songSelectionMode,
                                                                ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DiscoveryPolicy>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::InvitePolicy>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerMode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongSelectionMode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerControlSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxPlayerCount, discoveryPolicy, invitePolicy, gameplayServerMode, songSelectionMode,
                                                          gameplayServerControlSettings);
}
inline bool GlobalNamespace::GameplayServerConfiguration::Equals(ByRef<::GlobalNamespace::GameplayServerConfiguration> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::GameplayServerConfiguration::Equals(::GlobalNamespace::GameplayServerConfiguration other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::GameplayServerConfiguration::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::GameplayServerConfiguration::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameplayServerConfiguration::op_Equality(ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ByRef<::GlobalNamespace::GameplayServerConfiguration> b) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::GameplayServerConfiguration::op_Inequality(ByRef<::GlobalNamespace::GameplayServerConfiguration> a, ByRef<::GlobalNamespace::GameplayServerConfiguration> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::GameplayServerConfiguration>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::GameplayServerConfiguration::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "CreateFromSerializedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerConfiguration::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount(int32_t maxPlayerCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerConfiguration>::get(), "WithMaxPlayerCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method, maxPlayerCount);
}
// Ctor Parameters [CppParam { name: "maxPlayerCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "discoveryPolicy", ty: "::GlobalNamespace::DiscoveryPolicy", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "invitePolicy", ty: "::GlobalNamespace::InvitePolicy", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameplayServerMode", ty:
// "::GlobalNamespace::GameplayServerMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "songSelectionMode", ty: "::GlobalNamespace::SongSelectionMode", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "gameplayServerControlSettings", ty: "::GlobalNamespace::GameplayServerControlSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayServerConfiguration::GameplayServerConfiguration(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy,
                                                                                      ::GlobalNamespace::InvitePolicy invitePolicy, ::GlobalNamespace::GameplayServerMode gameplayServerMode,
                                                                                      ::GlobalNamespace::SongSelectionMode songSelectionMode,
                                                                                      ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) noexcept {
  this->maxPlayerCount = maxPlayerCount;
  this->discoveryPolicy = discoveryPolicy;
  this->invitePolicy = invitePolicy;
  this->gameplayServerMode = gameplayServerMode;
  this->songSelectionMode = songSelectionMode;
  this->gameplayServerControlSettings = gameplayServerControlSettings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerConfiguration::GameplayServerConfiguration() {}
