#pragma once
// IWYU pragma private; include "UnityEngine/AvatarMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarMask)
namespace UnityEngine {
struct AvatarMaskBodyPart;
}
// Forward declare root types
namespace UnityEngine {
class AvatarMask;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AvatarMask);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AvatarMask
class CORDL_TYPE AvatarMask : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_transformCount)) int32_t transformCount;

  /// @brief Method GetHumanoidBodyPartActive, addr 0x4858bfc, size 0x44, virtual false, abstract: false, final false
  inline bool GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart index);

  /// @brief Method GetTransformActive, addr 0x4858d04, size 0x54, virtual false, abstract: false, final false
  inline bool GetTransformActive(int32_t index);

  /// @brief Method GetTransformPath, addr 0x4858c7c, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetTransformPath(int32_t index);

  /// @brief Method GetTransformWeight, addr 0x4858cc0, size 0x44, virtual false, abstract: false, final false
  inline float_t GetTransformWeight(int32_t index);

  /// @brief Method get_transformCount, addr 0x4858c40, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_transformCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarMask(AvatarMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarMask(AvatarMask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16882 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AvatarMask, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AvatarMask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarMask*, "UnityEngine", "AvatarMask");
