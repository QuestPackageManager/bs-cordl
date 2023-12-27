#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMesh_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMesh)
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
class __OVRPlugin__Mesh;
}
namespace GlobalNamespace {
class __OVRMesh__IOVRMeshDataProvider;
}
namespace GlobalNamespace {
struct __OVRMesh__MeshType;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8121))
// CS Name: ::OVRMesh::IOVRMeshDataProvider*
class CORDL_TYPE __OVRMesh__IOVRMeshDataProvider {
public:
  // Declarations
  /// @brief Method GetMeshType addr 0x0 size 0xffffffffffffffff virtual true final false
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8122))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRMesh__MeshType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRMesh__MeshType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRMesh__MeshType const None;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRMesh__MeshType const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRMesh__MeshType const HandRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMesh__MeshType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRMesh
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8122)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8123))
// CS Name: ::OVRMesh*
class CORDL_TYPE OVRMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MeshType = ::GlobalNamespace::__OVRMesh__MeshType;

  using IOVRMeshDataProvider = ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider;

  /// @brief Field _dataProvider, offset 0x18, size 0x8
  __declspec(property(get = __get__dataProvider, put = __set__dataProvider))::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* _dataProvider;

  /// @brief Field _meshType, offset 0x20, size 0x4
  __declspec(property(get = __get__meshType, put = __set__meshType))::GlobalNamespace::__OVRMesh__MeshType _meshType;

  /// @brief Field _mesh, offset 0x28, size 0x8
  __declspec(property(get = __get__mesh, put = __set__mesh))::UnityEngine::Mesh* _mesh;

  /// @brief Field <IsInitialized>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__IsInitialized_k__BackingField, put = __set__IsInitialized_k__BackingField)) bool _IsInitialized_k__BackingField;

  __declspec(property(get = get_IsInitialized, put = set_IsInitialized)) bool IsInitialized;

  __declspec(property(get = get_Mesh))::UnityEngine::Mesh* Mesh;

  constexpr ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*& __get__dataProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*> const& __get__dataProvider() const;

  constexpr void __set__dataProvider(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* value);

  constexpr ::GlobalNamespace::__OVRMesh__MeshType& __get__meshType();

  constexpr ::GlobalNamespace::__OVRMesh__MeshType const& __get__meshType() const;

  constexpr void __set__meshType(::GlobalNamespace::__OVRMesh__MeshType value);

  constexpr ::UnityEngine::Mesh*& __get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get__mesh() const;

  constexpr void __set__mesh(::UnityEngine::Mesh* value);

  constexpr bool& __get__IsInitialized_k__BackingField();

  constexpr bool const& __get__IsInitialized_k__BackingField() const;

  constexpr void __set__IsInitialized_k__BackingField(bool value);

  /// @brief Method get_IsInitialized addr 0x27b0710 size 0x8 virtual false final false
  inline bool get_IsInitialized();

  /// @brief Method set_IsInitialized addr 0x27b0718 size 0xc virtual false final false
  inline void set_IsInitialized(bool value);

  /// @brief Method get_Mesh addr 0x27b0724 size 0x8 virtual false final false
  inline ::UnityEngine::Mesh* get_Mesh();

  /// @brief Method SetMeshType addr 0x27b072c size 0x8 virtual false final false
  inline void SetMeshType(::GlobalNamespace::__OVRMesh__MeshType type);

  /// @brief Method Awake addr 0x27b0734 size 0xf4 virtual false final false
  inline void Awake();

  /// @brief Method ShouldInitialize addr 0x27b0828 size 0x20 virtual false final false
  inline bool ShouldInitialize();

  /// @brief Method Initialize addr 0x27b0848 size 0xbc virtual false final false
  inline void Initialize(::GlobalNamespace::__OVRMesh__MeshType meshType);

  /// @brief Method TransformOvrpMesh addr 0x27b0904 size 0xab4 virtual false final false
  inline void TransformOvrpMesh(::GlobalNamespace::__OVRPlugin__Mesh* ovrpMesh, ::UnityEngine::Mesh* mesh);

  static inline ::GlobalNamespace::OVRMesh* New_ctor();

  /// @brief Method .ctor addr 0x27b13b8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMesh(OVRMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMesh(OVRMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMesh();

public:
  /// @brief Field _dataProvider, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider* ____dataProvider;

  /// @brief Field _meshType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRMesh__MeshType ____meshType;

  /// @brief Field _mesh, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Mesh* ____mesh;

  /// @brief Field <IsInitialized>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____IsInitialized_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMesh, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMesh__MeshType, "", "OVRMesh/MeshType");
NEED_NO_BOX(::GlobalNamespace::OVRMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMesh*, "", "OVRMesh");
NEED_NO_BOX(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMesh__IOVRMeshDataProvider*, "", "OVRMesh/IOVRMeshDataProvider");
