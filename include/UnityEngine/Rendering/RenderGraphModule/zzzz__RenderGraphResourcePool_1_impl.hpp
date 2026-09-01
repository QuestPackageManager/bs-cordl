#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RenderGraphResourcePool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
template <typename Type>
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>::RenderGraphResourcePool_1_ResourceLogInfo(::StringW name, int64_t size) noexcept {
  this->name = name;
  this->size = size;
}
// Ctor Parameters []
template <typename Type> constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>::RenderGraphResourcePool_1_ResourceLogInfo() {}
template <typename Type>
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*, "<>9",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>(value));
}
template <typename Type>
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*, "<>9",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>();
}
template <typename Type>
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::setStaticF___9__15_0(
    ::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>*, "<>9__15_0",
                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>(
      std::forward<::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>*>(value));
}
template <typename Type>
inline ::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>*
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>*, "<>9__15_0",
                                           ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>();
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type>
inline int32_t
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::_LogResources_b__15_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type> a,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>(),
                                                           { "<LogResources>b__15_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
template <typename Type>
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>*>());
}
// Ctor Parameters []
template <typename Type> constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>::RenderGraphResourcePool_1___c() {}
template <typename Type>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_ResourcePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourcePool;
}
template <typename Type>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_ResourcePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourcePool;
}
template <typename Type>
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_set_m_ResourcePool(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResourcePool = value;
}
template <typename Type>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>*&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_FrameAllocatedResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameAllocatedResources;
}
template <typename Type>
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_get_m_FrameAllocatedResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameAllocatedResources;
}
template <typename Type>
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::__cordl_internal_set_m_FrameAllocatedResources(
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameAllocatedResources = value;
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::setStaticF_s_ToRemoveList(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_ToRemoveList", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
template <typename Type> inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::getStaticF_s_ToRemoveList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_ToRemoveList", ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>();
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ReleaseInternalResource(Type res) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
template <typename Type> inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetResourceName(::by_ref<Type> res) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, res);
}
template <typename Type> inline int64_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetResourceSize(::by_ref<Type> res) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, res);
}
template <typename Type> inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetResourceTypeName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename Type> inline int32_t UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::GetSortIndex(Type res) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, res);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::ReleaseResource(int32_t hash, Type resource, int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(),
                                                                                         { "ReleaseResource", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<Type>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, resource, currentFrameIndex);
}
template <typename Type> inline bool UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::TryGetResource(int32_t hashCode, ::by_ref<Type> resource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(),
                                                                                         { "TryGetResource", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<Type>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hashCode, resource);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::Cleanup() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::RegisterFrameAllocation(int32_t hash, Type value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(),
                                                                                         { "RegisterFrameAllocation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<Type>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, value);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::UnregisterFrameAllocation(int32_t hash, Type value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(),
                                                                                         { "UnregisterFrameAllocation", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<Type>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, value);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::CheckFrameAllocation(bool onException, int32_t frameIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onException, frameIndex);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::LogResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::PurgeUnusedResources(int32_t currentFrameIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentFrameIndex);
}
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename Type> inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>* UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>*>());
}
// Ctor Parameters []
template <typename Type> constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>::RenderGraphResourcePool_1() {}
