#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/GarbageCollector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Scripting/zzzz__GarbageCollector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Scripting/zzzz__GarbageCollector_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Scripting::GarbageCollector_Mode::GarbageCollector_Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::GarbageCollector_Mode::GarbageCollector_Mode() {}
constexpr ::UnityEngine::Scripting::GarbageCollector_Mode UnityEngine::Scripting::GarbageCollector_Mode::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Scripting::GarbageCollector_Mode UnityEngine::Scripting::GarbageCollector_Mode::Enabled{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Scripting::GarbageCollector_Mode UnityEngine::Scripting::GarbageCollector_Mode::Manual{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Scripting::GarbageCollector.set_GCMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Scripting::GarbageCollector_Mode)>(&::UnityEngine::Scripting::GarbageCollector::set_GCMode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x48c0058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get(), "set_GCMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Scripting::GarbageCollector_Mode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::GarbageCollector.SetMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Scripting::GarbageCollector_Mode)>(&::UnityEngine::Scripting::GarbageCollector::SetMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x48c0140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get(), "SetMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Scripting::GarbageCollector_Mode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::GarbageCollector.GetMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Scripting::GarbageCollector_Mode (*)()>(&::UnityEngine::Scripting::GarbageCollector::GetMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x48c0118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get(), "GetMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Scripting::GarbageCollector::setStaticF_GCModeChanged(::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>*, "GCModeChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get>(
      std::forward<::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>*>(value));
}
inline ::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>* UnityEngine::Scripting::GarbageCollector::getStaticF_GCModeChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Scripting::GarbageCollector_Mode>*, "GCModeChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get>();
}
inline void UnityEngine::Scripting::GarbageCollector::set_GCMode(::UnityEngine::Scripting::GarbageCollector_Mode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get(), "set_GCMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Scripting::GarbageCollector_Mode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Scripting::GarbageCollector::SetMode(::UnityEngine::Scripting::GarbageCollector_Mode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get(), "SetMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Scripting::GarbageCollector_Mode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode);
}
inline ::UnityEngine::Scripting::GarbageCollector_Mode UnityEngine::Scripting::GarbageCollector::GetMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Scripting::GarbageCollector*>::get(), "GetMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Scripting::GarbageCollector_Mode, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::GarbageCollector::GarbageCollector() {}
