#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VideoProjectionDataModelSO)
namespace GlobalNamespace {
class __VideoProjectionDataModelSO__VideoClipWithId;
}
namespace UnityEngine::AddressableAssets {
class AssetReference;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionDataModelSO;
}
namespace GlobalNamespace {
class __VideoProjectionDataModelSO__VideoClipWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionDataModelSO);
MARK_REF_PTR_T(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId);
// Type: ::VideoClipWithId
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4972))
// CS Name: ::VideoProjectionDataModelSO::VideoClipWithId*
class CORDL_TYPE __VideoProjectionDataModelSO__VideoClipWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x4
  __declspec(property(get = __get__id, put = __set__id)) int32_t _id;

  /// @brief Field _videoAssetReference, offset 0x18, size 0x8
  __declspec(property(get = __get__videoAssetReference, put = __set__videoAssetReference))::UnityEngine::AddressableAssets::AssetReference* _videoAssetReference;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_videoAssetReference))::UnityEngine::AddressableAssets::AssetReference* videoAssetReference;

  constexpr int32_t& __get__id();

  constexpr int32_t const& __get__id() const;

  constexpr void __set__id(int32_t value);

  constexpr ::UnityEngine::AddressableAssets::AssetReference*& __get__videoAssetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& __get__videoAssetReference() const;

  constexpr void __set__videoAssetReference(::UnityEngine::AddressableAssets::AssetReference* value);

  /// @brief Method get_id addr 0x23b2e4c size 0x8 virtual false final false
  inline int32_t get_id();

  /// @brief Method get_videoAssetReference addr 0x23b2e54 size 0x8 virtual false final false
  inline ::UnityEngine::AddressableAssets::AssetReference* get_videoAssetReference();

  static inline ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId* New_ctor();

  /// @brief Method .ctor addr 0x23b2e5c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionDataModelSO__VideoClipWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VideoProjectionDataModelSO__VideoClipWithId(__VideoProjectionDataModelSO__VideoClipWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VideoProjectionDataModelSO__VideoClipWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VideoProjectionDataModelSO__VideoClipWithId(__VideoProjectionDataModelSO__VideoClipWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VideoProjectionDataModelSO__VideoClipWithId();

public:
  /// @brief Field _id, offset: 0x10, size: 0x4, def value: None
  int32_t ____id;

  /// @brief Field _videoAssetReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReference* ____videoAssetReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::VideoProjectionDataModelSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4973))
// CS Name: ::VideoProjectionDataModelSO*
class CORDL_TYPE VideoProjectionDataModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using VideoClipWithId = ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId;

  /// @brief Field _videoClipsWithId, offset 0x18, size 0x8
  __declspec(property(get = __get__videoClipsWithId, put = __set__videoClipsWithId))::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,
                                                                                             ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> _videoClipsWithId;

  __declspec(property(get = get_videoClipWithIds))::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*,
                                                           ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> videoClipWithIds;

  constexpr ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>& __get__videoClipsWithId();

  constexpr ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> const&
  __get__videoClipsWithId() const;

  constexpr void
  __set__videoClipsWithId(::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> value);

  /// @brief Method get_videoClipWithIds addr 0x23b2e3c size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> get_videoClipWithIds();

  static inline ::GlobalNamespace::VideoProjectionDataModelSO* New_ctor();

  /// @brief Method .ctor addr 0x23b2e44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoProjectionDataModelSO(VideoProjectionDataModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionDataModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoProjectionDataModelSO(VideoProjectionDataModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoProjectionDataModelSO();

public:
  /// @brief Field _videoClipsWithId, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> ____videoClipsWithId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionDataModelSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionDataModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionDataModelSO*, "", "VideoProjectionDataModelSO");
NEED_NO_BOX(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, "", "VideoProjectionDataModelSO/VideoClipWithId");
