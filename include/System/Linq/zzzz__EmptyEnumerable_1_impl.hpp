#pragma once
// IWYU pragma private; include "System/Linq/EmptyEnumerable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__EmptyEnumerable_1_def.hpp"
template<typename TElement>
inline void System::Linq::EmptyEnumerable_1<TElement>::setStaticF_Instance(::ArrayW<TElement,::Array<TElement>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<TElement,::Array<TElement>*>, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EmptyEnumerable_1<TElement>*>::get>(std::forward<::ArrayW<TElement,::Array<TElement>*>>(value));
}
template<typename TElement>
inline ::ArrayW<TElement,::Array<TElement>*> System::Linq::EmptyEnumerable_1<TElement>::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::ArrayW<TElement,::Array<TElement>*>, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EmptyEnumerable_1<TElement>*>::get>();
}
// Ctor Parameters []
template<typename TElement>
constexpr ::System::Linq::EmptyEnumerable_1<TElement>::EmptyEnumerable_1()   {
}
