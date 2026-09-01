#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\Hook.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Hook_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Hook.get_Attribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::DebugMember* (::Meta::XR::ImmersiveDebugger::Manager::Hook::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::Hook::get_Attribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a646cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(), { "get_Attribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Hook.get_MemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberInfo* (::Meta::XR::ImmersiveDebugger::Manager::Hook::*)()>(
    &::Meta::XR::ImmersiveDebugger::Manager::Hook::get_MemberInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a646d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(), { "get_MemberInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Hook.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::Hook::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::Hook::get_Valid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5c954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(), { "get_Valid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Hook._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::Hook::*)(
    ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(&::Meta::XR::ImmersiveDebugger::Manager::Hook::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a645f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                                 ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Hook.Matches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Manager::Hook::*)(::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::Manager::Hook::Matches)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a61774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(),
                                                { "Matches", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__instanceHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceHandle;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__instanceHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceHandle;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_set__instanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instanceHandle = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugMember*& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attribute;
}
constexpr ::Meta::XR::ImmersiveDebugger::DebugMember* const& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attribute;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_set__attribute(::Meta::XR::ImmersiveDebugger::DebugMember* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attribute = value;
}
constexpr ::System::Reflection::MemberInfo*& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__memberInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr ::System::Reflection::MemberInfo* const& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__memberInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_set__memberInfo(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memberInfo = value;
}
constexpr ::System::Object*& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::System::Object* const& Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void Meta::XR::ImmersiveDebugger::Manager::Hook::__cordl_internal_set__instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instance = value;
}
inline ::Meta::XR::ImmersiveDebugger::DebugMember* Meta::XR::ImmersiveDebugger::Manager::Hook::get_Attribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(), { "get_Attribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::DebugMember*>(this, ___internal_method);
}
inline ::System::Reflection::MemberInfo* Meta::XR::ImmersiveDebugger::Manager::Hook::get_MemberInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(), { "get_MemberInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberInfo*>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::Hook::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(), { "get_Valid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::Hook::_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                              ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                               ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberInfo, instanceHandle, attribute);
}
inline bool Meta::XR::ImmersiveDebugger::Manager::Hook::Matches(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(),
                                              { "Matches", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memberInfo, instance);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Hook* Meta::XR::ImmersiveDebugger::Manager::Hook::New_ctor(::System::Reflection::MemberInfo* memberInfo,
                                                                                                          ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                                          ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::Hook*>(memberInfo, instanceHandle, attribute));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Hook::Hook() {}
