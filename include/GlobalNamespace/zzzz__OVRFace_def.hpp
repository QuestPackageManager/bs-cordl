#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFace)
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpression;
}
namespace GlobalNamespace {
class OVRFaceExpressions;
}
namespace GlobalNamespace {
class OVRFace_IMeshWeightsProvider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRFace;
}
namespace GlobalNamespace {
class OVRFace_IMeshWeightsProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRFace);
MARK_REF_PTR_T(::GlobalNamespace::OVRFace_IMeshWeightsProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFace/IMeshWeightsProvider
class CORDL_TYPE OVRFace_IMeshWeightsProvider {
public:
  // Declarations
  /// @brief Method GetWeightValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetWeightValue(int32_t blendshapeIndex, ::ByRef<float_t> weightValue);

  /// @brief Method UpdateWeights, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateWeights(::GlobalNamespace::OVRFaceExpressions* faceExpressions);

  // Ctor Parameters [CppParam { name: "", ty: "OVRFace_IMeshWeightsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRFace_IMeshWeightsProvider(OVRFace_IMeshWeightsProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7036 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRFace
class CORDL_TYPE OVRFace : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using IMeshWeightsProvider = ::GlobalNamespace::OVRFace_IMeshWeightsProvider;

  __declspec(property(get = get_BlendShapeStrengthMultiplier, put = set_BlendShapeStrengthMultiplier)) float_t BlendShapeStrengthMultiplier;

  __declspec(property(get = get_FaceExpressions, put = set_FaceExpressions)) ::UnityW<::GlobalNamespace::OVRFaceExpressions> FaceExpressions;

  __declspec(property(get = get_SkinnedMesh)) ::UnityW<::UnityEngine::SkinnedMeshRenderer> SkinnedMesh;

  /// @brief Field _blendShapeStrengthMultiplier, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__blendShapeStrengthMultiplier, put = __cordl_internal_set__blendShapeStrengthMultiplier)) float_t _blendShapeStrengthMultiplier;

  /// @brief Field _faceExpressions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__faceExpressions, put = __cordl_internal_set__faceExpressions)) ::UnityW<::GlobalNamespace::OVRFaceExpressions> _faceExpressions;

  /// @brief Field _meshWeightsProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__meshWeightsProvider, put = __cordl_internal_set__meshWeightsProvider)) ::GlobalNamespace::OVRFace_IMeshWeightsProvider* _meshWeightsProvider;

  /// @brief Field _meshWeightsProviderObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__meshWeightsProviderObject, put = __cordl_internal_set__meshWeightsProviderObject)) ::UnityW<::UnityEngine::GameObject> _meshWeightsProviderObject;

  /// @brief Field _skinnedMeshRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__skinnedMeshRenderer, put = __cordl_internal_set__skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer> _skinnedMeshRenderer;

  /// @brief Method Awake, addr 0x5c4a810, size 0x15c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetFaceExpression, addr 0x5c4abe8, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRFaceExpressions_FaceExpression GetFaceExpression(int32_t blendShapeIndex);

  /// @brief Method GetWeightValue, addr 0x5c4abf0, size 0x11c, virtual true, abstract: false, final false
  inline bool GetWeightValue(int32_t blendShapeIndex, ::ByRef<float_t> weightValue);

  static inline ::GlobalNamespace::OVRFace* New_ctor();

  /// @brief Method OnEnable, addr 0x5c4a96c, size 0xf0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RetrieveSkinnedMeshRenderer, addr 0x5c4a768, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> RetrieveSkinnedMeshRenderer();

  /// @brief Method SearchFaceExpressions, addr 0x5c4a7b4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRFaceExpressions> SearchFaceExpressions();

  /// @brief Method Start, addr 0x5c49b74, size 0x90, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x5c4aa5c, size 0x18c, virtual true, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get__blendShapeStrengthMultiplier() const;

  constexpr float_t& __cordl_internal_get__blendShapeStrengthMultiplier();

  constexpr ::UnityW<::GlobalNamespace::OVRFaceExpressions> const& __cordl_internal_get__faceExpressions() const;

  constexpr ::UnityW<::GlobalNamespace::OVRFaceExpressions>& __cordl_internal_get__faceExpressions();

  constexpr ::GlobalNamespace::OVRFace_IMeshWeightsProvider* const& __cordl_internal_get__meshWeightsProvider() const;

  constexpr ::GlobalNamespace::OVRFace_IMeshWeightsProvider*& __cordl_internal_get__meshWeightsProvider();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__meshWeightsProviderObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__meshWeightsProviderObject();

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__skinnedMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__skinnedMeshRenderer();

  constexpr void __cordl_internal_set__blendShapeStrengthMultiplier(float_t value);

  constexpr void __cordl_internal_set__faceExpressions(::UnityW<::GlobalNamespace::OVRFaceExpressions> value);

  constexpr void __cordl_internal_set__meshWeightsProvider(::GlobalNamespace::OVRFace_IMeshWeightsProvider* value);

  constexpr void __cordl_internal_set__meshWeightsProviderObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  /// @brief Method .ctor, addr 0x5c49d4c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BlendShapeStrengthMultiplier, addr 0x5c4a750, size 0x8, virtual false, abstract: false, final false
  inline float_t get_BlendShapeStrengthMultiplier();

  /// @brief Method get_FaceExpressions, addr 0x5c4a740, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRFaceExpressions> get_FaceExpressions();

  /// @brief Method get_SkinnedMesh, addr 0x5c4a760, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> get_SkinnedMesh();

  /// @brief Method set_BlendShapeStrengthMultiplier, addr 0x5c4a758, size 0x8, virtual false, abstract: false, final false
  inline void set_BlendShapeStrengthMultiplier(float_t value);

  /// @brief Method set_FaceExpressions, addr 0x5c4a748, size 0x8, virtual false, abstract: false, final false
  inline void set_FaceExpressions(::GlobalNamespace::OVRFaceExpressions* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRFace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRFace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRFace(OVRFace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRFace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRFace(OVRFace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7037 };

  /// @brief Field _faceExpressions, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRFaceExpressions> ____faceExpressions;

  /// @brief Field _blendShapeStrengthMultiplier, offset: 0x28, size: 0x4, def value: None
  float_t ____blendShapeStrengthMultiplier;

  /// @brief Field _meshWeightsProviderObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____meshWeightsProviderObject;

  /// @brief Field _skinnedMeshRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ____skinnedMeshRenderer;

  /// @brief Field _meshWeightsProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRFace_IMeshWeightsProvider* ____meshWeightsProvider;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFace, ____faceExpressions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFace, ____blendShapeStrengthMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFace, ____meshWeightsProviderObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFace, ____skinnedMeshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFace, ____meshWeightsProvider) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRFace, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRFace);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFace*, "", "OVRFace");
NEED_NO_BOX(::GlobalNamespace::OVRFace_IMeshWeightsProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFace_IMeshWeightsProvider*, "", "OVRFace/IMeshWeightsProvider");
