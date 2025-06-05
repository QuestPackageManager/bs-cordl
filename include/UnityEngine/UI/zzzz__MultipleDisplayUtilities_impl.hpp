#pragma once
// IWYU pragma private; include "UnityEngine/UI/MultipleDisplayUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__MultipleDisplayUtilities_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::MultipleDisplayUtilities.GetRelativeMousePositionForDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData*, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4ac10d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::MultipleDisplayUtilities*>::get(), "GetRelativeMousePositionForDrag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MultipleDisplayUtilities.GetRelativeMousePositionForRaycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForRaycast)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4ac15a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::MultipleDisplayUtilities*>::get(), "GetRelativeMousePositionForRaycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MultipleDisplayUtilities.RelativeMouseAtScaled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UI::MultipleDisplayUtilities::RelativeMouseAtScaled)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x4ac113c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::MultipleDisplayUtilities*>::get(), "RelativeMouseAtScaled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::ByRef<::UnityEngine::Vector2> position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::MultipleDisplayUtilities*>::get(), "GetRelativeMousePositionForDrag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventData, position);
}
inline ::UnityEngine::Vector3 UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForRaycast(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::MultipleDisplayUtilities*>::get(), "GetRelativeMousePositionForRaycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, eventData);
}
inline ::UnityEngine::Vector3 UnityEngine::UI::MultipleDisplayUtilities::RelativeMouseAtScaled(::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::MultipleDisplayUtilities*>::get(), "RelativeMouseAtScaled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, position);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::MultipleDisplayUtilities::MultipleDisplayUtilities() {}
