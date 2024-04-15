#pragma once
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
// Type: ::OVRAudioSourceTest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRAudioSourceTest*
class CORDL_TYPE OVRAudioSourceTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field nextActionTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextActionTime, put = __cordl_internal_set_nextActionTime)) float_t nextActionTime;

  /// @brief Field period, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_period, put = __cordl_internal_set_period)) float_t period;

  static inline ::GlobalNamespace::OVRAudioSourceTest* New_ctor();

  /// @brief Method Start, addr 0x2a7a4c8, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2a7a5c8, size 0x1bc, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_nextActionTime() const;

  constexpr float_t& __cordl_internal_get_nextActionTime();

  constexpr float_t const& __cordl_internal_get_period() const;

  constexpr float_t& __cordl_internal_get_period();

  constexpr void __cordl_internal_set_nextActionTime(float_t value);

  constexpr void __cordl_internal_set_period(float_t value);

  /// @brief Method .ctor, addr 0x2a7a784, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field period, offset: 0x18, size: 0x4, def value: None
  float_t ___period;

  /// @brief Field nextActionTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___nextActionTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAudioSourceTest, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAudioSourceTest, ___period) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAudioSourceTest, ___nextActionTime) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRAudioSourceTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAudioSourceTest*, "", "OVRAudioSourceTest");
