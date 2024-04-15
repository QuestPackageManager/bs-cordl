#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataRowBuilder_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::System::Data::DataRowBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::DataRowBuilder::*)(::System::Data::DataTable*, int32_t)>(
    &::System::Data::DataRowBuilder::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2babbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRowBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataRowBuilder::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& System::Data::DataRowBuilder::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::DataRowBuilder::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Data::DataRowBuilder::__cordl_internal_get__record() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____record;
}
constexpr int32_t const& System::Data::DataRowBuilder::__cordl_internal_get__record() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____record;
}
constexpr void System::Data::DataRowBuilder::__cordl_internal_set__record(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____record = value;
}
inline ::System::Data::DataRowBuilder* System::Data::DataRowBuilder::New_ctor(::System::Data::DataTable* table, int32_t record) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::DataRowBuilder*>(table, record));
}
inline void System::Data::DataRowBuilder::_ctor(::System::Data::DataTable* table, int32_t record) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::DataRowBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, table, record);
}
// Ctor Parameters []
constexpr ::System::Data::DataRowBuilder::DataRowBuilder() {}
