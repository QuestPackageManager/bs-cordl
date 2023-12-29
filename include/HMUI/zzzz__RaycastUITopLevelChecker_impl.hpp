#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__RaycastUITopLevelChecker_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1fc8a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker.get_isOnTop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::get_isOnTop)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x1fc8ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(), "get_isOnTop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::RaycastUITopLevelChecker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::RaycastUITopLevelChecker::*)()>(&::HMUI::RaycastUITopLevelChecker::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1fc8cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& HMUI::RaycastUITopLevelChecker::__get_results() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___results;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*> const& HMUI::RaycastUITopLevelChecker::__get_results() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___results;
}
constexpr void HMUI::RaycastUITopLevelChecker::__set_results(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___results)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Canvas*& HMUI::RaycastUITopLevelChecker::__get__canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& HMUI::RaycastUITopLevelChecker::__get__canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr void HMUI::RaycastUITopLevelChecker::__set__canvas(::UnityEngine::Canvas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::RaycastUITopLevelChecker::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::RaycastUITopLevelChecker::get_isOnTop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(), "get_isOnTop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HMUI::RaycastUITopLevelChecker* HMUI::RaycastUITopLevelChecker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::RaycastUITopLevelChecker*>());
}
inline void HMUI::RaycastUITopLevelChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::RaycastUITopLevelChecker*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::RaycastUITopLevelChecker::RaycastUITopLevelChecker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
