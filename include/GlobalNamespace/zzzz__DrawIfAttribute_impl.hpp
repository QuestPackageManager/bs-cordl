#pragma once
// IWYU pragma private; include "GlobalNamespace/DrawIfAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType::DrawIfAttribute_DisablingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType::DrawIfAttribute_DisablingType() {}
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType GlobalNamespace::DrawIfAttribute_DisablingType::ReadOnly{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType GlobalNamespace::DrawIfAttribute_DisablingType::DontDraw{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(::StringW, ::System::Object*, ::GlobalNamespace::DrawIfAttribute_DisablingType)>(&::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22a248c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DrawIfAttribute_DisablingType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DrawIfAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DrawIfAttribute::*)(
    ::StringW, ::System::Object*, ::System::Object*, ::GlobalNamespace::DrawIfAttribute_DisablingType)>(&::GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22a24c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DrawIfAttribute_DisablingType>::get() })));
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
constexpr ::System::Object* const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_value() const {
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
constexpr ::System::Object* const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_orValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___orValue;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_orValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___orValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_disablingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disablingType;
}
constexpr ::GlobalNamespace::DrawIfAttribute_DisablingType const& GlobalNamespace::DrawIfAttribute::__cordl_internal_get_disablingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disablingType;
}
constexpr void GlobalNamespace::DrawIfAttribute::__cordl_internal_set_disablingType(::GlobalNamespace::DrawIfAttribute_DisablingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disablingType = value;
}
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DrawIfAttribute_DisablingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, value, disablingType);
}
inline void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DrawIfAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DrawIfAttribute_DisablingType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName, value, orValue, disablingType);
}
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, disablingType));
}
inline ::GlobalNamespace::DrawIfAttribute* GlobalNamespace::DrawIfAttribute::New_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue,
                                                                                      ::GlobalNamespace::DrawIfAttribute_DisablingType disablingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DrawIfAttribute*>(propertyName, value, orValue, disablingType));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawIfAttribute::DrawIfAttribute() {}
