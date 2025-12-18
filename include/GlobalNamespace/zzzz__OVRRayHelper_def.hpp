#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRayHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRRayHelper)
namespace GlobalNamespace {
struct OVRInputRayData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRayHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRayHelper);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRRayHelper
class CORDL_TYPE OVRRayHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field Cursor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Cursor, put = __cordl_internal_set_Cursor)) ::UnityW<::UnityEngine::GameObject> Cursor;

  /// @brief Field CursorFill, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_CursorFill, put = __cordl_internal_set_CursorFill)) ::UnityW<::UnityEngine::SpriteRenderer> CursorFill;

  /// @brief Field DefaultLength, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_DefaultLength, put = __cordl_internal_set_DefaultLength)) float_t DefaultLength;

  /// @brief Field NormalMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_NormalMaterial, put = __cordl_internal_set_NormalMaterial)) ::UnityW<::UnityEngine::Material> NormalMaterial;

  /// @brief Field PinchMaterial, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PinchMaterial, put = __cordl_internal_set_PinchMaterial)) ::UnityW<::UnityEngine::Material> PinchMaterial;

  /// @brief Field Renderer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Renderer, put = __cordl_internal_set_Renderer)) ::UnityW<::UnityEngine::MeshRenderer> Renderer;

  /// @brief Field _cursorIntitialSize, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get__cursorIntitialSize, put = __cordl_internal_set__cursorIntitialSize)) ::UnityEngine::Vector3 _cursorIntitialSize;

  /// @brief Field _initialScale, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__initialScale, put = __cordl_internal_set__initialScale)) ::UnityEngine::Vector3 _initialScale;

  static inline ::GlobalNamespace::OVRRayHelper* New_ctor();

  /// @brief Method Start, addr 0x5d5d6cc, size 0xe0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdatePointerRay, addr 0x5d5d7ac, size 0x310, virtual false, abstract: false, final false
  inline void UpdatePointerRay(::GlobalNamespace::OVRInputRayData rayData);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Cursor() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Cursor();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_CursorFill() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_CursorFill();

  constexpr float_t const& __cordl_internal_get_DefaultLength() const;

  constexpr float_t& __cordl_internal_get_DefaultLength();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_NormalMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_NormalMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_PinchMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_PinchMaterial();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_Renderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_Renderer();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cursorIntitialSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__cursorIntitialSize();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialScale();

  constexpr void __cordl_internal_set_Cursor(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_CursorFill(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set_DefaultLength(float_t value);

  constexpr void __cordl_internal_set_NormalMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_PinchMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_Renderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__cursorIntitialSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__initialScale(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x5d5dabc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRayHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRRayHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRayHelper(OVRRayHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRayHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRayHelper(OVRRayHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7951 };

  /// @brief Field _cursorSelectedScaleFactor offset 0xffffffff size 0x4
  static constexpr float_t _cursorSelectedScaleFactor{ static_cast<float_t>(0.5f) };

  /// @brief Field Renderer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___Renderer;

  /// @brief Field NormalMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___NormalMaterial;

  /// @brief Field PinchMaterial, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___PinchMaterial;

  /// @brief Field Cursor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___Cursor;

  /// @brief Field CursorFill, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ___CursorFill;

  /// @brief Field _initialScale, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____initialScale;

  /// @brief Field DefaultLength, offset: 0x54, size: 0x4, def value: None
  float_t ___DefaultLength;

  /// @brief Field _cursorIntitialSize, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____cursorIntitialSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ___Renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ___NormalMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ___PinchMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ___Cursor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ___CursorFill) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ____initialScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ___DefaultLength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRayHelper, ____cursorIntitialSize) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRayHelper, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRayHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRayHelper*, "", "OVRRayHelper");
