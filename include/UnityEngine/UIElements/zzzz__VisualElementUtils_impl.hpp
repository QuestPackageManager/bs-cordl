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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::VisualElementUtils___c::*)()>(&::UnityEngine::UIElements::VisualElementUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cc9ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils___c._AssignInspectorStyleIfNecessary_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::VisualElementUtils___c::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::VisualElementUtils___c::_AssignInspectorStyleIfNecessary_b__5_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6cc9de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils___c*>(),
                                                             { "<AssignInspectorStyleIfNecessary>b__5_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementUtils___c::setStaticF___9(::UnityEngine::UIElements::VisualElementUtils___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::VisualElementUtils___c*, "<>9", ::UnityEngine::UIElements::VisualElementUtils___c*>(
      std::forward<::UnityEngine::UIElements::VisualElementUtils___c*>(value));
}
inline ::UnityEngine::UIElements::VisualElementUtils___c* UnityEngine::UIElements::VisualElementUtils___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::VisualElementUtils___c*, "<>9", ::UnityEngine::UIElements::VisualElementUtils___c*>();
}
inline void UnityEngine::UIElements::VisualElementUtils___c::setStaticF___9__5_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__5_0", ::UnityEngine::UIElements::VisualElementUtils___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* UnityEngine::UIElements::VisualElementUtils___c::getStaticF___9__5_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*, "<>9__5_0", ::UnityEngine::UIElements::VisualElementUtils___c*>();
}
inline void UnityEngine::UIElements::VisualElementUtils___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::VisualElementUtils___c::_AssignInspectorStyleIfNecessary_b__5_0(::UnityEngine::UIElements::VisualElement* i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils___c*>(),
                                                           { "<AssignInspectorStyleIfNecessary>b__5_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::VisualElementUtils___c* UnityEngine::UIElements::VisualElementUtils___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::VisualElementUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementUtils___c::VisualElementUtils___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.GetUniqueName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::VisualElementUtils::GetUniqueName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6cc9990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils*>(), { "GetUniqueName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.GetFoldoutDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6cc9ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils*>(),
                                                                                           { "GetFoldoutDepth", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementUtils.AssignInspectorStyleIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::StringW)>(
    &::UnityEngine::UIElements::VisualElementUtils::AssignInspectorStyleIfNecessary)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6cc9b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils*>(),
                                                             { "AssignInspectorStyleIfNecessary", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementUtils::setStaticF_s_usedNames(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "s_usedNames", ::UnityEngine::UIElements::VisualElementUtils*>(
      std::forward<::System::Collections::Generic::HashSet_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* UnityEngine::UIElements::VisualElementUtils::getStaticF_s_usedNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::StringW>*, "s_usedNames", ::UnityEngine::UIElements::VisualElementUtils*>();
}
inline void UnityEngine::UIElements::VisualElementUtils::setStaticF_s_FoldoutType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "s_FoldoutType", ::UnityEngine::UIElements::VisualElementUtils*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* UnityEngine::UIElements::VisualElementUtils::getStaticF_s_FoldoutType() {
  return ::cordl_internals::getStaticField<::System::Type*, "s_FoldoutType", ::UnityEngine::UIElements::VisualElementUtils*>();
}
inline void UnityEngine::UIElements::VisualElementUtils::setStaticF_s_InspectorElementUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_InspectorElementUssClassName", ::UnityEngine::UIElements::VisualElementUtils*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualElementUtils::getStaticF_s_InspectorElementUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "s_InspectorElementUssClassName", ::UnityEngine::UIElements::VisualElementUtils*>();
}
inline ::StringW UnityEngine::UIElements::VisualElementUtils::GetUniqueName(::StringW nameBase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils*>(), { "GetUniqueName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, nameBase);
}
inline int32_t UnityEngine::UIElements::VisualElementUtils::GetFoldoutDepth(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils*>(), { "GetFoldoutDepth", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, element);
}
inline void UnityEngine::UIElements::VisualElementUtils::AssignInspectorStyleIfNecessary(::UnityEngine::UIElements::VisualElement* element, ::StringW classNameToEnable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementUtils*>(),
                                                           { "AssignInspectorStyleIfNecessary", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element, classNameToEnable);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementUtils::VisualElementUtils() {}
