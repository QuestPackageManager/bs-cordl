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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14368))
// CS Name: ::FlexyFollow*
class CORDL_TYPE FlexyFollow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _followObject, offset 0x18, size 0x8
  __declspec(property(get = __get__followObject, put = __set__followObject))::UnityEngine::GameObject* _followObject;

  /// @brief Field _followSpeed, offset 0x20, size 0x4
  __declspec(property(get = __get__followSpeed, put = __set__followSpeed)) float_t _followSpeed;

  /// @brief Field _offset, offset 0x24, size 0xc
  __declspec(property(get = __get__offset, put = __set__offset))::UnityEngine::Vector3 _offset;

  /// @brief Field _fixedXOffset, offset 0x30, size 0x1
  __declspec(property(get = __get__fixedXOffset, put = __set__fixedXOffset)) bool _fixedXOffset;

  /// @brief Field _fixedYOffset, offset 0x31, size 0x1
  __declspec(property(get = __get__fixedYOffset, put = __set__fixedYOffset)) bool _fixedYOffset;

  /// @brief Field _fixedZOffset, offset 0x32, size 0x1
  __declspec(property(get = __get__fixedZOffset, put = __set__fixedZOffset)) bool _fixedZOffset;

  /// @brief Field _useLocalPosition, offset 0x33, size 0x1
  __declspec(property(get = __get__useLocalPosition, put = __set__useLocalPosition)) bool _useLocalPosition;

  /// @brief Field _instant, offset 0x34, size 0x1
  __declspec(property(get = __get__instant, put = __set__instant)) bool _instant;

  /// @brief Field _followTransform, offset 0x38, size 0x8
  __declspec(property(get = __get__followTransform, put = __set__followTransform))::UnityEngine::Transform* _followTransform;

  /// @brief Field _transform, offset 0x40, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::UnityEngine::GameObject*& __get__followObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__followObject() const;

  constexpr void __set__followObject(::UnityEngine::GameObject* value);

  constexpr float_t& __get__followSpeed();

  constexpr float_t const& __get__followSpeed() const;

  constexpr void __set__followSpeed(float_t value);

  constexpr ::UnityEngine::Vector3& __get__offset();

  constexpr ::UnityEngine::Vector3 const& __get__offset() const;

  constexpr void __set__offset(::UnityEngine::Vector3 value);

  constexpr bool& __get__fixedXOffset();

  constexpr bool const& __get__fixedXOffset() const;

  constexpr void __set__fixedXOffset(bool value);

  constexpr bool& __get__fixedYOffset();

  constexpr bool const& __get__fixedYOffset() const;

  constexpr void __set__fixedYOffset(bool value);

  constexpr bool& __get__fixedZOffset();

  constexpr bool const& __get__fixedZOffset() const;

  constexpr void __set__fixedZOffset(bool value);

  constexpr bool& __get__useLocalPosition();

  constexpr bool const& __get__useLocalPosition() const;

  constexpr void __set__useLocalPosition(bool value);

  constexpr bool& __get__instant();

  constexpr bool const& __get__instant() const;

  constexpr void __set__instant(bool value);

  constexpr ::UnityEngine::Transform*& __get__followTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__followTransform() const;

  constexpr void __set__followTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Start, addr 0x20f2cec, size 0x84, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method LateUpdate, addr 0x20f2d70, size 0x128, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::FlexyFollow* New_ctor();

  /// @brief Method .ctor, addr 0x20f2e98, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FlexyFollow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlexyFollow(FlexyFollow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlexyFollow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlexyFollow(FlexyFollow const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlexyFollow();

public:
  /// @brief Field _followObject, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____followObject;

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
  ::UnityEngine::Transform* ____followTransform;

  /// @brief Field _transform, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

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
