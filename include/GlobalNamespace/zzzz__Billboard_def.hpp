#pragma once
// IWYU pragma private; include "GlobalNamespace/Billboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Billboard)
namespace GlobalNamespace {
struct Billboard_RotationMode;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct Billboard_RotationMode;
}
namespace GlobalNamespace {
class Billboard;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Billboard_RotationMode);
MARK_REF_PTR_T(::GlobalNamespace::Billboard);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: Billboard/RotationMode
struct CORDL_TYPE Billboard_RotationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Billboard_RotationMode_Unwrapped
  enum struct __Billboard_RotationMode_Unwrapped : int32_t {
    __E_AllAxis = static_cast<int32_t>(0x0),
    __E_XAxis = static_cast<int32_t>(0x1),
    __E_YAxis = static_cast<int32_t>(0x2),
    __E_ZAxis = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Billboard_RotationMode_Unwrapped() const noexcept {
    return static_cast<__Billboard_RotationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Billboard_RotationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Billboard_RotationMode(int32_t value__) noexcept;

  /// @brief Field AllAxis value: I32(0)
  static ::GlobalNamespace::Billboard_RotationMode const AllAxis;

  /// @brief Field XAxis value: I32(1)
  static ::GlobalNamespace::Billboard_RotationMode const XAxis;

  /// @brief Field YAxis value: I32(2)
  static ::GlobalNamespace::Billboard_RotationMode const YAxis;

  /// @brief Field ZAxis value: I32(3)
  static ::GlobalNamespace::Billboard_RotationMode const ZAxis;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16410 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Billboard_RotationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Billboard_RotationMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Billboard::RotationMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Billboard
class CORDL_TYPE Billboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RotationMode = ::GlobalNamespace::Billboard_RotationMode;

  /// @brief Field _flipDirection, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__flipDirection, put = __cordl_internal_set__flipDirection)) bool _flipDirection;

  /// @brief Field _rotationMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationMode, put = __cordl_internal_set__rotationMode)) ::GlobalNamespace::Billboard_RotationMode _rotationMode;

  /// @brief Field _transform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Awake, addr 0x39cef14, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::Billboard* New_ctor();

  /// @brief Method OnWillRenderObject, addr 0x39cef30, size 0xd0, virtual false, abstract: false, final false
  inline void OnWillRenderObject();

  constexpr bool const& __cordl_internal_get__flipDirection() const;

  constexpr bool& __cordl_internal_get__flipDirection();

  constexpr ::GlobalNamespace::Billboard_RotationMode const& __cordl_internal_get__rotationMode() const;

  constexpr ::GlobalNamespace::Billboard_RotationMode& __cordl_internal_get__rotationMode();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__flipDirection(bool value);

  constexpr void __cordl_internal_set__rotationMode(::GlobalNamespace::Billboard_RotationMode value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x39cf000, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Billboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Billboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Billboard(Billboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Billboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Billboard(Billboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16411 };

  /// @brief Field _rotationMode, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::Billboard_RotationMode ____rotationMode;

  /// @brief Field _flipDirection, offset: 0x24, size: 0x1, def value: None
  bool ____flipDirection;

  /// @brief Field _transform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Billboard, ____rotationMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Billboard, ____flipDirection) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Billboard, ____transform) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Billboard, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Billboard_RotationMode, "", "Billboard/RotationMode");
NEED_NO_BOX(::GlobalNamespace::Billboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Billboard*, "", "Billboard");
