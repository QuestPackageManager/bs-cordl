#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineHelpURLAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineHelpURLAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimelineHelpURLAttribute::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TimelineHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4819fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineHelpURLAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::TimelineHelpURLAttribute::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineHelpURLAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::UnityEngine::Timeline::TimelineHelpURLAttribute* UnityEngine::Timeline::TimelineHelpURLAttribute::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::TimelineHelpURLAttribute*>(type));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineHelpURLAttribute::TimelineHelpURLAttribute() {}
