#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeStreamableAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeStreamableAsset)
namespace Unity::IO::LowLevel::Unsafe {
struct FileHandle;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeStreamableAsset_StreamableCellDesc;
}
namespace UnityEngine::Rendering {
template <typename K, typename V> class SerializedDictionary_2;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeStreamableAsset;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeStreamableAsset_StreamableCellDesc;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeStreamableAsset);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeStreamableAsset/StreamableCellDesc
struct CORDL_TYPE ProbeVolumeStreamableAsset_StreamableCellDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeStreamableAsset_StreamableCellDesc();

  // Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolumeStreamableAsset_StreamableCellDesc(int32_t offset, int32_t elementCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12126 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field offset, offset: 0x0, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field elementCount, offset: 0x4, size: 0x4, def value: None
  int32_t elementCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc, elementCount) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.IO.LowLevel.Unsafe.FileHandle
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeStreamableAsset
class CORDL_TYPE ProbeVolumeStreamableAsset : public ::System::Object {
public:
  // Declarations
  using StreamableCellDesc = ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc;

  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::TextAsset> asset;

  __declspec(property(get = get_assetGUID)) ::StringW assetGUID;

  __declspec(property(get = get_elementSize)) int32_t elementSize;

  /// @brief Field m_Asset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Asset, put = __cordl_internal_set_m_Asset)) ::UnityW<::UnityEngine::TextAsset> m_Asset;

  /// @brief Field m_AssetFileHandle, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_m_AssetFileHandle, put = __cordl_internal_set_m_AssetFileHandle)) ::Unity::IO::LowLevel::Unsafe::FileHandle m_AssetFileHandle;

  /// @brief Field m_AssetGUID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetGUID, put = __cordl_internal_set_m_AssetGUID)) ::StringW m_AssetGUID;

  /// @brief Field m_ElementSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ElementSize, put = __cordl_internal_set_m_ElementSize)) int32_t m_ElementSize;

  /// @brief Field m_FinalAssetPath, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinalAssetPath, put = __cordl_internal_set_m_FinalAssetPath)) ::StringW m_FinalAssetPath;

  /// @brief Field m_StreamableAssetPath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StreamableAssetPath, put = __cordl_internal_set_m_StreamableAssetPath)) ::StringW m_StreamableAssetPath;

  /// @brief Field m_StreamableCellDescs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StreamableCellDescs, put = __cordl_internal_set_m_StreamableCellDescs)) ::UnityEngine::Rendering::SerializedDictionary_2<
      int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* m_StreamableCellDescs;

  __declspec(property(
      get = get_streamableCellDescs)) ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* streamableCellDescs;

  /// @brief Method CloseFile, addr 0x657a5ac, size 0xa4, virtual false, abstract: false, final false
  inline void CloseFile();

  /// @brief Method Dispose, addr 0x6574b04, size 0x94, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FileExists, addr 0x65736b0, size 0xf0, virtual false, abstract: false, final false
  inline bool FileExists();

  /// @brief Method GetAssetPath, addr 0x657a440, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW GetAssetPath();

  /// @brief Method GetFileSize, addr 0x657a46c, size 0x90, virtual false, abstract: false, final false
  inline int64_t GetFileSize();

  /// @brief Method IsOpen, addr 0x657a4fc, size 0x3c, virtual false, abstract: false, final false
  inline bool IsOpen();

  /// @brief Method IsValid, addr 0x6573834, size 0x20, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Rendering::ProbeVolumeStreamableAsset*
  New_ctor(::StringW apvStreamingAssetsPath, ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* cellDescs,
           int32_t elementSize, ::StringW bakingSetGUID, ::StringW assetGUID);

  /// @brief Method OpenFile, addr 0x657a538, size 0x74, virtual false, abstract: false, final false
  inline ::Unity::IO::LowLevel::Unsafe::FileHandle OpenFile();

  /// @brief Method RefreshAssetPath, addr 0x657a39c, size 0xa4, virtual false, abstract: false, final false
  inline void RefreshAssetPath();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_Asset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_Asset();

  constexpr ::Unity::IO::LowLevel::Unsafe::FileHandle const& __cordl_internal_get_m_AssetFileHandle() const;

  constexpr ::Unity::IO::LowLevel::Unsafe::FileHandle& __cordl_internal_get_m_AssetFileHandle();

  constexpr ::StringW const& __cordl_internal_get_m_AssetGUID() const;

  constexpr ::StringW& __cordl_internal_get_m_AssetGUID();

  constexpr int32_t const& __cordl_internal_get_m_ElementSize() const;

  constexpr int32_t& __cordl_internal_get_m_ElementSize();

  constexpr ::StringW const& __cordl_internal_get_m_FinalAssetPath() const;

  constexpr ::StringW& __cordl_internal_get_m_FinalAssetPath();

  constexpr ::StringW const& __cordl_internal_get_m_StreamableAssetPath() const;

  constexpr ::StringW& __cordl_internal_get_m_StreamableAssetPath();

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* const&
  __cordl_internal_get_m_StreamableCellDescs() const;

  constexpr ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>*& __cordl_internal_get_m_StreamableCellDescs();

  constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_AssetFileHandle(::Unity::IO::LowLevel::Unsafe::FileHandle value);

  constexpr void __cordl_internal_set_m_AssetGUID(::StringW value);

  constexpr void __cordl_internal_set_m_ElementSize(int32_t value);

  constexpr void __cordl_internal_set_m_FinalAssetPath(::StringW value);

  constexpr void __cordl_internal_set_m_StreamableAssetPath(::StringW value);

  constexpr void __cordl_internal_set_m_StreamableCellDescs(::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* value);

  /// @brief Method .ctor, addr 0x657a250, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::StringW apvStreamingAssetsPath, ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* cellDescs,
                    int32_t elementSize, ::StringW bakingSetGUID, ::StringW assetGUID);

  /// @brief Method get_asset, addr 0x657a238, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_asset();

  /// @brief Method get_assetGUID, addr 0x657a230, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_assetGUID();

  /// @brief Method get_elementSize, addr 0x657a240, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_elementSize();

  /// @brief Method get_streamableCellDescs, addr 0x657a248, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* get_streamableCellDescs();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeStreamableAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeStreamableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeStreamableAsset(ProbeVolumeStreamableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeStreamableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeStreamableAsset(ProbeVolumeStreamableAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12127 };

  /// @brief Field m_AssetGUID, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_AssetGUID;

  /// @brief Field m_StreamableAssetPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_StreamableAssetPath;

  /// @brief Field m_ElementSize, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ElementSize;

  /// @brief Field m_StreamableCellDescs, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::SerializedDictionary_2<int32_t, ::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc>* ___m_StreamableCellDescs;

  /// @brief Field m_Asset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_Asset;

  /// @brief Field m_FinalAssetPath, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_FinalAssetPath;

  /// @brief Field m_AssetFileHandle, offset: 0x40, size: 0x10, def value: None
  ::Unity::IO::LowLevel::Unsafe::FileHandle ___m_AssetFileHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset, ___m_AssetGUID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset, ___m_StreamableAssetPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset, ___m_ElementSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset, ___m_StreamableCellDescs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset, ___m_Asset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset, ___m_FinalAssetPath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeStreamableAsset, ___m_AssetFileHandle) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeStreamableAsset, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeStreamableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeStreamableAsset*, "UnityEngine.Rendering", "ProbeVolumeStreamableAsset");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeStreamableAsset_StreamableCellDesc, "UnityEngine.Rendering", "ProbeVolumeStreamableAsset/StreamableCellDesc");
