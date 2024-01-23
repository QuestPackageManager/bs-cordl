#pragma once
#include "GlobalNamespace/zzzz__DrawIfAttribute_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType::__DrawIfAttribute__DisablingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType::__DrawIfAttribute__DisablingType() {}
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType GlobalNamespace::__DrawIfAttribute__DisablingType::ReadOnly{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType GlobalNamespace::__DrawIfAttribute__DisablingType::DontDraw{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(::StringW, ::System::Object*, ::GlobalNamespace::__DrawIfAttribute__DisablingType)>(&::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2101038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(
    ::StringW, ::System::Object*, ::System::Object*, ::GlobalNamespace::__DrawIfAttribute__DisablingType)>(&::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2101074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr ::StringW const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propertyName;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_orValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orValue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_orValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orValue;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_orValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___orValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_disablingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disablingType;
}
constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_disablingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disablingType;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_disablingType(::GlobalNamespace::__DrawIfAttribute__DisablingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disablingType = value;
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW propertyName, ::System::Object* value,
                                                                                      ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, disablingType));
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, value, disablingType);
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue,
                                                                                      ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, orValue, disablingType));
}
/// @param disablingType: ::GlobalNamespace::__DrawIfAttribute__DisablingType (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue, ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DrawIfAttribute__DisablingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, value, orValue, disablingType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawIfAttribute::DrawIfAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
