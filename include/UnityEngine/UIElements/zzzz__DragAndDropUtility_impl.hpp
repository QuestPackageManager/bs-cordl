#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragAndDropUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropUtility_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropUtility.GetDragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDrop* (*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::DragAndDropUtility::GetDragAndDrop)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x499ce24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get(), "GetDragAndDrop", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_MakeDragAndDropClientFunc(::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*, "s_MakeDragAndDropClientFunc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_MakeDragAndDropClientFunc() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*, "s_MakeDragAndDropClientFunc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>();
}
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_DragAndDropEditor(::UnityEngine::UIElements::IDragAndDrop* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropEditor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>(
      std::forward<::UnityEngine::UIElements::IDragAndDrop*>(value));
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_DragAndDropEditor() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropEditor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>();
}
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_DragAndDropPlayMode(::UnityEngine::UIElements::IDragAndDrop* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropPlayMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>(
      std::forward<::UnityEngine::UIElements::IDragAndDrop*>(value));
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_DragAndDropPlayMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDropPlayMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>();
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::GetDragAndDrop(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get(), "GetDragAndDrop", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDrop*, false>(nullptr, ___internal_method, panel);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragAndDropUtility::DragAndDropUtility() {}
