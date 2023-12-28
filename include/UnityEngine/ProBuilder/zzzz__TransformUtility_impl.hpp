#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__TransformUtility_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.UnparentChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::ProBuilder::TransformUtility::UnparentChildren)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2b7c2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "UnparentChildren", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.ReparentChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::ProBuilder::TransformUtility::ReparentChildren)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b7c434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "ReparentChildren", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.TransformVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::TransformUtility::TransformVertex)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2b7c55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "TransformVertex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::TransformUtility.InverseTransformVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Vertex* (*)(::UnityEngine::Transform*, ::UnityEngine::ProBuilder::Vertex*)>(
    &::UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2b7c740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "InverseTransformVertex", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::TransformUtility::setStaticF_s_ChildStack(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>*, "s_ChildStack",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>*
UnityEngine::ProBuilder::TransformUtility::getStaticF_s_ChildStack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>*,
                                           "s_ChildStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get>();
}
inline void UnityEngine::ProBuilder::TransformUtility::UnparentChildren(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "UnparentChildren", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline void UnityEngine::ProBuilder::TransformUtility::ReparentChildren(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "ReparentChildren", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::TransformUtility::TransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "TransformVertex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*, false>(nullptr, ___internal_method, transform, vertex);
}
inline ::UnityEngine::ProBuilder::Vertex* UnityEngine::ProBuilder::TransformUtility::InverseTransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::TransformUtility*>::get(), "InverseTransformVertex", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Vertex*, false>(nullptr, ___internal_method, transform, vertex);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::TransformUtility::TransformUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
