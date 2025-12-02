#pragma once
// IWYU pragma private; include "TMPro/TMP_UpdateManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "TMPro/zzzz__TMP_UpdateManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_UpdateManager* (*)()>(&::TMPro::TMP_UpdateManager::get_instance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x678a3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "get_instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)()>(&::TMPro::TMP_UpdateManager::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x678a484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.RegisterTextObjectForUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_UpdateManager::RegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x678a634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextObjectForUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.InternalRegisterTextObjectForUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)(::TMPro::TMP_Text*)>(
    &::TMPro::TMP_UpdateManager::InternalRegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x678a698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextObjectForUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.RegisterTextElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_UpdateManager::RegisterTextElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x678a7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextElementForLayoutRebuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.InternalRegisterTextElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)(::TMPro::TMP_Text*)>(
    &::TMPro::TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x678a830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextElementForLayoutRebuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.RegisterTextElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_UpdateManager::RegisterTextElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x678a964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextElementForGraphicRebuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.InternalRegisterTextElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)(::TMPro::TMP_Text*)>(
    &::TMPro::TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x678a9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextElementForGraphicRebuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.RegisterTextElementForCullingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_UpdateManager::RegisterTextElementForCullingUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x678aafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextElementForCullingUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.InternalRegisterTextElementForCullingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)(::TMPro::TMP_Text*)>(
    &::TMPro::TMP_UpdateManager::InternalRegisterTextElementForCullingUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x678ab60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextElementForCullingUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.OnCameraPreCull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)()>(&::TMPro::TMP_UpdateManager::OnCameraPreCull)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x678ac94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "OnCameraPreCull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.DoRebuilds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)()>(&::TMPro::TMP_UpdateManager::DoRebuilds)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x678ac98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "DoRebuilds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.UnRegisterTextObjectForUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_UpdateManager::UnRegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x678af00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "UnRegisterTextObjectForUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.UnRegisterTextElementForRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::TMPro::TMP_UpdateManager::UnRegisterTextElementForRebuild)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x678b00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "UnRegisterTextElementForRebuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.InternalUnRegisterTextElementForGraphicRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)(::TMPro::TMP_Text*)>(
    &::TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x678b090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalUnRegisterTextElementForGraphicRebuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.InternalUnRegisterTextElementForLayoutRebuild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)(::TMPro::TMP_Text*)>(
    &::TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x678b138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalUnRegisterTextElementForLayoutRebuild",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_UpdateManager.InternalUnRegisterTextObjectForUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_UpdateManager::*)(::TMPro::TMP_Text*)>(
    &::TMPro::TMP_UpdateManager::InternalUnRegisterTextObjectForUpdate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x678af64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalUnRegisterTextObjectForUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_LayoutQueueLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutQueueLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_LayoutQueueLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutQueueLookup;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_LayoutQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LayoutQueueLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_LayoutRebuildQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRebuildQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_LayoutRebuildQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LayoutRebuildQueue;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_LayoutRebuildQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LayoutRebuildQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_GraphicQueueLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicQueueLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_GraphicQueueLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicQueueLookup;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_GraphicQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GraphicQueueLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_GraphicRebuildQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicRebuildQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_GraphicRebuildQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GraphicRebuildQueue;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_GraphicRebuildQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GraphicRebuildQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_InternalUpdateLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalUpdateLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_InternalUpdateLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalUpdateLookup;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_InternalUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalUpdateLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_InternalUpdateQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalUpdateQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_InternalUpdateQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalUpdateQueue;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_InternalUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InternalUpdateQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_CullingUpdateLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingUpdateLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_CullingUpdateLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingUpdateLookup;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_CullingUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CullingUpdateLookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& TMPro::TMP_UpdateManager::__cordl_internal_get_m_CullingUpdateQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingUpdateQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& TMPro::TMP_UpdateManager::__cordl_internal_get_m_CullingUpdateQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingUpdateQueue;
}
constexpr void TMPro::TMP_UpdateManager::__cordl_internal_set_m_CullingUpdateQueue(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CullingUpdateQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_UpdateManager::setStaticF_s_Instance(::TMPro::TMP_UpdateManager* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_UpdateManager*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>(
      std::forward<::TMPro::TMP_UpdateManager*>(value));
}
inline ::TMPro::TMP_UpdateManager* TMPro::TMP_UpdateManager::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_UpdateManager*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>();
}
inline void TMPro::TMP_UpdateManager::setStaticF_k_RegisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_RegisterTextObjectForUpdateMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::getStaticF_k_RegisterTextObjectForUpdateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_RegisterTextObjectForUpdateMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>();
}
inline void TMPro::TMP_UpdateManager::setStaticF_k_RegisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForGraphicRebuildMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::getStaticF_k_RegisterTextElementForGraphicRebuildMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForGraphicRebuildMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>();
}
inline void TMPro::TMP_UpdateManager::setStaticF_k_RegisterTextElementForCullingUpdateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForCullingUpdateMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::getStaticF_k_RegisterTextElementForCullingUpdateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_RegisterTextElementForCullingUpdateMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>();
}
inline void TMPro::TMP_UpdateManager::setStaticF_k_UnregisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UnregisterTextObjectForUpdateMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::getStaticF_k_UnregisterTextObjectForUpdateMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UnregisterTextObjectForUpdateMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>();
}
inline void TMPro::TMP_UpdateManager::setStaticF_k_UnregisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_UnregisterTextElementForGraphicRebuildMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker TMPro::TMP_UpdateManager::getStaticF_k_UnregisterTextElementForGraphicRebuildMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_UnregisterTextElementForGraphicRebuildMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get>();
}
inline ::TMPro::TMP_UpdateManager* TMPro::TMP_UpdateManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_UpdateManager*, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_UpdateManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_UpdateManager::RegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextObjectForUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, textObject);
}
inline void TMPro::TMP_UpdateManager::InternalRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextObjectForUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textObject);
}
inline void TMPro::TMP_UpdateManager::RegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextElementForLayoutRebuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::InternalRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextElementForLayoutRebuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::RegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextElementForGraphicRebuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::InternalRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextElementForGraphicRebuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::RegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "RegisterTextElementForCullingUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::InternalRegisterTextElementForCullingUpdate(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalRegisterTextElementForCullingUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::OnCameraPreCull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "OnCameraPreCull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_UpdateManager::DoRebuilds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "DoRebuilds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void TMPro::TMP_UpdateManager::UnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "UnRegisterTextObjectForUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, textObject);
}
inline void TMPro::TMP_UpdateManager::UnRegisterTextElementForRebuild(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "UnRegisterTextElementForRebuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalUnRegisterTextElementForGraphicRebuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::InternalUnRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalUnRegisterTextElementForLayoutRebuild",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void TMPro::TMP_UpdateManager::InternalUnRegisterTextObjectForUpdate(::TMPro::TMP_Text* textObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_UpdateManager*>::get(), "InternalUnRegisterTextObjectForUpdate",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textObject);
}
inline ::TMPro::TMP_UpdateManager* TMPro::TMP_UpdateManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_UpdateManager*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_UpdateManager::TMP_UpdateManager() {}
