#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EulerPose)
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct EulerPose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EulerPose);
// Type: ::EulerPose
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16065))
// CS Name: ::EulerPose
struct CORDL_TYPE EulerPose {
public:
  // Declarations
  /// @brief Field kIdentity, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_kIdentity, put = setStaticF_kIdentity))::GlobalNamespace::EulerPose kIdentity;

  static inline void setStaticF_kIdentity(::GlobalNamespace::EulerPose value);

  static inline ::GlobalNamespace::EulerPose getStaticF_kIdentity();

  /// @brief Method .ctor addr 0x228999c size 0x10 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation);

  /// @brief Method ToString addr 0x22899ac size 0x1a4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2289b50 size 0x1b0 virtual false final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method get_identity addr 0x2289d00 size 0x68 virtual false final false
  static inline ::GlobalNamespace::EulerPose get_identity();

  /// @brief Method op_Addition addr 0x2289d68 size 0x28 virtual false final false
  static inline ::GlobalNamespace::EulerPose op_Addition(::GlobalNamespace::EulerPose left, ::GlobalNamespace::EulerPose right);

  /// @brief Method op_Subtraction addr 0x2289d90 size 0x28 virtual false final false
  static inline ::GlobalNamespace::EulerPose op_Subtraction(::GlobalNamespace::EulerPose left, ::GlobalNamespace::EulerPose right);

  /// @brief Method MirrorOnYZPlane addr 0x2289db8 size 0x2c virtual false final false
  inline ::GlobalNamespace::EulerPose MirrorOnYZPlane();

  /// @brief Method Equals addr 0x2289df8 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2289e88 size 0x124 virtual false final false
  inline bool Equals(::GlobalNamespace::EulerPose other);

  /// @brief Method GetHashCode addr 0x2289fac size 0x88 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x228a034 size 0x30 virtual false final false
  static inline bool op_Equality(::GlobalNamespace::EulerPose a, ::GlobalNamespace::EulerPose b);

  /// @brief Method op_Inequality addr 0x228a064 size 0xb8 virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::EulerPose a, ::GlobalNamespace::EulerPose b);

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }]
  constexpr EulerPose(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EulerPose();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 rotation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EulerPose, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EulerPose, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EulerPose, rotation) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulerPose, "", "EulerPose");
