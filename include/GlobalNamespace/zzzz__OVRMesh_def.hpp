#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMesh)
namespace GlobalNamespace {
class OVRMesh_IOVRMeshDataProvider;
}
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
namespace GlobalNamespace {
class OVRPlugin_Mesh;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
namespace GlobalNamespace {
class OVRMesh;
}
namespace GlobalNamespace {
class OVRMesh_IOVRMeshDataProvider;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMesh_MeshType);
MARK_REF_PTR_T(::GlobalNamespace::OVRMesh);
MARK_REF_PTR_T(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMesh/IOVRMeshDataProvider
class CORDL_TYPE OVRMesh_IOVRMeshDataProvider {
public:
  // Declarations
  /// @brief Method GetMeshType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRMesh_MeshType GetMeshType();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMesh_IOVRMeshDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMesh_IOVRMeshDataProvider(OVRMesh_IOVRMeshDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7907 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMesh/MeshType
struct CORDL_TYPE OVRMesh_MeshType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRMesh_MeshType_Unwrapped
  enum struct __OVRMesh_MeshType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
    __E_XRHandLeft = static_cast<int32_t>(0x4),
    __E_XRHandRight = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRMesh_MeshType_Unwrapped() const noexcept {
    return static_cast<__OVRMesh_MeshType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMesh_MeshType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRMesh_MeshType(int32_t value__) noexcept;

  /// @brief Field HandLeft value: I32(0)
  static ::GlobalNamespace::OVRMesh_MeshType const HandLeft;

  /// @brief Field HandRight value: I32(1)
  static ::GlobalNamespace::OVRMesh_MeshType const HandRight;

  /// @brief Field None value: I32(-1)
  static ::GlobalNamespace::OVRMesh_MeshType const None;

  /// @brief Field XRHandLeft value: I32(4)
  static ::GlobalNamespace::OVRMesh_MeshType const XRHandLeft;

  /// @brief Field XRHandRight value: I32(5)
  static ::GlobalNamespace::OVRMesh_MeshType const XRHandRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7908 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMesh_MeshType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMesh_MeshType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRMesh::MeshType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMesh
class CORDL_TYPE OVRMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using IOVRMeshDataProvider = ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider;

  using MeshType = ::GlobalNamespace::OVRMesh_MeshType;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_Mesh)) ::UnityW<::UnityEngine::Mesh> Mesh;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field _dataProvider, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataProvider, put = __cordl_internal_set__dataProvider)) ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* _dataProvider;

  /// @brief Field _loadedMeshType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__loadedMeshType, put = __cordl_internal_set__loadedMeshType)) ::GlobalNamespace::OVRMesh_MeshType _loadedMeshType;

  /// @brief Field _mesh, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__meshType, put = __cordl_internal_set__meshType)) ::GlobalNamespace::OVRMesh_MeshType _meshType;

  /// @brief Method Awake, addr 0x5d5297c, size 0x110, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetMeshType, addr 0x5d5296c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMesh_MeshType GetMeshType();

  /// @brief Method Initialize, addr 0x5d52ab4, size 0xc0, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::OVRMesh_MeshType meshType);

  static inline ::GlobalNamespace::OVRMesh* New_ctor();

  /// @brief Method SetMeshType, addr 0x5d52974, size 0x8, virtual false, abstract: false, final false
  inline void SetMeshType(::GlobalNamespace::OVRMesh_MeshType type);

  /// @brief Method ShouldInitialize, addr 0x5d52a8c, size 0x28, virtual false, abstract: false, final false
  inline bool ShouldInitialize();

  /// @brief Method TransformOvrpMesh, addr 0x5d52b74, size 0xa58, virtual false, abstract: false, final false
  inline void TransformOvrpMesh(::GlobalNamespace::OVRPlugin_Mesh* ovrpMesh, ::UnityEngine::Mesh* mesh);

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* const& __cordl_internal_get__dataProvider() const;

  constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*& __cordl_internal_get__dataProvider();

  constexpr ::GlobalNamespace::OVRMesh_MeshType const& __cordl_internal_get__loadedMeshType() const;

  constexpr ::GlobalNamespace::OVRMesh_MeshType& __cordl_internal_get__loadedMeshType();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::GlobalNamespace::OVRMesh_MeshType const& __cordl_internal_get__meshType() const;

  constexpr ::GlobalNamespace::OVRMesh_MeshType& __cordl_internal_get__meshType();

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* value);

  constexpr void __cordl_internal_set__loadedMeshType(::GlobalNamespace::OVRMesh_MeshType value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshType(::GlobalNamespace::OVRMesh_MeshType value);

  /// @brief Method .ctor, addr 0x5d535cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsInitialized, addr 0x5d52954, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_Mesh, addr 0x5d52964, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_Mesh();

  /// @brief Method set_IsInitialized, addr 0x5d5295c, size 0x8, virtual false, abstract: false, final false
  inline void set_IsInitialized(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMesh(OVRMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMesh(OVRMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7909 };

  /// @brief Field _dataProvider, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* ____dataProvider;

  /// @brief Field _meshType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRMesh_MeshType ____meshType;

  /// @brief Field _loadedMeshType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::OVRMesh_MeshType ____loadedMeshType;

  /// @brief Field _mesh, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMesh, ____dataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____meshType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____loadedMeshType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____IsInitialized_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMesh, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMesh_MeshType, "", "OVRMesh/MeshType");
NEED_NO_BOX(::GlobalNamespace::OVRMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMesh*, "", "OVRMesh");
NEED_NO_BOX(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*, "", "OVRMesh/IOVRMeshDataProvider");
