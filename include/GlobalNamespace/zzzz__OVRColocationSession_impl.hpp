#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_def.hpp"
#include "GlobalNamespace/zzzz__OVRColocationSession_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.get_AdvertisementUuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRColocationSession_Data::*)()>(&::GlobalNamespace::OVRColocationSession_Data::get_AdvertisementUuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e1a9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "get_AdvertisementUuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.set_AdvertisementUuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRColocationSession_Data::*)(::System::Guid)>(&::GlobalNamespace::OVRColocationSession_Data::set_AdvertisementUuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1a9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "set_AdvertisementUuid", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.get_Metadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::OVRColocationSession_Data::*)()>(&::GlobalNamespace::OVRColocationSession_Data::get_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "get_Metadata", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.set_Metadata
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRColocationSession_Data::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRColocationSession_Data::set_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1a9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "set_Metadata", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline ::System::Guid GlobalNamespace::OVRColocationSession_Data::get_AdvertisementUuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "get_AdvertisementUuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession_Data::set_AdvertisementUuid(::System::Guid value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "set_AdvertisementUuid", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> GlobalNamespace::OVRColocationSession_Data::get_Metadata() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "get_Metadata", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession_Data::set_Metadata(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession_Data>(), { "set_Metadata", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AdvertisementUuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Metadata_k__BackingField", ty:
// "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRColocationSession_Data::OVRColocationSession_Data(::System::Guid _AdvertisementUuid_k__BackingField, ::ArrayW<uint8_t> _Metadata_k__BackingField) noexcept {
  this->_AdvertisementUuid_k__BackingField = _AdvertisementUuid_k__BackingField;
  this->_Metadata_k__BackingField = _Metadata_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRColocationSession_Data::OVRColocationSession_Data() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRColocationSession_Result::OVRColocationSession_Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRColocationSession_Result::OVRColocationSession_Result() {}
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::AlreadyAdvertising{ static_cast<int32_t>(0xbb9) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::AlreadyDiscovering{ static_cast<int32_t>(0xbba) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::Unsupported{ static_cast<int32_t>(0xfffffc14) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::OperationFailed{ static_cast<int32_t>(0xfffffc12) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::InvalidData{ static_cast<int32_t>(0xfffffc10) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::NetworkFailed{ static_cast<int32_t>(0xfffff446) };
constexpr ::GlobalNamespace::OVRColocationSession_Result GlobalNamespace::OVRColocationSession_Result::NoDiscoveryMethodAvailable{ static_cast<int32_t>(0xfffff445) };
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.add_ColocationSessionDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(
    &::GlobalNamespace::OVRColocationSession::add_ColocationSessionDiscovered)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e19e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                             { "add_ColocationSessionDiscovered", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.remove_ColocationSessionDiscovered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(
    &::GlobalNamespace::OVRColocationSession::remove_ColocationSessionDiscovered)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e19f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                             { "remove_ColocationSessionDiscovered", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StartAdvertisementAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>> (*)(
    ::System::ReadOnlySpan_1<uint8_t>)>(&::GlobalNamespace::OVRColocationSession::StartAdvertisementAsync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e1a05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StartAdvertisementAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StopAdvertisementAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(
    &::GlobalNamespace::OVRColocationSession::StopAdvertisementAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e1a20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StopAdvertisementAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StartDiscoveryAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(
    &::GlobalNamespace::OVRColocationSession::StartDiscoveryAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e1a2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StartDiscoveryAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StopDiscoveryAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(
    &::GlobalNamespace::OVRColocationSession::StopDiscoveryAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e1a3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StopDiscoveryAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStartAdvertisementComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result, ::System::Guid)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionStartAdvertisementComplete)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e1a4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
            { "OnColocationSessionStartAdvertisementComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStopAdvertisementComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionStopAdvertisementComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e1a560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                { "OnColocationSessionStopAdvertisementComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStartDiscoveryComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionStartDiscoveryComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e1a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                { "OnColocationSessionStartDiscoveryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStopDiscoveryComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionStopDiscoveryComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e1a670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                { "OnColocationSessionStopDiscoveryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionDiscoveryResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::System::Guid, uint32_t, uint8_t*)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryResult)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e1a6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                            { "OnColocationSessionDiscoveryResult", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionAdvertisementComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionAdvertisementComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e1a7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                { "OnColocationSessionAdvertisementComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionDiscoveryComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e1a8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                             { "OnColocationSessionDiscoveryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRColocationSession::*)()>(&::GlobalNamespace::OVRColocationSession::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e1a9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRColocationSession::setStaticF_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*, "ColocationSessionDiscovered", ::GlobalNamespace::OVRColocationSession*>(
      std::forward<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* GlobalNamespace::OVRColocationSession::getStaticF_ColocationSessionDiscovered() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*, "ColocationSessionDiscovered", ::GlobalNamespace::OVRColocationSession*>();
}
inline void GlobalNamespace::OVRColocationSession::add_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                           { "add_ColocationSessionDiscovered", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRColocationSession::remove_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                           { "remove_ColocationSessionDiscovered", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>>
GlobalNamespace::OVRColocationSession::StartAdvertisementAsync(::System::ReadOnlySpan_1<uint8_t> colocationSessionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StartAdvertisementAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method,
                                                                                                                                                                           colocationSessionData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StopAdvertisementAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StopAdvertisementAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StartDiscoveryAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StartDiscoveryAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StopDiscoveryAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { "StopDiscoveryAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStartAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
          { "OnColocationSessionStartAdvertisementComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result, uuid);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStopAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                              { "OnColocationSessionStopAdvertisementComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStartDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                              { "OnColocationSessionStartDiscoveryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStopDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                           { "OnColocationSessionStopDiscoveryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryResult(uint64_t requestId, ::System::Guid uuid, uint32_t metaDataCount, uint8_t* metaDataPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                          { "OnColocationSessionDiscoveryResult", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, uuid, metaDataCount, metaDataPtr);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                           { "OnColocationSessionAdvertisementComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(),
                                                           { "OnColocationSessionDiscoveryComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRColocationSession*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRColocationSession* GlobalNamespace::OVRColocationSession::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRColocationSession*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRColocationSession::OVRColocationSession() {}
