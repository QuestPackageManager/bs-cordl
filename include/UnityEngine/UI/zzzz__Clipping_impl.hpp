#pragma once
// IWYU pragma private; include "UnityEngine\UI\Clipping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__Clipping_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Clipping.FindCullAndClipWorldRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*, ::by_ref<bool>)>(
    &::UnityEngine::UI::Clipping::FindCullAndClipWorldRect)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6c1b44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UI::Clipping*>(),
            { "FindCullAndClipWorldRect", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rect UnityEngine::UI::Clipping::FindCullAndClipWorldRect(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>* rectMaskParents,
                                                                               ::by_ref<bool> validRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UI::Clipping*>(),
                       { "FindCullAndClipWorldRect", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::RectMask2D>>*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, rectMaskParents, validRect);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Clipping::Clipping() {}
