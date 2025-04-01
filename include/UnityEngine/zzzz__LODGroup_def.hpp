#pragma once
// IWYU pragma private; include "UnityEngine/LODGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroup)
namespace UnityEngine {
struct LOD;
}
// Forward declare root types
namespace UnityEngine {
class LODGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LODGroup);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LODGroup
class CORDL_TYPE LODGroup : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_lodCount)) int32_t lodCount;

  __declspec(property(get = get_size)) float_t size;

  /// @brief Method GetLODs, addr 0x48815a4, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*> GetLODs();

  /// @brief Method RecalculateBounds, addr 0x4881568, size 0x3c, virtual false, abstract: false, final false
  inline void RecalculateBounds();

  /// @brief Method SetLODs, addr 0x48815e0, size 0x44, virtual false, abstract: false, final false
  inline void SetLODs(::ArrayW<::UnityEngine::LOD, ::Array<::UnityEngine::LOD>*> lods);

  /// @brief Method get_lodCount, addr 0x488152c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_lodCount();

  /// @brief Method get_size, addr 0x48814f0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_size();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroup(LODGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroup(LODGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10782 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LODGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LODGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LODGroup*, "UnityEngine", "LODGroup");
