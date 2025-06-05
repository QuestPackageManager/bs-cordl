#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TransformExtensions)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TransformExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformExtensions
class CORDL_TYPE TransformExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindChildRecursively, addr 0x22b5490, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> FindChildRecursively(::UnityEngine::Transform* parent, ::StringW name);

  /// @brief Method InverseTransformRotation, addr 0x22b53dc, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion InverseTransformRotation(::UnityEngine::Transform* trans, ::UnityEngine::Quaternion worldRotation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformExtensions(TransformExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformExtensions(TransformExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17140 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TransformExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransformExtensions*, "", "TransformExtensions");
