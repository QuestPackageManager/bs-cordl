#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__RefreshEventArgs_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RefreshEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::RefreshEventArgs::*)(::System::Type*)>(
    &::System::ComponentModel::RefreshEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x446813c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__TypeChanged_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeChanged_k__BackingField;
}
constexpr ::System::Type* const& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__TypeChanged_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeChanged_k__BackingField;
}
constexpr void System::ComponentModel::RefreshEventArgs::__cordl_internal_set__TypeChanged_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TypeChanged_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::RefreshEventArgs::_ctor(::System::Type* typeChanged) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::RefreshEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeChanged);
}
inline ::System::ComponentModel::RefreshEventArgs* System::ComponentModel::RefreshEventArgs::New_ctor(::System::Type* typeChanged) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::RefreshEventArgs*>(typeChanged));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RefreshEventArgs::RefreshEventArgs() {}
