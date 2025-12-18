#pragma once
// IWYU pragma private; include "System/ComponentModel/AddingNewEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__AddingNewEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::AddingNewEventArgs::*)()>(&::System::ComponentModel::AddingNewEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x61ff440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AddingNewEventArgs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AddingNewEventArgs.get_NewObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::AddingNewEventArgs::*)()>(
    &::System::ComponentModel::AddingNewEventArgs::get_NewObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AddingNewEventArgs*>::get(),
                                                                               "get_NewObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::ComponentModel::AddingNewEventArgs::__cordl_internal_get__NewObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NewObject_k__BackingField;
}
constexpr ::System::Object* const& System::ComponentModel::AddingNewEventArgs::__cordl_internal_get__NewObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NewObject_k__BackingField;
}
constexpr void System::ComponentModel::AddingNewEventArgs::__cordl_internal_set__NewObject_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NewObject_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::AddingNewEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AddingNewEventArgs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AddingNewEventArgs::get_NewObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AddingNewEventArgs*>::get(),
                                                                             "get_NewObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::AddingNewEventArgs* System::ComponentModel::AddingNewEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::AddingNewEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AddingNewEventArgs::AddingNewEventArgs() {}
