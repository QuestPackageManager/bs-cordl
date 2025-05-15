#pragma once
// IWYU pragma private; include "UnityEngine/HumanBone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__HumanLimit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HumanBone)
// Forward declare root types
namespace UnityEngine {
struct HumanBone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanBone);
// Dependencies UnityEngine.HumanLimit
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.HumanBone
struct CORDL_TYPE HumanBone {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanBone();

  // Ctor Parameters [CppParam { name: "m_BoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_HumanName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "limit", ty: "::UnityEngine::HumanLimit", modifiers: "", def_value: None }]
  constexpr HumanBone(::StringW m_BoneName, ::StringW m_HumanName, ::UnityEngine::HumanLimit limit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16886 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_BoneName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_BoneName;

  /// @brief Field m_HumanName, offset: 0x8, size: 0x8, def value: None
  ::StringW m_HumanName;

  /// @brief Field limit, offset: 0x10, size: 0x2c, def value: None
  ::UnityEngine::HumanLimit limit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::HumanBone, m_BoneName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanBone, m_HumanName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanBone, limit) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanBone, 0x40>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanBone, "UnityEngine", "HumanBone");
