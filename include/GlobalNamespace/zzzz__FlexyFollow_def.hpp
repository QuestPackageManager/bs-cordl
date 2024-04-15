#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlexyFollow)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FlexyFollow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlexyFollow);
// Type: ::FlexyFollow
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlexyFollow*
class CORDL_TYPE FlexyFollow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fixedXOffset, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__fixedXOffset, put = __cordl_internal_set__fixedXOffset)) bool _fixedXOffset;

  /// @brief Field _fixedYOffset, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__fixedYOffset, put = __cordl_internal_set__fixedYOffset)) bool _fixedYOffset;

  /// @brief Field _fixedZOffset, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get__fixedZOffset, put = __cordl_internal_set__fixedZOffset)) bool _fixedZOffset;

  /// @brief Field _followObject, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__followObject, put = __cordl_internal_set__followObject))::UnityW<::UnityEngine::GameObject> _followObject;

  /// @brief Field _followSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__followSpeed, put = __cordl_internal_set__followSpeed)) float_t _followSpeed;

  /// @brief Field _followTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__followTransform, put = __cordl_internal_set__followTransform))::UnityW<::UnityEngine::Transform> _followTransform;

  /// @brief Field _instant, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__instant, put = __cordl_internal_set__instant)) bool _instant;

  /// @brief Field _offset, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset))::UnityEngine::Vector3 _offset;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _useLocalPosition, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get__useLocalPosition, put = __cordl_internal_set__useLocalPosition)) bool _useLocalPosition;

  /// @brief Method LateUpdate, addr 0x23ddd74, size 0x128, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::FlexyFollow* New_ctor();

  /// @brief Method Start, addr 0x23ddcf0, size 0x84, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__fixedXOffset() const;

  constexpr bool& __cordl_internal_get__fixedXOffset();

  constexpr bool const& __cordl_internal_get__fixedYOffset() const;

  constexpr bool& __cordl_internal_get__fixedYOffset();

  constexpr bool const& __cordl_internal_get__fixedZOffset() const;

  constexpr bool& __cordl_internal_get__fixedZOffset();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__followObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__followObject();

  constexpr float_t const& __cordl_internal_get__followSpeed() const;

  constexpr float_t& __cordl_internal_get__followSpeed();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__followTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__followTransform();

  constexpr bool const& __cordl_internal_get__instant() const;

  constexpr bool& __cordl_internal_get__instant();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr bool const& __cordl_internal_get__useLocalPosition() const;

  constexpr bool& __cordl_internal_get__useLocalPosition();

  constexpr void __cordl_internal_set__fixedXOffset(bool value);

  constexpr void __cordl_internal_set__fixedYOffset(bool value);

  constexpr void __cordl_internal_set__fixedZOffset(bool value);

  constexpr void __cordl_internal_set__followObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__followSpeed(float_t value);

  constexpr void __cordl_internal_set__followTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__instant(bool value);

  constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__useLocalPosition(bool value);

  /// @brief Method .ctor, addr 0x23dde9c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlexyFollow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlexyFollow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlexyFollow(FlexyFollow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlexyFollow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlexyFollow(FlexyFollow const&) = delete;

  /// @brief Field _followObject, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____followObject;

  /// @brief Field _followSpeed, offset: 0x20, size: 0x4, def value: None
  float_t ____followSpeed;

  /// @brief Field _offset, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____offset;

  /// @brief Field _fixedXOffset, offset: 0x30, size: 0x1, def value: None
  bool ____fixedXOffset;

  /// @brief Field _fixedYOffset, offset: 0x31, size: 0x1, def value: None
  bool ____fixedYOffset;

  /// @brief Field _fixedZOffset, offset: 0x32, size: 0x1, def value: None
  bool ____fixedZOffset;

  /// @brief Field _useLocalPosition, offset: 0x33, size: 0x1, def value: None
  bool ____useLocalPosition;

  /// @brief Field _instant, offset: 0x34, size: 0x1, def value: None
  bool ____instant;

  /// @brief Field _followTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____followTransform;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlexyFollow, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____followObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____followSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____offset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____fixedXOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____fixedYOffset) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____fixedZOffset) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____useLocalPosition) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____instant) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____followTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlexyFollow, ____transform) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlexyFollow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlexyFollow*, "", "FlexyFollow");
