#pragma once
// IWYU pragma private; include "System/Data/DataColumnChangeEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Data/zzzz__DataColumnChangeEventArgs_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Data::DataRow*)>(
    &::System::Data::DataColumnChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x415db70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Object*)>(&::System::Data::DataColumnChangeEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x415dbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs.get_ProposedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Data::DataColumnChangeEventArgs::*)()>(
    &::System::Data::DataColumnChangeEventArgs::get_ProposedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x415dc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(),
                                                                               "get_ProposedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs.set_ProposedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Object*)>(
    &::System::Data::DataColumnChangeEventArgs::set_ProposedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x415dc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), "set_ProposedValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataColumnChangeEventArgs.InitializeColumnChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataColumnChangeEventArgs::*)(::System::Data::DataColumn*, ::System::Object*)>(
    &::System::Data::DataColumnChangeEventArgs::InitializeColumnChangeEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x415dc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), "InitializeColumnChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataColumn*& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr ::System::Data::DataColumn* const& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____column;
}
constexpr void System::Data::DataColumnChangeEventArgs::__cordl_internal_set__column(::System::Data::DataColumn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____column)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataRow*& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__Row_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr ::System::Data::DataRow* const& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__Row_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Row_k__BackingField;
}
constexpr void System::Data::DataColumnChangeEventArgs::__cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Row_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__ProposedValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProposedValue_k__BackingField;
}
constexpr ::System::Object* const& System::Data::DataColumnChangeEventArgs::__cordl_internal_get__ProposedValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProposedValue_k__BackingField;
}
constexpr void System::Data::DataColumnChangeEventArgs::__cordl_internal_set__ProposedValue_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ProposedValue_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::DataColumnChangeEventArgs::_ctor(::System::Data::DataRow* row) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row);
}
inline void System::Data::DataColumnChangeEventArgs::_ctor(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataRow*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, row, column, value);
}
inline ::System::Object* System::Data::DataColumnChangeEventArgs::get_ProposedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(),
                                                                             "get_ProposedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Data::DataColumnChangeEventArgs::set_ProposedValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), "set_ProposedValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::DataColumnChangeEventArgs::InitializeColumnChangeEvent(::System::Data::DataColumn* column, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataColumnChangeEventArgs*>::get(), "InitializeColumnChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataColumn*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, column, value);
}
inline ::System::Data::DataColumnChangeEventArgs* System::Data::DataColumnChangeEventArgs::New_ctor(::System::Data::DataRow* row) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataColumnChangeEventArgs*>(row));
}
inline ::System::Data::DataColumnChangeEventArgs* System::Data::DataColumnChangeEventArgs::New_ctor(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataColumnChangeEventArgs*>(row, column, value));
}
// Ctor Parameters []
constexpr ::System::Data::DataColumnChangeEventArgs::DataColumnChangeEventArgs() {}
