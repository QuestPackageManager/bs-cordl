#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "System/Xml/Schema/zzzz__UpaException_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::UpaException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::UpaException::*)(::System::Object*, ::System::Object*)>(
    &::System::Xml::Schema::UpaException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29f8dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UpaException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Xml::Schema::UpaException::__cordl_internal_get_particle1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::UpaException::__cordl_internal_get_particle1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle1;
}
constexpr void System::Xml::Schema::UpaException::__cordl_internal_set_particle1(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___particle1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::UpaException::__cordl_internal_get_particle2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::UpaException::__cordl_internal_get_particle2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particle2;
}
constexpr void System::Xml::Schema::UpaException::__cordl_internal_set_particle2(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___particle2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::UpaException* System::Xml::Schema::UpaException::New_ctor(::System::Object* particle1, ::System::Object* particle2) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::UpaException*>(particle1, particle2));
}
inline void System::Xml::Schema::UpaException::_ctor(::System::Object* particle1, ::System::Object* particle2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::UpaException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle1, particle2);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::UpaException::UpaException() {}
