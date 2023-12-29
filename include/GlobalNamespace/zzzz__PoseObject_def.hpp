#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6018))
// CS Name: ::PoseObject*
class CORDL_TYPE PoseObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field _transform, offset 0x10, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  /// @brief Field _poseObjectId, offset 0x18, size 0x8
  __declspec(property(get = __get__poseObjectId, put = __set__poseObjectId))::GlobalNamespace::PoseObjectIdSO* _poseObjectId;

  __declspec(property(get = get_objectTransform))::UnityEngine::Transform* objectTransform;

  __declspec(property(get = get_id))::StringW id;

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::PoseObjectIdSO*& __get__poseObjectId();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PoseObjectIdSO*> const& __get__poseObjectId() const;

  constexpr void __set__poseObjectId(::GlobalNamespace::PoseObjectIdSO* value);

  /// @brief Method get_objectTransform addr 0x21b81dc size 0x8 virtual false final false
  inline ::UnityEngine::Transform* get_objectTransform();

  /// @brief Method get_id addr 0x21b81e4 size 0x1c virtual false final false
  inline ::StringW get_id();

  static inline ::GlobalNamespace::PoseObject* New_ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId);

  /// @brief Method .ctor addr 0x21b6360 size 0x2c virtual false final false
  inline void _ctor(::UnityEngine::Transform* transform, ::GlobalNamespace::PoseObjectIdSO* poseObjectId);

  // Ctor Parameters [CppParam { name: "", ty: "PoseObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseObject(PoseObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseObject(PoseObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseObject();

public:
  /// @brief Field _transform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  /// @brief Field _poseObjectId, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PoseObjectIdSO* ____poseObjectId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PoseObject, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseObject, ____transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PoseObject, ____poseObjectId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PoseObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseObject*, "", "PoseObject");
