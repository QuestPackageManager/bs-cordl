#pragma once
// IWYU pragma private; include "System/Linq/Buffer_1.hpp"
#include "System/Linq/zzzz__Buffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<typename TElement>
inline void System::Linq::Buffer_1<TElement>::_ctor(::System::Collections::Generic::IEnumerable_1<TElement>*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<TElement>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TElement>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
template<typename TElement>
inline ::ArrayW<TElement,::Array<TElement>*> System::Linq::Buffer_1<TElement>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Buffer_1<TElement>>::get(),
                        "ToArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TElement,::Array<TElement>*>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<TElement,::Array<TElement>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename TElement>
constexpr ::System::Linq::Buffer_1<TElement>::Buffer_1(::ArrayW<TElement,::Array<TElement>*>  items, int32_t  count) noexcept  {
this->items = items;
this->count = count;
}
// Ctor Parameters []
template<typename TElement>
constexpr ::System::Linq::Buffer_1<TElement>::Buffer_1()   {
}
