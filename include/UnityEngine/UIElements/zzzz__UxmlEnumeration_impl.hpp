#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlEnumeration.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumeration_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration.get_values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::UIElements::UxmlEnumeration::*)()>(
    &::UnityEngine::UIElements::UxmlEnumeration::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af5b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), "get_values",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration.set_values
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlEnumeration::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::UnityEngine::UIElements::UxmlEnumeration::set_values)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6af5b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), "set_values", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlEnumeration::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(
    &::UnityEngine::UIElements::UxmlEnumeration::Equals)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6af5ba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlEnumeration::*)()>(&::UnityEngine::UIElements::UxmlEnumeration::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6af5cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::UIElements::UxmlEnumeration::__cordl_internal_get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::UIElements::UxmlEnumeration::__cordl_internal_get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr void UnityEngine::UIElements::UxmlEnumeration::__cordl_internal_set_m_Values(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::UIElements::UxmlEnumeration::get_values() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), "get_values",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlEnumeration::set_values(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), "set_values", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UxmlEnumeration::Equals(::UnityEngine::UIElements::UxmlTypeRestriction* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void UnityEngine::UIElements::UxmlEnumeration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlEnumeration*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlEnumeration* UnityEngine::UIElements::UxmlEnumeration::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlEnumeration*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlEnumeration::UxmlEnumeration() {}
