#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/TransformAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformAccess)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Jobs::TransformAccess);
// Dependencies System.IntPtr
namespace UnityEngine::Jobs {
// Is value type: true
// CS Name: UnityEngine.Jobs.TransformAccess
struct CORDL_TYPE TransformAccess {
public:
  // Declarations
  __declspec(property(put = set_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(put = set_localRotation)) ::UnityEngine::Quaternion localRotation;

  __declspec(property(get = get_localScale)) ::UnityEngine::Vector3 localScale;

  __declspec(property(get = get_localToWorldMatrix)) ::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  /// @brief Method GetLocalScale, addr 0x6931140, size 0x44, virtual false, abstract: false, final false
  static inline void GetLocalScale(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Vector3> r);

  /// @brief Method GetLocalToWorldMatrix, addr 0x69311f0, size 0x44, virtual false, abstract: false, final false
  static inline void GetLocalToWorldMatrix(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Matrix4x4> m);

  /// @brief Method GetPosition, addr 0x6930da4, size 0x44, virtual false, abstract: false, final false
  static inline void GetPosition(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Vector3> p);

  /// @brief Method GetRotation, addr 0x6930ed8, size 0x44, virtual false, abstract: false, final false
  static inline void GetRotation(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Quaternion> r);

  /// @brief Method SetLocalPosition, addr 0x6931008, size 0x44, virtual false, abstract: false, final false
  static inline void SetLocalPosition(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Vector3> p);

  /// @brief Method SetLocalPositionAndRotation, addr 0x69312e8, size 0x60, virtual false, abstract: false, final false
  inline void SetLocalPositionAndRotation(::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localRotation);

  /// @brief Method SetLocalPositionAndRotation_Internal, addr 0x6931348, size 0x54, virtual false, abstract: false, final false
  static inline void SetLocalPositionAndRotation_Internal(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Vector3> localPosition,
                                                          ::ByRef<::UnityEngine::Quaternion> localRotation);

  /// @brief Method SetLocalRotation, addr 0x69310a0, size 0x44, virtual false, abstract: false, final false
  static inline void SetLocalRotation(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Quaternion> r);

  /// @brief Method SetPosition, addr 0x6930e3c, size 0x44, virtual false, abstract: false, final false
  static inline void SetPosition(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Vector3> p);

  /// @brief Method SetPositionAndRotation, addr 0x6931234, size 0x60, virtual false, abstract: false, final false
  inline void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method SetPositionAndRotation_Internal, addr 0x6931294, size 0x54, virtual false, abstract: false, final false
  static inline void SetPositionAndRotation_Internal(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method SetRotation, addr 0x6930f70, size 0x44, virtual false, abstract: false, final false
  static inline void SetRotation(::ByRef<::UnityEngine::Jobs::TransformAccess> access, ::ByRef<::UnityEngine::Quaternion> r);

  /// @brief Method get_localScale, addr 0x69310e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localScale();

  /// @brief Method get_localToWorldMatrix, addr 0x6931184, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_position, addr 0x6930d48, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x6930e80, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_localPosition, addr 0x6930fb4, size 0x54, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_localRotation, addr 0x693104c, size 0x54, virtual false, abstract: false, final false
  inline void set_localRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_position, addr 0x6930de8, size 0x54, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x6930f1c, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformAccess();

  // Ctor Parameters [CppParam { name: "hierarchy", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TransformAccess(::System::IntPtr hierarchy, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10415 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field hierarchy, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr hierarchy;

  /// @brief Field index, offset: 0x8, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Jobs::TransformAccess, hierarchy) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Jobs::TransformAccess, index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Jobs::TransformAccess, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Jobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::TransformAccess, "UnityEngine.Jobs", "TransformAccess");
