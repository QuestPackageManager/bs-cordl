#pragma once
// IWYU pragma private; include "System/Collections/Generic/ArraySortHelper_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__ArraySortHelper_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get>(std::forward<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>(value));
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::getStaticF_s_defaultArraySortHelper()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*, "s_defaultArraySortHelper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get>();
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Sort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  index, int32_t  length, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "Sort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keys, values, index, length, comparer);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::SwapIfGreaterWithItems(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "SwapIfGreaterWithItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, comparer, a, b);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Swap(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  j)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "Swap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, j);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntrospectiveSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  left, int32_t  length, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "IntrospectiveSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, left, length, comparer);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::IntroSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, int32_t  depthLimit, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "IntroSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, depthLimit, comparer);
}
template<typename TKey,typename TValue>
inline int32_t System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::PickPivotAndPartition(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "PickPivotAndPartition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::Heapsort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "Heapsort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::DownHeap(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  i, int32_t  n, int32_t  lo, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "DownHeap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, i, n, lo, comparer);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::InsertionSort(::ArrayW<TKey,::Array<TKey>*>  keys, ::ArrayW<TValue,::Array<TValue>*>  values, int32_t  lo, int32_t  hi, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "InsertionSort",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey,::Array<TKey>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue,::Array<TValue>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::get_Default()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        "get_Default",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*, false>(nullptr, ___internal_method);
}
template<typename TKey,typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>* System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>*>());
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::ArraySortHelper_2<TKey,TValue>::ArraySortHelper_2()   {
}
