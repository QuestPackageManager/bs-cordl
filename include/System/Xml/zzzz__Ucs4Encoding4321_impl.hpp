#pragma once
#include "System/Xml/zzzz__Ucs4Encoding_impl.hpp"
#include "System/Xml/zzzz__Ucs4Encoding4321_def.hpp"
//  Writing Method size for method: ::System::Xml::Ucs4Encoding4321._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Ucs4Encoding4321::*)()>(&::System::Xml::Ucs4Encoding4321::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28a5d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding4321.get_EncodingName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Ucs4Encoding4321::*)()>(&::System::Xml::Ucs4Encoding4321::get_EncodingName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28a6084;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Ucs4Encoding4321.GetPreamble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Xml::Ucs4Encoding4321::*)()>(
    &::System::Xml::Ucs4Encoding4321::GetPreamble)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28a60c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(), 6));
    return ___internal_method;
  }
};
inline ::System::Xml::Ucs4Encoding4321* System::Xml::Ucs4Encoding4321::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Ucs4Encoding4321*>());
}
inline void System::Xml::Ucs4Encoding4321::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Ucs4Encoding4321::get_EncodingName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Xml::Ucs4Encoding4321::GetPreamble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ucs4Encoding4321*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Ucs4Encoding4321::Ucs4Encoding4321() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
