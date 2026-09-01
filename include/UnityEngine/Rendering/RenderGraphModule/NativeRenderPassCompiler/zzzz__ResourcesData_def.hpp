#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\NativeRenderPassCompiler\ResourcesData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__Name_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceReaderData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceUnversionedData_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/zzzz__ResourceVersionedData_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResourcesData)
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct ResourceVersionedData;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
class ResourcesData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData*, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "ResourcesData");
// Dependencies System.Object, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.DynamicArray`1<T>, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.Name,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceReaderData, UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceUnversionedData,
// UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourceVersionedData
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourcesData
class CORDL_TYPE ResourcesData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData Item[];

  /// @brief Field MaxReaders, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxReaders, put = __cordl_internal_set_MaxReaders)) int32_t MaxReaders;

  /// @brief Field MaxVersions, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxVersions, put = __cordl_internal_set_MaxVersions)) int32_t MaxVersions;

  /// @brief Field readerData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_readerData,
                      put = __cordl_internal_set_readerData)) ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>>
      readerData;

  /// @brief Field resourceNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceNames,
                      put = __cordl_internal_set_resourceNames)) ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*>
      resourceNames;

  /// @brief Field unversionedData, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_unversionedData,
      put = __cordl_internal_set_unversionedData)) ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>>
      unversionedData;

  /// @brief Field versionedData, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_versionedData,
      put = __cordl_internal_set_versionedData)) ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>>
      versionedData;

  /// @brief Method Clear, addr 0x67fd72c, size 0x170, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x67fe0b0, size 0x104, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Index, addr 0x67fdfc8, size 0x70, virtual false, abstract: false, final false
  inline int32_t Index(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h);

  /// @brief Method IndexReader, addr 0x67fe038, size 0x78, virtual false, abstract: false, final false
  inline int32_t IndexReader(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h, int32_t readerID);

  /// @brief Method Initialize, addr 0x67fd89c, size 0x72c, virtual false, abstract: false, final false
  inline void Initialize(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_MaxReaders() const;

  constexpr int32_t& __cordl_internal_get_MaxReaders();

  constexpr int32_t const& __cordl_internal_get_MaxVersions() const;

  constexpr int32_t& __cordl_internal_get_MaxVersions();

  constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>> const& __cordl_internal_get_readerData() const;

  constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>>& __cordl_internal_get_readerData();

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*> const& __cordl_internal_get_resourceNames() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*>& __cordl_internal_get_resourceNames();

  constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>> const&
  __cordl_internal_get_unversionedData() const;

  constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>>& __cordl_internal_get_unversionedData();

  constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>> const&
  __cordl_internal_get_versionedData() const;

  constexpr ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>>& __cordl_internal_get_versionedData();

  constexpr void __cordl_internal_set_MaxReaders(int32_t value);

  constexpr void __cordl_internal_set_MaxVersions(int32_t value);

  constexpr void __cordl_internal_set_readerData(::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>> value);

  constexpr void __cordl_internal_set_resourceNames(::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*> value);

  constexpr void
  __cordl_internal_set_unversionedData(::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>> value);

  constexpr void __cordl_internal_set_versionedData(::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>> value);

  /// @brief Method .ctor, addr 0x67fd468, size 0x2c4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x67fbb74, size 0x150, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData> get_Item(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourcesData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourcesData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourcesData(ResourcesData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourcesData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourcesData(ResourcesData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12503 };

  /// @brief Field unversionedData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceUnversionedData>> ___unversionedData;

  /// @brief Field versionedData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceVersionedData>> ___versionedData;

  /// @brief Field readerData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourceReaderData>> ___readerData;

  /// @brief Field MaxVersions, offset: 0x28, size: 0x4, def value: None
  int32_t ___MaxVersions;

  /// @brief Field MaxReaders, offset: 0x2c, size: 0x4, def value: None
  int32_t ___MaxReaders;

  /// @brief Field resourceNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::Name>*> ___resourceNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData, ___unversionedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData, ___versionedData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData, ___readerData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData, ___MaxVersions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData, ___MaxReaders) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData, ___resourceNames) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::ResourcesData) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
