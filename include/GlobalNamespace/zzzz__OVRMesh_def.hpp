#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMesh)
namespace GlobalNamespace {
class __OVRMesh__IOVRMeshDataProvider;
}
namespace GlobalNamespace {
struct __OVRMesh__MeshType;
}
namespace GlobalNamespace {
class __OVRPlugin__Mesh;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRMesh__MeshType;
}
namespace GlobalNamespace {
class OVRMesh;
}
namespace GlobalNamespace {
class __OVRMesh__IOVRMeshDataProvider;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRMesh__MeshType);
MARK_REF_PTR_T(::GlobalNamespace::OVRMesh);
MARK_REF_PTR_T(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider);
// Type: ::IOVRMeshDataProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMesh::IOVRMeshDataProvider*
class CORDL_TYPE __OVRMesh__IOVRMeshDataProvider {
public:
  // Declarations
  /// @brief Method GetMeshType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__OVRMesh__MeshType GetMeshType();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRMesh__IOVRMeshDataProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRMesh__IOVRMeshDataProvider(__OVRMesh__IOVRMeshDataProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRMesh__IOVRMeshDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRMesh__IOVRMeshDataProvider(__OVRMesh__IOVRMeshDataProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::MeshType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRMesh::MeshType
struct CORDL_TYPE __OVRMesh__MeshType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRMesh__MeshType_Unwrapped
  enum struct ____OVRMesh__MeshType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRMesh__MeshType_Unwrapped() const noexcept {
    return static_cast<____OVRMesh__MeshType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMesh__MeshType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRMesh__MeshType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRMesh__MeshType const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRMesh__MeshType const HandRight;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRMesh__MeshType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMesh__MeshType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRMesh__MeshType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRMesh
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMesh*
class CORDL_TYPE OVRMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using IOVRMeshDataProvider = ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider;

  using MeshType = ::GlobalNamespace::__OVRMesh__MeshType;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_Mesh))::UnityW<::UnityEngine::Mesh> Mesh;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__IsInitialized_k__BackingField, put = __cordl_internal_set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  /// @brief Field _dataProvider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dataProvider, put = __cordl_internal_set__dataProvider))::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* _dataProvider;

  /// @brief Field _mesh, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh))::UnityW<::UnityEngine::Mesh> _mesh;

  /// @brief Field _meshType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__meshType, put = __cordl_internal_set__meshType))::GlobalNamespace::__OVRMesh__MeshType _meshType;

  /// @brief Method Awake, addr 0x2a88e5c, size 0xf4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Initialize, addr 0x2a88f70, size 0xbc, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::__OVRMesh__MeshType meshType);

  static inline ::GlobalNamespace::OVRMesh* New_ctor();

  /// @brief Method SetMeshType, addr 0x2a88e54, size 0x8, virtual false, abstract: false, final false
  inline void SetMeshType(::GlobalNamespace::__OVRMesh__MeshType type);

  /// @brief Method ShouldInitialize, addr 0x2a88f50, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldInitialize();

  /// @brief Method TransformOvrpMesh, addr 0x2a8902c, size 0xab4, virtual false, abstract: false, final false
  inline void TransformOvrpMesh(::GlobalNamespace::__OVRPlugin__Mesh* ovrpMesh, ::UnityEngine::Mesh* mesh);

  constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField();

  constexpr ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*& __cordl_internal_get__dataProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*> const& __cordl_internal_get__dataProvider() const;

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh();

  constexpr ::GlobalNamespace::__OVRMesh__MeshType const& __cordl_internal_get__meshType() const;

  constexpr ::GlobalNamespace::__OVRMesh__MeshType& __cordl_internal_get__meshType();

  constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* value);

  constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__meshType(::GlobalNamespace::__OVRMesh__MeshType value);

  /// @brief Method .ctor, addr 0x2a89ae0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsInitialized, addr 0x2a88e38, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInitialized();

  /// @brief Method get_Mesh, addr 0x2a88e4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_Mesh();

  /// @brief Method set_IsInitialized, addr 0x2a88e40, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _dataProvider, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* ____dataProvider;

  /// @brief Field _meshType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRMesh__MeshType ____meshType;

  /// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____mesh;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMesh, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____dataProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____meshType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____mesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____IsInitialized_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMesh__MeshType, "", "OVRMesh/MeshType");
NEED_NO_BOX(::GlobalNamespace::OVRMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMesh*, "", "OVRMesh");
NEED_NO_BOX(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*, "", "OVRMesh/IOVRMeshDataProvider");
