#pragma once
// IWYU pragma private; include "GlobalNamespace/OverrideEnvironmentSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.get_overrideEnvironments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OverrideEnvironmentSettings::*)()>(
    &::GlobalNamespace::OverrideEnvironmentSettings::get_overrideEnvironments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ad118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                                                               "get_overrideEnvironments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.set_overrideEnvironments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)(bool)>(
    &::GlobalNamespace::OverrideEnvironmentSettings::set_overrideEnvironments)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26ad120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "set_overrideEnvironments",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.add_didChangeOverrideSettingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)(::System::Action*)>(
    &::GlobalNamespace::OverrideEnvironmentSettings::add_didChangeOverrideSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26ad144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "add_didChangeOverrideSettingsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.remove_didChangeOverrideSettingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)(::System::Action*)>(
    &::GlobalNamespace::OverrideEnvironmentSettings::remove_didChangeOverrideSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26ad1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "remove_didChangeOverrideSettingsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.SetEnvironmentInfoForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)(
    ::GlobalNamespace::EnvironmentType, ::GlobalNamespace::EnvironmentInfoSO*)>(&::GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26ad27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "SetEnvironmentInfoForType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings.GetOverrideEnvironmentInfoForType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::OverrideEnvironmentSettings::*)(
    ::GlobalNamespace::EnvironmentType)>(&::GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26ad30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "GetOverrideEnvironmentInfoForType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OverrideEnvironmentSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OverrideEnvironmentSettings::*)()>(&::GlobalNamespace::OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26ad384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get_didChangeOverrideSettingsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeOverrideSettingsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get_didChangeOverrideSettingsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeOverrideSettingsEvent;
}
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_set_didChangeOverrideSettingsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeOverrideSettingsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironments;
}
constexpr bool const& GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironments;
}
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_set__overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideEnvironments = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*&
GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::OverrideEnvironmentSettings::__cordl_internal_set__data(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentType, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::OverrideEnvironmentSettings::get_overrideEnvironments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                                                             "get_overrideEnvironments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OverrideEnvironmentSettings::set_overrideEnvironments(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "set_overrideEnvironments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OverrideEnvironmentSettings::add_didChangeOverrideSettingsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "add_didChangeOverrideSettingsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OverrideEnvironmentSettings::remove_didChangeOverrideSettingsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "remove_didChangeOverrideSettingsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "SetEnvironmentInfoForType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, environmentType, environmentInfo);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType(::GlobalNamespace::EnvironmentType environmentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), "GetOverrideEnvironmentInfoForType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, false>(this, ___internal_method, environmentType);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::OverrideEnvironmentSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OverrideEnvironmentSettings*>());
}
inline void GlobalNamespace::OverrideEnvironmentSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OverrideEnvironmentSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverrideEnvironmentSettings::OverrideEnvironmentSettings() {}
