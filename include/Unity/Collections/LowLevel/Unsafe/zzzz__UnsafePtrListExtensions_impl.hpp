#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafePtrListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrListExtensions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrList_1_def.hpp"
template <typename T>
inline ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>>
Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions::ListData(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>> from) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions*>::get(), "ListData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>>, false>(nullptr, ___internal_method, from);
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>
Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions::ListDataRO(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> from) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions*>::get(), "ListDataRO",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>, false>(nullptr, ___internal_method, from);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrListExtensions::UnsafePtrListExtensions() {}
