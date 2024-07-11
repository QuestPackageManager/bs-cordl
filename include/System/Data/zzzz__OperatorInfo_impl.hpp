#pragma once
// IWYU pragma private; include "System/Data/OperatorInfo.hpp"
#include "System/Data/zzzz__Nodes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__OperatorInfo_def.hpp"
#include "System/Data/zzzz__Nodes_def.hpp"
//  Writing Method size for method: ::System::Data::OperatorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::OperatorInfo::*)(::System::Data::Nodes, int32_t, int32_t)>(
    &::System::Data::OperatorInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cff9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::OperatorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Nodes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Data::Nodes& System::Data::OperatorInfo::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Data::Nodes const& System::Data::OperatorInfo::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::Data::OperatorInfo::__cordl_internal_set__type(::System::Data::Nodes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr int32_t& System::Data::OperatorInfo::__cordl_internal_get__op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr int32_t const& System::Data::OperatorInfo::__cordl_internal_get__op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr void System::Data::OperatorInfo::__cordl_internal_set__op(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____op = value;
}
constexpr int32_t& System::Data::OperatorInfo::__cordl_internal_get__priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr int32_t const& System::Data::OperatorInfo::__cordl_internal_get__priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr void System::Data::OperatorInfo::__cordl_internal_set__priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____priority = value;
}
inline ::System::Data::OperatorInfo* System::Data::OperatorInfo::New_ctor(::System::Data::Nodes type, int32_t op, int32_t pri) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::OperatorInfo*>(type, op, pri));
}
inline void System::Data::OperatorInfo::_ctor(::System::Data::Nodes type, int32_t op, int32_t pri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::OperatorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::Nodes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, op, pri);
}
// Ctor Parameters []
constexpr ::System::Data::OperatorInfo::OperatorInfo() {}
