#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_LoadBufferInstancer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_LoadBufferInstancer)
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferInstancer;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_LoadBufferInstancer);
// Dependencies HoudiniEngineUnity.HEU_LoadBufferBase
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_LoadBufferInstancer
class CORDL_TYPE HEU_LoadBufferInstancer : public ::HoudiniEngineUnity::HEU_LoadBufferBase {
public:
  // Declarations
  /// @brief Field _assetPaths, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPaths, put = __cordl_internal_set__assetPaths)) ::ArrayW<::StringW, ::Array<::StringW>*> _assetPaths;

  /// @brief Field _collisionAssetPaths, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__collisionAssetPaths, put = __cordl_internal_set__collisionAssetPaths)) ::ArrayW<::StringW, ::Array<::StringW>*> _collisionAssetPaths;

  /// @brief Field _instanceNodeIDs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceNodeIDs, put = __cordl_internal_set__instanceNodeIDs)) ::ArrayW<int32_t, ::Array<int32_t>*> _instanceNodeIDs;

  /// @brief Field _instancePrefixes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__instancePrefixes, put = __cordl_internal_set__instancePrefixes)) ::ArrayW<::StringW, ::Array<::StringW>*> _instancePrefixes;

  /// @brief Field _instanceTransforms, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceTransforms,
                      put = __cordl_internal_set__instanceTransforms)) ::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>
      _instanceTransforms;

  static inline ::HoudiniEngineUnity::HEU_LoadBufferInstancer* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__assetPaths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__assetPaths();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__collisionAssetPaths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__collisionAssetPaths();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__instanceNodeIDs() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__instanceNodeIDs();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__instancePrefixes() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__instancePrefixes();

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*> const& __cordl_internal_get__instanceTransforms() const;

  constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*>& __cordl_internal_get__instanceTransforms();

  constexpr void __cordl_internal_set__assetPaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__collisionAssetPaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__instanceNodeIDs(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__instancePrefixes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__instanceTransforms(::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*> value);

  /// @brief Method .ctor, addr 0x3a6200c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_LoadBufferInstancer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferInstancer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_LoadBufferInstancer(HEU_LoadBufferInstancer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferInstancer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_LoadBufferInstancer(HEU_LoadBufferInstancer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11795 };

  /// @brief Field _instanceTransforms, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::HoudiniEngineUnity::HAPI_Transform, ::Array<::HoudiniEngineUnity::HAPI_Transform>*> ____instanceTransforms;

  /// @brief Field _instancePrefixes, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____instancePrefixes;

  /// @brief Field _instanceNodeIDs, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____instanceNodeIDs;

  /// @brief Field _assetPaths, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____assetPaths;

  /// @brief Field _collisionAssetPaths, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____collisionAssetPaths;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferInstancer, ____instanceTransforms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferInstancer, ____instancePrefixes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferInstancer, ____instanceNodeIDs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferInstancer, ____assetPaths) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_LoadBufferInstancer, ____collisionAssetPaths) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_LoadBufferInstancer, 0x58>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferInstancer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferInstancer*, "HoudiniEngineUnity", "HEU_LoadBufferInstancer");
