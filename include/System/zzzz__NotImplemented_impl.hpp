#pragma once
// IWYU pragma private; include "System/NotImplemented.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__NotImplemented_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::NotImplemented.ByDesignWithMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW)>(&::System::NotImplemented::ByDesignWithMessage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61bea80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NotImplemented*>::get(), "ByDesignWithMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::NotImplemented::ByDesignWithMessage(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::NotImplemented*>::get(), "ByDesignWithMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::System::NotImplemented::NotImplemented() {}
