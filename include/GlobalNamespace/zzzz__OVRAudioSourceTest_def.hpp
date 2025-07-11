#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAudioSourceTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRAudioSourceTest)
// Forward declare root types
namespace GlobalNamespace {
class OVRAudioSourceTest;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRAudioSourceTest);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAudioSourceTest
class CORDL_TYPE OVRAudioSourceTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field nextActionTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_nextActionTime, put = __cordl_internal_set_nextActionTime)) float_t nextActionTime;

  /// @brief Field period, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_period, put = __cordl_internal_set_period)) float_t period;

  static inline ::GlobalNamespace::OVRAudioSourceTest* New_ctor();

  /// @brief Method Start, addr 0x4029764, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x4029864, size 0x1b0, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_nextActionTime() const;

  constexpr float_t& __cordl_internal_get_nextActionTime();

  constexpr float_t const& __cordl_internal_get_period() const;

  constexpr float_t& __cordl_internal_get_period();

  constexpr void __cordl_internal_set_nextActionTime(float_t value);

  constexpr void __cordl_internal_set_period(float_t value);

  /// @brief Method .ctor, addr 0x4029a14, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAudioSourceTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRAudioSourceTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRAudioSourceTest(OVRAudioSourceTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRAudioSourceTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRAudioSourceTest(OVRAudioSourceTest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8392 };

  /// @brief Field period, offset: 0x20, size: 0x4, def value: None
  float_t ___period;

  /// @brief Field nextActionTime, offset: 0x24, size: 0x4, def value: None
  float_t ___nextActionTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAudioSourceTest, ___period) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAudioSourceTest, ___nextActionTime) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAudioSourceTest, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRAudioSourceTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAudioSourceTest*, "", "OVRAudioSourceTest");
