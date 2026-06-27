#pragma once
// IWYU pragma private; include "System/Collections/Generic/LargeArrayBuilder_1.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_impl.hpp"
#include "System/Collections/Generic/zzzz__LargeArrayBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<typename T>
inline void System::Collections::Generic::LargeArrayBuilder_1<T>::_ctor(bool  initialize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialize);
}
template<typename T>
inline void System::Collections::Generic::LargeArrayBuilder_1<T>::_ctor(int32_t  maxCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxCapacity);
}
template<typename T>
inline void System::Collections::Generic::LargeArrayBuilder_1<T>::AddRange(::System::Collections::Generic::IEnumerable_1<T>*  items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        "AddRange",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
template<typename T>
inline void System::Collections::Generic::LargeArrayBuilder_1<T>::AddWithBufferAllocation(T  item, ::ByRef<::ArrayW<T,::Array<T>*>>  destination, ::ByRef<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        "AddWithBufferAllocation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<T,::Array<T>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, destination, index);
}
template<typename T>
inline void System::Collections::Generic::LargeArrayBuilder_1<T>::CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  arrayIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T,::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex, count);
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> System::Collections::Generic::LargeArrayBuilder_1<T>::GetBuffer(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        "GetBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(this, ___internal_method, index);
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> System::Collections::Generic::LargeArrayBuilder_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        "ToArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(this, ___internal_method);
}
template<typename T>
inline bool System::Collections::Generic::LargeArrayBuilder_1<T>::TryMove(::ByRef<::ArrayW<T,::Array<T>*>>  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        "TryMove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<T,::Array<T>*>>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, array);
}
template<typename T>
inline void System::Collections::Generic::LargeArrayBuilder_1<T>::AllocateBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LargeArrayBuilder_1<T>>::get(),
                        "AllocateBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_maxCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_first", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_buffers", ty: "::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Collections::Generic::LargeArrayBuilder_1<T>::LargeArrayBuilder_1(int32_t  _maxCapacity, ::ArrayW<T,::Array<T>*>  _first, ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T,::Array<T>*>>  _buffers, ::ArrayW<T,::Array<T>*>  _current, int32_t  _index, int32_t  _count) noexcept  {
this->_maxCapacity = _maxCapacity;
this->_first = _first;
this->_buffers = _buffers;
this->_current = _current;
this->_index = _index;
this->_count = _count;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Collections::Generic::LargeArrayBuilder_1<T>::LargeArrayBuilder_1()   {
}
