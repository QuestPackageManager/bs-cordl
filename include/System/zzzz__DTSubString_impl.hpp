#pragma once
#include "System/zzzz__DTSubStringType_impl.hpp"
#include "System/zzzz__ReadOnlySpan_1_impl.hpp"
#include "System/zzzz__DTSubString_def.hpp"
#include "System/zzzz__DTSubStringType_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::DTSubString.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::DTSubString::*)(int32_t)>(&::System::DTSubString::get_Item)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25a5844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DTSubString>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline char16_t System::DTSubString::get_Item(int32_t relativeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DTSubString>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method, relativeIndex);
}
// Ctor Parameters [CppParam { name: "s", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::System::DTSubStringType", modifiers: "", def_value: Some("{}") },
// CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DTSubString::DTSubString(::System::ReadOnlySpan_1<char16_t> s, int32_t index, int32_t length, ::System::DTSubStringType type, int32_t value) noexcept {
  this->s = s;
  this->index = index;
  this->length = length;
  this->type = type;
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::DTSubString::DTSubString() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
