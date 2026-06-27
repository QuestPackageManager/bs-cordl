#pragma once
// IWYU pragma private; include "Zenject/NoReflectionBakingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__NoReflectionBakingAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::NoReflectionBakingAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NoReflectionBakingAttribute::*)()>(&::Zenject::NoReflectionBakingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce6a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoReflectionBakingAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Zenject::NoReflectionBakingAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoReflectionBakingAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Zenject::NoReflectionBakingAttribute* Zenject::NoReflectionBakingAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::NoReflectionBakingAttribute*>());
}
// Ctor Parameters []
constexpr ::Zenject::NoReflectionBakingAttribute::NoReflectionBakingAttribute()   {
}
