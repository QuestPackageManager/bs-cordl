#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/PreventReadOnlyInstanceModificationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__PreventReadOnlyInstanceModificationAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::*)()>(&::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5f514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute* UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::PreventReadOnlyInstanceModificationAttribute()   {
}
