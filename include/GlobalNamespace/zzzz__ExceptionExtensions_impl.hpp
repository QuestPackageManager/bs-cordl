#pragma once
// IWYU pragma private; include "GlobalNamespace/ExceptionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ExceptionExtensions_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExceptionExtensions.GenerateFullStackMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception*)>(&::GlobalNamespace::ExceptionExtensions::GenerateFullStackMessage)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3251a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExceptionExtensions*>::get(),
                        "GenerateFullStackMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ExceptionExtensions::GenerateFullStackMessage(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExceptionExtensions*>::get(),
                        "GenerateFullStackMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExceptionExtensions::ExceptionExtensions()   {
}
