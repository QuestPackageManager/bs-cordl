#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/IInspector.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector.RegisterMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IMember* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector::*)(::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::IInspector::RegisterMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IMember* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector::*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::IInspector::GetMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(), 1 }));
    return ___internal_method;
  }
};
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* Meta::XR::ImmersiveDebugger::UserInterface::IInspector::RegisterMember(::System::Reflection::MemberInfo* memberInfo,
                                                                                                                                     ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(this, ___internal_method, memberInfo, attribute);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* Meta::XR::ImmersiveDebugger::UserInterface::IInspector::GetMember(::System::Reflection::MemberInfo* memberInfo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(this, ___internal_method, memberInfo);
}
