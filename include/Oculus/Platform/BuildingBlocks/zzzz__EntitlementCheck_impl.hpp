#pragma once
// IWYU pragma private; include "Oculus\Platform\BuildingBlocks\EntitlementCheck.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Platform/BuildingBlocks/zzzz__EntitlementCheck_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.add_UserFailedEntitlementCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)(::System::Action*)>(
    &::Oculus::Platform::BuildingBlocks::EntitlementCheck::add_UserFailedEntitlementCheck)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5df2d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "add_UserFailedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.remove_UserFailedEntitlementCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)(::System::Action*)>(
    &::Oculus::Platform::BuildingBlocks::EntitlementCheck::remove_UserFailedEntitlementCheck)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5df2e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                                                                           { "remove_UserFailedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.add_UserPassedEntitlementCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)(::System::Action*)>(
    &::Oculus::Platform::BuildingBlocks::EntitlementCheck::add_UserPassedEntitlementCheck)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5df2eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "add_UserPassedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.remove_UserPassedEntitlementCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)(::System::Action*)>(
    &::Oculus::Platform::BuildingBlocks::EntitlementCheck::remove_UserPassedEntitlementCheck)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5df2f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                                                                           { "remove_UserPassedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)()>(&::Oculus::Platform::BuildingBlocks::EntitlementCheck::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5df3004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.PerformUserEntitlementCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)()>(
    &::Oculus::Platform::BuildingBlocks::EntitlementCheck::PerformUserEntitlementCheck)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5df30c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "PerformUserEntitlementCheck", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.PlatformInitializeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(
    &::Oculus::Platform::BuildingBlocks::EntitlementCheck::PlatformInitializeCallback)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5df32f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                                { "PlatformInitializeCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.EntitlementCheckCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)(::Oculus::Platform::Message*)>(
    &::Oculus::Platform::BuildingBlocks::EntitlementCheck::EntitlementCheckCallback)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5df35a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                                                                           { "EntitlementCheckCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck.QuitAppOnFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)()>(&::Oculus::Platform::BuildingBlocks::EntitlementCheck::QuitAppOnFailure)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5df3690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "QuitAppOnFailure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::BuildingBlocks::EntitlementCheck._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::BuildingBlocks::EntitlementCheck::*)()>(&::Oculus::Platform::BuildingBlocks::EntitlementCheck::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df3730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_get_quitAppOnNotEntitled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quitAppOnNotEntitled;
}
constexpr bool const& Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_get_quitAppOnNotEntitled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quitAppOnNotEntitled;
}
constexpr void Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_set_quitAppOnNotEntitled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quitAppOnNotEntitled = value;
}
constexpr ::System::Action*& Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_get_UserFailedEntitlementCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserFailedEntitlementCheck;
}
constexpr ::System::Action* const& Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_get_UserFailedEntitlementCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserFailedEntitlementCheck;
}
constexpr void Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_set_UserFailedEntitlementCheck(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserFailedEntitlementCheck = value;
}
constexpr ::System::Action*& Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_get_UserPassedEntitlementCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserPassedEntitlementCheck;
}
constexpr ::System::Action* const& Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_get_UserPassedEntitlementCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserPassedEntitlementCheck;
}
constexpr void Oculus::Platform::BuildingBlocks::EntitlementCheck::__cordl_internal_set_UserPassedEntitlementCheck(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserPassedEntitlementCheck = value;
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::add_UserFailedEntitlementCheck(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "add_UserFailedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::remove_UserFailedEntitlementCheck(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                                                                         { "remove_UserFailedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::add_UserPassedEntitlementCheck(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "add_UserPassedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::remove_UserPassedEntitlementCheck(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                                                                         { "remove_UserPassedEntitlementCheck", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::PerformUserEntitlementCheck() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "PerformUserEntitlementCheck", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::PlatformInitializeCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                              { "PlatformInitializeCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::EntitlementCheckCallback(::Oculus::Platform::Message* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(),
                                                                                         { "EntitlementCheckCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::QuitAppOnFailure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { "QuitAppOnFailure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Platform::BuildingBlocks::EntitlementCheck::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Platform::BuildingBlocks::EntitlementCheck* Oculus::Platform::BuildingBlocks::EntitlementCheck::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::BuildingBlocks::EntitlementCheck*>());
}
// Ctor Parameters []
constexpr ::Oculus::Platform::BuildingBlocks::EntitlementCheck::EntitlementCheck() {}
