#pragma once
// IWYU pragma private; include "UnityEngine/XR/MeshGenerationResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__MeshGenerationStatus_def.hpp"
#include "UnityEngine/XR/zzzz__MeshId_def.hpp"
#include "UnityEngine/XR/zzzz__MeshVertexAttributes_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerationResult)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct MeshGenerationStatus;
}
namespace UnityEngine::XR {
struct MeshId;
}
namespace UnityEngine::XR {
struct MeshVertexAttributes;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshGenerationResult);
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.MeshGenerationStatus, UnityEngine.XR.MeshId, UnityEngine.XR.MeshVertexAttributes
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.MeshGenerationResult
struct CORDL_TYPE MeshGenerationResult {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::UnityEngine::XR::MeshVertexAttributes Attributes;

  __declspec(property(get = get_Mesh)) ::UnityW<::UnityEngine::Mesh> Mesh;

  __declspec(property(get = get_MeshCollider)) ::UnityW<::UnityEngine::MeshCollider> MeshCollider;

  __declspec(property(get = get_MeshId)) ::UnityEngine::XR::MeshId MeshId;

  __declspec(property(get = get_Position)) ::UnityEngine::Vector3 Position;

  __declspec(property(get = get_Rotation)) ::UnityEngine::Quaternion Rotation;

  __declspec(property(get = get_Scale)) ::UnityEngine::Vector3 Scale;

  __declspec(property(get = get_Status)) ::UnityEngine::XR::MeshGenerationStatus Status;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>*();

  /// @brief Method Equals, addr 0x6c6b05c, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6c6b0f0, size 0x16c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::MeshGenerationResult other);

  /// @brief Method GetHashCode, addr 0x6c6b25c, size 0x1c4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_Attributes, addr 0x6c6b030, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::MeshVertexAttributes get_Attributes();

  /// @brief Method get_Mesh, addr 0x6c6b018, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_Mesh();

  /// @brief Method get_MeshCollider, addr 0x6c6b020, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::MeshCollider> get_MeshCollider();

  /// @brief Method get_MeshId, addr 0x6c6b00c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::MeshId get_MeshId();

  /// @brief Method get_Position, addr 0x6c6b038, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Position();

  /// @brief Method get_Rotation, addr 0x6c6b044, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_Rotation();

  /// @brief Method get_Scale, addr 0x6c6b050, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Scale();

  /// @brief Method get_Status, addr 0x6c6b028, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::MeshGenerationStatus get_Status();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::MeshGenerationResult>* i___System__IEquatable_1___UnityEngine__XR__MeshGenerationResult_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationResult();

  // Ctor Parameters [CppParam { name: "_MeshId_k__BackingField", ty: "::UnityEngine::XR::MeshId", modifiers: "", def_value: None }, CppParam { name: "_Mesh_k__BackingField", ty:
  // "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "_MeshCollider_k__BackingField", ty: "::UnityW<::UnityEngine::MeshCollider>", modifiers: "", def_value: None },
  // CppParam { name: "_Status_k__BackingField", ty: "::UnityEngine::XR::MeshGenerationStatus", modifiers: "", def_value: None }, CppParam { name: "_Attributes_k__BackingField", ty:
  // "::UnityEngine::XR::MeshVertexAttributes", modifiers: "", def_value: None }, CppParam { name: "_Timestamp_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "_Scale_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr MeshGenerationResult(::UnityEngine::XR::MeshId _MeshId_k__BackingField, ::UnityW<::UnityEngine::Mesh> _Mesh_k__BackingField,
                                 ::UnityW<::UnityEngine::MeshCollider> _MeshCollider_k__BackingField, ::UnityEngine::XR::MeshGenerationStatus _Status_k__BackingField,
                                 ::UnityEngine::XR::MeshVertexAttributes _Attributes_k__BackingField, uint64_t _Timestamp_k__BackingField, ::UnityEngine::Vector3 _Position_k__BackingField,
                                 ::UnityEngine::Quaternion _Rotation_k__BackingField, ::UnityEngine::Vector3 _Scale_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21965 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <MeshId>k__BackingField, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::XR::MeshId _MeshId_k__BackingField;

  /// @brief Field <Mesh>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> _Mesh_k__BackingField;

  /// @brief Field <MeshCollider>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshCollider> _MeshCollider_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::MeshGenerationStatus _Status_k__BackingField;

  /// @brief Field <Attributes>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::XR::MeshVertexAttributes _Attributes_k__BackingField;

  /// @brief Field <Timestamp>k__BackingField, offset: 0x28, size: 0x8, def value: None
  uint64_t _Timestamp_k__BackingField;

  /// @brief Field <Position>k__BackingField, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 _Position_k__BackingField;

  /// @brief Field <Rotation>k__BackingField, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion _Rotation_k__BackingField;

  /// @brief Field <Scale>k__BackingField, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 _Scale_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _MeshId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _Mesh_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _MeshCollider_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _Status_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _Attributes_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _Timestamp_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _Position_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _Rotation_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshGenerationResult, _Scale_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshGenerationResult, 0x58>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshGenerationResult, "UnityEngine.XR", "MeshGenerationResult");
