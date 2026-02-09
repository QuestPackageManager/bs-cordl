#pragma once
// IWYU pragma private; include "Microsoft/CSharp/CSharpCodeProvider.hpp"
#include "Microsoft/CSharp/zzzz__CodeDomProvider_impl.hpp"
#include "Microsoft/CSharp/zzzz__CSharpCodeProvider_def.hpp"
//  Writing Method size for method: ::Microsoft::CSharp::CSharpCodeProvider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::CSharp::CSharpCodeProvider::*)()>(&::Microsoft::CSharp::CSharpCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fdd7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::CSharp::CSharpCodeProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Microsoft::CSharp::CSharpCodeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::CSharp::CSharpCodeProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Microsoft::CSharp::CSharpCodeProvider* Microsoft::CSharp::CSharpCodeProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Microsoft::CSharp::CSharpCodeProvider*>());
}
// Ctor Parameters []
constexpr ::Microsoft::CSharp::CSharpCodeProvider::CSharpCodeProvider()   {
}
