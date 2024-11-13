#pragma once
// IWYU pragma private; include "System/Xml/Schema/KSStruct.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__KSStruct_def.hpp"
#include "System/Xml/Schema/zzzz__KeySequence_def.hpp"
#include "System/Xml/Schema/zzzz__LocatedActiveAxis_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::KSStruct._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::KSStruct::*)(::System::Xml::Schema::KeySequence*, int32_t)>(
    &::System::Xml::Schema::KSStruct::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4336884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::KSStruct*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::KeySequence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Xml::Schema::KSStruct::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr int32_t const& System::Xml::Schema::KSStruct::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void System::Xml::Schema::KSStruct::__cordl_internal_set_depth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::System::Xml::Schema::KeySequence*& System::Xml::Schema::KSStruct::__cordl_internal_get_ks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::KeySequence*> const& System::Xml::Schema::KSStruct::__cordl_internal_get_ks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ks;
}
constexpr void System::Xml::Schema::KSStruct::__cordl_internal_set_ks(::System::Xml::Schema::KeySequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*>& System::Xml::Schema::KSStruct::__cordl_internal_get_fields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*> const& System::Xml::Schema::KSStruct::__cordl_internal_get_fields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr void System::Xml::Schema::KSStruct::__cordl_internal_set_fields(::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fields)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::KSStruct* System::Xml::Schema::KSStruct::New_ctor(::System::Xml::Schema::KeySequence* ks, int32_t dim) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::KSStruct*>(ks, dim));
}
inline void System::Xml::Schema::KSStruct::_ctor(::System::Xml::Schema::KeySequence* ks, int32_t dim) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::KSStruct*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::KeySequence*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ks, dim);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::KSStruct::KSStruct() {}
