#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphObjectPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphObjectPool)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool_SharedObjectPoolBase;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename T> class RenderGraphObjectPool_SharedObjectPool_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename T> class SharedObjectPool_1_RenderGraphObjectPool___c;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool_SharedObjectPoolBase;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename T> class RenderGraphObjectPool_SharedObjectPool_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename T> class SharedObjectPool_1_RenderGraphObjectPool___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c);
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase
class CORDL_TYPE RenderGraphObjectPool_SharedObjectPoolBase : public ::System::Object {
public:
  // Declarations
  /// @brief Method Clear, addr 0x65c2498, size 0x4, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase* New_ctor();

  /// @brief Method .ctor, addr 0x65c2494, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphObjectPool_SharedObjectPoolBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool_SharedObjectPoolBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphObjectPool_SharedObjectPoolBase(RenderGraphObjectPool_SharedObjectPoolBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool_SharedObjectPoolBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphObjectPool_SharedObjectPoolBase(RenderGraphObjectPool_SharedObjectPoolBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12394 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1/<>c<T>
class CORDL_TYPE SharedObjectPool_1_RenderGraphObjectPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_1<T>* __9__1_0;

  static inline ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>* New_ctor();

  /// @brief Method <AllocatePool>b__1_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T _AllocatePool_b__1_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>* getStaticF___9();

  static inline ::System::Func_1<T>* getStaticF___9__1_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>* value);

  static inline void setStaticF___9__1_0(::System::Func_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedObjectPool_1_RenderGraphObjectPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SharedObjectPool_1_RenderGraphObjectPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedObjectPool_1_RenderGraphObjectPool___c(SharedObjectPool_1_RenderGraphObjectPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedObjectPool_1_RenderGraphObjectPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedObjectPool_1_RenderGraphObjectPool___c(SharedObjectPool_1_RenderGraphObjectPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12395 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphObjectPool::SharedObjectPoolBase
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<T>
class CORDL_TYPE RenderGraphObjectPool_SharedObjectPool_1 : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c<T>;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::Pool::ObjectPool_1<T>* s_Pool;

  /// @brief Method AllocatePool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pool::ObjectPool_1<T>* AllocatePool();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T Get();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Release(T toRelease);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Pool::ObjectPool_1<T>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphObjectPool_SharedObjectPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool_SharedObjectPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphObjectPool_SharedObjectPool_1(RenderGraphObjectPool_SharedObjectPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool_SharedObjectPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphObjectPool_SharedObjectPool_1(RenderGraphObjectPool_SharedObjectPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12396 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphObjectPool
class CORDL_TYPE RenderGraphObjectPool : public ::System::Object {
public:
  // Declarations
  using SharedObjectPoolBase = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase;

  template <typename T> using SharedObjectPool_1 = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1<T>;

  /// @brief Field m_AllocatedArrays, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllocatedArrays, put = __cordl_internal_set_m_AllocatedArrays)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* m_AllocatedArrays;

  /// @brief Field m_AllocatedMaterialPropertyBlocks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AllocatedMaterialPropertyBlocks,
                      put = __cordl_internal_set_m_AllocatedMaterialPropertyBlocks)) ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* m_AllocatedMaterialPropertyBlocks;

  /// @brief Field m_ArrayPool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArrayPool,
                      put = __cordl_internal_set_m_ArrayPool)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>,
                                                                                                            ::System::Collections::Generic::Stack_1<::System::Object*>*>* m_ArrayPool;

  /// @brief Field s_AllocatedPools, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_AllocatedPools,
      put = setStaticF_s_AllocatedPools)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>* s_AllocatedPools;

  /// @brief Method Cleanup, addr 0x65c2260, size 0x1a4, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Get();

  /// @brief Method GetTempArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> GetTempArray(int32_t size);

  /// @brief Method GetTempMaterialPropertyBlock, addr 0x65c1e68, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialPropertyBlock* GetTempMaterialPropertyBlock();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Release(T value);

  /// @brief Method ReleaseAllTempAlloc, addr 0x65c1f64, size 0x2fc, virtual false, abstract: false, final false
  inline void ReleaseAllTempAlloc();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* const& __cordl_internal_get_m_AllocatedArrays() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>*& __cordl_internal_get_m_AllocatedArrays();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const& __cordl_internal_get_m_AllocatedMaterialPropertyBlocks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& __cordl_internal_get_m_AllocatedMaterialPropertyBlocks();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* const&
  __cordl_internal_get_m_ArrayPool() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>*&
  __cordl_internal_get_m_ArrayPool();

  constexpr void __cordl_internal_set_m_AllocatedArrays(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* value);

  constexpr void __cordl_internal_set_m_AllocatedMaterialPropertyBlocks(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value);

  constexpr void
  __cordl_internal_set_m_ArrayPool(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* value);

  /// @brief Method .ctor, addr 0x65c1d40, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>* getStaticF_s_AllocatedPools();

  static inline void setStaticF_s_AllocatedPools(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphObjectPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphObjectPool(RenderGraphObjectPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphObjectPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphObjectPool(RenderGraphObjectPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12397 };

  /// @brief Field m_ArrayPool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, int32_t>, ::System::Collections::Generic::Stack_1<::System::Object*>*>* ___m_ArrayPool;

  /// @brief Field m_AllocatedArrays, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Object*, ::System::ValueTuple_2<::System::Type*, int32_t>>>* ___m_AllocatedArrays;

  /// @brief Field m_AllocatedMaterialPropertyBlocks, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* ___m_AllocatedMaterialPropertyBlocks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool, ___m_ArrayPool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool, ___m_AllocatedArrays) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool, ___m_AllocatedMaterialPropertyBlocks) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphObjectPool");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPoolBase*, "UnityEngine.Rendering.RenderGraphModule",
                       "RenderGraphObjectPool/SharedObjectPoolBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool_SharedObjectPool_1, "UnityEngine.Rendering.RenderGraphModule",
                                     "RenderGraphObjectPool/SharedObjectPool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::SharedObjectPool_1_RenderGraphObjectPool___c, "UnityEngine.Rendering.RenderGraphModule",
                                     "RenderGraphObjectPool/SharedObjectPool`1/<>c");
