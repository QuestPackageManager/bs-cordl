#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemapPool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfoPool_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageRenderInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.get_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::get_atlas)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2edbcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                               "get_atlas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)(::UnityEngine::UIElements::AtlasBase*)>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2edbcec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.get_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2edbea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                               "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.set_disposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)(bool)>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2edbeb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), "set_disposed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2edbebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)(bool)>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::Dispose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2edbf28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Commit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::VectorImageManager::*)()>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::Commit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2edc040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                               "Commit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.AddUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::GradientRemap* (
    ::UnityEngine::UIElements::UIR::VectorImageManager::*)(::UnityEngine::UIElements::VectorImage*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::AddUser)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2edc070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), "AddUser", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::VectorImageManager.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::VectorImageRenderInfo* (
    ::UnityEngine::UIElements::UIR::VectorImageManager::*)(::UnityEngine::UIElements::VectorImage*, ::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIR::VectorImageManager::Register)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2edc174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::VectorImageManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::VectorImageManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::AtlasBase*& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_Atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_Atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Atlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>, ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>*&
UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_Registered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Registered;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>, ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>*> const&
UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_Registered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Registered;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_set_m_Registered(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>, ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Registered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool*& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_RenderInfoPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderInfoPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool*> const&
UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_RenderInfoPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderInfoPool;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_set_m_RenderInfoPool(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderInfoPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::GradientRemapPool*& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_GradientRemapPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GradientRemapPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemapPool*> const&
UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_GradientRemapPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GradientRemapPool;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_set_m_GradientRemapPool(::UnityEngine::UIElements::UIR::GradientRemapPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GradientRemapPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_GradientSettingsAtlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GradientSettingsAtlas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*> const&
UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_GradientSettingsAtlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GradientSettingsAtlas;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_set_m_GradientSettingsAtlas(::UnityEngine::UIElements::UIR::GradientSettingsAtlas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GradientSettingsAtlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_LoggedExhaustedSettingsAtlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoggedExhaustedSettingsAtlas;
}
constexpr bool const& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get_m_LoggedExhaustedSettingsAtlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LoggedExhaustedSettingsAtlas;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_set_m_LoggedExhaustedSettingsAtlas(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LoggedExhaustedSettingsAtlas = value;
}
constexpr bool& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::VectorImageManager::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::setStaticF_instances(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>*, "instances",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>* UnityEngine::UIElements::UIR::VectorImageManager::getStaticF_instances() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>*, "instances",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get>();
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::setStaticF_s_MarkerRegister(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRegister",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::VectorImageManager::getStaticF_s_MarkerRegister() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerRegister",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get>();
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::setStaticF_s_MarkerUnregister(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUnregister",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::VectorImageManager::getStaticF_s_MarkerUnregister() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerUnregister",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get>();
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::UIElements::UIR::VectorImageManager::get_atlas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                             "get_atlas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::VectorImageManager* UnityEngine::UIElements::UIR::VectorImageManager::New_ctor(::UnityEngine::UIElements::AtlasBase* atlas) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::VectorImageManager*>(atlas));
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::_ctor(::UnityEngine::UIElements::AtlasBase* atlas) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AtlasBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atlas);
}
inline bool UnityEngine::UIElements::UIR::VectorImageManager::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::UIR::VectorImageManager::Commit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(),
                                                                             "Commit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::GradientRemap* UnityEngine::UIElements::UIR::VectorImageManager::AddUser(::UnityEngine::UIElements::VectorImage* vi,
                                                                                                                ::UnityEngine::UIElements::VisualElement* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), "AddUser", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::GradientRemap*, false>(this, ___internal_method, vi, context);
}
inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* UnityEngine::UIElements::UIR::VectorImageManager::Register(::UnityEngine::UIElements::VectorImage* vi,
                                                                                                                         ::UnityEngine::UIElements::VisualElement* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::VectorImageManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::VectorImageRenderInfo*, false>(this, ___internal_method, vi, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager::VectorImageManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
