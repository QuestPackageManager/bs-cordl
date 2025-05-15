#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTypeRestriction.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTypeRestriction.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlTypeRestriction::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(
    &::UnityEngine::UIElements::UxmlTypeRestriction::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4aa5078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeRestriction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlTypeRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlTypeRestriction::*)()>(&::UnityEngine::UIElements::UxmlTypeRestriction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aa5084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeRestriction*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::UxmlTypeRestriction::Equals(::UnityEngine::UIElements::UxmlTypeRestriction* other) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeRestriction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void UnityEngine::UIElements::UxmlTypeRestriction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeRestriction*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlTypeRestriction* UnityEngine::UIElements::UxmlTypeRestriction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlTypeRestriction*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>"
constexpr UnityEngine::UIElements::UxmlTypeRestriction::operator ::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*
UnityEngine::UIElements::UxmlTypeRestriction::i___System__IEquatable_1___UnityEngine__UIElements__UxmlTypeRestriction__() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UxmlTypeRestriction*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlTypeRestriction::UxmlTypeRestriction() {}
