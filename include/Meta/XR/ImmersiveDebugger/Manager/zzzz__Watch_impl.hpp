#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\Watch.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Hook_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Watch.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Manager::Watch::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::Watch::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Watch.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Meta::XR::ImmersiveDebugger::Manager::Watch::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::Watch::get_Values)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Watch.get_NumberOfValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::Manager::Watch::*)()>(&::Meta::XR::ImmersiveDebugger::Manager::Watch::get_NumberOfValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Manager::Watch._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Manager::Watch::*)(
    ::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(&::Meta::XR::ImmersiveDebugger::Manager::Watch::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a668a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                                 ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
    return ___internal_method;
  }
};
inline ::StringW Meta::XR::ImmersiveDebugger::Manager::Watch::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Meta::XR::ImmersiveDebugger::Manager::Watch::get_Values() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t Meta::XR::ImmersiveDebugger::Manager::Watch::get_NumberOfValues() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Manager::Watch::_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                               ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(),
                                                               ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberInfo, instanceHandle, attribute);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Watch* Meta::XR::ImmersiveDebugger::Manager::Watch::New_ctor(::System::Reflection::MemberInfo* memberInfo,
                                                                                                            ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                                                            ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(memberInfo, instanceHandle, attribute));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch::Watch() {}
