#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayServerConfiguration.hpp"
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
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerConfiguration::*)(
    int32_t, ::GlobalNamespace::DiscoveryPolicy, ::GlobalNamespace::InvitePolicy, ::GlobalNamespace::GameplayServerMode, ::GlobalNamespace::SongSelectionMode,
    ::GlobalNamespace::GameplayServerControlSettings)>(&::GlobalNamespace::GameplayServerConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32aa458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::DiscoveryPolicy>(), ::i2c::type_of<::GlobalNamespace::InvitePolicy>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayServerMode>(), ::i2c::type_of<::GlobalNamespace::SongSelectionMode>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayServerControlSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(::by_ref<::GlobalNamespace::GameplayServerConfiguration>)>(
    &::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32afd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32afd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayServerConfiguration::*)(::System::Object*)>(&::GlobalNamespace::GameplayServerConfiguration::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x32afd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameplayServerConfiguration::*)()>(&::GlobalNamespace::GameplayServerConfiguration::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x32afe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::GameplayServerConfiguration>, ::by_ref<::GlobalNamespace::GameplayServerConfiguration>)>(
    &::GlobalNamespace::GameplayServerConfiguration::op_Equality)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32afea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
            { "op_Equality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::GameplayServerConfiguration>, ::by_ref<::GlobalNamespace::GameplayServerConfiguration>)>(
    &::GlobalNamespace::GameplayServerConfiguration::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32afea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
            { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerConfiguration::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::GameplayServerConfiguration::Serialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x32afec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerConfiguration::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x32aff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                                                           { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::GameplayServerConfiguration::Deserialize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32affc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerConfiguration.WithMaxPlayerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerConfiguration::*)(int32_t)>(
    &::GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32b0084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "WithMaxPlayerCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayServerConfiguration::_ctor(int32_t maxPlayerCount, ::GlobalNamespace::DiscoveryPolicy discoveryPolicy, ::GlobalNamespace::InvitePolicy invitePolicy,
                                                                ::GlobalNamespace::GameplayServerMode gameplayServerMode, ::GlobalNamespace::SongSelectionMode songSelectionMode,
                                                                ::GlobalNamespace::GameplayServerControlSettings gameplayServerControlSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::DiscoveryPolicy>(), ::i2c::type_of<::GlobalNamespace::InvitePolicy>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayServerMode>(), ::i2c::type_of<::GlobalNamespace::SongSelectionMode>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayServerControlSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxPlayerCount, discoveryPolicy, invitePolicy, gameplayServerMode, songSelectionMode, gameplayServerControlSettings);
}
inline bool GlobalNamespace::GameplayServerConfiguration::Equals(::by_ref<::GlobalNamespace::GameplayServerConfiguration> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::GameplayServerConfiguration::Equals(::GlobalNamespace::GameplayServerConfiguration other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::GameplayServerConfiguration::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::GameplayServerConfiguration::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::GameplayServerConfiguration::op_Equality(::by_ref<::GlobalNamespace::GameplayServerConfiguration> a, ::by_ref<::GlobalNamespace::GameplayServerConfiguration> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::GameplayServerConfiguration::op_Inequality(::by_ref<::GlobalNamespace::GameplayServerConfiguration> a, ::by_ref<::GlobalNamespace::GameplayServerConfiguration> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameplayServerConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::GameplayServerConfiguration::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerConfiguration::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(),
                                                                                         { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerConfiguration::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(nullptr, ___internal_method, reader);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerConfiguration::WithMaxPlayerCount(int32_t maxPlayerCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerConfiguration>(), { "WithMaxPlayerCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(*this, ___internal_method, maxPlayerCount);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr GlobalNamespace::GameplayServerConfiguration::operator ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr ::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*
GlobalNamespace::GameplayServerConfiguration::i___System__IEquatable_1___GlobalNamespace__GameplayServerConfiguration_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr GlobalNamespace::GameplayServerConfiguration::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*
GlobalNamespace::GameplayServerConfiguration::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__GameplayServerConfiguration_() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::GameplayServerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::GameplayServerConfiguration::operator ::LiteNetLib::Utils::INetImmutableSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::GameplayServerConfiguration::i___LiteNetLib__Utils__INetImmutableSerializable() {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
