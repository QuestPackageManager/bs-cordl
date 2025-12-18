#pragma once
// IWYU pragma private; include "GlobalNamespace/CompletableViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.WaitForCompletionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::CompletableViewController::*)()>(
    &::GlobalNamespace::CompletableViewController::WaitForCompletionAsync)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5871070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(),
                                                                               "WaitForCompletionAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.ResetCompletion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CompletableViewController::*)()>(
    &::GlobalNamespace::CompletableViewController::ResetCompletion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58710c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(),
                                                                               "ResetCompletion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CompletableViewController::*)()>(&::GlobalNamespace::CompletableViewController::Complete)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5871134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(), "Complete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController.__Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CompletableViewController::*)(bool, bool)>(
    &::GlobalNamespace::CompletableViewController::__Activate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x587118c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompletableViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CompletableViewController::*)()>(&::GlobalNamespace::CompletableViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& GlobalNamespace::CompletableViewController::__cordl_internal_get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& GlobalNamespace::CompletableViewController::__cordl_internal_get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr void GlobalNamespace::CompletableViewController::__cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::CompletableViewController::WaitForCompletionAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(),
                                                                             "WaitForCompletionAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void GlobalNamespace::CompletableViewController::ResetCompletion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(),
                                                                             "ResetCompletion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CompletableViewController::Complete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(), "Complete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CompletableViewController::__Activate(bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::CompletableViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CompletableViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CompletableViewController* GlobalNamespace::CompletableViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CompletableViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompletableViewController::CompletableViewController() {}
