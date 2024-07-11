#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomBoundingBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CustomBoundingBox)
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBoundingBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomBoundingBox);
// Type: ::CustomBoundingBox
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CustomBoundingBox*
class CORDL_TYPE CustomBoundingBox : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _boundingBoxCenter, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__boundingBoxCenter, put = __cordl_internal_set__boundingBoxCenter))::UnityEngine::Vector3 _boundingBoxCenter;

  /// @brief Field _boundingBoxSize, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__boundingBoxSize, put = __cordl_internal_set__boundingBoxSize))::UnityEngine::Vector3 _boundingBoxSize;

  /// @brief Field _meshRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer))::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Method Awake, addr 0x250275c, size 0x6c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::CustomBoundingBox* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__boundingBoxCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__boundingBoxCenter();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__boundingBoxSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__boundingBoxSize();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr void __cordl_internal_set__boundingBoxCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__boundingBoxSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  /// @brief Method .ctor, addr 0x25027c8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomBoundingBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomBoundingBox(CustomBoundingBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomBoundingBox(CustomBoundingBox const&) = delete;

  /// @brief Field _boundingBoxCenter, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____boundingBoxCenter;

  /// @brief Field _boundingBoxSize, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____boundingBoxSize;

  /// @brief Field _meshRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomBoundingBox, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBoundingBox, ____boundingBoxCenter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBoundingBox, ____boundingBoxSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBoundingBox, ____meshRenderer) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomBoundingBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomBoundingBox*, "", "CustomBoundingBox");
