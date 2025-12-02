#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceDataStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceDataStore_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceDataStore.SetWorldSpaceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::WorldSpaceData)>(
    &::UnityEngine::UIElements::WorldSpaceDataStore::SetWorldSpaceData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a9d060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::WorldSpaceDataStore*>::get(), "SetWorldSpaceData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WorldSpaceData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceDataStore.GetWorldSpaceData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::WorldSpaceData (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::WorldSpaceDataStore::GetWorldSpaceData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a9d128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::WorldSpaceDataStore*>::get(), "GetWorldSpaceData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::WorldSpaceDataStore::setStaticF_m_WorldSpaceData(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>*, "m_WorldSpaceData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::WorldSpaceDataStore*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>* UnityEngine::UIElements::WorldSpaceDataStore::getStaticF_m_WorldSpaceData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>*, "m_WorldSpaceData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::WorldSpaceDataStore*>::get>();
}
inline void UnityEngine::UIElements::WorldSpaceDataStore::SetWorldSpaceData(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::WorldSpaceData data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::WorldSpaceDataStore*>::get(), "SetWorldSpaceData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WorldSpaceData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, data);
}
inline ::UnityEngine::UIElements::WorldSpaceData UnityEngine::UIElements::WorldSpaceDataStore::GetWorldSpaceData(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::WorldSpaceDataStore*>::get(), "GetWorldSpaceData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WorldSpaceData, false>(nullptr, ___internal_method, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldSpaceDataStore::WorldSpaceDataStore() {}
