#pragma once
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
// Type: UnityEngine::AvatarMask
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10200))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14856))
// CS Name: ::UnityEngine::AvatarMask*
class CORDL_TYPE AvatarMask : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_transformCount)) int32_t transformCount;

  /// @brief Method GetHumanoidBodyPartActive, addr 0x2c8eee4, size 0x44, virtual false, abstract: false, final false
  inline bool GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart index);

  /// @brief Method get_transformCount, addr 0x2c8ef28, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_transformCount();

  /// @brief Method GetTransformPath, addr 0x2c8ef64, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetTransformPath(int32_t index);

  /// @brief Method GetTransformWeight, addr 0x2c8efa8, size 0x44, virtual false, abstract: false, final false
  inline float_t GetTransformWeight(int32_t index);

  /// @brief Method GetTransformActive, addr 0x2c8efec, size 0x54, virtual false, abstract: false, final false
  inline bool GetTransformActive(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarMask(AvatarMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarMask(AvatarMask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarMask();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AvatarMask, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AvatarMask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AvatarMask*, "UnityEngine", "AvatarMask");
