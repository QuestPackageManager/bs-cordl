#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "LiteNetLib/Utils/zzzz__ParseException_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::ParseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::ParseException::*)(::StringW)>(&::LiteNetLib::Utils::ParseException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20aaac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::ParseException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::LiteNetLib::Utils::ParseException* LiteNetLib::Utils::ParseException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::Utils::ParseException*>(message));
}
inline void LiteNetLib::Utils::ParseException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::ParseException*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::ParseException::ParseException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
