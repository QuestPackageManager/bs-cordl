#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_monthDay.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_monthDay_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_monthDay.get_TypeCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::Datatype_monthDay::*)()>(
    &::System::Xml::Schema::Datatype_monthDay::get_TypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43ac0a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_monthDay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_monthDay*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Datatype_monthDay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_monthDay::*)()>(&::System::Xml::Schema::Datatype_monthDay::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x43a577c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_monthDay*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::Datatype_monthDay::get_TypeCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_monthDay*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode, false>(this, ___internal_method);
}
inline void System::Xml::Schema::Datatype_monthDay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_monthDay*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::Datatype_monthDay* System::Xml::Schema::Datatype_monthDay::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::Datatype_monthDay*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_monthDay::Datatype_monthDay() {}
