#pragma once
// IWYU pragma private; include "GlobalNamespace/GridElementController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GridElementController)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GridElementController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GridElementController);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GridElementController
class CORDL_TYPE GridElementController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gridElementIndexPropertyId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__gridElementIndexPropertyId, put = __cordl_internal_set__gridElementIndexPropertyId)) int32_t _gridElementIndexPropertyId;

  /// @brief Field _gridElementIndexPropertyName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gridElementIndexPropertyName, put = __cordl_internal_set__gridElementIndexPropertyName)) ::StringW _gridElementIndexPropertyName;

  /// @brief Field _gridElementRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gridElementRenderer, put = __cordl_internal_set__gridElementRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _gridElementRenderer;

  /// @brief Field _gridPivotAnchor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gridPivotAnchor, put = __cordl_internal_set__gridPivotAnchor)) ::UnityW<::UnityEngine::Transform> _gridPivotAnchor;

  /// @brief Field _gridPivotPropertyId, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__gridPivotPropertyId, put = __cordl_internal_set__gridPivotPropertyId)) int32_t _gridPivotPropertyId;

  /// @brief Field _gridPivotPropertyName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gridPivotPropertyName, put = __cordl_internal_set__gridPivotPropertyName)) ::StringW _gridPivotPropertyName;

  /// @brief Field _idVector, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__idVector, put = __cordl_internal_set__idVector)) ::UnityEngine::Vector3 _idVector;

  /// @brief Field _isInitialized, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _materialPropertyBlockController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Method Awake, addr 0x5d32fdc, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ConvertPositionToObjectSpace, addr 0x5d33158, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ConvertPositionToObjectSpace(::UnityEngine::Vector3 worldSpacePivotPosition);

  /// @brief Method Initialize, addr 0x5d32fe0, size 0x178, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::GridElementController* New_ctor();

  /// @brief Method SetGridMaterial, addr 0x5d331a0, size 0x28, virtual false, abstract: false, final false
  inline void SetGridMaterial(::UnityEngine::Material* material);

  constexpr int32_t const& __cordl_internal_get__gridElementIndexPropertyId() const;

  constexpr int32_t& __cordl_internal_get__gridElementIndexPropertyId();

  constexpr ::StringW const& __cordl_internal_get__gridElementIndexPropertyName() const;

  constexpr ::StringW& __cordl_internal_get__gridElementIndexPropertyName();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__gridElementRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__gridElementRenderer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__gridPivotAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__gridPivotAnchor();

  constexpr int32_t const& __cordl_internal_get__gridPivotPropertyId() const;

  constexpr int32_t& __cordl_internal_get__gridPivotPropertyId();

  constexpr ::StringW const& __cordl_internal_get__gridPivotPropertyName() const;

  constexpr ::StringW& __cordl_internal_get__gridPivotPropertyName();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__idVector() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__idVector();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr void __cordl_internal_set__gridElementIndexPropertyId(int32_t value);

  constexpr void __cordl_internal_set__gridElementIndexPropertyName(::StringW value);

  constexpr void __cordl_internal_set__gridElementRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__gridPivotAnchor(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__gridPivotPropertyId(int32_t value);

  constexpr void __cordl_internal_set__gridPivotPropertyName(::StringW value);

  constexpr void __cordl_internal_set__idVector(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  /// @brief Method .ctor, addr 0x5d331c8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GridElementController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GridElementController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GridElementController(GridElementController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GridElementController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GridElementController(GridElementController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20791 };

  /// @brief Field _gridPivotAnchor, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____gridPivotAnchor;

  /// @brief Field _materialPropertyBlockController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _gridElementRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____gridElementRenderer;

  /// @brief Field _gridPivotPropertyName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____gridPivotPropertyName;

  /// @brief Field _gridElementIndexPropertyName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____gridElementIndexPropertyName;

  /// @brief Field _idVector, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____idVector;

  /// @brief Field _gridPivotPropertyId, offset: 0x54, size: 0x4, def value: None
  int32_t ____gridPivotPropertyId;

  /// @brief Field _gridElementIndexPropertyId, offset: 0x58, size: 0x4, def value: None
  int32_t ____gridElementIndexPropertyId;

  /// @brief Field _isInitialized, offset: 0x5c, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GridElementController, ____gridPivotAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____materialPropertyBlockController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____gridElementRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____gridPivotPropertyName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____gridElementIndexPropertyName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____idVector) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____gridPivotPropertyId) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____gridElementIndexPropertyId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridElementController, ____isInitialized) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GridElementController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GridElementController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GridElementController*, "", "GridElementController");
