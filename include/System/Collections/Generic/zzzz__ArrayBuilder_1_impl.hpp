#pragma once
// IWYU pragma private; include "System/Collections/Generic/ArrayBuilder_1.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_def.hpp"
template<typename T>
inline void System::Collections::Generic::ArrayBuilder_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArrayBuilder_1<T>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> System::Collections::Generic::ArrayBuilder_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArrayBuilder_1<T>>::get(),
                        "ToArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(this, ___internal_method);
}
template<typename T>
inline void System::Collections::Generic::ArrayBuilder_1<T>::UncheckedAdd(T  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::ArrayBuilder_1<T>>::get(),
                        "UncheckedAdd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "_array", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::Collections::Generic::ArrayBuilder_1<T>::ArrayBuilder_1(::ArrayW<T,::Array<T>*>  _array, int32_t  _count) noexcept  {
this->_array = _array;
this->_count = _count;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Collections::Generic::ArrayBuilder_1<T>::ArrayBuilder_1()   {
}
