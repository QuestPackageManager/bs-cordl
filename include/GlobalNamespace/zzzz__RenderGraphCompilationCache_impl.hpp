#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderGraphCompilationCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RenderGraphCompilationCache_def.hpp"
#include "GlobalNamespace/zzzz__RenderGraphCompilationCache_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
// Ctor Parameters [CppParam { name: "hash", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastFrameUsed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "compiledGraph", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>::RenderGraphCompilationCache_HashEntry_1(int32_t hash, int32_t lastFrameUsed, T compiledGraph) noexcept {
  this->hash = hash;
  this->lastFrameUsed = lastFrameUsed;
  this->compiledGraph = compiledGraph;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>::RenderGraphCompilationCache_HashEntry_1() {}
template <typename T> inline void GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::setStaticF___9(::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>::get>(
      std::forward<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>(value));
}
template <typename T> inline ::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>* GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>::get>();
}
template <typename T>
inline void GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::setStaticF___9__11_0(::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>*, "<>9__11_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>::get>(
      std::forward<::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>*>(value));
}
template <typename T> inline ::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::getStaticF___9__11_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>*, "<>9__11_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>::get>();
}
template <typename T> inline void GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::_GetCompilationCache_b__11_0(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>::get(), "<GetCompilationCache>b__11_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline ::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>* GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>::RenderGraphCompilationCache___c__11_1() {}
//  Writing Method size for method: ::GlobalNamespace::RenderGraphCompilationCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderGraphCompilationCache::*)()>(&::GlobalNamespace::RenderGraphCompilationCache::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x658c2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderGraphCompilationCache.GetCompilationCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RenderGraphCompilationCache::*)(
    int32_t, int32_t, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>)>(&::GlobalNamespace::RenderGraphCompilationCache::GetCompilationCache)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x658c528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "GetCompilationCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderGraphCompilationCache.GetCompilationCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RenderGraphCompilationCache::*)(int32_t, int32_t, ::ByRef<Il2CppObject*>)>(
    &::GlobalNamespace::RenderGraphCompilationCache::GetCompilationCache)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x658c5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "GetCompilationCache", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<Il2CppObject*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RenderGraphCompilationCache.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RenderGraphCompilationCache::*)()>(&::GlobalNamespace::RenderGraphCompilationCache::Clear)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x658c698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "Clear",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*&
GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_HashEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashEntries;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* const&
GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_HashEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HashEntries;
}
constexpr void GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_set_m_HashEntries(
    ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HashEntries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>*&
GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_NativeHashEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeHashEntries;
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* const&
GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_NativeHashEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeHashEntries;
}
constexpr void GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_set_m_NativeHashEntries(
    ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NativeHashEntries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>*&
GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_CompiledGraphPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompiledGraphPool;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>* const&
GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_CompiledGraphPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompiledGraphPool;
}
constexpr void GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_set_m_CompiledGraphPool(
    ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompiledGraphPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<Il2CppObject*>*& GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_NativeCompiledGraphPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeCompiledGraphPool;
}
constexpr ::System::Collections::Generic::Stack_1<Il2CppObject*>* const& GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_get_m_NativeCompiledGraphPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeCompiledGraphPool;
}
constexpr void GlobalNamespace::RenderGraphCompilationCache::__cordl_internal_set_m_NativeCompiledGraphPool(::System::Collections::Generic::Stack_1<Il2CppObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NativeCompiledGraphPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RenderGraphCompilationCache::setStaticF_s_EntryComparer(
    ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*,
      "s_EntryComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get>(
      std::forward<
          ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*>(
          value));
}
inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*
GlobalNamespace::RenderGraphCompilationCache::getStaticF_s_EntryComparer() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*,
      "s_EntryComparer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get>();
}
inline void GlobalNamespace::RenderGraphCompilationCache::setStaticF_s_NativeEntryComparer(
    ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>*, "s_NativeEntryComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get>(
      std::forward<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>*>(value));
}
inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>*
GlobalNamespace::RenderGraphCompilationCache::getStaticF_s_NativeEntryComparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>*, "s_NativeEntryComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get>();
}
inline void GlobalNamespace::RenderGraphCompilationCache::setStaticF_s_Hash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_Hash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RenderGraphCompilationCache::getStaticF_s_Hash() {
  return ::cordl_internals::getStaticField<int32_t, "s_Hash", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get>();
}
template <typename T>
inline int32_t GlobalNamespace::RenderGraphCompilationCache::HashEntryComparer(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T> a,
                                                                               ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T> b) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "HashEntryComparer",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::RenderGraphCompilationCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline bool GlobalNamespace::RenderGraphCompilationCache::GetCompilationCache(
    int32_t hash, int32_t frameIndex, ::ByRef<T> outGraph, ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* hashEntries,
    ::System::Collections::Generic::Stack_1<T>* pool, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "GetCompilationCache",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<T>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hash, frameIndex, outGraph, hashEntries, pool, comparer);
}
inline bool GlobalNamespace::RenderGraphCompilationCache::GetCompilationCache(int32_t hash, int32_t frameIndex,
                                                                              ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*> outGraph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "GetCompilationCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hash, frameIndex, outGraph);
}
inline bool GlobalNamespace::RenderGraphCompilationCache::GetCompilationCache(int32_t hash, int32_t frameIndex, ::ByRef<Il2CppObject*> outGraph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "GetCompilationCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<Il2CppObject*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hash, frameIndex, outGraph);
}
inline void GlobalNamespace::RenderGraphCompilationCache::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RenderGraphCompilationCache*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RenderGraphCompilationCache* GlobalNamespace::RenderGraphCompilationCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RenderGraphCompilationCache*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderGraphCompilationCache::RenderGraphCompilationCache() {}
