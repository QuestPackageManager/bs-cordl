#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/StateMachineAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::StateMachineAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::StateMachineAttribute::*)(::System::Type*)>(
    &::System::Runtime::CompilerServices::StateMachineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3cb686c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StateMachineAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::StateMachineAttribute.get_StateMachineType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::CompilerServices::StateMachineAttribute::*)()>(
    &::System::Runtime::CompilerServices::StateMachineAttribute::get_StateMachineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cb7698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StateMachineAttribute*>::get(), "get_StateMachineType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::CompilerServices::StateMachineAttribute::__cordl_internal_get__StateMachineType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateMachineType_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::CompilerServices::StateMachineAttribute::__cordl_internal_get__StateMachineType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateMachineType_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::StateMachineAttribute::__cordl_internal_set__StateMachineType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StateMachineType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::CompilerServices::StateMachineAttribute* System::Runtime::CompilerServices::StateMachineAttribute::New_ctor(::System::Type* stateMachineType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::StateMachineAttribute*>(stateMachineType));
}
inline void System::Runtime::CompilerServices::StateMachineAttribute::_ctor(::System::Type* stateMachineType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StateMachineAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachineType);
}
inline ::System::Type* System::Runtime::CompilerServices::StateMachineAttribute::get_StateMachineType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StateMachineAttribute*>::get(),
                                                                             "get_StateMachineType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::StateMachineAttribute::StateMachineAttribute() {}
