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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14352))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Billboard__RotationMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Billboard__RotationMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AllAxis value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Billboard__RotationMode const AllAxis;

  /// @brief Field XAxis value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Billboard__RotationMode const XAxis;

  /// @brief Field YAxis value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Billboard__RotationMode const YAxis;

  /// @brief Field ZAxis value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Billboard__RotationMode const ZAxis;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(14352))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14353))
// CS Name: ::Billboard*
class CORDL_TYPE Billboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RotationMode = ::GlobalNamespace::__Billboard__RotationMode;

  /// @brief Field _rotationMode, offset 0x18, size 0x4
  __declspec(property(get = __get__rotationMode, put = __set__rotationMode))::GlobalNamespace::__Billboard__RotationMode _rotationMode;

  /// @brief Field _flipDirection, offset 0x1c, size 0x1
  __declspec(property(get = __get__flipDirection, put = __set__flipDirection)) bool _flipDirection;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::GlobalNamespace::__Billboard__RotationMode& __get__rotationMode();

  constexpr ::GlobalNamespace::__Billboard__RotationMode const& __get__rotationMode() const;

  constexpr void __set__rotationMode(::GlobalNamespace::__Billboard__RotationMode value);

  constexpr bool& __get__flipDirection();

  constexpr bool const& __get__flipDirection() const;

  constexpr void __set__flipDirection(bool value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Awake, addr 0x20f1110, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnWillRenderObject, addr 0x20f112c, size 0xd0, virtual false, abstract: false, final false
  inline void OnWillRenderObject();

  static inline ::GlobalNamespace::Billboard* New_ctor();

  /// @brief Method .ctor, addr 0x20f11fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Billboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Billboard(Billboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Billboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Billboard(Billboard const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Billboard();

public:
  /// @brief Field _rotationMode, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__Billboard__RotationMode ____rotationMode;

  /// @brief Field _flipDirection, offset: 0x1c, size: 0x1, def value: None
  bool ____flipDirection;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

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
