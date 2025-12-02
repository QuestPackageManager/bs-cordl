#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphResourcePool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphResourcePool_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedList_2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename Type> struct RenderGraphResourcePool_1_ResourceLogInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename Type> class RenderGraphResourcePool_1___c;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename Type> class RenderGraphResourcePool_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename Type> class RenderGraphResourcePool_1___c;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename Type> struct RenderGraphResourcePool_1_ResourceLogInfo;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c);
MARK_GEN_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename Type>
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<Type>
struct CORDL_TYPE RenderGraphResourcePool_1_ResourceLogInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourcePool_1_ResourceLogInfo();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr RenderGraphResourcePool_1_ResourceLogInfo(::StringW name, int64_t size) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12415 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field size, offset: 0x8, size: 0x8, def value: None
  int64_t size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename Type>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourcePool`1/<>c<Type>
class CORDL_TYPE RenderGraphResourcePool_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0,
                      put = setStaticF___9__15_0)) ::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>* __9__15_0;

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>* New_ctor();

  /// @brief Method <LogResources>b__15_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t _LogResources_b__15_0(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type> a,
                                       ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type> b);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>* getStaticF___9__15_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>* value);

  static inline void setStaticF___9__15_0(::System::Comparison_1<::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourcePool_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourcePool_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourcePool_1___c(RenderGraphResourcePool_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourcePool_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourcePool_1___c(RenderGraphResourcePool_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies UnityEngine.Rendering.RenderGraphModule.IRenderGraphResourcePool
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename Type>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphResourcePool`1<Type>
class CORDL_TYPE RenderGraphResourcePool_1 : public ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphResourcePool {
public:
  // Declarations
  using ResourceLogInfo = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo<Type>;

  using __c = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c<Type>;

  /// @brief Field m_FrameAllocatedResources, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameAllocatedResources,
                      put = __cordl_internal_set_m_FrameAllocatedResources)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* m_FrameAllocatedResources;

  /// @brief Field m_ResourcePool, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourcePool, put = __cordl_internal_set_m_ResourcePool)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* m_ResourcePool;

  /// @brief Field s_ToRemoveList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ToRemoveList, put = setStaticF_s_ToRemoveList)) ::System::Collections::Generic::List_1<int32_t>* s_ToRemoveList;

  /// @brief Method CheckFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CheckFrameAllocation(bool onException, int32_t frameIndex);

  /// @brief Method Cleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method GetResourceName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetResourceName(::ByRef<Type> res);

  /// @brief Method GetResourceSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t GetResourceSize(::ByRef<Type> res);

  /// @brief Method GetResourceTypeName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetResourceTypeName();

  /// @brief Method GetSortIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetSortIndex(Type res);

  /// @brief Method LogResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<Type>* New_ctor();

  /// @brief Method PurgeUnusedResources, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PurgeUnusedResources(int32_t currentFrameIndex);

  /// @brief Method RegisterFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RegisterFrameAllocation(int32_t hash, Type value);

  /// @brief Method ReleaseInternalResource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseInternalResource(Type res);

  /// @brief Method ReleaseResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReleaseResource(int32_t hash, Type resource, int32_t currentFrameIndex);

  /// @brief Method TryGetResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetResource(int32_t hashCode, ::ByRef<Type> resource);

  /// @brief Method UnregisterFrameAllocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UnregisterFrameAllocation(int32_t hash, Type value);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* const& __cordl_internal_get_m_FrameAllocatedResources() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>*& __cordl_internal_get_m_FrameAllocatedResources();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* const&
  __cordl_internal_get_m_ResourcePool() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>*&
  __cordl_internal_get_m_ResourcePool();

  constexpr void __cordl_internal_set_m_FrameAllocatedResources(::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* value);

  constexpr void
  __cordl_internal_set_m_ResourcePool(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_ToRemoveList();

  static inline void setStaticF_s_ToRemoveList(::System::Collections::Generic::List_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourcePool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourcePool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourcePool_1(RenderGraphResourcePool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourcePool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourcePool_1(RenderGraphResourcePool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12417 };

  /// @brief Field kStaleResourceLifetime offset 0xffffffff size 0x4
  static constexpr int32_t kStaleResourceLifetime{ static_cast<int32_t>(0xa) };

  /// @brief Field m_ResourcePool, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::SortedList_2<int32_t, ::System::ValueTuple_2<Type, int32_t>>*>* ___m_ResourcePool;

  /// @brief Field m_FrameAllocatedResources, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<int32_t, Type>>* ___m_FrameAllocatedResources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphResourcePool`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1___c, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphResourcePool`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1_ResourceLogInfo, "UnityEngine.Rendering.RenderGraphModule",
                                      "RenderGraphResourcePool`1/ResourceLogInfo");
