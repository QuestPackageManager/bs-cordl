#pragma once
// IWYU pragma private; include "System/Linq/Expressions/PrimitiveParameterExpression_1.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__PrimitiveParameterExpression_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline void System::Linq::Expressions::PrimitiveParameterExpression_1<T>::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PrimitiveParameterExpression_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
template<typename T>
inline ::System::Type* System::Linq::Expressions::PrimitiveParameterExpression_1<T>::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::PrimitiveParameterExpression_1<T>*>::get(),
                        "get_Type",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Linq::Expressions::PrimitiveParameterExpression_1<T>* System::Linq::Expressions::PrimitiveParameterExpression_1<T>::New_ctor(::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::PrimitiveParameterExpression_1<T>*>(name));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Linq::Expressions::PrimitiveParameterExpression_1<T>::PrimitiveParameterExpression_1()   {
}
