#pragma once
// IWYU pragma private; include "System/Xml/BinaryCompatibility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__BinaryCompatibility_def.hpp"
//  Writing Method size for method: ::System::Xml::BinaryCompatibility.get_TargetsAtLeast_Desktop_V4_5_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Xml::BinaryCompatibility::get_TargetsAtLeast_Desktop_V4_5_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60cb5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinaryCompatibility*>::get(), "get_TargetsAtLeast_Desktop_V4_5_2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Xml::BinaryCompatibility::get_TargetsAtLeast_Desktop_V4_5_2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinaryCompatibility*>::get(), "get_TargetsAtLeast_Desktop_V4_5_2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::BinaryCompatibility::BinaryCompatibility() {}
