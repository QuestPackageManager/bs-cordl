#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\VolumeCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeCollection_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::VolumeCollection::*)()>(&::UnityEngine::Rendering::VolumeCollection::get_count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67ca400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeCollection::Register)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x67ca450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                                                           { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::Rendering::Volume*, int32_t)>(
    &::UnityEngine::Rendering::VolumeCollection::Unregister)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x67ca8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                                                           { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.ChangeLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::Rendering::Volume*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::VolumeCollection::ChangeLayer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x67cab3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                             { "ChangeLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.SortByPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*)>(
    &::UnityEngine::Rendering::VolumeCollection::SortByPriority)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x67cac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                             { "SortByPriority", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.GrabVolumes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* (
    ::UnityEngine::Rendering::VolumeCollection::*)(::UnityEngine::LayerMask)>(&::UnityEngine::Rendering::VolumeCollection::GrabVolumes)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x67cad70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { "GrabVolumes", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection.SetLayerIndexDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeCollection::*)(int32_t)>(&::UnityEngine::Rendering::VolumeCollection::SetLayerIndexDirty)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x67ca780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { "SetLayerIndexDirty", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeCollection::*)()>(&::UnityEngine::Rendering::VolumeCollection::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x67cb040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { ".ctor", {}, {} })));
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
  this->___m_SortedVolumes = value;
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
  this->___m_Volumes = value;
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
  this->___m_SortNeeded = value;
}
inline int32_t UnityEngine::Rendering::VolumeCollection::get_count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::VolumeCollection::Register(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                                                         { "Register", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, volume, layer);
}
inline bool UnityEngine::Rendering::VolumeCollection::Unregister(::UnityEngine::Rendering::Volume* volume, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                                                         { "Unregister", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, volume, layer);
}
inline bool UnityEngine::Rendering::VolumeCollection::ChangeLayer(::UnityEngine::Rendering::Volume* volume, int32_t previousLayerIndex, int32_t currentLayerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                           { "ChangeLayer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Volume*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, volume, previousLayerIndex, currentLayerIndex);
}
inline void UnityEngine::Rendering::VolumeCollection::SortByPriority(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* volumes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(),
                                                           { "SortByPriority", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, volumes);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* UnityEngine::Rendering::VolumeCollection::GrabVolumes(::UnityEngine::LayerMask mask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { "GrabVolumes", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(this, ___internal_method, mask);
}
inline void UnityEngine::Rendering::VolumeCollection::SetLayerIndexDirty(int32_t layerIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { "SetLayerIndexDirty", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex);
}
template <typename T> inline bool UnityEngine::Rendering::VolumeCollection::IsComponentActiveInMask(::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { "IsComponentActiveInMask", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerMask);
}
inline void UnityEngine::Rendering::VolumeCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeCollection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::VolumeCollection* UnityEngine::Rendering::VolumeCollection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeCollection::VolumeCollection() {}
