#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Billboard_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Billboard)
namespace GlobalNamespace {
struct __Billboard__RotationMode;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct __Billboard__RotationMode;
}
namespace GlobalNamespace {
class Billboard;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__Billboard__RotationMode);
MARK_REF_PTR_T(::GlobalNamespace::Billboard);
// Type: ::RotationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Billboard::RotationMode
struct CORDL_TYPE __Billboard__RotationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Billboard__RotationMode_Unwrapped
  enum struct ____Billboard__RotationMode_Unwrapped : int32_t {
    __E_AllAxis = static_cast<int32_t>(0x0),
    __E_XAxis = static_cast<int32_t>(0x1),
    __E_YAxis = static_cast<int32_t>(0x2),
    __E_ZAxis = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Billboard__RotationMode_Unwrapped() const noexcept {
    return static_cast<____Billboard__RotationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Billboard__RotationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Billboard__RotationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllAxis value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Billboard__RotationMode const AllAxis;

  /// @brief Field XAxis value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Billboard__RotationMode const XAxis;

  /// @brief Field YAxis value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Billboard__RotationMode const YAxis;

  /// @brief Field ZAxis value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Billboard__RotationMode const ZAxis;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Billboard__RotationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Billboard__RotationMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Billboard
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Billboard*
class CORDL_TYPE Billboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RotationMode = ::GlobalNamespace::__Billboard__RotationMode;

  /// @brief Field _flipDirection, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__flipDirection, put = __cordl_internal_set__flipDirection)) bool _flipDirection;

  /// @brief Field _rotationMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationMode, put = __cordl_internal_set__rotationMode))::GlobalNamespace::__Billboard__RotationMode _rotationMode;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Method Awake, addr 0x22b4d00, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::Billboard* New_ctor();

  /// @brief Method OnWillRenderObject, addr 0x22b4d1c, size 0xd0, virtual false, abstract: false, final false
  inline void OnWillRenderObject();

  constexpr bool const& __cordl_internal_get__flipDirection() const;

  constexpr bool& __cordl_internal_get__flipDirection();

  constexpr ::GlobalNamespace::__Billboard__RotationMode const& __cordl_internal_get__rotationMode() const;

  constexpr ::GlobalNamespace::__Billboard__RotationMode& __cordl_internal_get__rotationMode();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr void __cordl_internal_set__flipDirection(bool value);

  constexpr void __cordl_internal_set__rotationMode(::GlobalNamespace::__Billboard__RotationMode value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x22b4dec, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _rotationMode, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__Billboard__RotationMode ____rotationMode;

  /// @brief Field _flipDirection, offset: 0x1c, size: 0x1, def value: None
  bool ____flipDirection;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Billboard, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Billboard, ____rotationMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Billboard, ____flipDirection) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Billboard, ____transform) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Billboard__RotationMode, "", "Billboard/RotationMode");
NEED_NO_BOX(::GlobalNamespace::Billboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Billboard*, "", "Billboard");
