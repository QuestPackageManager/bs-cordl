#pragma once
// IWYU pragma private; include "System/Threading/SparselyPopulatedArrayFragment_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArrayFragment_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T,::Array<T>*>& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
template<typename T>
constexpr ::ArrayW<T,::Array<T>*> const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
template<typename T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__elements(::ArrayW<T,::Array<T>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____elements, value);
}
template<typename T>
constexpr int32_t& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__freeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeCount;
}
template<typename T>
constexpr int32_t const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__freeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeCount;
}
template<typename T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__freeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeCount = value;
}
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
template<typename T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__next(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____next, value);
}
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>*& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prev;
}
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>* const& System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_get__prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prev;
}
template<typename T>
constexpr void System::Threading::SparselyPopulatedArrayFragment_1<T>::__cordl_internal_set__prev(::System::Threading::SparselyPopulatedArrayFragment_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->____prev, value);
}
template<typename T>
inline void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
template<typename T>
inline void System::Threading::SparselyPopulatedArrayFragment_1<T>::_ctor(int32_t  size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  prev)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, prev);
}
template<typename T>
inline T System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                        "get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template<typename T>
inline int32_t System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                        "get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::get_Prev()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                        "get_Prev",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SparselyPopulatedArrayFragment_1<T>*, false>(this, ___internal_method);
}
template<typename T>
inline T System::Threading::SparselyPopulatedArrayFragment_1<T>::SafeAtomicRemove(int32_t  index, T  expectedElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>::get(),
                        "SafeAtomicRemove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index, expectedElement);
}
template<typename T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t  size)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(size));
}
template<typename T>
inline ::System::Threading::SparselyPopulatedArrayFragment_1<T>* System::Threading::SparselyPopulatedArrayFragment_1<T>::New_ctor(int32_t  size, ::System::Threading::SparselyPopulatedArrayFragment_1<T>*  prev)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::SparselyPopulatedArrayFragment_1<T>*>(size, prev));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Threading::SparselyPopulatedArrayFragment_1<T>::SparselyPopulatedArrayFragment_1()   {
}
