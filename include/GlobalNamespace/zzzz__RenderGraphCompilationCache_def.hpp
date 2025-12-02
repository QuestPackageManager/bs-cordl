#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderGraphCompilationCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphCompilationCache)
namespace GlobalNamespace {
template <typename T> struct RenderGraphCompilationCache_HashEntry_1;
}
namespace GlobalNamespace {
template <typename T> class RenderGraphCompilationCache___c__11_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph_CompiledGraph;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1_SortComparer;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderGraphCompilationCache;
}
namespace GlobalNamespace {
template <typename T> class RenderGraphCompilationCache___c__11_1;
}
namespace GlobalNamespace {
template <typename T> struct RenderGraphCompilationCache_HashEntry_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RenderGraphCompilationCache);
MARK_GEN_REF_PTR_T(::GlobalNamespace::RenderGraphCompilationCache___c__11_1);
MARK_GEN_VAL_T(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1);
// Dependencies
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: true
// CS Name: RenderGraphCompilationCache/HashEntry`1<T>
struct CORDL_TYPE RenderGraphCompilationCache_HashEntry_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphCompilationCache_HashEntry_1();

  // Ctor Parameters [CppParam { name: "hash", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastFrameUsed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "compiledGraph", ty: "T", modifiers: "", def_value: None }]
  constexpr RenderGraphCompilationCache_HashEntry_1(int32_t hash, int32_t lastFrameUsed, T compiledGraph) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11815 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field hash, offset: 0x0, size: 0x4, def value: None
  int32_t hash;

  /// @brief Field lastFrameUsed, offset: 0x4, size: 0x4, def value: None
  int32_t lastFrameUsed;

  /// @brief Field compiledGraph, offset: 0x8, size: 0x8, def value: None
  T compiledGraph;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: RenderGraphCompilationCache/<>c__11`1<T>
class CORDL_TYPE RenderGraphCompilationCache___c__11_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* __9__11_0;

  static inline ::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>* New_ctor();

  /// @brief Method <GetCompilationCache>b__11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetCompilationCache_b__11_0(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>* getStaticF___9();

  static inline ::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* getStaticF___9__11_0();

  static inline void setStaticF___9(::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>* value);

  static inline void setStaticF___9__11_0(::System::Predicate_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphCompilationCache___c__11_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphCompilationCache___c__11_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphCompilationCache___c__11_1(RenderGraphCompilationCache___c__11_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphCompilationCache___c__11_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphCompilationCache___c__11_1(RenderGraphCompilationCache___c__11_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11816 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RenderGraphCompilationCache
class CORDL_TYPE RenderGraphCompilationCache : public ::System::Object {
public:
  // Declarations
  template <typename T> using HashEntry_1 = ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>;

  template <typename T> using __c__11_1 = ::GlobalNamespace::RenderGraphCompilationCache___c__11_1<T>;

  /// @brief Field m_CompiledGraphPool, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CompiledGraphPool,
      put = __cordl_internal_set_m_CompiledGraphPool)) ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>* m_CompiledGraphPool;

  /// @brief Field m_HashEntries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HashEntries, put = __cordl_internal_set_m_HashEntries)) ::UnityEngine::Rendering::DynamicArray_1<
      ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* m_HashEntries;

  /// @brief Field m_NativeCompiledGraphPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NativeCompiledGraphPool,
                      put = __cordl_internal_set_m_NativeCompiledGraphPool)) ::System::Collections::Generic::Stack_1<Il2CppObject*>* m_NativeCompiledGraphPool;

  /// @brief Field m_NativeHashEntries, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_NativeHashEntries,
      put = __cordl_internal_set_m_NativeHashEntries)) ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* m_NativeHashEntries;

  /// @brief Field s_EntryComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_EntryComparer, put = setStaticF_s_EntryComparer)) ::UnityEngine::Rendering::DynamicArray_1_SortComparer<
      ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* s_EntryComparer;

  /// @brief Field s_Hash, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_Hash, put = setStaticF_s_Hash)) int32_t s_Hash;

  /// @brief Field s_NativeEntryComparer, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_NativeEntryComparer,
      put = setStaticF_s_NativeEntryComparer)) ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* s_NativeEntryComparer;

  /// @brief Method Clear, addr 0x6524b0c, size 0x1a8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetCompilationCache, addr 0x652499c, size 0xb8, virtual false, abstract: false, final false
  inline bool GetCompilationCache(int32_t hash, int32_t frameIndex, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*> outGraph);

  /// @brief Method GetCompilationCache, addr 0x6524a54, size 0xb8, virtual false, abstract: false, final false
  inline bool GetCompilationCache(int32_t hash, int32_t frameIndex, ::ByRef<Il2CppObject*> outGraph);

  /// @brief Method GetCompilationCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline bool
  GetCompilationCache(int32_t hash, int32_t frameIndex, ::ByRef<T> outGraph, ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* hashEntries,
                      ::System::Collections::Generic::Stack_1<T>* pool, ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T>>* comparer);

  /// @brief Method HashEntryComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t HashEntryComparer(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T> a, ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<T> b);

  static inline ::GlobalNamespace::RenderGraphCompilationCache* New_ctor();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>* const& __cordl_internal_get_m_CompiledGraphPool() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>*& __cordl_internal_get_m_CompiledGraphPool();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* const&
  __cordl_internal_get_m_HashEntries() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*&
  __cordl_internal_get_m_HashEntries();

  constexpr ::System::Collections::Generic::Stack_1<Il2CppObject*>* const& __cordl_internal_get_m_NativeCompiledGraphPool() const;

  constexpr ::System::Collections::Generic::Stack_1<Il2CppObject*>*& __cordl_internal_get_m_NativeCompiledGraphPool();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* const& __cordl_internal_get_m_NativeHashEntries() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>*& __cordl_internal_get_m_NativeHashEntries();

  constexpr void __cordl_internal_set_m_CompiledGraphPool(::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>* value);

  constexpr void __cordl_internal_set_m_HashEntries(
      ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* value);

  constexpr void __cordl_internal_set_m_NativeCompiledGraphPool(::System::Collections::Generic::Stack_1<Il2CppObject*>* value);

  constexpr void __cordl_internal_set_m_NativeHashEntries(::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* value);

  /// @brief Method .ctor, addr 0x652476c, size 0x230, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<
      ::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*
  getStaticF_s_EntryComparer();

  static inline int32_t getStaticF_s_Hash();

  static inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* getStaticF_s_NativeEntryComparer();

  static inline void setStaticF_s_EntryComparer(
      ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>*
          value);

  static inline void setStaticF_s_Hash(int32_t value);

  static inline void setStaticF_s_NativeEntryComparer(::UnityEngine::Rendering::DynamicArray_1_SortComparer<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphCompilationCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphCompilationCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphCompilationCache(RenderGraphCompilationCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphCompilationCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphCompilationCache(RenderGraphCompilationCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11817 };

  /// @brief Field k_CachedGraphCount offset 0xffffffff size 0x4
  static constexpr int32_t k_CachedGraphCount{ static_cast<int32_t>(0x14) };

  /// @brief Field m_HashEntries, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>>* ___m_HashEntries;

  /// @brief Field m_NativeHashEntries, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1<Il2CppObject*>>* ___m_NativeHashEntries;

  /// @brief Field m_CompiledGraphPool, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraph_CompiledGraph*>* ___m_CompiledGraphPool;

  /// @brief Field m_NativeCompiledGraphPool, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<Il2CppObject*>* ___m_NativeCompiledGraphPool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderGraphCompilationCache, ___m_HashEntries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphCompilationCache, ___m_NativeHashEntries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphCompilationCache, ___m_CompiledGraphPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphCompilationCache, ___m_NativeCompiledGraphPool) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RenderGraphCompilationCache, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RenderGraphCompilationCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderGraphCompilationCache*, "", "RenderGraphCompilationCache");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RenderGraphCompilationCache___c__11_1, "", "RenderGraphCompilationCache/<>c__11`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::RenderGraphCompilationCache_HashEntry_1, "", "RenderGraphCompilationCache/HashEntry`1");
