#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.get_count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::VolumeCollection::*)()>(&::UnityEngine::Rendering::VolumeCollection::get_count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6613298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "get_count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeCollection::Register)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x66132e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.Unregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeCollection::Unregister)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6613790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.ChangeLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::Rendering::Volume*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::VolumeCollection::ChangeLayer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x66139d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "ChangeLayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.SortByPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*)>(
    &::UnityEngine::Rendering::VolumeCollection::SortByPriority)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6613ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "SortByPriority", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.GrabVolumes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* (
    ::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::VolumeCollection::GrabVolumes)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6613c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "GrabVolumes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.SetLayerIndexDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeCollection::*)(int32_t)>(
    &::UnityEngine::Rendering::VolumeCollection::SetLayerIndexDirty)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6613618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "SetLayerIndexDirty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeCollection::*)()>(&::UnityEngine::Rendering::VolumeCollection::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6613ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>*&
UnityEngine::Rendering::VolumeCollection::__cordl_internal_get_m_SortedVolumes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedVolumes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* const&
UnityEngine::Rendering::VolumeCollection::__cordl_internal_get_m_SortedVolumes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortedVolumes;
}
constexpr void UnityEngine::Rendering::VolumeCollection::__cordl_internal_set_m_SortedVolumes(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortedVolumes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*& UnityEngine::Rendering::VolumeCollection::__cordl_internal_get_m_Volumes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Volumes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* const& UnityEngine::Rendering::VolumeCollection::__cordl_internal_get_m_Volumes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Volumes;
}
constexpr void UnityEngine::Rendering::VolumeCollection::__cordl_internal_set_m_Volumes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Volumes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, bool>*& UnityEngine::Rendering::VolumeCollection::__cordl_internal_get_m_SortNeeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortNeeded;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, bool>* const& UnityEngine::Rendering::VolumeCollection::__cordl_internal_get_m_SortNeeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortNeeded;
}
constexpr void UnityEngine::Rendering::VolumeCollection::__cordl_internal_set_m_SortNeeded(::System::Collections::Generic::Dictionary_2<int32_t, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SortNeeded)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t UnityEngine::Rendering::VolumeCollection::get_count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "get_count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeCollection::Register(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, volume, layer);
}
inline bool UnityEngine::Rendering::VolumeCollection::Unregister(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, volume, layer);
}
inline bool UnityEngine::Rendering::VolumeCollection::ChangeLayer(::UnityEngine::Rendering::Volume* volume, int32_t previousLayerIndex, int32_t currentLayerIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "ChangeLayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Volume*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, volume, previousLayerIndex, currentLayerIndex);
}
inline void UnityEngine::Rendering::VolumeCollection::SortByPriority(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* volumes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "SortByPriority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, volumes);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* UnityEngine::Rendering::VolumeCollection::GrabVolumes(::UnityEngine::LayerMask mask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "GrabVolumes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*, false>(this, ___internal_method, mask);
}
inline void UnityEngine::Rendering::VolumeCollection::SetLayerIndexDirty(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "SetLayerIndexDirty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layerIndex);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeCollection::IsComponentActiveInMask(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), "IsComponentActiveInMask",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, layerMask);
}
inline void UnityEngine::Rendering::VolumeCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeCollection*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeCollection* UnityEngine::Rendering::VolumeCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::VolumeCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeCollection::VolumeCollection() {}
