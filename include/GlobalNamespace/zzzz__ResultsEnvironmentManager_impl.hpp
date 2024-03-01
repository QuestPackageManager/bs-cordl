#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ResultsEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__BaseResultsEnvironmentController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsEnvironmentManager::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*)>(&::GlobalNamespace::ResultsEnvironmentManager::Init)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x2389548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager.GetResultEnvironmentControllerForKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> (::GlobalNamespace::ResultsEnvironmentManager::*)(
    ::StringW)>(&::GlobalNamespace::ResultsEnvironmentManager::GetResultEnvironmentControllerForKeyword)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2389958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "GetResultEnvironmentControllerForKeyword",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager.ShowResultForKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsEnvironmentManager::*)(::StringW)>(
    &::GlobalNamespace::ResultsEnvironmentManager::ShowResultForKeyword)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23899d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "ShowResultForKeyword",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager.HideResultForKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsEnvironmentManager::*)(::StringW)>(
    &::GlobalNamespace::ResultsEnvironmentManager::HideResultForKeyword)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2389a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "HideResultForKeyword",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsEnvironmentManager::*)()>(&::GlobalNamespace::ResultsEnvironmentManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2389ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*&
GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_get__preloadedResultsEnvironmentControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preloadedResultsEnvironmentControllers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*> const&
GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_get__preloadedResultsEnvironmentControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preloadedResultsEnvironmentControllers;
}
constexpr void GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_set__preloadedResultsEnvironmentControllers(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preloadedResultsEnvironmentControllers)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::ResultsEnvironmentManager::Init(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* resultsEnvironmentControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resultsEnvironmentControllers);
}
inline ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> GlobalNamespace::ResultsEnvironmentManager::GetResultEnvironmentControllerForKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "GetResultEnvironmentControllerForKeyword",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>, false>(this, ___internal_method, keyword);
}
inline void GlobalNamespace::ResultsEnvironmentManager::ShowResultForKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "ShowResultForKeyword",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline void GlobalNamespace::ResultsEnvironmentManager::HideResultForKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "HideResultForKeyword",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline ::GlobalNamespace::ResultsEnvironmentManager* GlobalNamespace::ResultsEnvironmentManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ResultsEnvironmentManager*>());
}
inline void GlobalNamespace::ResultsEnvironmentManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResultsEnvironmentManager::ResultsEnvironmentManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
