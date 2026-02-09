#pragma once
// IWYU pragma private; include "System/Collections/Generic/ArraySortHelper_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__ArraySortHelper_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::ArraySortHelper_1<T>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get>(std::forward<::System::Collections::Generic::ArraySortHelper_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::ArraySortHelper_1<T>* System::Collections::Generic::ArraySortHelper_1<T>::getStaticF_s_defaultArraySortHelper()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::ArraySortHelper_1<T>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get>();
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::Sort(::ArrayW<T,::Array<T>*>  keys, int32_t  index, int32_t  length, ::System::Collections::Generic::IComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "Sort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keys, index, length, comparer);
}
template<typename T>
inline int32_t System::Collections::Generic::ArraySortHelper_1<T>::BinarySearch(::ArrayW<T,::Array<T>*>  array, int32_t  index, int32_t  length, T  value, ::System::Collections::Generic::IComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "BinarySearch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, array, index, length, value, comparer);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::Sort(::ArrayW<T,::Array<T>*>  keys, int32_t  index, int32_t  length, ::System::Comparison_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "Sort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, index, length, comparer);
}
template<typename T>
inline int32_t System::Collections::Generic::ArraySortHelper_1<T>::InternalBinarySearch(::ArrayW<T,::Array<T>*>  array, int32_t  index, int32_t  length, T  value, ::System::Collections::Generic::IComparer_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "InternalBinarySearch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, array, index, length, value, comparer);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::SwapIfGreater(::ArrayW<T,::Array<T>*>  keys, ::System::Comparison_1<T>*  comparer, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "SwapIfGreater",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, comparer, a, b);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::Swap(::ArrayW<T,::Array<T>*>  a, int32_t  i, int32_t  j)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "Swap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, a, i, j);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::IntrospectiveSort(::ArrayW<T,::Array<T>*>  keys, int32_t  left, int32_t  length, ::System::Comparison_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "IntrospectiveSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, left, length, comparer);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::IntroSort(::ArrayW<T,::Array<T>*>  keys, int32_t  lo, int32_t  hi, int32_t  depthLimit, ::System::Comparison_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "IntroSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, lo, hi, depthLimit, comparer);
}
template<typename T>
inline int32_t System::Collections::Generic::ArraySortHelper_1<T>::PickPivotAndPartition(::ArrayW<T,::Array<T>*>  keys, int32_t  lo, int32_t  hi, ::System::Comparison_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "PickPivotAndPartition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, keys, lo, hi, comparer);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::Heapsort(::ArrayW<T,::Array<T>*>  keys, int32_t  lo, int32_t  hi, ::System::Comparison_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "Heapsort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, lo, hi, comparer);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::DownHeap(::ArrayW<T,::Array<T>*>  keys, int32_t  i, int32_t  n, int32_t  lo, ::System::Comparison_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "DownHeap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, i, n, lo, comparer);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::InsertionSort(::ArrayW<T,::Array<T>*>  keys, int32_t  lo, int32_t  hi, ::System::Comparison_1<T>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "InsertionSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, lo, hi, comparer);
}
template<typename T>
inline ::System::Collections::Generic::ArraySortHelper_1<T>* System::Collections::Generic::ArraySortHelper_1<T>::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        "get_Default",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_1<T>*, false>(nullptr, ___internal_method);
}
template<typename T>
inline void System::Collections::Generic::ArraySortHelper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::ArraySortHelper_1<T>* System::Collections::Generic::ArraySortHelper_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::ArraySortHelper_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Collections::Generic::ArraySortHelper_1<T>::ArraySortHelper_1()   {
}
