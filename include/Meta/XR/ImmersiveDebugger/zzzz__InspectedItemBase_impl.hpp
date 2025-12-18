#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/InspectedItemBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__InspectedItemBase_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase.get_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(),
                                                                               "get_Valid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase.set_Valid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::InspectedItemBase::set_Valid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(), "set_Valid",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase.get_Visible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Visible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5891534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(),
                                                                               "get_Visible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::InspectedItemBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::InspectedItemBase::*)()>(
    &::Meta::XR::ImmersiveDebugger::InspectedItemBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5891ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr ::StringW& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get__Valid_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Valid_k__BackingField;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_get__Valid_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Valid_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::InspectedItemBase::__cordl_internal_set__Valid_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Valid_k__BackingField = value;
}
inline bool Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Valid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(),
                                                                             "get_Valid", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedItemBase::set_Valid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(), "set_Valid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::InspectedItemBase::get_Visible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(),
                                                                             "get_Visible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::InspectedItemBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::InspectedItemBase* Meta::XR::ImmersiveDebugger::InspectedItemBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::InspectedItemBase*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::InspectedItemBase::InspectedItemBase() {}
