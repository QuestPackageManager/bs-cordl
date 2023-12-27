#pragma once
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeStyleUpdater_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeStyleUpdaterTraversal_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdater.get_profilerMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::ProfilerMarker (::UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdater::get_profilerMarker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2dc0f3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdater.OnVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdater::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::VisualTreeStyleUpdater::OnVersionChanged)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2dc0f94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdater::Update)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2dc10dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdater.ApplyStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdater::ApplyStyles)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2dc13e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                                               "ApplyStyles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualTreeStyleUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::VisualTreeStyleUpdater::*)()>(
    &::UnityEngine::UIElements::VisualTreeStyleUpdater::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2dc184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_ApplyStyleUpdateList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ApplyStyleUpdateList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_ApplyStyleUpdateList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ApplyStyleUpdateList;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_ApplyStyleUpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ApplyStyleUpdateList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_TransitionPropertyUpdateList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TransitionPropertyUpdateList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*> const&
UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_TransitionPropertyUpdateList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TransitionPropertyUpdateList;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_TransitionPropertyUpdateList(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TransitionPropertyUpdateList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_IsApplyingStyles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IsApplyingStyles;
}
constexpr bool const& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_IsApplyingStyles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_IsApplyingStyles;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_IsApplyingStyles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_IsApplyingStyles = value;
}
constexpr uint32_t& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
constexpr uint32_t const& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_Version(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Version = value;
}
constexpr uint32_t& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_LastVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastVersion;
}
constexpr uint32_t const& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_LastVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_LastVersion;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_LastVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_LastVersion = value;
}
constexpr ::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*& UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_StyleContextHierarchyTraversal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleContextHierarchyTraversal;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal*> const&
UnityEngine::UIElements::VisualTreeStyleUpdater::__get_m_StyleContextHierarchyTraversal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_StyleContextHierarchyTraversal;
}
constexpr void UnityEngine::UIElements::VisualTreeStyleUpdater::__set_m_StyleContextHierarchyTraversal(::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StyleContextHierarchyTraversal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdater::setStaticF_s_Description(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::VisualTreeStyleUpdater::getStaticF_s_Description() {
  return ::cordl_internals::getStaticField<::StringW, "s_Description", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get>();
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdater::setStaticF_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeStyleUpdater::getStaticF_s_ProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProfilerMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get>();
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::VisualTreeStyleUpdater::get_profilerMarker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                                             "get_profilerMarker", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdater::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(), "OnVersionChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VersionChangeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, versionChangeType);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdater::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                                             "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdater::ApplyStyles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(),
                                                                             "ApplyStyles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualTreeStyleUpdater* UnityEngine::UIElements::VisualTreeStyleUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::VisualTreeStyleUpdater*>());
}
inline void UnityEngine::UIElements::VisualTreeStyleUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::VisualTreeStyleUpdater*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualTreeStyleUpdater::VisualTreeStyleUpdater() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
