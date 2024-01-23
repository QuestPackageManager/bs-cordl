#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRLaserPointer)
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace VRUIControls {
class VRLaserPointer;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRLaserPointer);
// Type: VRUIControls::VRLaserPointer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15677))
// CS Name: ::VRUIControls::VRLaserPointer*
class CORDL_TYPE VRLaserPointer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _renderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__renderer, put = __cordl_internal_set__renderer))::UnityW<::UnityEngine::MeshRenderer> _renderer;

  /// @brief Field _fadeStartNormalizedDistanceId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__fadeStartNormalizedDistanceId, put = setStaticF__fadeStartNormalizedDistanceId)) int32_t _fadeStartNormalizedDistanceId;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

  constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer> value);

  static inline void setStaticF__fadeStartNormalizedDistanceId(int32_t value);

  static inline int32_t getStaticF__fadeStartNormalizedDistanceId();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method SetLocalPosition, addr 0x2eb8848, size 0x48, virtual false, abstract: false, final false
  inline void SetLocalPosition(::UnityEngine::Vector3 position);

  /// @brief Method SetLocalScale, addr 0x2eb8890, size 0x48, virtual false, abstract: false, final false
  inline void SetLocalScale(::UnityEngine::Vector3 scale);

  /// @brief Method SetFadeDistance, addr 0x2eb88d8, size 0xfc, virtual false, abstract: false, final false
  inline void SetFadeDistance(float_t distance);

  static inline ::VRUIControls::VRLaserPointer* New_ctor();

  /// @brief Method .ctor, addr 0x2eb89d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRLaserPointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRLaserPointer(VRLaserPointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRLaserPointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRLaserPointer(VRLaserPointer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRLaserPointer();

public:
  /// @brief Field _renderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____renderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRLaserPointer, 0x20>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::VRLaserPointer, ____renderer) == 0x18, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::VRLaserPointer);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRLaserPointer*, "VRUIControls", "VRLaserPointer");
