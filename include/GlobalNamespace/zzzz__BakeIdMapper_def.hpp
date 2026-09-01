#pragma once
// IWYU pragma private; include "GlobalNamespace\BakeIdMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BakeIdMapper)
// Forward declare root types
namespace GlobalNamespace {
class BakeIdMapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeIdMapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeIdMapper*, "", "BakeIdMapper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeIdMapper
class CORDL_TYPE BakeIdMapper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::BakeIdMapper* New_ctor();

  /// @brief Method .ctor, addr 0x58e3404, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakeIdMapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakeIdMapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakeIdMapper(BakeIdMapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakeIdMapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakeIdMapper(BakeIdMapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BakeIdMapper) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
