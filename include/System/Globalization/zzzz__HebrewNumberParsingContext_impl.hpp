#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumberParsingContext.hpp"
#include "System/Globalization/zzzz__HebrewNumber_impl.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingContext_def.hpp"
//  Writing Method size for method: ::System::Globalization::HebrewNumberParsingContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::HebrewNumberParsingContext::*)(int32_t)>(
    &::System::Globalization::HebrewNumberParsingContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d9eb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumberParsingContext>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Globalization::HebrewNumberParsingContext::_ctor(int32_t result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumberParsingContext>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters [CppParam { name: "state", ty: "::System::Globalization::HebrewNumber_HS", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumberParsingContext::HebrewNumberParsingContext(::System::Globalization::HebrewNumber_HS state, int32_t result) noexcept {
  this->state = state;
  this->result = result;
}
// Ctor Parameters []
constexpr ::System::Globalization::HebrewNumberParsingContext::HebrewNumberParsingContext() {}
