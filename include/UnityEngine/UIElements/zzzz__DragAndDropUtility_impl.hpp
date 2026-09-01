#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DragAndDropUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropUtility_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropUtility.GetDragAndDrop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IDragAndDrop* (*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::DragAndDropUtility::GetDragAndDrop)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d89bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropUtility*>(), { "GetDragAndDrop", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_MakeDragAndDropClientFunc(::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*, "s_MakeDragAndDropClientFunc", ::UnityEngine::UIElements::DragAndDropUtility*>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_MakeDragAndDropClientFunc() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*, "s_MakeDragAndDropClientFunc", ::UnityEngine::UIElements::DragAndDropUtility*>();
}
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_DragAndDropEditor(::UnityEngine::UIElements::IDragAndDrop* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropEditor", ::UnityEngine::UIElements::DragAndDropUtility*>(
      std::forward<::UnityEngine::UIElements::IDragAndDrop*>(value));
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_DragAndDropEditor() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropEditor", ::UnityEngine::UIElements::DragAndDropUtility*>();
}
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_DragAndDropPlayMode(::UnityEngine::UIElements::IDragAndDrop* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropPlayMode", ::UnityEngine::UIElements::DragAndDropUtility*>(
      std::forward<::UnityEngine::UIElements::IDragAndDrop*>(value));
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_DragAndDropPlayMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropPlayMode", ::UnityEngine::UIElements::DragAndDropUtility*>();
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::GetDragAndDrop(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropUtility*>(), { "GetDragAndDrop", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDrop*>(nullptr, ___internal_method, panel);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragAndDropUtility::DragAndDropUtility() {}
