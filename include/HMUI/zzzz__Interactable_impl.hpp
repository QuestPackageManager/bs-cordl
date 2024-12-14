#pragma once
// IWYU pragma private; include "HMUI/Interactable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__Interactable_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::HMUI::Interactable.add_interactableChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Interactable::*)(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*)>(
    &::HMUI::Interactable::add_interactableChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3aaae80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "add_interactableChangeEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.remove_interactableChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Interactable::*)(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*)>(
    &::HMUI::Interactable::remove_interactableChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3aaaf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "remove_interactableChangeEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.get_interactable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::Interactable::*)()>(&::HMUI::Interactable::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aaafe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "get_interactable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable.set_interactable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Interactable::*)(bool)>(&::HMUI::Interactable::set_interactable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3aaafe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "set_interactable", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::Interactable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::Interactable::*)()>(&::HMUI::Interactable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3aab024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::Interactable::__cordl_internal_get__interactable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable;
}
constexpr bool const& HMUI::Interactable::__cordl_internal_get__interactable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable;
}
constexpr void HMUI::Interactable::__cordl_internal_set__interactable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interactable = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*& HMUI::Interactable::__cordl_internal_get_interactableChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactableChangeEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* const& HMUI::Interactable::__cordl_internal_get_interactableChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactableChangeEvent;
}
constexpr void HMUI::Interactable::__cordl_internal_set_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interactableChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::Interactable::add_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "add_interactableChangeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::Interactable::remove_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "remove_interactableChangeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HMUI::Interactable::get_interactable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "get_interactable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::Interactable::set_interactable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), "set_interactable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::Interactable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::Interactable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::Interactable* HMUI::Interactable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::Interactable*>());
}
// Ctor Parameters []
constexpr ::HMUI::Interactable::Interactable() {}
