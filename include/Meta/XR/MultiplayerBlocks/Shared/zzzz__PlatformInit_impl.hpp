#pragma once
// IWYU pragma private; include "Meta\XR\MultiplayerBlocks\Shared\PlatformInit.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__BBPlatformInitStatus_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInit_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__BBPlatformInitStatus_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInit_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a79448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0._GetEntitlementInformation_g__InitializeComplete_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(
        &::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_GetEntitlementInformation_g__InitializeComplete_0)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5a7944c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(),
                            { "<GetEntitlementInformation>g__InitializeComplete|0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0._GetEntitlementInformation_g__CheckEntitlement_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::*)(::Oculus::Platform::Message*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_GetEntitlementInformation_g__CheckEntitlement_1)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a79640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(),
                                                             { "<GetEntitlementInformation>g__CheckEntitlement|1", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0._GetEntitlementInformation_g__GetAccessTokenComplete_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::*)(::Oculus::Platform::Message_1<::StringW>*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_GetEntitlementInformation_g__GetAccessTokenComplete_2)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5a79874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(),
                                                             { "<GetEntitlementInformation>g__GetAccessTokenComplete|2", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>*& Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* const&
Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::__cordl_internal_set_callback(::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_GetEntitlementInformation_g__InitializeComplete_0(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(),
                          { "<GetEntitlementInformation>g__InitializeComplete|0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_GetEntitlementInformation_g__CheckEntitlement_1(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(),
                                                           { "<GetEntitlementInformation>g__CheckEntitlement|1", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::_GetEntitlementInformation_g__GetAccessTokenComplete_2(::Oculus::Platform::Message_1<::StringW>* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>(),
                                                           { "<GetEntitlementInformation>g__GetAccessTokenComplete|2", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0::PlatformInit___c__DisplayClass5_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::*)()>(
    &::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a79b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1._GetEntitlementInformation_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::_GetEntitlementInformation_b__3)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5a79b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1*>(),
                                                             { "<GetEntitlementInformation>b__3", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::__cordl_internal_get_accessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr ::StringW const& Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::__cordl_internal_get_accessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::__cordl_internal_set_accessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accessToken = value;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*& Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* const&
Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void
Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::__cordl_internal_set_CS$__8__locals1(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::_GetEntitlementInformation_b__3(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1*>(),
                                                           { "<GetEntitlementInformation>b__3", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1* Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1::PlatformInit___c__DisplayClass5_1() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit.get_status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus (*)()>(&::Meta::XR::MultiplayerBlocks::Shared::PlatformInit::get_status)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a793ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(), { "get_status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit.set_status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus)>(&::Meta::XR::MultiplayerBlocks::Shared::PlatformInit::set_status)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a793f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(),
                                                                                           { "set_status", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit.GetEntitlementInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>*)>(
    &::Meta::XR::MultiplayerBlocks::Shared::PlatformInit::GetEntitlementInformation)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5a74bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(),
                                                             { "GetEntitlementInformation", {}, { ::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>*>() } })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit::setStaticF__status_k__BackingField(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus value) {
  ::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus, "<status>k__BackingField", ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(
      std::forward<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus Meta::XR::MultiplayerBlocks::Shared::PlatformInit::getStaticF__status_k__BackingField() {
  return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus, "<status>k__BackingField", ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>();
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit::setStaticF__info(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo value) {
  ::cordl_internals::setStaticField<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, "_info", ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(
      std::forward<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>(value));
}
inline ::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo Meta::XR::MultiplayerBlocks::Shared::PlatformInit::getStaticF__info() {
  return ::cordl_internals::getStaticField<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo, "_info", ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>();
}
inline ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus Meta::XR::MultiplayerBlocks::Shared::PlatformInit::get_status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(), { "get_status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit::set_status(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(),
                                                                                         { "set_status", {}, { ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Meta::XR::MultiplayerBlocks::Shared::PlatformInit::GetEntitlementInformation(::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*>(),
                                                           { "GetEntitlementInformation", {}, { ::i2c::type_of<::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit::PlatformInit() {}
