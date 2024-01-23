#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ResultsEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__BaseResultsEnvironmentController_def.hpp"
#include "GlobalNamespace/zzzz__ResultsEnvironmentManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword.get_keyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::*)()>(
    &::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2376a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get(),
                                                 "get_keyword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword.get_resultsEnvironmentController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> (::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::*)()>(
        &::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::get_resultsEnvironmentController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2376a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get(),
                                                 "get_resultsEnvironmentController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::*)()>(
    &::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2376a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::__cordl_internal_get__keyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyword;
}
constexpr ::StringW const& GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::__cordl_internal_get__keyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyword;
}
constexpr void GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::__cordl_internal_set__keyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>&
GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::__cordl_internal_get__resultsEnvironmentController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsEnvironmentController;
}
constexpr ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> const&
GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::__cordl_internal_get__resultsEnvironmentController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsEnvironmentController;
}
constexpr void GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::__cordl_internal_set__resultsEnvironmentController(
    ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultsEnvironmentController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::get_keyword() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get(),
                                               "get_keyword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::get_resultsEnvironmentController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get(),
                                               "get_resultsEnvironmentController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword* GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>());
}
inline void GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword() {}
//  Writing Method size for method: ::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23768b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0._GetResultEnvironmentControllerForKeyword_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::*)(::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*)>(
        &::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::_GetResultEnvironmentControllerForKeyword_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2376a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0*>::get(), "<GetResultEnvironmentControllerForKeyword>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::__cordl_internal_get_keyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyword;
}
constexpr ::StringW const& GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::__cordl_internal_get_keyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyword;
}
constexpr void GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::__cordl_internal_set_keyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0* GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0*>());
}
inline void GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::_GetResultEnvironmentControllerForKeyword_b__0(
    ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword* controllerWithKeyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0*>::get(), "<GetResultEnvironmentControllerForKeyword>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, controllerWithKeyword);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0::__ResultsEnvironmentManager____c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager.GetResultEnvironmentControllerForKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> (::GlobalNamespace::ResultsEnvironmentManager::*)(
    ::StringW)>(&::GlobalNamespace::ResultsEnvironmentManager::GetResultEnvironmentControllerForKeyword)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23767d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "GetResultEnvironmentControllerForKeyword",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager.ShowResultForKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsEnvironmentManager::*)(::StringW, bool)>(
    &::GlobalNamespace::ResultsEnvironmentManager::ShowResultForKeyword)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23768c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "ShowResultForKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager.HideResultForKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsEnvironmentManager::*)(::StringW, bool)>(
    &::GlobalNamespace::ResultsEnvironmentManager::HideResultForKeyword)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2376964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "HideResultForKeyword", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsEnvironmentManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsEnvironmentManager::*)()>(&::GlobalNamespace::ResultsEnvironmentManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23769f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*,
                   ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*>&
GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_get__resultEnvironmentControllersWithKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultEnvironmentControllersWithKeyword;
}
constexpr ::ArrayW<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*,
                   ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*> const&
GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_get__resultEnvironmentControllersWithKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultEnvironmentControllersWithKeyword;
}
constexpr void GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_set__resultEnvironmentControllersWithKeyword(
    ::ArrayW<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*, ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resultEnvironmentControllersWithKeyword)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_get__currentShownKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentShownKeyword;
}
constexpr ::StringW const& GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_get__currentShownKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentShownKeyword;
}
constexpr void GlobalNamespace::ResultsEnvironmentManager::__cordl_internal_set__currentShownKeyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentShownKeyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> GlobalNamespace::ResultsEnvironmentManager::GetResultEnvironmentControllerForKeyword(::StringW keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "GetResultEnvironmentControllerForKeyword",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>, false>(this, ___internal_method, keyword);
}
/// @param immediately: bool (default: false)
inline void GlobalNamespace::ResultsEnvironmentManager::ShowResultForKeyword(::StringW keyword, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "ShowResultForKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, immediately);
}
/// @param immediately: bool (default: false)
inline void GlobalNamespace::ResultsEnvironmentManager::HideResultForKeyword(::StringW keyword, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsEnvironmentManager*>::get(), "HideResultForKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, immediately);
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
