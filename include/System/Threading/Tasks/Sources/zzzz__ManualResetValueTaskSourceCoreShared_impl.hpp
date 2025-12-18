#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/ManualResetValueTaskSourceCoreShared.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCoreShared_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared.ThrowInvalidOperationException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(
    &::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::ThrowInvalidOperationException)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b187b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>::get(),
                                                 "ThrowInvalidOperationException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared.CompletionSentinel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(
    &::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::CompletionSentinel)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b187ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>::get(), "CompletionSentinel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::setStaticF_s_sentinel(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_sentinel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::getStaticF_s_sentinel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_sentinel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>::get>();
}
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::ThrowInvalidOperationException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>::get(),
                                               "ThrowInvalidOperationException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::CompletionSentinel(::System::Object* _) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*>::get(), "CompletionSentinel",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared::ManualResetValueTaskSourceCoreShared() {}
