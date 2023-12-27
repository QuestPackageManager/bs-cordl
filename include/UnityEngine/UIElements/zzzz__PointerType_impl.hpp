#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerType.GetPointerType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::UnityEngine::UIElements::PointerType::GetPointerType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2e4ebc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get(), "GetPointerType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerType.IsDirectManipulationDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::UnityEngine::UIElements::PointerType::IsDirectManipulationDevice)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2e4ec64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get(), "IsDirectManipulationDevice",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerType::setStaticF_mouse(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "mouse", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_mouse() {
  return ::cordl_internals::getStaticField<::StringW, "mouse", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>();
}
inline void UnityEngine::UIElements::PointerType::setStaticF_touch(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "touch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_touch() {
  return ::cordl_internals::getStaticField<::StringW, "touch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>();
}
inline void UnityEngine::UIElements::PointerType::setStaticF_pen(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "pen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_pen() {
  return ::cordl_internals::getStaticField<::StringW, "pen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>();
}
inline void UnityEngine::UIElements::PointerType::setStaticF_unknown(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "unknown", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::PointerType::getStaticF_unknown() {
  return ::cordl_internals::getStaticField<::StringW, "unknown", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get>();
}
inline ::StringW UnityEngine::UIElements::PointerType::GetPointerType(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get(), "GetPointerType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, pointerId);
}
inline bool UnityEngine::UIElements::PointerType::IsDirectManipulationDevice(::StringW pointerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerType*>::get(), "IsDirectManipulationDevice",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerType);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerType::PointerType() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
