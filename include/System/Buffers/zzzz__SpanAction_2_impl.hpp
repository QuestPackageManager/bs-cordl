#pragma once
// IWYU pragma private; include "System/Buffers/SpanAction_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Buffers/zzzz__SpanAction_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
template <typename T, typename TArg> inline ::System::Buffers::SpanAction_2<T, TArg>* System::Buffers::SpanAction_2<T, TArg>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Buffers::SpanAction_2<T, TArg>*>(object, method));
}
template <typename T, typename TArg> inline void System::Buffers::SpanAction_2<T, TArg>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::SpanAction_2<T, TArg>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T, typename TArg> inline void System::Buffers::SpanAction_2<T, TArg>::Invoke(::System::Span_1<T> span, TArg arg) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::SpanAction_2<T, TArg>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, span, arg);
}
// Ctor Parameters []
template <typename T, typename TArg> constexpr ::System::Buffers::SpanAction_2<T, TArg>::SpanAction_2() {}
