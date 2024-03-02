#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BakerTransform)
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class BakerTransform;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::BakerTransform);
// Type: RootMotion::BakerTransform
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::BakerTransform*
class CORDL_TYPE BakerTransform : public ::System::Object {
public:
  // Declarations
  /// @brief Field isRootNode, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isRootNode, put = __cordl_internal_set_isRootNode)) bool isRootNode;

  /// @brief Field posX, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_posX, put = __cordl_internal_set_posX))::UnityEngine::AnimationCurve* posX;

  /// @brief Field posY, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_posY, put = __cordl_internal_set_posY))::UnityEngine::AnimationCurve* posY;

  /// @brief Field posZ, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_posZ, put = __cordl_internal_set_posZ))::UnityEngine::AnimationCurve* posZ;

  /// @brief Field recordPosition, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_recordPosition, put = __cordl_internal_set_recordPosition)) bool recordPosition;

  /// @brief Field relativePath, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_relativePath, put = __cordl_internal_set_relativePath))::StringW relativePath;

  /// @brief Field relativePosition, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_relativePosition, put = __cordl_internal_set_relativePosition))::UnityEngine::Vector3 relativePosition;

  /// @brief Field relativeRotation, offset 0x6c, size 0x10
  __declspec(property(get = __cordl_internal_get_relativeRotation, put = __cordl_internal_set_relativeRotation))::UnityEngine::Quaternion relativeRotation;

  /// @brief Field rotW, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_rotW, put = __cordl_internal_set_rotW))::UnityEngine::AnimationCurve* rotW;

  /// @brief Field rotX, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rotX, put = __cordl_internal_set_rotX))::UnityEngine::AnimationCurve* rotX;

  /// @brief Field rotY, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rotY, put = __cordl_internal_set_rotY))::UnityEngine::AnimationCurve* rotY;

  /// @brief Field rotZ, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rotZ, put = __cordl_internal_set_rotZ))::UnityEngine::AnimationCurve* rotZ;

  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Method AddLoopFrame, addr 0x130d538, size 0x1f8, virtual false, abstract: false, final false
  inline void AddLoopFrame(float_t time);

  /// @brief Method AddRootMotionCurves, addr 0x13106ac, size 0x288, virtual false, abstract: false, final false
  inline void AddRootMotionCurves(ByRef<::UnityEngine::AnimationClip*> clip);

  static inline ::RootMotion::BakerTransform* New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* root, bool recordPosition, bool isRootNode);

  /// @brief Method ReduceKeyframes, addr 0x1310934, size 0x68, virtual false, abstract: false, final false
  inline void ReduceKeyframes(float_t maxError);

  /// @brief Method Reset, addr 0x130d3b0, size 0x108, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetCurves, addr 0x130d794, size 0x2b4, virtual false, abstract: false, final false
  inline void SetCurves(ByRef<::UnityEngine::AnimationClip*> clip);

  /// @brief Method SetKeyframes, addr 0x130dab4, size 0x1f4, virtual false, abstract: false, final false
  inline void SetKeyframes(float_t time);

  /// @brief Method SetRelativeSpace, addr 0x130d4b8, size 0x14, virtual false, abstract: false, final false
  inline void SetRelativeSpace(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  constexpr bool const& __cordl_internal_get_isRootNode() const;

  constexpr bool& __cordl_internal_get_isRootNode();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_posX();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_posX() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_posY();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_posY() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_posZ();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_posZ() const;

  constexpr bool const& __cordl_internal_get_recordPosition() const;

  constexpr bool& __cordl_internal_get_recordPosition();

  constexpr ::StringW const& __cordl_internal_get_relativePath() const;

  constexpr ::StringW& __cordl_internal_get_relativePath();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_relativePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_relativePosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_relativeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_relativeRotation();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotW();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotW() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotX();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotX() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotY();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotY() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotZ();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotZ() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr void __cordl_internal_set_isRootNode(bool value);

  constexpr void __cordl_internal_set_posX(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_posY(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_posZ(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_recordPosition(bool value);

  constexpr void __cordl_internal_set_relativePath(::StringW value);

  constexpr void __cordl_internal_set_relativePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_relativeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_rotW(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_rotX(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_rotY(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_rotZ(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x130d244, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* root, bool recordPosition, bool isRootNode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakerTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakerTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakerTransform(BakerTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakerTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakerTransform(BakerTransform const&) = delete;

  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field posX, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___posX;

  /// @brief Field posY, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___posY;

  /// @brief Field posZ, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___posZ;

  /// @brief Field rotX, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotX;

  /// @brief Field rotY, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotY;

  /// @brief Field rotZ, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotZ;

  /// @brief Field rotW, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotW;

  /// @brief Field relativePath, offset: 0x50, size: 0x8, def value: None
  ::StringW ___relativePath;

  /// @brief Field recordPosition, offset: 0x58, size: 0x1, def value: None
  bool ___recordPosition;

  /// @brief Field relativePosition, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___relativePosition;

  /// @brief Field isRootNode, offset: 0x68, size: 0x1, def value: None
  bool ___isRootNode;

  /// @brief Field relativeRotation, offset: 0x6c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___relativeRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BakerTransform, 0x80>, "Size mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___posX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___posY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___posZ) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___rotX) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___rotY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___rotZ) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___rotW) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___relativePath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___recordPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___relativePosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___isRootNode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerTransform, ___relativeRotation) == 0x6c, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::BakerTransform);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerTransform*, "RootMotion", "BakerTransform");
