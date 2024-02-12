#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Switch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Switch::*)(::StringW, ::StringW)>(&::System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x296fc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Switch::*)(::StringW, ::StringW, ::StringW)>(&::System::Diagnostics::Switch::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x296fc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Switch._pruneCachedSwitches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Diagnostics::Switch::_pruneCachedSwitches)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x296fecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get(), "_pruneCachedSwitches",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___description;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_switchValueString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchValueString;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_switchValueString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___switchValueString;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_switchValueString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___switchValueString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::Switch::__cordl_internal_get_defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr ::StringW const& System::Diagnostics::Switch::__cordl_internal_get_defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultValue;
}
constexpr void System::Diagnostics::Switch::__cordl_internal_set_defaultValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Diagnostics::Switch::setStaticF_switches(::System::Collections::Generic::List_1<::System::WeakReference*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "switches",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference*>* System::Diagnostics::Switch::getStaticF_switches() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference*>*, "switches",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get>();
}
inline void System::Diagnostics::Switch::setStaticF_s_LastCollectionCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_LastCollectionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Diagnostics::Switch::getStaticF_s_LastCollectionCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_LastCollectionCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get>();
}
inline ::System::Diagnostics::Switch* System::Diagnostics::Switch::New_ctor(::StringW displayName, ::StringW description) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::Switch*>(displayName, description));
}
inline void System::Diagnostics::Switch::_ctor(::StringW displayName, ::StringW description) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, description);
}
inline ::System::Diagnostics::Switch* System::Diagnostics::Switch::New_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Diagnostics::Switch*>(displayName, description, defaultSwitchValue));
}
inline void System::Diagnostics::Switch::_ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, description, defaultSwitchValue);
}
inline void System::Diagnostics::Switch::_pruneCachedSwitches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Switch*>::get(), "_pruneCachedSwitches",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Switch::Switch() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
