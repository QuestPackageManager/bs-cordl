#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(CustomBoundingBox)
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBoundingBox;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomBoundingBox);
// Type: ::CustomBoundingBox
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13850))
// CS Name: ::CustomBoundingBox*
class CORDL_TYPE CustomBoundingBox : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _meshFilter, offset 0x18, size 0x8
  __declspec(property(get = __get__meshFilter, put = __set__meshFilter))::UnityEngine::MeshFilter* _meshFilter;

  /// @brief Field _boundingBoxCenter, offset 0x20, size 0xc
  __declspec(property(get = __get__boundingBoxCenter, put = __set__boundingBoxCenter))::UnityEngine::Vector3 _boundingBoxCenter;

  /// @brief Field _boundingBoxSize, offset 0x2c, size 0xc
  __declspec(property(get = __get__boundingBoxSize, put = __set__boundingBoxSize))::UnityEngine::Vector3 _boundingBoxSize;

  /// @brief Field _meshRenderer, offset 0x38, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  constexpr ::UnityEngine::MeshFilter*& __get__meshFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> const& __get__meshFilter() const;

  constexpr void __set__meshFilter(::UnityEngine::MeshFilter* value);

  constexpr ::UnityEngine::Vector3& __get__boundingBoxCenter();

  constexpr ::UnityEngine::Vector3 const& __get__boundingBoxCenter() const;

  constexpr void __set__boundingBoxCenter(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__boundingBoxSize();

  constexpr ::UnityEngine::Vector3 const& __get__boundingBoxSize() const;

  constexpr void __set__boundingBoxSize(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  /// @brief Method Awake addr 0x1f94ef8 size 0x88 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::CustomBoundingBox* New_ctor();

  /// @brief Method .ctor addr 0x1f94f80 size 0x60 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomBoundingBox(CustomBoundingBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomBoundingBox(CustomBoundingBox const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomBoundingBox();

public:
  /// @brief Field _meshFilter, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::MeshFilter* ____meshFilter;

  /// @brief Field _boundingBoxCenter, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____boundingBoxCenter;

  /// @brief Field _boundingBoxSize, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____boundingBoxSize;

  /// @brief Field _meshRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomBoundingBox, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBoundingBox, ____meshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBoundingBox, ____boundingBoxCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBoundingBox, ____boundingBoxSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomBoundingBox, ____meshRenderer) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomBoundingBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomBoundingBox*, "", "CustomBoundingBox");
