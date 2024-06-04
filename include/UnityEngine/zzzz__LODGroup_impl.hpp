#pragma once
// IWYU pragma private; include "UnityEngine/LODGroup.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__LODGroup_def.hpp"
#include "UnityEngine/zzzz__LOD_def.hpp"
//  Writing Method size for method: ::UnityEngine::LODGroup.get_size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::LODGroup::*)()>(&::UnityEngine::LODGroup::get_size)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x341a1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "get_size",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LODGroup.get_lodCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::LODGroup::*)()>(&::UnityEngine::LODGroup::get_lodCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x341a1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "get_lodCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LODGroup.RecalculateBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LODGroup::*)()>(&::UnityEngine::LODGroup::RecalculateBounds)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x341a234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "RecalculateBounds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LODGroup.GetLODs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*> (::UnityEngine::LODGroup::*)()>(
    &::UnityEngine::LODGroup::GetLODs)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x341a270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "GetLODs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LODGroup.SetLODs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::LODGroup::*)(::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*>)>(
    &::UnityEngine::LODGroup::SetLODs)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x341a2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "SetLODs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*>>::get() })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::LODGroup::get_size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "get_size",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::LODGroup::get_lodCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "get_lodCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::LODGroup::RecalculateBounds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "RecalculateBounds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*> UnityEngine::LODGroup::GetLODs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "GetLODs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*>, false>(this, ___internal_method);
}
inline void UnityEngine::LODGroup::SetLODs(::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*> lods) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LODGroup*>::get(), "SetLODs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lods);
}
// Ctor Parameters []
constexpr ::UnityEngine::LODGroup::LODGroup() {}
