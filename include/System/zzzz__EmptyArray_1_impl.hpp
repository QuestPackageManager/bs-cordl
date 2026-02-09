#pragma once
// IWYU pragma private; include "System/EmptyArray_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EmptyArray_1_def.hpp"
template<typename T>
inline void System::EmptyArray_1<T>::setStaticF_Value(::ArrayW<T,::Array<T>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<T,::Array<T>*>, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EmptyArray_1<T>*>::get>(std::forward<::ArrayW<T,::Array<T>*>>(value));
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> System::EmptyArray_1<T>::getStaticF_Value()  {
return ::cordl_internals::getStaticField<::ArrayW<T,::Array<T>*>, "Value", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::EmptyArray_1<T>*>::get>();
}
// Ctor Parameters []
template<typename T>
constexpr ::System::EmptyArray_1<T>::EmptyArray_1()   {
}
