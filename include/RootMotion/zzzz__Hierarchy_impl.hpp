#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/zzzz__Hierarchy_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::Hierarchy.HierarchyIsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(
    &::RootMotion::Hierarchy::HierarchyIsValid)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1318c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "HierarchyIsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.ContainsDuplicate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (*)(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>)>(
    &::RootMotion::Hierarchy::ContainsDuplicate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1318b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "ContainsDuplicate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.IsAncestor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::Hierarchy::IsAncestor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1316f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "IsAncestor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.ContainsChild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::RootMotion::Hierarchy::ContainsChild)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1317560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "ContainsChild", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.AddAncestors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Transform*, ::UnityEngine::Transform*, ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>)>(&::RootMotion::Hierarchy::AddAncestors)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x13171d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "AddAncestors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.GetAncestor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, int32_t)>(&::RootMotion::Hierarchy::GetAncestor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1318e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetAncestor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.GetFirstCommonAncestor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(
    &::RootMotion::Hierarchy::GetFirstCommonAncestor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1317080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetFirstCommonAncestor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.GetFirstCommonAncestor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(
    &::RootMotion::Hierarchy::GetFirstCommonAncestor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1318f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetFirstCommonAncestor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.GetFirstCommonAncestorRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(
    ::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(&::RootMotion::Hierarchy::GetFirstCommonAncestorRecursive)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x13192e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetFirstCommonAncestorRecursive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy.IsCommonAncestor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Transform*, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>)>(
    &::RootMotion::Hierarchy::IsCommonAncestor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x13190dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "IsCommonAncestor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Hierarchy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Hierarchy::*)()>(&::RootMotion::Hierarchy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x131946c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool RootMotion::Hierarchy::HierarchyIsValid(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "HierarchyIsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bones);
}
inline ::UnityW<::UnityEngine::Object> RootMotion::Hierarchy::ContainsDuplicate(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> objects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "ContainsDuplicate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(nullptr, ___internal_method, objects);
}
inline bool RootMotion::Hierarchy::IsAncestor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* ancestor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "IsAncestor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, ancestor);
}
inline bool RootMotion::Hierarchy::ContainsChild(::UnityEngine::Transform* transform, ::UnityEngine::Transform* child) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "ContainsChild", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, child);
}
inline void RootMotion::Hierarchy::AddAncestors(::UnityEngine::Transform* transform, ::UnityEngine::Transform* blocker,
                                                ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "AddAncestors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, transform, blocker, array);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::Hierarchy::GetAncestor(::UnityEngine::Transform* transform, int32_t minChildCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetAncestor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, transform, minChildCount);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::Hierarchy::GetFirstCommonAncestor(::UnityEngine::Transform* t1, ::UnityEngine::Transform* t2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetFirstCommonAncestor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, t1, t2);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::Hierarchy::GetFirstCommonAncestor(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetFirstCommonAncestor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, transforms);
}
inline ::UnityW<::UnityEngine::Transform> RootMotion::Hierarchy::GetFirstCommonAncestorRecursive(::UnityEngine::Transform* transform,
                                                                                                 ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "GetFirstCommonAncestorRecursive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, transform, transforms);
}
inline bool RootMotion::Hierarchy::IsCommonAncestor(::UnityEngine::Transform* transform, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> transforms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), "IsCommonAncestor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, transforms);
}
inline ::RootMotion::Hierarchy* RootMotion::Hierarchy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::Hierarchy*>());
}
inline void RootMotion::Hierarchy::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Hierarchy*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::Hierarchy::Hierarchy() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
