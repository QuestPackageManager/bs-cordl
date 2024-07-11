#pragma once
// IWYU pragma private; include "UnityEngine/UI/Clipping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__Clipping_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Clipping.FindCullAndClipWorldRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rect (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*, ByRef<bool>)>(&::UnityEngine::UI::Clipping::FindCullAndClipWorldRect)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x34e4574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Clipping*>::get(), "FindCullAndClipWorldRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rect UnityEngine::UI::Clipping::FindCullAndClipWorldRect(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* rectMaskParents,
                                                                               ByRef<bool> validRect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Clipping*>::get(), "FindCullAndClipWorldRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, rectMaskParents, validRect);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Clipping::Clipping() {}
