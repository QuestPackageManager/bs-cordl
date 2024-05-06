#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimationNodeMorphTargetHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRGLTFAnimationNodeMorphTargetHandler)
namespace GlobalNamespace {
struct OVRMeshData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAnimationNodeMorphTargetHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler);
// Type: ::OVRGLTFAnimationNodeMorphTargetHandler
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRGLTFAnimationNodeMorphTargetHandler*
class CORDL_TYPE OVRGLTFAnimationNodeMorphTargetHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MeshData, put = set_MeshData))::GlobalNamespace::OVRMeshData MeshData;

  /// @brief Field Weights, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Weights, put = __cordl_internal_set_Weights))::ArrayW<float_t, ::Array<float_t>*> Weights;

  /// @brief Field <MeshData>k__BackingField, offset 0x10, size 0x48
  __declspec(property(get = __cordl_internal_get__MeshData_k__BackingField, put = __cordl_internal_set__MeshData_k__BackingField))::GlobalNamespace::OVRMeshData _MeshData_k__BackingField;

  /// @brief Field modified, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_modified, put = __cordl_internal_set_modified)) bool modified;

  /// @brief Method MarkModified, addr 0x2af80d8, size 0xc, virtual false, abstract: false, final false
  inline void MarkModified();

  static inline ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* New_ctor(::GlobalNamespace::OVRMeshData meshData);

  /// @brief Method Update, addr 0x2af7d54, size 0x384, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_Weights() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_Weights();

  constexpr ::GlobalNamespace::OVRMeshData const& __cordl_internal_get__MeshData_k__BackingField() const;

  constexpr ::GlobalNamespace::OVRMeshData& __cordl_internal_get__MeshData_k__BackingField();

  constexpr bool const& __cordl_internal_get_modified() const;

  constexpr bool& __cordl_internal_get_modified();

  constexpr void __cordl_internal_set_Weights(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__MeshData_k__BackingField(::GlobalNamespace::OVRMeshData value);

  constexpr void __cordl_internal_set_modified(bool value);

  /// @brief Method .ctor, addr 0x2af7d20, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRMeshData meshData);

  /// @brief Method get_MeshData, addr 0x2af7cf8, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRMeshData get_MeshData();

  /// @brief Method set_MeshData, addr 0x2af7d08, size 0x18, virtual false, abstract: false, final false
  inline void set_MeshData(::GlobalNamespace::OVRMeshData value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFAnimationNodeMorphTargetHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimationNodeMorphTargetHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGLTFAnimationNodeMorphTargetHandler(OVRGLTFAnimationNodeMorphTargetHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAnimationNodeMorphTargetHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGLTFAnimationNodeMorphTargetHandler(OVRGLTFAnimationNodeMorphTargetHandler const&) = delete;

  /// @brief Field <MeshData>k__BackingField, offset: 0x10, size: 0x48, def value: None
  ::GlobalNamespace::OVRMeshData ____MeshData_k__BackingField;

  /// @brief Field Weights, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___Weights;

  /// @brief Field modified, offset: 0x60, size: 0x1, def value: None
  bool ___modified;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, ____MeshData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, ___Weights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler, ___modified) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*, "", "OVRGLTFAnimationNodeMorphTargetHandler");
