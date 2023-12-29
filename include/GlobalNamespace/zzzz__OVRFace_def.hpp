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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8889))
// CS Name: ::OVRFace*
class CORDL_TYPE OVRFace : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _faceExpressions, offset 0x18, size 0x8
  __declspec(property(get = __get__faceExpressions, put = __set__faceExpressions))::GlobalNamespace::OVRFaceExpressions* _faceExpressions;

  /// @brief Field _blendShapeStrengthMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __get__blendShapeStrengthMultiplier, put = __set__blendShapeStrengthMultiplier)) float_t _blendShapeStrengthMultiplier;

  /// @brief Field _skinnedMeshRenderer, offset 0x28, size 0x8
  __declspec(property(get = __get__skinnedMeshRenderer, put = __set__skinnedMeshRenderer))::UnityEngine::SkinnedMeshRenderer* _skinnedMeshRenderer;

  __declspec(property(get = get_FaceExpressions, put = set_FaceExpressions))::GlobalNamespace::OVRFaceExpressions* FaceExpressions;

  __declspec(property(get = get_BlendShapeStrengthMultiplier, put = set_BlendShapeStrengthMultiplier)) float_t BlendShapeStrengthMultiplier;

  constexpr ::GlobalNamespace::OVRFaceExpressions*& __get__faceExpressions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRFaceExpressions*> const& __get__faceExpressions() const;

  constexpr void __set__faceExpressions(::GlobalNamespace::OVRFaceExpressions* value);

  constexpr float_t& __get__blendShapeStrengthMultiplier();

  constexpr float_t const& __get__blendShapeStrengthMultiplier() const;

  constexpr void __set__blendShapeStrengthMultiplier(float_t value);

  constexpr ::UnityEngine::SkinnedMeshRenderer*& __get__skinnedMeshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SkinnedMeshRenderer*> const& __get__skinnedMeshRenderer() const;

  constexpr void __set__skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* value);

  /// @brief Method get_FaceExpressions addr 0x2636d50 size 0x8 virtual false final false
  inline ::GlobalNamespace::OVRFaceExpressions* get_FaceExpressions();

  /// @brief Method set_FaceExpressions addr 0x2636d58 size 0x8 virtual false final false
  inline void set_FaceExpressions(::GlobalNamespace::OVRFaceExpressions* value);

  /// @brief Method get_BlendShapeStrengthMultiplier addr 0x2636d60 size 0x8 virtual false final false
  inline float_t get_BlendShapeStrengthMultiplier();

  /// @brief Method set_BlendShapeStrengthMultiplier addr 0x2636d68 size 0x8 virtual false final false
  inline void set_BlendShapeStrengthMultiplier(float_t value);

  /// @brief Method Start addr 0x2635580 size 0x50 virtual true final false
  inline void Start();

  /// @brief Method Update addr 0x2636d70 size 0xd8 virtual true final false
  inline void Update();

  /// @brief Method GetFaceExpression addr 0x2636e48 size 0x8 virtual true final false
  inline ::GlobalNamespace::__OVRFaceExpressions__FaceExpression GetFaceExpression(int32_t blendShapeIndex);

  static inline ::GlobalNamespace::OVRFace* New_ctor();

  /// @brief Method .ctor addr 0x2635610 size 0x10 virtual false final false
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
  ::GlobalNamespace::OVRFaceExpressions* ____faceExpressions;

  /// @brief Field _blendShapeStrengthMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t ____blendShapeStrengthMultiplier;

  /// @brief Field _skinnedMeshRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::SkinnedMeshRenderer* ____skinnedMeshRenderer;

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
