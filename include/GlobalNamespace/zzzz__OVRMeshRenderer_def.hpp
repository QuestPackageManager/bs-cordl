#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshRenderer)
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace GlobalNamespace {
class OVRMesh;
}
namespace GlobalNamespace {
class __OVRMeshRenderer__IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRMeshRenderer__MeshRendererData;
}
namespace GlobalNamespace {
struct __OVRMeshRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct __OVRMeshRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRMeshRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct __OVRMeshRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRMeshRenderer;
}
namespace GlobalNamespace {
class __OVRMeshRenderer__IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct __OVRMeshRenderer__MeshRendererData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior);
MARK_VAL_T(::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior);
MARK_REF_PTR_T(::GlobalNamespace::OVRMeshRenderer);
MARK_REF_PTR_T(::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider);
MARK_VAL_T(::GlobalNamespace::__OVRMeshRenderer__MeshRendererData);
// Type: ::IOVRMeshRendererDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8910))
// CS Name: ::OVRMeshRenderer::IOVRMeshRendererDataProvider*
class CORDL_TYPE __OVRMeshRenderer__IOVRMeshRendererDataProvider {
public:
  // Declarations
  /// @brief Method GetMeshRendererData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__OVRMeshRenderer__MeshRendererData GetMeshRendererData();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRMeshRenderer__IOVRMeshRendererDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRMeshRenderer__IOVRMeshRendererDataProvider(__OVRMeshRenderer__IOVRMeshRendererDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRMeshRenderer__IOVRMeshRendererDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRMeshRenderer__IOVRMeshRendererDataProvider(__OVRMeshRenderer__IOVRMeshRendererDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::MeshRendererData
// SizeInfo { instance_size: 3, native_size: 12, calculated_instance_size: 3, calculated_native_size: 19, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8911))
// CS Name: ::OVRMeshRenderer::MeshRendererData
struct CORDL_TYPE __OVRMeshRenderer__MeshRendererData {
public:
  // Declarations
  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  /// @brief Method get_IsDataValid addr 0x263d240 size 0x8 virtual false final false
  inline bool get_IsDataValid();

  /// @brief Method set_IsDataValid addr 0x263d248 size 0xc virtual false final false
  inline void set_IsDataValid(bool value);

  /// @brief Method get_IsDataHighConfidence addr 0x263d254 size 0x8 virtual false final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method set_IsDataHighConfidence addr 0x263d25c size 0xc virtual false final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method get_ShouldUseSystemGestureMaterial addr 0x263d268 size 0x8 virtual false final false
  inline bool get_ShouldUseSystemGestureMaterial();

  /// @brief Method set_ShouldUseSystemGestureMaterial addr 0x263d270 size 0xc virtual false final false
  inline void set_ShouldUseSystemGestureMaterial(bool value);

  // Ctor Parameters [CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRMeshRenderer__MeshRendererData(bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField, bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMeshRenderer__MeshRendererData();

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x1, size: 0x1, def value: None
  bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x2, size: 0x1, def value: None
  bool _ShouldUseSystemGestureMaterial_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMeshRenderer__MeshRendererData, 0x3>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshRenderer__MeshRendererData, _IsDataValid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshRenderer__MeshRendererData, _IsDataHighConfidence_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshRenderer__MeshRendererData, _ShouldUseSystemGestureMaterial_k__BackingField) == 0x2, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ConfidenceBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8912))
// CS Name: ::OVRMeshRenderer::ConfidenceBehavior
struct CORDL_TYPE __OVRMeshRenderer__ConfidenceBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRMeshRenderer__ConfidenceBehavior_Unwrapped
  enum struct ____OVRMeshRenderer__ConfidenceBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ToggleRenderer = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRMeshRenderer__ConfidenceBehavior_Unwrapped() const noexcept {
    return static_cast<____OVRMeshRenderer__ConfidenceBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRMeshRenderer__ConfidenceBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMeshRenderer__ConfidenceBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior const None;

  /// @brief Field ToggleRenderer value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior const ToggleRenderer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SystemGestureBehavior
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8913))
// CS Name: ::OVRMeshRenderer::SystemGestureBehavior
struct CORDL_TYPE __OVRMeshRenderer__SystemGestureBehavior {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRMeshRenderer__SystemGestureBehavior_Unwrapped
  enum struct ____OVRMeshRenderer__SystemGestureBehavior_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SwapMaterial = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRMeshRenderer__SystemGestureBehavior_Unwrapped() const noexcept {
    return static_cast<____OVRMeshRenderer__SystemGestureBehavior_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRMeshRenderer__SystemGestureBehavior(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMeshRenderer__SystemGestureBehavior();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior const None;

  /// @brief Field SwapMaterial value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior const SwapMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRMeshRenderer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8912)), TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(8913))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8914))
// CS Name: ::OVRMeshRenderer*
class CORDL_TYPE OVRMeshRenderer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SystemGestureBehavior = ::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior;

  using ConfidenceBehavior = ::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior;

  using MeshRendererData = ::GlobalNamespace::__OVRMeshRenderer__MeshRendererData;

  using IOVRMeshRendererDataProvider = ::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider;

  /// @brief Field _dataProvider, offset 0x18, size 0x8
  __declspec(property(get = __get__dataProvider, put = __set__dataProvider))::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider* _dataProvider;

  /// @brief Field _ovrMesh, offset 0x20, size 0x8
  __declspec(property(get = __get__ovrMesh, put = __set__ovrMesh))::GlobalNamespace::OVRMesh* _ovrMesh;

  /// @brief Field _ovrSkeleton, offset 0x28, size 0x8
  __declspec(property(get = __get__ovrSkeleton, put = __set__ovrSkeleton))::GlobalNamespace::OVRSkeleton* _ovrSkeleton;

  /// @brief Field _confidenceBehavior, offset 0x30, size 0x4
  __declspec(property(get = __get__confidenceBehavior, put = __set__confidenceBehavior))::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior _confidenceBehavior;

  /// @brief Field _systemGestureBehavior, offset 0x34, size 0x4
  __declspec(property(get = __get__systemGestureBehavior, put = __set__systemGestureBehavior))::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior _systemGestureBehavior;

  /// @brief Field _systemGestureMaterial, offset 0x38, size 0x8
  __declspec(property(get = __get__systemGestureMaterial, put = __set__systemGestureMaterial))::UnityEngine::Material* _systemGestureMaterial;

  /// @brief Field _originalMaterial, offset 0x40, size 0x8
  __declspec(property(get = __get__originalMaterial, put = __set__originalMaterial))::UnityEngine::Material* _originalMaterial;

  /// @brief Field _skinnedMeshRenderer, offset 0x48, size 0x8
  __declspec(property(get = __get__skinnedMeshRenderer, put = __set__skinnedMeshRenderer))::UnityEngine::SkinnedMeshRenderer* _skinnedMeshRenderer;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __get__IsInitialized_k__BackingField, put = __set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __get__IsDataValid_k__BackingField, put = __set__IsDataValid_k__BackingField)) bool _IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x52, size 0x1
  __declspec(property(get = __get__IsDataHighConfidence_k__BackingField, put = __set__IsDataHighConfidence_k__BackingField)) bool _IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset 0x53, size 0x1
  __declspec(property(get = __get__ShouldUseSystemGestureMaterial_k__BackingField, put = __set__ShouldUseSystemGestureMaterial_k__BackingField)) bool _ShouldUseSystemGestureMaterial_k__BackingField;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_IsDataValid, put = set_IsDataValid)) bool IsDataValid;

  __declspec(property(get = get_IsDataHighConfidence, put = set_IsDataHighConfidence)) bool IsDataHighConfidence;

  __declspec(property(get = get_ShouldUseSystemGestureMaterial, put = set_ShouldUseSystemGestureMaterial)) bool ShouldUseSystemGestureMaterial;

  constexpr ::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider*& __get__dataProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider*> const& __get__dataProvider() const;

  constexpr void __set__dataProvider(::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider* value);

  constexpr ::GlobalNamespace::OVRMesh*& __get__ovrMesh();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRMesh*> const& __get__ovrMesh() const;

  constexpr void __set__ovrMesh(::GlobalNamespace::OVRMesh* value);

  constexpr ::GlobalNamespace::OVRSkeleton*& __get__ovrSkeleton();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeleton*> const& __get__ovrSkeleton() const;

  constexpr void __set__ovrSkeleton(::GlobalNamespace::OVRSkeleton* value);

  constexpr ::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior& __get__confidenceBehavior();

  constexpr ::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior const& __get__confidenceBehavior() const;

  constexpr void __set__confidenceBehavior(::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior value);

  constexpr ::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior& __get__systemGestureBehavior();

  constexpr ::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior const& __get__systemGestureBehavior() const;

  constexpr void __set__systemGestureBehavior(::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior value);

  constexpr ::UnityEngine::Material*& __get__systemGestureMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__systemGestureMaterial() const;

  constexpr void __set__systemGestureMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::Material*& __get__originalMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__originalMaterial() const;

  constexpr void __set__originalMaterial(::UnityEngine::Material* value);

  constexpr ::UnityEngine::SkinnedMeshRenderer*& __get__skinnedMeshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SkinnedMeshRenderer*> const& __get__skinnedMeshRenderer() const;

  constexpr void __set__skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* value);

  constexpr bool& __get__IsInitialized_k__BackingField();

  constexpr bool const& __get__IsInitialized_k__BackingField() const;

  constexpr void __set__IsInitialized_k__BackingField(bool value);

  constexpr bool& __get__IsDataValid_k__BackingField();

  constexpr bool const& __get__IsDataValid_k__BackingField() const;

  constexpr void __set__IsDataValid_k__BackingField(bool value);

  constexpr bool& __get__IsDataHighConfidence_k__BackingField();

  constexpr bool const& __get__IsDataHighConfidence_k__BackingField() const;

  constexpr void __set__IsDataHighConfidence_k__BackingField(bool value);

  constexpr bool& __get__ShouldUseSystemGestureMaterial_k__BackingField();

  constexpr bool const& __get__ShouldUseSystemGestureMaterial_k__BackingField() const;

  constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool value);

  /// @brief Method get_IsInitialized addr 0x263c810 size 0x8 virtual false final false
  inline bool get_IsInitialized();

  /// @brief Method set_IsInitialized addr 0x263c818 size 0xc virtual false final false
  inline void set_IsInitialized(bool value);

  /// @brief Method get_IsDataValid addr 0x263c824 size 0x8 virtual false final false
  inline bool get_IsDataValid();

  /// @brief Method set_IsDataValid addr 0x263c82c size 0xc virtual false final false
  inline void set_IsDataValid(bool value);

  /// @brief Method get_IsDataHighConfidence addr 0x263c838 size 0x8 virtual false final false
  inline bool get_IsDataHighConfidence();

  /// @brief Method set_IsDataHighConfidence addr 0x263c840 size 0xc virtual false final false
  inline void set_IsDataHighConfidence(bool value);

  /// @brief Method get_ShouldUseSystemGestureMaterial addr 0x263c84c size 0x8 virtual false final false
  inline bool get_ShouldUseSystemGestureMaterial();

  /// @brief Method set_ShouldUseSystemGestureMaterial addr 0x263c854 size 0xc virtual false final false
  inline void set_ShouldUseSystemGestureMaterial(bool value);

  /// @brief Method Awake addr 0x263c860 size 0x104 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x263c964 size 0x9c virtual false final false
  inline void Start();

  /// @brief Method ShouldInitialize addr 0x263ca00 size 0xf0 virtual false final false
  inline bool ShouldInitialize();

  /// @brief Method Initialize addr 0x263caf0 size 0x4a0 virtual false final false
  inline void Initialize();

  /// @brief Method Update addr 0x263cf90 size 0x2a0 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRMeshRenderer* New_ctor();

  /// @brief Method .ctor addr 0x263d230 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMeshRenderer(OVRMeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMeshRenderer(OVRMeshRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMeshRenderer();

public:
  /// @brief Field _dataProvider, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider* ____dataProvider;

  /// @brief Field _ovrMesh, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRMesh* ____ovrMesh;

  /// @brief Field _ovrSkeleton, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeleton* ____ovrSkeleton;

  /// @brief Field _confidenceBehavior, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior ____confidenceBehavior;

  /// @brief Field _systemGestureBehavior, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior ____systemGestureBehavior;

  /// @brief Field _systemGestureMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Material* ____systemGestureMaterial;

  /// @brief Field _originalMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Material* ____originalMaterial;

  /// @brief Field _skinnedMeshRenderer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::SkinnedMeshRenderer* ____skinnedMeshRenderer;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  /// @brief Field <IsDataValid>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____IsDataValid_k__BackingField;

  /// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x52, size: 0x1, def value: None
  bool ____IsDataHighConfidence_k__BackingField;

  /// @brief Field <ShouldUseSystemGestureMaterial>k__BackingField, offset: 0x53, size: 0x1, def value: None
  bool ____ShouldUseSystemGestureMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMeshRenderer, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____dataProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____ovrMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____ovrSkeleton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____confidenceBehavior) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____systemGestureBehavior) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____systemGestureMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____originalMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____skinnedMeshRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____IsInitialized_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____IsDataValid_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____IsDataHighConfidence_k__BackingField) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMeshRenderer, ____ShouldUseSystemGestureMaterial_k__BackingField) == 0x53, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshRenderer__ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshRenderer__SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
NEED_NO_BOX(::GlobalNamespace::OVRMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer*, "", "OVRMeshRenderer");
NEED_NO_BOX(::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshRenderer__IOVRMeshRendererDataProvider*, "", "OVRMeshRenderer/IOVRMeshRendererDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMeshRenderer__MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
