#pragma once
// IWYU pragma private; include "GlobalNamespace/PoseObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PoseObject)
namespace GlobalNamespace {
class PoseObjectIdSO;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PoseObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PoseObject);
// Type: ::PoseObject
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PoseObject*
class CORDL_TYPE PoseObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field _poseObjectId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__poseObjectId, put = __cordl_internal_set__poseObjectId)) ::UnityW<::GlobalNamespace::PoseObjectIdSO> _poseObjectId;

  /// @brief Field _transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_objectTransform)) ::UnityW<::UnityEngine::Transform> objectTransform;

  static inline ::GlobalNamespace::PoseObject* New_ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId);

  constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO> const& __cordl_internal_get__poseObjectId() const;

  constexpr ::UnityW<::GlobalNamespace::PoseObjectIdSO>& __cordl_internal_get__poseObjectId();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__poseObjectId(::UnityW<::GlobalNamespace::PoseObjectIdSO> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3aa6f2c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId);

  /// @brief Method get_id, addr 0x3aa8dfc, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_objectTransform, addr 0x3aa8df4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_objectTransform();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoseObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseObject(PoseObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseObject(PoseObject const&) = delete;

  /// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  /// @brief Field _poseObjectId, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PoseObjectIdSO> ____poseObjectId;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5070 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PoseObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseObject, ____transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseObject, ____poseObjectId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PoseObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseObject*, "", "PoseObject");
