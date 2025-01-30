#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementUtils_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualElementUtils___c::*)()>(
    &::UnityEngine::UIElements::VisualElementUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49a1d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils___c._AssignInspectorStyleIfNecessary_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::VisualElementUtils___c::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementUtils___c::_AssignInspectorStyleIfNecessary_b__5_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x49a1d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get(), "<AssignInspectorStyleIfNecessary>b__5_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementUtils___c::setStaticF___9(::UnityEngine::UIElements::VisualElementUtils___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualElementUtils___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get>(
      std::forward<::UnityEngine::UIElements::VisualElementUtils___c*>(value));
}
inline ::UnityEngine::UIElements::VisualElementUtils___c* UnityEngine::UIElements::VisualElementUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualElementUtils___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get>();
}
inline void UnityEngine::UIElements::VisualElementUtils___c::setStaticF___9__5_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__5_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get>(
      std::forward<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualElementUtils___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__5_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get>();
}
inline void UnityEngine::UIElements::VisualElementUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualElementUtils___c::_AssignInspectorStyleIfNecessary_b__5_0(::UnityEngine::UIElements::VisualElement* i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils___c*>::get(), "<AssignInspectorStyleIfNecessary>b__5_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::VisualElementUtils___c* UnityEngine::UIElements::VisualElementUtils___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::VisualElementUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementUtils___c::VisualElementUtils___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.GetUniqueName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::VisualElementUtils::GetUniqueName)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x49a191c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get(), "GetUniqueName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.GetFoldoutDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x49a1a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get(), "GetFoldoutDepth", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.AssignInspectorStyleIfNecessary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::StringW)>(
    &::UnityEngine::UIElements::VisualElementUtils::AssignInspectorStyleIfNecessary)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x49a1b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get(), "AssignInspectorStyleIfNecessary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementUtils::setStaticF_s_usedNames(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "s_usedNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* UnityEngine::UIElements::VisualElementUtils::getStaticF_s_usedNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "s_usedNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get>();
}
inline void UnityEngine::UIElements::VisualElementUtils::setStaticF_s_FoldoutType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_FoldoutType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* UnityEngine::UIElements::VisualElementUtils::getStaticF_s_FoldoutType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_FoldoutType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get>();
}
inline void UnityEngine::UIElements::VisualElementUtils::setStaticF_s_InspectorElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_InspectorElementUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualElementUtils::getStaticF_s_InspectorElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_InspectorElementUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get>();
}
inline ::StringW UnityEngine::UIElements::VisualElementUtils::GetUniqueName(::StringW nameBase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get(), "GetUniqueName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, nameBase);
}
inline int32_t UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get(), "GetFoldoutDepth", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, element);
}
inline void UnityEngine::UIElements::VisualElementUtils::AssignInspectorStyleIfNecessary(::UnityEngine::UIElements::VisualElement* element, ::StringW classNameToEnable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualElementUtils*>::get(), "AssignInspectorStyleIfNecessary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element, classNameToEnable);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementUtils::VisualElementUtils() {}
