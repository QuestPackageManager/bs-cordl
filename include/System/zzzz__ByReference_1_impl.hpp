#pragma once
// IWYU pragma private; include "System/ByReference_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__ByReference_1_def.hpp"
template<typename T>
inline void System::ByReference_1<T>::_ctor(::ByRef<T>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByReference_1<T>>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline ::ByRef<T> System::ByReference_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ByReference_1<T>>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::System::ByReference_1<T>::ByReference_1(::System::IntPtr  _value) noexcept  {
this->_value = _value;
}
// Ctor Parameters []
template<typename T>
constexpr ::System::ByReference_1<T>::ByReference_1()   {
}
