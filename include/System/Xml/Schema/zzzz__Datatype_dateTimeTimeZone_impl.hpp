#pragma once
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_dateTimeTimeZone_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Datatype_dateTimeTimeZone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Datatype_dateTimeTimeZone::*)()>(
    &::System::Xml::Schema::Datatype_dateTimeTimeZone::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29a3910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dateTimeTimeZone*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::Datatype_dateTimeTimeZone* System::Xml::Schema::Datatype_dateTimeTimeZone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::Datatype_dateTimeTimeZone*>());
}
inline void System::Xml::Schema::Datatype_dateTimeTimeZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Datatype_dateTimeTimeZone*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Datatype_dateTimeTimeZone::Datatype_dateTimeTimeZone() {}
