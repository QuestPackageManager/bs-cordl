#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshRenderer)
namespace GlobalNamespace {
struct OVRMeshRenderer_ConfidenceBehavior;
}
namespace GlobalNamespace {
class OVRMeshRenderer_IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct OVRMeshRenderer_MeshRendererData;
}
namespace GlobalNamespace {
struct OVRMeshRenderer_SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRMesh;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshRenderer_ConfidenceBehavior;
}
namespace GlobalNamespace {
struct OVRMeshRenderer_SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRMeshRenderer;
}
namespace GlobalNamespace {
class OVRMeshRenderer_IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct OVRMeshRenderer_MeshRendererData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior);
MARK_VAL_T(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior);
MARK_REF_PTR_T(::GlobalNamespace::OVRMeshRenderer);
MARK_REF_PTR_T(::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider);
MARK_VAL_T(::GlobalNamespace::OVRMeshRenderer_MeshRendererData);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMeshRenderer/IOVRMeshRendererDataProvider
class CORDL_TYPE OVRMeshRenderer_IOVRMeshRendererDataProvider {
public:
  // Declarations
  /// @brief Method GetMeshRendererData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshRenderer_MeshRendererData GetMeshRendererData();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer_IOVRMeshRendererDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMeshRenderer_IOVRMeshRendererDataProvider(OVRMeshRenderer_IOVRMeshRendererDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8442 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshRenderer/MeshRendererData
struct CORDL_TYPE OVRMeshRenderer_MeshRendererData {
public:
  // Declarations
  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  /// @brief Method get_IsDataHighConfidence, addr 0x403a4bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x403a4a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_ShouldUseSystemGestureMaterial, addr 0x403a4d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldUseSystemGestureMaterial();

  /// @brief Method set_IsDataHighConfidence, addr 0x403a4c4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x403a4b0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_ShouldUseSystemGestureMaterial, addr 0x403a4d8, size 0xc, virtual false, abstract: false, final false
  inline void set_ShouldUseSystemGestureMaterial(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshRenderer_MeshRendererData();

  // Ctor Parameters [CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr OVRMeshRenderer_MeshRendererData(bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField, bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x1, size: 0x1, def value: None
  bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x2, size: 0x1, def value: None
  bool _ShouldUseSystemGestureMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, _IsDataValid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, _IsDataHighConfidence_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, _ShouldUseSystemGestureMaterial_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshRenderer_MeshRendererData, 0x3>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshRenderer/ConfidenceBehavior
struct CORDL_TYPE OVRMeshRenderer_ConfidenceBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRMeshRenderer_ConfidenceBehavior_Unwrapped
  enum struct __OVRMeshRenderer_ConfidenceBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ToggleRenderer = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRMeshRenderer_ConfidenceBehavior_Unwrapped() const noexcept {
    return static_cast<__OVRMeshRenderer_ConfidenceBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshRenderer_ConfidenceBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRMeshRenderer_ConfidenceBehavior(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior const None;

  /// @brief Field ToggleRenderer value: I32(1)
  static ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior const ToggleRenderer;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8444 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMeshRenderer/SystemGestureBehavior
struct CORDL_TYPE OVRMeshRenderer_SystemGestureBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRMeshRenderer_SystemGestureBehavior_Unwrapped
  enum struct __OVRMeshRenderer_SystemGestureBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SwapMaterial = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRMeshRenderer_SystemGestureBehavior_Unwrapped() const noexcept {
    return static_cast<__OVRMeshRenderer_SystemGestureBehavior_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshRenderer_SystemGestureBehavior();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRMeshRenderer_SystemGestureBehavior(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior const None;

  /// @brief Field SwapMaterial value: I32(1)
  static ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior const SwapMaterial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8445 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRMeshRenderer::ConfidenceBehavior, OVRMeshRenderer::SystemGestureBehavior, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMeshRenderer
class CORDL_TYPE OVRMeshRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ConfidenceBehavior = ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior;

  using IOVRMeshRendererDataProvider = ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider;

  using MeshRendererData = ::GlobalNamespace::OVRMeshRenderer_MeshRendererData;

  using SystemGestureBehavior = ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataHighConfidence_k__BackingField, put = __cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__IsDataValid_k__BackingField, put = __cordl_internal_set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset 0x5b, size 0x1
  __declspec(property(get = __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField,
                      put = __cordl_internal_set__ShouldUseSystemGestureMaterial_k__BackingField)) bool _ShouldUseSystemGestureMaterial_k__BackingField;

  /// @brief Field _confidenceBehavior, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__confidenceBehavior, put = __cordl_internal_set__confidenceBehavior)) ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior _confidenceBehavior;

  /// @brief Field _dataProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataProvider, put = __cordl_internal_set__dataProvider)) ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* _dataProvider;

  /// @brief Field _originalMaterial, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__originalMaterial, put = __cordl_internal_set__originalMaterial)) ::UnityW<::UnityEngine::Material> _originalMaterial;

  /// @brief Field _ovrMesh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ovrMesh, put = __cordl_internal_set__ovrMesh)) ::UnityW<::GlobalNamespace::OVRMesh> _ovrMesh;

  /// @brief Field _ovrSkeleton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ovrSkeleton, put = __cordl_internal_set__ovrSkeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton> _ovrSkeleton;

  /// @brief Field _skinnedMeshRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__skinnedMeshRenderer, put = __cordl_internal_set__skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer> _skinnedMeshRenderer;

  /// @brief Field _systemGestureBehavior, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__systemGestureBehavior,
                      put = __cordl_internal_set__systemGestureBehavior)) ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior _systemGestureBehavior;

  /// @brief Field _systemGestureMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__systemGestureMaterial, put = __cordl_internal_set__systemGestureMaterial)) ::UnityW<::UnityEngine::Material> _systemGestureMaterial;

  /// @brief Method Awake, addr 0x4039adc, size 0x104, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Initialize, addr 0x4039d6c, size 0x484, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::OVRMeshRenderer* New_ctor();

  /// @brief Method ShouldInitialize, addr 0x4039c7c, size 0xf0, virtual false, abstract: false, final false
  inline bool ShouldInitialize();

  /// @brief Method Start, addr 0x4039be0, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x403a1f0, size 0x2a8, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr bool const& __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ShouldUseSystemGestureMaterial_k__BackingField();

  constexpr ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior const& __cordl_internal_get__confidenceBehavior() const;

  constexpr ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior& __cordl_internal_get__confidenceBehavior();

  constexpr ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* const& __cordl_internal_get__dataProvider() const;

  constexpr ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*& __cordl_internal_get__dataProvider();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__originalMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__originalMaterial();

  constexpr ::UnityW<::GlobalNamespace::OVRMesh> const& __cordl_internal_get__ovrMesh() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMesh>& __cordl_internal_get__ovrMesh();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get__ovrSkeleton() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get__ovrSkeleton();

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__skinnedMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__skinnedMeshRenderer();

  constexpr ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior const& __cordl_internal_get__systemGestureBehavior() const;

  constexpr ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior& __cordl_internal_get__systemGestureBehavior();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__systemGestureMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__systemGestureMaterial();

  constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ShouldUseSystemGestureMaterial_k__BackingField(bool value);

  constexpr void __cordl_internal_set__confidenceBehavior(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior value);

  constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* value);

  constexpr void __cordl_internal_set__originalMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__ovrMesh(::UnityW<::GlobalNamespace::OVRMesh> value);

  constexpr void __cordl_internal_set__ovrSkeleton(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  constexpr void __cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  constexpr void __cordl_internal_set__systemGestureBehavior(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior value);

  constexpr void __cordl_internal_set__systemGestureMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x403a498, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsDataHighConfidence, addr 0x4039ab4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method get_IsDataValid, addr 0x4039aa0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsDataValid();

  /// @brief Method get_IsInitialized, addr 0x4039a8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_ShouldUseSystemGestureMaterial, addr 0x4039ac8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShouldUseSystemGestureMaterial();

  /// @brief Method set_IsDataHighConfidence, addr 0x4039abc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method set_IsDataValid, addr 0x4039aa8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDataValid(bool value);

  /// @brief Method set_IsInitialized, addr 0x4039a94, size 0xc, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

  /// @brief Method set_ShouldUseSystemGestureMaterial, addr 0x4039ad0, size 0xc, virtual false, abstract: false, final false
  inline void set_ShouldUseSystemGestureMaterial(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMeshRenderer(OVRMeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMeshRenderer(OVRMeshRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8446 };

  /// @brief Field _dataProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider* ____dataProvider;

  /// @brief Field _ovrMesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMesh> ____ovrMesh;

  /// @brief Field _ovrSkeleton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ____ovrSkeleton;

  /// @brief Field _confidenceBehavior, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior ____confidenceBehavior;

  /// @brief Field _systemGestureBehavior, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior ____systemGestureBehavior;

  /// @brief Field _systemGestureMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____systemGestureMaterial;

  /// @brief Field _originalMaterial, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____originalMaterial;

  /// @brief Field _skinnedMeshRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ____skinnedMeshRenderer;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x59, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x5a, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x5b, size: 0x1, def value: None
  bool ____ShouldUseSystemGestureMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____dataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____ovrMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____ovrSkeleton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____confidenceBehavior) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____systemGestureBehavior) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____systemGestureMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____originalMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____skinnedMeshRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____IsInitialized_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____IsDataValid_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____IsDataHighConfidence_k__BackingField) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____ShouldUseSystemGestureMaterial_k__BackingField) == 0x5b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshRenderer, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer_ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer_SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
NEED_NO_BOX(::GlobalNamespace::OVRMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer*, "", "OVRMeshRenderer");
NEED_NO_BOX(::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer_IOVRMeshRendererDataProvider*, "", "OVRMeshRenderer/IOVRMeshRendererDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer_MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
