#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightWithIdBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BakedLightWithIdBase)
// Forward declare root types
namespace GlobalNamespace {
class BakedLightWithIdBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedLightWithIdBase);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakedLightWithIdBase
class CORDL_TYPE BakedLightWithIdBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_id)) int32_t id;

  static inline ::GlobalNamespace::BakedLightWithIdBase* New_ctor();

  /// @brief Method SetupLightSource, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetupLightSource(float_t intensityMultiplier);

  /// @brief Method .ctor, addr 0x408543c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_id();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedLightWithIdBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakedLightWithIdBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedLightWithIdBase(BakedLightWithIdBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedLightWithIdBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedLightWithIdBase(BakedLightWithIdBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedLightWithIdBase, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedLightWithIdBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightWithIdBase*, "", "BakedLightWithIdBase");
