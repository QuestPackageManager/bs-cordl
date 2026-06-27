#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ExpressionCreator_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionCreator_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
template<typename TDelegate>
inline ::System::Linq::Expressions::LambdaExpression* System::Linq::Expressions::ExpressionCreator_1<TDelegate>::CreateExpressionFunc(::System::Linq::Expressions::Expression*  body, ::StringW  name, bool  tailCall, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ExpressionCreator_1<TDelegate>*>::get(),
                        "CreateExpressionFunc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::LambdaExpression*, false>(nullptr, ___internal_method, body, name, tailCall, parameters);
}
// Ctor Parameters []
template<typename TDelegate>
constexpr ::System::Linq::Expressions::ExpressionCreator_1<TDelegate>::ExpressionCreator_1()   {
}
