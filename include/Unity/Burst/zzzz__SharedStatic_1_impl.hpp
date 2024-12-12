#pragma once
// IWYU pragma private; include "Unity/Burst/SharedStatic_1.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T> inline void Unity::Burst::SharedStatic_1<T>::_ctor(::cordl_internals::Ptr<void> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
template <typename T> inline ::ByRef<T> Unity::Burst::SharedStatic_1<T>::get_Data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "get_Data",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method);
}
template <typename T> inline ::cordl_internals::Ptr<void> Unity::Burst::SharedStatic_1<T>::get_UnsafeDataPointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "get_UnsafeDataPointer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
template <typename T> template <typename TContext> inline ::Unity::Burst::SharedStatic_1<T> Unity::Burst::SharedStatic_1<T>::GetOrCreate(uint32_t alignment) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "GetOrCreate",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::SharedStatic_1<T>, false>(nullptr, ___internal_method, alignment);
}
template <typename T> template <typename TContext, typename TSubContext> inline ::Unity::Burst::SharedStatic_1<T> Unity::Burst::SharedStatic_1<T>::GetOrCreate(uint32_t alignment) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "GetOrCreate",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubContext>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubContext>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::SharedStatic_1<T>, false>(nullptr, ___internal_method, alignment);
}
template <typename T> inline ::Unity::Burst::SharedStatic_1<T> Unity::Burst::SharedStatic_1<T>::GetOrCreateUnsafe(uint32_t alignment, int64_t hashCode, int64_t subHashCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "GetOrCreateUnsafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::SharedStatic_1<T>, false>(nullptr, ___internal_method, alignment, hashCode, subHashCode);
}
template <typename T>
template <typename TSubContext>
inline ::Unity::Burst::SharedStatic_1<T> Unity::Burst::SharedStatic_1<T>::GetOrCreatePartiallyUnsafeWithHashCode(uint32_t alignment, int64_t hashCode) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "GetOrCreatePartiallyUnsafeWithHashCode",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubContext>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubContext>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::SharedStatic_1<T>, false>(nullptr, ___internal_method, alignment, hashCode);
}
template <typename T>
template <typename TContext>
inline ::Unity::Burst::SharedStatic_1<T> Unity::Burst::SharedStatic_1<T>::GetOrCreatePartiallyUnsafeWithSubHashCode(uint32_t alignment, int64_t subHashCode) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "GetOrCreatePartiallyUnsafeWithSubHashCode",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContext>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::SharedStatic_1<T>, false>(nullptr, ___internal_method, alignment, subHashCode);
}
template <typename T> inline ::Unity::Burst::SharedStatic_1<T> Unity::Burst::SharedStatic_1<T>::GetOrCreate(::System::Type* contextType, uint32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "GetOrCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::SharedStatic_1<T>, false>(nullptr, ___internal_method, contextType, alignment);
}
template <typename T> inline ::Unity::Burst::SharedStatic_1<T> Unity::Burst::SharedStatic_1<T>::GetOrCreate(::System::Type* contextType, ::System::Type* subContextType, uint32_t alignment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(), "GetOrCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::SharedStatic_1<T>, false>(nullptr, ___internal_method, contextType, subContextType, alignment);
}
template <typename T> inline void Unity::Burst::SharedStatic_1<T>::CheckIf_T_IsUnmanagedOrThrow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::SharedStatic_1<T>>::get(),
                                                                             "CheckIf_T_IsUnmanagedOrThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Burst::SharedStatic_1<T>::SharedStatic_1(::cordl_internals::Ptr<void> _buffer) noexcept {
  this->_buffer = _buffer;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Burst::SharedStatic_1<T>::SharedStatic_1() {}
