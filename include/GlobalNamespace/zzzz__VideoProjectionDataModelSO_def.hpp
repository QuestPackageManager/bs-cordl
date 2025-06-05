#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoProjectionDataModelSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VideoProjectionDataModelSO)
namespace GlobalNamespace {
class VideoProjectionDataModelSO_VideoClipWithId;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionDataModelSO;
}
namespace GlobalNamespace {
class VideoProjectionDataModelSO_VideoClipWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionDataModelSO);
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VideoProjectionDataModelSO/VideoClipWithId
class CORDL_TYPE VideoProjectionDataModelSO_VideoClipWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) int32_t _id;

  /// @brief Field _videoAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__videoAssetReference, put = __cordl_internal_set__videoAssetReference)) ::UnityEngine::AddressableAssets::AssetReference* _videoAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_videoAssetReference)) ::UnityEngine::AddressableAssets::AssetReference* videoAssetReference;

  static inline ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId* New_ctor();

  constexpr int32_t const& __cordl_internal_get__id() const;

  constexpr int32_t& __cordl_internal_get__id();

  constexpr ::UnityEngine::AddressableAssets::AssetReference* const& __cordl_internal_get__videoAssetReference() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __cordl_internal_get__videoAssetReference();

  constexpr void __cordl_internal_set__id(int32_t value);

  constexpr void __cordl_internal_set__videoAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method .ctor, addr 0x3b9afd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x3b9afc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_videoAssetReference, addr 0x3b9afc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_videoAssetReference();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoProjectionDataModelSO_VideoClipWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO_VideoClipWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoProjectionDataModelSO_VideoClipWithId(VideoProjectionDataModelSO_VideoClipWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO_VideoClipWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoProjectionDataModelSO_VideoClipWithId(VideoProjectionDataModelSO_VideoClipWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4347 };

  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _videoAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____videoAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId, ____videoAssetReference) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: VideoProjectionDataModelSO
class CORDL_TYPE VideoProjectionDataModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using VideoClipWithId = ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId;

  /// @brief Field _videoClipsWithId, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__videoClipsWithId,
      put = __cordl_internal_set__videoClipsWithId)) ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*>
      _videoClipsWithId;

  __declspec(property(get = get_videoClipWithIds)) ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*>
      videoClipWithIds;

  static inline ::GlobalNamespace::VideoProjectionDataModelSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*> const&
  __cordl_internal_get__videoClipsWithId() const;

  constexpr ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*>&
  __cordl_internal_get__videoClipsWithId();

  constexpr void
  __cordl_internal_set__videoClipsWithId(::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*> value);

  /// @brief Method .ctor, addr 0x3b9afb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_videoClipWithIds, addr 0x3b9afb0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*> get_videoClipWithIds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoProjectionDataModelSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoProjectionDataModelSO(VideoProjectionDataModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoProjectionDataModelSO(VideoProjectionDataModelSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4348 };

  /// @brief Field _videoClipsWithId, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*> ____videoClipsWithId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VideoProjectionDataModelSO, ____videoClipsWithId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionDataModelSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionDataModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionDataModelSO*, "", "VideoProjectionDataModelSO");
NEED_NO_BOX(::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, "", "VideoProjectionDataModelSO/VideoClipWithId");
