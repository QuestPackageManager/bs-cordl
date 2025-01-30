#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Activation/ConstructionLevelActivator.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__ConstructionLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator.get_NextActivator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (
    ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)()>(&::System::Runtime::Remoting::Activation::ConstructionLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce6a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(),
                                                 "get_NextActivator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (
    ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::ConstructionLevelActivator::Activate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3ce6a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), "Activate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)()>(
    &::System::Runtime::Remoting::Activation::ConstructionLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce5dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ConstructionLevelActivator::get_NextActivator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), "get_NextActivator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*
System::Runtime::Remoting::Activation::ConstructionLevelActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), "Activate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*, false>(this, ___internal_method, msg);
}
inline void System::Runtime::Remoting::Activation::ConstructionLevelActivator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::ConstructionLevelActivator* System::Runtime::Remoting::Activation::ConstructionLevelActivator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>());
}
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
constexpr System::Runtime::Remoting::Activation::ConstructionLevelActivator::operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Activation::IActivator"
constexpr ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ConstructionLevelActivator::i___System__Runtime__Remoting__Activation__IActivator() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::ConstructionLevelActivator() {}
