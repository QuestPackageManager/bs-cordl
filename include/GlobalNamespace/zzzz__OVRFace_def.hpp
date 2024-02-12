#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFace)
namespace GlobalNamespace {
class OVRFaceExpressions;
}
namespace GlobalNamespace {
struct __OVRFaceExpressions__FaceExpression;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRFace;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRFace);
// Type: ::OVRFace
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8064))
// CS Name: ::OVRFace*
class CORDL_TYPE OVRFace : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _faceExpressions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__faceExpressions, put = __cordl_internal_set__faceExpressions))::UnityW<::GlobalNamespace::OVRFaceExpressions> _faceExpressions;

  /// @brief Field _blendShapeStrengthMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__blendShapeStrengthMultiplier, put = __cordl_internal_set__blendShapeStrengthMultiplier)) float_t _blendShapeStrengthMultiplier;

  /// @brief Field _skinnedMeshRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__skinnedMeshRenderer, put = __cordl_internal_set__skinnedMeshRenderer))::UnityW<::UnityEngine::SkinnedMeshRenderer> _skinnedMeshRenderer;

  __declspec(property(get = get_FaceExpressions, put = set_FaceExpressions))::UnityW<::GlobalNamespace::OVRFaceExpressions> FaceExpressions;

  __declspec(property(get = get_BlendShapeStrengthMultiplier, put = set_BlendShapeStrengthMultiplier)) float_t BlendShapeStrengthMultiplier;

  constexpr ::UnityW<::GlobalNamespace::OVRFaceExpressions>& __cordl_internal_get__faceExpressions();

  constexpr ::UnityW<::GlobalNamespace::OVRFaceExpressions> const& __cordl_internal_get__faceExpressions() const;

  constexpr void __cordl_internal_set__faceExpressions(::UnityW<::GlobalNamespace::OVRFaceExpressions> value);

  constexpr float_t& __cordl_internal_get__blendShapeStrengthMultiplier();

  constexpr float_t const& __cordl_internal_get__blendShapeStrengthMultiplier() const;

  constexpr void __cordl_internal_set__blendShapeStrengthMultiplier(float_t value);

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__skinnedMeshRenderer();

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__skinnedMeshRenderer() const;

  constexpr void __cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  /// @brief Method get_FaceExpressions, addr 0x27bc48c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRFaceExpressions> get_FaceExpressions();

  /// @brief Method set_FaceExpressions, addr 0x27bc494, size 0x8, virtual false, abstract: false, final false
  inline void set_FaceExpressions(::GlobalNamespace::OVRFaceExpressions* value);

  /// @brief Method get_BlendShapeStrengthMultiplier, addr 0x27bc49c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_BlendShapeStrengthMultiplier();

  /// @brief Method set_BlendShapeStrengthMultiplier, addr 0x27bc4a4, size 0x8, virtual false, abstract: false, final false
  inline void set_BlendShapeStrengthMultiplier(float_t value);

  /// @brief Method Start, addr 0x27bacbc, size 0x50, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x27bc4ac, size 0xd8, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method GetFaceExpression, addr 0x27bc584, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GetFaceExpression(int32_t blendShapeIndex);

  static inline ::GlobalNamespace::OVRFace* New_ctor();

  /// @brief Method .ctor, addr 0x27bad4c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRFace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRFace(OVRFace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRFace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRFace(OVRFace const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFace();

public:
  /// @brief Field _faceExpressions, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRFaceExpressions> ____faceExpressions;

  /// @brief Field _blendShapeStrengthMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ____blendShapeStrengthMultiplier;

  /// @brief Field _skinnedMeshRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ____skinnedMeshRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFace, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFace, ____faceExpressions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFace, ____blendShapeStrengthMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFace, ____skinnedMeshRenderer) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFace*, "", "OVRFace");
