#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureAccess_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct DepthAccess;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphPassType;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphPass_RandomWriteResourceInfo;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureAccess;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
struct HashFNV1A32;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphPass_RandomWriteResourceInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass);
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo);
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphPass/RandomWriteResourceInfo
struct CORDL_TYPE RenderGraphPass_RandomWriteResourceInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphPass_RandomWriteResourceInfo();

  // Ctor Parameters [CppParam { name: "h", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }, CppParam { name: "preserveCounterValue", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr RenderGraphPass_RandomWriteResourceInfo(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h, bool preserveCounterValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12402 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field h, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle h;

  /// @brief Field preserveCounterValue, offset: 0xc, size: 0x1, def value: None
  bool preserveCounterValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, h) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, preserveCounterValue) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RenderGraphPassType, UnityEngine.Rendering.RenderGraphModule.TextureAccess
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphPass
class CORDL_TYPE RenderGraphPass : public ::System::Object {
public:
  // Declarations
  using RandomWriteResourceInfo = ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo;

  /// @brief Field <allowGlobalState>k__BackingField, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__allowGlobalState_k__BackingField, put = __cordl_internal_set__allowGlobalState_k__BackingField)) bool _allowGlobalState_k__BackingField;

  /// @brief Field <allowPassCulling>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__allowPassCulling_k__BackingField, put = __cordl_internal_set__allowPassCulling_k__BackingField)) bool _allowPassCulling_k__BackingField;

  /// @brief Field <allowRendererListCulling>k__BackingField, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get__allowRendererListCulling_k__BackingField,
                      put = __cordl_internal_set__allowRendererListCulling_k__BackingField)) bool _allowRendererListCulling_k__BackingField;

  /// @brief Field <colorBufferAccess>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBufferAccess_k__BackingField,
                      put = __cordl_internal_set__colorBufferAccess_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess,
                                                                                               ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>
      _colorBufferAccess_k__BackingField;

  /// @brief Field <colorBufferMaxIndex>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__colorBufferMaxIndex_k__BackingField, put = __cordl_internal_set__colorBufferMaxIndex_k__BackingField)) int32_t _colorBufferMaxIndex_k__BackingField;

  /// @brief Field <customSampler>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__customSampler_k__BackingField,
                      put = __cordl_internal_set__customSampler_k__BackingField)) ::UnityEngine::Rendering::ProfilingSampler* _customSampler_k__BackingField;

  /// @brief Field <depthAccess>k__BackingField, offset 0x2c, size 0x1c
  __declspec(property(get = __cordl_internal_get__depthAccess_k__BackingField,
                      put = __cordl_internal_set__depthAccess_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::TextureAccess _depthAccess_k__BackingField;

  /// @brief Field <enableAsyncCompute>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__enableAsyncCompute_k__BackingField, put = __cordl_internal_set__enableAsyncCompute_k__BackingField)) bool _enableAsyncCompute_k__BackingField;

  /// @brief Field <enableFoveatedRasterization>k__BackingField, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get__enableFoveatedRasterization_k__BackingField,
                      put = __cordl_internal_set__enableFoveatedRasterization_k__BackingField)) bool _enableFoveatedRasterization_k__BackingField;

  /// @brief Field <fragmentInputAccess>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__fragmentInputAccess_k__BackingField,
                      put = __cordl_internal_set__fragmentInputAccess_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess,
                                                                                                 ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>
      _fragmentInputAccess_k__BackingField;

  /// @brief Field <fragmentInputMaxIndex>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__fragmentInputMaxIndex_k__BackingField,
                      put = __cordl_internal_set__fragmentInputMaxIndex_k__BackingField)) int32_t _fragmentInputMaxIndex_k__BackingField;

  /// @brief Field <generateDebugData>k__BackingField, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__generateDebugData_k__BackingField, put = __cordl_internal_set__generateDebugData_k__BackingField)) bool _generateDebugData_k__BackingField;

  /// @brief Field <index>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index_k__BackingField, put = __cordl_internal_set__index_k__BackingField)) int32_t _index_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField)) ::StringW _name_k__BackingField;

  /// @brief Field <randomAccessResourceMaxIndex>k__BackingField, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__randomAccessResourceMaxIndex_k__BackingField,
                      put = __cordl_internal_set__randomAccessResourceMaxIndex_k__BackingField)) int32_t _randomAccessResourceMaxIndex_k__BackingField;

  /// @brief Field <randomAccessResource>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__randomAccessResource_k__BackingField,
                      put = __cordl_internal_set__randomAccessResource_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                                                                                                  ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
      _randomAccessResource_k__BackingField;

  /// @brief Field <type>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__type_k__BackingField,
                      put = __cordl_internal_set__type_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType _type_k__BackingField;

  __declspec(property(get = get_allowGlobalState, put = set_allowGlobalState)) bool allowGlobalState;

  __declspec(property(get = get_allowPassCulling, put = set_allowPassCulling)) bool allowPassCulling;

  __declspec(property(get = get_allowRendererListCulling, put = set_allowRendererListCulling)) bool allowRendererListCulling;

  __declspec(property(get = get_colorBufferAccess,
                      put = set_colorBufferAccess)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>
      colorBufferAccess;

  __declspec(property(get = get_colorBufferMaxIndex, put = set_colorBufferMaxIndex)) int32_t colorBufferMaxIndex;

  __declspec(property(get = get_customSampler, put = set_customSampler)) ::UnityEngine::Rendering::ProfilingSampler* customSampler;

  __declspec(property(get = get_depthAccess, put = set_depthAccess)) ::UnityEngine::Rendering::RenderGraphModule::TextureAccess depthAccess;

  __declspec(property(get = get_enableAsyncCompute, put = set_enableAsyncCompute)) bool enableAsyncCompute;

  __declspec(property(get = get_enableFoveatedRasterization, put = set_enableFoveatedRasterization)) bool enableFoveatedRasterization;

  __declspec(property(get = get_fragmentInputAccess,
                      put = set_fragmentInputAccess)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>
      fragmentInputAccess;

  __declspec(property(get = get_fragmentInputMaxIndex, put = set_fragmentInputMaxIndex)) int32_t fragmentInputMaxIndex;

  __declspec(property(get = get_generateDebugData, put = set_generateDebugData)) bool generateDebugData;

  /// @brief Field implicitReadsList, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_implicitReadsList,
                      put = __cordl_internal_set_implicitReadsList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* implicitReadsList;

  __declspec(property(get = get_index, put = set_index)) int32_t index;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_randomAccessResource, put = set_randomAccessResource)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                                                                                                ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
      randomAccessResource;

  __declspec(property(get = get_randomAccessResourceMaxIndex, put = set_randomAccessResourceMaxIndex)) int32_t randomAccessResourceMaxIndex;

  /// @brief Field resourceReadLists, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceReadLists,
                      put = __cordl_internal_set_resourceReadLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                              ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
      resourceReadLists;

  /// @brief Field resourceWriteLists, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceWriteLists,
                      put = __cordl_internal_set_resourceWriteLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                               ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
      resourceWriteLists;

  /// @brief Field setGlobalsList, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get_setGlobalsList,
      put = __cordl_internal_set_setGlobalsList)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>* setGlobalsList;

  /// @brief Field transientResourceList, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_transientResourceList,
                      put = __cordl_internal_set_transientResourceList)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                                  ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
      transientResourceList;

  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType type;

  /// @brief Field useAllGlobalTextures, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_useAllGlobalTextures, put = __cordl_internal_set_useAllGlobalTextures)) bool useAllGlobalTextures;

  /// @brief Field usedRendererListList, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_usedRendererListList,
                      put = __cordl_internal_set_usedRendererListList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* usedRendererListList;

  /// @brief Method AddResourceRead, addr 0x662b0f8, size 0x150, virtual false, abstract: false, final false
  inline void AddResourceRead(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method AddResourceWrite, addr 0x662afa8, size 0x150, virtual false, abstract: false, final false
  inline void AddResourceWrite(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method AddTransientResource, addr 0x662b248, size 0x150, virtual false, abstract: false, final false
  inline void AddTransientResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method AllowGlobalState, addr 0x662b47c, size 0x8, virtual false, abstract: false, final false
  inline void AllowGlobalState(bool value);

  /// @brief Method AllowPassCulling, addr 0x662b464, size 0x8, virtual false, abstract: false, final false
  inline void AllowPassCulling(bool value);

  /// @brief Method AllowRendererListCulling, addr 0x662b474, size 0x8, virtual false, abstract: false, final false
  inline void AllowRendererListCulling(bool value);

  /// @brief Method Clear, addr 0x662a464, size 0x1a0, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeHash, addr 0x662c404, size 0x95c, virtual false, abstract: false, final false
  inline void ComputeHash(::ByRef<::UnityEngine::Rendering::HashFNV1A32> generator, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  /// @brief Method ComputeHashForTextureAccess, addr 0x662cd60, size 0xac, virtual false, abstract: false, final false
  static inline void ComputeHashForTextureAccess(::ByRef<::UnityEngine::Rendering::HashFNV1A32> generator, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                 ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureAccess> textureAccess);

  /// @brief Method ComputeTextureHash, addr 0x662bf0c, size 0x4f8, virtual false, abstract: false, final false
  inline void ComputeTextureHash(::ByRef<::UnityEngine::Rendering::HashFNV1A32> generator, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                 ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources);

  /// @brief Method EnableAsyncCompute, addr 0x662b45c, size 0x8, virtual false, abstract: false, final false
  inline void EnableAsyncCompute(bool value);

  /// @brief Method EnableFoveatedRasterization, addr 0x662b46c, size 0x8, virtual false, abstract: false, final false
  inline void EnableFoveatedRasterization(bool value);

  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* renderGraphContext);

  /// @brief Method GenerateDebugData, addr 0x662b484, size 0x8, virtual false, abstract: false, final false
  inline void GenerateDebugData(bool value);

  /// @brief Method GetRenderFuncHash, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetRenderFuncHash();

  /// @brief Method HasRenderAttachments, addr 0x662a604, size 0x1fc, virtual false, abstract: false, final false
  inline bool HasRenderAttachments();

  /// @brief Method HasRenderFunc, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasRenderFunc();

  /// @brief Method IsAttachment, addr 0x662ad08, size 0x2a0, virtual false, abstract: false, final false
  inline bool IsAttachment(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> res);

  /// @brief Method IsRead, addr 0x662aa98, size 0x270, virtual false, abstract: false, final false
  inline bool IsRead(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsTransient, addr 0x662a800, size 0xf0, virtual false, abstract: false, final false
  inline bool IsTransient(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsWritten, addr 0x662a8f0, size 0x1a8, virtual false, abstract: false, final false
  inline bool IsWritten(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* New_ctor();

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool);

  /// @brief Method SetColorBuffer, addr 0x662b48c, size 0xac, virtual false, abstract: false, final false
  inline void SetColorBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index);

  /// @brief Method SetColorBufferRaw, addr 0x662b538, size 0x298, virtual false, abstract: false, final false
  inline void SetColorBufferRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags,
                                int32_t mipLevel, int32_t depthSlice);

  /// @brief Method SetDepthBuffer, addr 0x662bcc4, size 0x60, virtual false, abstract: false, final false
  inline void SetDepthBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, ::UnityEngine::Rendering::RenderGraphModule::DepthAccess flags);

  /// @brief Method SetDepthBufferRaw, addr 0x662bd34, size 0x1d8, virtual false, abstract: false, final false
  inline void SetDepthBufferRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags, int32_t mipLevel,
                                int32_t depthSlice);

  /// @brief Method SetFragmentInputRaw, addr 0x662b7d0, size 0x298, virtual false, abstract: false, final false
  inline void SetFragmentInputRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> resource, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags,
                                  int32_t mipLevel, int32_t depthSlice);

  /// @brief Method SetRandomWriteResourceRaw, addr 0x662ba68, size 0x25c, virtual false, abstract: false, final false
  inline void SetRandomWriteResourceRaw(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> resource, int32_t index, bool preserveCounterValue,
                                        ::UnityEngine::Rendering::RenderGraphModule::AccessFlags accessFlags);

  /// @brief Method UseRendererList, addr 0x662b398, size 0xc4, virtual false, abstract: false, final false
  inline void UseRendererList(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rendererList);

  constexpr bool const& __cordl_internal_get__allowGlobalState_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allowGlobalState_k__BackingField();

  constexpr bool const& __cordl_internal_get__allowPassCulling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allowPassCulling_k__BackingField();

  constexpr bool const& __cordl_internal_get__allowRendererListCulling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allowRendererListCulling_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> const&
  __cordl_internal_get__colorBufferAccess_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>&
  __cordl_internal_get__colorBufferAccess_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__colorBufferMaxIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__colorBufferMaxIndex_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get__customSampler_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get__customSampler_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess const& __cordl_internal_get__depthAccess_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureAccess& __cordl_internal_get__depthAccess_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableAsyncCompute_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableAsyncCompute_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableFoveatedRasterization_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableFoveatedRasterization_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> const&
  __cordl_internal_get__fragmentInputAccess_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*>&
  __cordl_internal_get__fragmentInputAccess_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__fragmentInputMaxIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__fragmentInputMaxIndex_k__BackingField();

  constexpr bool const& __cordl_internal_get__generateDebugData_k__BackingField() const;

  constexpr bool& __cordl_internal_get__generateDebugData_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__index_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__index_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__randomAccessResourceMaxIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__randomAccessResourceMaxIndex_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                     ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*> const&
  __cordl_internal_get__randomAccessResource_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo,
                     ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>&
  __cordl_internal_get__randomAccessResource_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType const& __cordl_internal_get__type_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType& __cordl_internal_get__type_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* const& __cordl_internal_get_implicitReadsList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*& __cordl_internal_get_implicitReadsList();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
  __cordl_internal_get_resourceReadLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>&
  __cordl_internal_get_resourceReadLists();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
  __cordl_internal_get_resourceWriteLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>&
  __cordl_internal_get_resourceWriteLists();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>* const& __cordl_internal_get_setGlobalsList() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>*& __cordl_internal_get_setGlobalsList();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
  __cordl_internal_get_transientResourceList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>&
  __cordl_internal_get_transientResourceList();

  constexpr bool const& __cordl_internal_get_useAllGlobalTextures() const;

  constexpr bool& __cordl_internal_get_useAllGlobalTextures();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const& __cordl_internal_get_usedRendererListList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*& __cordl_internal_get_usedRendererListList();

  constexpr void __cordl_internal_set__allowGlobalState_k__BackingField(bool value);

  constexpr void __cordl_internal_set__allowPassCulling_k__BackingField(bool value);

  constexpr void __cordl_internal_set__allowRendererListCulling_k__BackingField(bool value);

  constexpr void __cordl_internal_set__colorBufferAccess_k__BackingField(
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value);

  constexpr void __cordl_internal_set__colorBufferMaxIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__customSampler_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set__depthAccess_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureAccess value);

  constexpr void __cordl_internal_set__enableAsyncCompute_k__BackingField(bool value);

  constexpr void __cordl_internal_set__enableFoveatedRasterization_k__BackingField(bool value);

  constexpr void __cordl_internal_set__fragmentInputAccess_k__BackingField(
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value);

  constexpr void __cordl_internal_set__fragmentInputMaxIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__generateDebugData_k__BackingField(bool value);

  constexpr void __cordl_internal_set__index_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__randomAccessResourceMaxIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__randomAccessResource_k__BackingField(
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
          value);

  constexpr void __cordl_internal_set__type_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType value);

  constexpr void __cordl_internal_set_implicitReadsList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* value);

  constexpr void __cordl_internal_set_resourceReadLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                 ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
                                                            value);

  constexpr void __cordl_internal_set_resourceWriteLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                  ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
                                                             value);

  constexpr void __cordl_internal_set_setGlobalsList(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>* value);

  constexpr void __cordl_internal_set_transientResourceList(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
                                                                value);

  constexpr void __cordl_internal_set_useAllGlobalTextures(bool value);

  constexpr void __cordl_internal_set_usedRendererListList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value);

  /// @brief Method .ctor, addr 0x662a158, size 0x30c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowGlobalState, addr 0x662a088, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowGlobalState();

  /// @brief Method get_allowPassCulling, addr 0x662a078, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowPassCulling();

  /// @brief Method get_allowRendererListCulling, addr 0x662a148, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowRendererListCulling();

  /// @brief Method get_colorBufferAccess, addr 0x662a0d8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> get_colorBufferAccess();

  /// @brief Method get_colorBufferMaxIndex, addr 0x662a0e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_colorBufferMaxIndex();

  /// @brief Method get_customSampler, addr 0x662a058, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_customSampler();

  /// @brief Method get_depthAccess, addr 0x662a0a8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureAccess get_depthAccess();

  /// @brief Method get_enableAsyncCompute, addr 0x662a068, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableAsyncCompute();

  /// @brief Method get_enableFoveatedRasterization, addr 0x662a098, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableFoveatedRasterization();

  /// @brief Method get_fragmentInputAccess, addr 0x662a0f8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> get_fragmentInputAccess();

  /// @brief Method get_fragmentInputMaxIndex, addr 0x662a108, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fragmentInputMaxIndex();

  /// @brief Method get_generateDebugData, addr 0x662a138, size 0x8, virtual false, abstract: false, final false
  inline bool get_generateDebugData();

  /// @brief Method get_index, addr 0x662a038, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_name, addr 0x662a028, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_randomAccessResource, addr 0x662a118, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
  get_randomAccessResource();

  /// @brief Method get_randomAccessResourceMaxIndex, addr 0x662a128, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_randomAccessResourceMaxIndex();

  /// @brief Method get_type, addr 0x662a048, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType get_type();

  /// @brief Method set_allowGlobalState, addr 0x662a090, size 0x8, virtual false, abstract: false, final false
  inline void set_allowGlobalState(bool value);

  /// @brief Method set_allowPassCulling, addr 0x662a080, size 0x8, virtual false, abstract: false, final false
  inline void set_allowPassCulling(bool value);

  /// @brief Method set_allowRendererListCulling, addr 0x662a150, size 0x8, virtual false, abstract: false, final false
  inline void set_allowRendererListCulling(bool value);

  /// @brief Method set_colorBufferAccess, addr 0x662a0e0, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBufferAccess(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value);

  /// @brief Method set_colorBufferMaxIndex, addr 0x662a0f0, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBufferMaxIndex(int32_t value);

  /// @brief Method set_customSampler, addr 0x662a060, size 0x8, virtual false, abstract: false, final false
  inline void set_customSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_depthAccess, addr 0x662a0bc, size 0x1c, virtual false, abstract: false, final false
  inline void set_depthAccess(::UnityEngine::Rendering::RenderGraphModule::TextureAccess value);

  /// @brief Method set_enableAsyncCompute, addr 0x662a070, size 0x8, virtual false, abstract: false, final false
  inline void set_enableAsyncCompute(bool value);

  /// @brief Method set_enableFoveatedRasterization, addr 0x662a0a0, size 0x8, virtual false, abstract: false, final false
  inline void set_enableFoveatedRasterization(bool value);

  /// @brief Method set_fragmentInputAccess, addr 0x662a100, size 0x8, virtual false, abstract: false, final false
  inline void set_fragmentInputAccess(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> value);

  /// @brief Method set_fragmentInputMaxIndex, addr 0x662a110, size 0x8, virtual false, abstract: false, final false
  inline void set_fragmentInputMaxIndex(int32_t value);

  /// @brief Method set_generateDebugData, addr 0x662a140, size 0x8, virtual false, abstract: false, final false
  inline void set_generateDebugData(bool value);

  /// @brief Method set_index, addr 0x662a040, size 0x8, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  /// @brief Method set_name, addr 0x662a030, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_randomAccessResource, addr 0x662a120, size 0x8, virtual false, abstract: false, final false
  inline void set_randomAccessResource(
      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
          value);

  /// @brief Method set_randomAccessResourceMaxIndex, addr 0x662a130, size 0x8, virtual false, abstract: false, final false
  inline void set_randomAccessResourceMaxIndex(int32_t value);

  /// @brief Method set_type, addr 0x662a050, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphPass(RenderGraphPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphPass(RenderGraphPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12403 };

  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <index>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____index_k__BackingField;

  /// @brief Field <type>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType ____type_k__BackingField;

  /// @brief Field <customSampler>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ____customSampler_k__BackingField;

  /// @brief Field <enableAsyncCompute>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____enableAsyncCompute_k__BackingField;

  /// @brief Field <allowPassCulling>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____allowPassCulling_k__BackingField;

  /// @brief Field <allowGlobalState>k__BackingField, offset: 0x2a, size: 0x1, def value: None
  bool ____allowGlobalState_k__BackingField;

  /// @brief Field <enableFoveatedRasterization>k__BackingField, offset: 0x2b, size: 0x1, def value: None
  bool ____enableFoveatedRasterization_k__BackingField;

  /// @brief Field <depthAccess>k__BackingField, offset: 0x2c, size: 0x1c, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureAccess ____depthAccess_k__BackingField;

  /// @brief Field <colorBufferAccess>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> ____colorBufferAccess_k__BackingField;

  /// @brief Field <colorBufferMaxIndex>k__BackingField, offset: 0x50, size: 0x4, def value: None
  int32_t ____colorBufferMaxIndex_k__BackingField;

  /// @brief Field <fragmentInputAccess>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureAccess, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureAccess>*> ____fragmentInputAccess_k__BackingField;

  /// @brief Field <fragmentInputMaxIndex>k__BackingField, offset: 0x60, size: 0x4, def value: None
  int32_t ____fragmentInputMaxIndex_k__BackingField;

  /// @brief Field <randomAccessResource>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, ::Array<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo>*>
      ____randomAccessResource_k__BackingField;

  /// @brief Field <randomAccessResourceMaxIndex>k__BackingField, offset: 0x70, size: 0x4, def value: None
  int32_t ____randomAccessResourceMaxIndex_k__BackingField;

  /// @brief Field <generateDebugData>k__BackingField, offset: 0x74, size: 0x1, def value: None
  bool ____generateDebugData_k__BackingField;

  /// @brief Field <allowRendererListCulling>k__BackingField, offset: 0x75, size: 0x1, def value: None
  bool ____allowRendererListCulling_k__BackingField;

  /// @brief Field resourceReadLists, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
      ___resourceReadLists;

  /// @brief Field resourceWriteLists, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
      ___resourceWriteLists;

  /// @brief Field transientResourceList, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>*>*>
      ___transientResourceList;

  /// @brief Field usedRendererListList, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* ___usedRendererListList;

  /// @brief Field setGlobalsList, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t>>* ___setGlobalsList;

  /// @brief Field useAllGlobalTextures, offset: 0xa0, size: 0x1, def value: None
  bool ___useAllGlobalTextures;

  /// @brief Field implicitReadsList, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle>* ___implicitReadsList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____index_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____type_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____customSampler_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____enableAsyncCompute_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____allowPassCulling_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____allowGlobalState_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____enableFoveatedRasterization_k__BackingField) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____depthAccess_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____colorBufferAccess_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____colorBufferMaxIndex_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____fragmentInputAccess_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____fragmentInputMaxIndex_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____randomAccessResource_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____randomAccessResourceMaxIndex_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____generateDebugData_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ____allowRendererListCulling_k__BackingField) == 0x75, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ___resourceReadLists) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ___resourceWriteLists) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ___transientResourceList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ___usedRendererListList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ___setGlobalsList) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ___useAllGlobalTextures) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, ___implicitReadsList) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphPass");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_RandomWriteResourceInfo, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphPass/RandomWriteResourceInfo");
