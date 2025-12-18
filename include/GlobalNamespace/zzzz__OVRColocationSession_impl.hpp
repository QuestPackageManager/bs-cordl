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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::GlobalNamespace::OVRColocationSession_Data::*)()>(
    &::GlobalNamespace::OVRColocationSession_Data::get_AdvertisementUuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c6e738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(),
                                                                               "get_AdvertisementUuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.set_AdvertisementUuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRColocationSession_Data::*)(::System::Guid)>(
    &::GlobalNamespace::OVRColocationSession_Data::set_AdvertisementUuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(), "set_AdvertisementUuid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.get_Metadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::OVRColocationSession_Data::*)()>(
    &::GlobalNamespace::OVRColocationSession_Data::get_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e74c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(),
                                                                               "get_Metadata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession_Data.set_Metadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRColocationSession_Data::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::OVRColocationSession_Data::set_Metadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c6e754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(), "set_Metadata", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
inline ::System::Guid GlobalNamespace::OVRColocationSession_Data::get_AdvertisementUuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(),
                                                                             "get_AdvertisementUuid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession_Data::set_AdvertisementUuid(::System::Guid value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(), "set_AdvertisementUuid",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::OVRColocationSession_Data::get_Metadata() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(),
                                                                             "get_Metadata", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession_Data::set_Metadata(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession_Data>::get(), "set_Metadata", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AdvertisementUuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Metadata_k__BackingField", ty:
// "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRColocationSession_Data::OVRColocationSession_Data(::System::Guid _AdvertisementUuid_k__BackingField,
                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> _Metadata_k__BackingField) noexcept {
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(
    &::GlobalNamespace::OVRColocationSession::add_ColocationSessionDiscovered)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c6dc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "add_ColocationSessionDiscovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.remove_ColocationSessionDiscovered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*)>(
    &::GlobalNamespace::OVRColocationSession::remove_ColocationSessionDiscovered)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c6dce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "remove_ColocationSessionDiscovered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StartAdvertisementAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>> (*)(::System::ReadOnlySpan_1<uint8_t>)>(
        &::GlobalNamespace::OVRColocationSession::StartAdvertisementAsync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c6ddc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "StartAdvertisementAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StopAdvertisementAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(
    &::GlobalNamespace::OVRColocationSession::StopAdvertisementAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c6df78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                                               "StopAdvertisementAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StartDiscoveryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(
    &::GlobalNamespace::OVRColocationSession::StartDiscoveryAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c6e05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                                               "StartDiscoveryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.StopDiscoveryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> (*)()>(
    &::GlobalNamespace::OVRColocationSession::StopDiscoveryAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c6e140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                                               "StopDiscoveryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStartAdvertisementComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result, ::System::Guid)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionStartAdvertisementComplete)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c6e224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                 "OnColocationSessionStartAdvertisementComplete", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStopAdvertisementComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionStopAdvertisementComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c6e2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                 "OnColocationSessionStopAdvertisementComplete", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStartDiscoveryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionStartDiscoveryComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c6e354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionStartDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionStopDiscoveryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionStopDiscoveryComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c6e3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionStopDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionDiscoveryResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::System::Guid, uint32_t, uint8_t*)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryResult)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c6e464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionDiscoveryResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionAdvertisementComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionAdvertisementComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c6e564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionAdvertisementComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession.OnColocationSessionDiscoveryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryComplete)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c6e64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRColocationSession._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRColocationSession::*)()>(&::GlobalNamespace::OVRColocationSession::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c6e734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRColocationSession::setStaticF_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*, "ColocationSessionDiscovered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get>(
      std::forward<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* GlobalNamespace::OVRColocationSession::getStaticF_ColocationSessionDiscovered() {
  return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*, "ColocationSessionDiscovered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get>();
}
inline void GlobalNamespace::OVRColocationSession::add_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "add_ColocationSessionDiscovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVRColocationSession::remove_ColocationSessionDiscovered(::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "remove_ColocationSessionDiscovered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::OVRColocationSession_Data>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>>
GlobalNamespace::OVRColocationSession::StartAdvertisementAsync(::System::ReadOnlySpan_1<uint8_t> colocationSessionData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "StartAdvertisementAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Guid, ::GlobalNamespace::OVRColocationSession_Result>>, false>(
      nullptr, ___internal_method, colocationSessionData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StopAdvertisementAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                                             "StopAdvertisementAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StartDiscoveryAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                                             "StartDiscoveryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>> GlobalNamespace::OVRColocationSession::StopDiscoveryAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(),
                                                                             "StopDiscoveryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRColocationSession_Result>>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStartAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result, ::System::Guid uuid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionStartAdvertisementComplete",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result, uuid);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStopAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionStopAdvertisementComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStartDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionStartDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionStopDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionStopDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryResult(uint64_t requestId, ::System::Guid uuid, uint32_t metaDataCount, uint8_t* metaDataPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionDiscoveryResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, uuid, metaDataCount, metaDataPtr);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionAdvertisementComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionAdvertisementComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::OnColocationSessionDiscoveryComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), "OnColocationSessionDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline void GlobalNamespace::OVRColocationSession::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRColocationSession*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRColocationSession* GlobalNamespace::OVRColocationSession::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRColocationSession*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRColocationSession::OVRColocationSession() {}
