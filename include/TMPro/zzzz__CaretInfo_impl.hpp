#pragma once
#include "TMPro/zzzz__CaretPosition_impl.hpp"
#include "TMPro/zzzz__CaretInfo_def.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
//  Writing Method size for method: ::TMPro::CaretInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::CaretInfo::*)(int32_t, ::TMPro::CaretPosition)>(&::TMPro::CaretInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c49080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CaretInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::CaretPosition>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::CaretInfo::_ctor(int32_t index, ::TMPro::CaretPosition position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CaretInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::CaretPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, position);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::TMPro::CaretPosition", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::CaretInfo::CaretInfo(int32_t index, ::TMPro::CaretPosition position) noexcept {
  this->index = index;
  this->position = position;
}
// Ctor Parameters []
constexpr ::TMPro::CaretInfo::CaretInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
