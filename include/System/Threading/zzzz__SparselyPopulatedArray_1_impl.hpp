#pragma once
// IWYU pragma private; include "System/Threading/SparselyPopulatedArray_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArray_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayAddInfo_1_def.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
template<typename T>
constexpr void System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_set__head(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____head, value);
}
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tail;
}
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_get__tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tail;
}
template<typename T>
constexpr void System::Threading::SparselyPopulatedArray_1<T>::__cordl_internal_set__tail(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____tail, value);
}
template<typename T>
inline void System::Threading::SparselyPopulatedArray_1<T>::_ctor(int32_t  initialSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSize);
}
template<typename T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArray_1<T>::get_Tail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(),
                        "get_Tail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::SparselyPopulatedArrayAddInfo_1<T> System::Threading::SparselyPopulatedArray_1<T>::Add(T  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArray_1<T>*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayAddInfo_1<T>, false>(this, ___internal_method, element);
}
template<typename T>
inline ::System::Threading::SparselyPopulatedArray_1<T>* System::Threading::SparselyPopulatedArray_1<T>::New_ctor(int32_t  initialSize)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::SparselyPopulatedArray_1<T>*>(initialSize));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArray_1<T>::SparselyPopulatedArray_1()   {
}
