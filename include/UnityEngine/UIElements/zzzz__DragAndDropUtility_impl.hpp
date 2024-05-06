#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropUtility_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropUtility.get_dragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDrop* (*)()>(&::UnityEngine::UIElements::DragAndDropUtility::get_dragAndDrop)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x355f4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get(),
                                                                               "get_dragAndDrop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_MakeClientFunc(::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*, "s_MakeClientFunc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>(
      std::forward<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*>(value));
}
inline ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_MakeClientFunc() {
  return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>*, "s_MakeClientFunc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>();
}
inline void UnityEngine::UIElements::DragAndDropUtility::setStaticF_s_DragAndDrop(::UnityEngine::UIElements::IDragAndDrop* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDrop",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>(
      std::forward<::UnityEngine::UIElements::IDragAndDrop*>(value));
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::getStaticF_s_DragAndDrop() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::IDragAndDrop*, "s_DragAndDrop",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get>();
}
inline ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DragAndDropUtility::get_dragAndDrop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DragAndDropUtility*>::get(),
                                                                             "get_dragAndDrop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDrop*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragAndDropUtility::DragAndDropUtility() {}
