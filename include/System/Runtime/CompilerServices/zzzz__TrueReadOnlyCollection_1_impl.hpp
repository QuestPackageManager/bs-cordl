#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/TrueReadOnlyCollection_1.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TrueReadOnlyCollection_1_def.hpp"
template<typename T>
inline void System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>::_ctor(::ArrayW<T,::Array<T>*>  list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template<typename T>
inline ::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>* System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>::New_ctor(::ArrayW<T,::Array<T>*>  list)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>*>(list));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>::TrueReadOnlyCollection_1()   {
}
