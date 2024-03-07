#pragma once
#include "System/ComponentModel/zzzz__ListChangedType_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__ListChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListChangedEventArgs::*)(::System::ComponentModel::ListChangedType, int32_t)>(
    &::System::ComponentModel::ListChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a5c7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::ComponentModel::ListChangedEventArgs::*)(::System::ComponentModel::ListChangedType, int32_t, int32_t)>(&::System::ComponentModel::ListChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a5c7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ListChangedType& System::ComponentModel::ListChangedEventArgs::__cordl_internal_get__ListChangedType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ListChangedType_k__BackingField;
}
constexpr ::System::ComponentModel::ListChangedType const& System::ComponentModel::ListChangedEventArgs::__cordl_internal_get__ListChangedType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ListChangedType_k__BackingField;
}
constexpr void System::ComponentModel::ListChangedEventArgs::__cordl_internal_set__ListChangedType_k__BackingField(::System::ComponentModel::ListChangedType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ListChangedType_k__BackingField = value;
}
constexpr int32_t& System::ComponentModel::ListChangedEventArgs::__cordl_internal_get__NewIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NewIndex_k__BackingField;
}
constexpr int32_t const& System::ComponentModel::ListChangedEventArgs::__cordl_internal_get__NewIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NewIndex_k__BackingField;
}
constexpr void System::ComponentModel::ListChangedEventArgs::__cordl_internal_set__NewIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NewIndex_k__BackingField = value;
}
constexpr int32_t& System::ComponentModel::ListChangedEventArgs::__cordl_internal_get__OldIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OldIndex_k__BackingField;
}
constexpr int32_t const& System::ComponentModel::ListChangedEventArgs::__cordl_internal_get__OldIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OldIndex_k__BackingField;
}
constexpr void System::ComponentModel::ListChangedEventArgs::__cordl_internal_set__OldIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OldIndex_k__BackingField = value;
}
inline ::System::ComponentModel::ListChangedEventArgs* System::ComponentModel::ListChangedEventArgs::New_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ListChangedEventArgs*>(listChangedType, newIndex));
}
inline void System::ComponentModel::ListChangedEventArgs::_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listChangedType, newIndex);
}
inline ::System::ComponentModel::ListChangedEventArgs* System::ComponentModel::ListChangedEventArgs::New_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex,
                                                                                                              int32_t oldIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ListChangedEventArgs*>(listChangedType, newIndex, oldIndex));
}
inline void System::ComponentModel::ListChangedEventArgs::_ctor(::System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListChangedEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListChangedType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listChangedType, newIndex, oldIndex);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListChangedEventArgs::ListChangedEventArgs() {}
