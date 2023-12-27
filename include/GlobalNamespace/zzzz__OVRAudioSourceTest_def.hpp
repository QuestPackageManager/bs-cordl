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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8076))
// CS Name: ::OVRAudioSourceTest*
class CORDL_TYPE OVRAudioSourceTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field period, offset 0x18, size 0x4
  __declspec(property(get = __get_period, put = __set_period)) float_t period;

  /// @brief Field nextActionTime, offset 0x1c, size 0x4
  __declspec(property(get = __get_nextActionTime, put = __set_nextActionTime)) float_t nextActionTime;

  constexpr float_t& __get_period();

  constexpr float_t const& __get_period() const;

  constexpr void __set_period(float_t value);

  constexpr float_t& __get_nextActionTime();

  constexpr float_t const& __get_nextActionTime() const;

  constexpr void __set_nextActionTime(float_t value);

  /// @brief Method Start addr 0x27a1da0 size 0x100 virtual false final false
  inline void Start();

  /// @brief Method Update addr 0x27a1ea0 size 0x1bc virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::OVRAudioSourceTest* New_ctor();

  /// @brief Method .ctor addr 0x27a205c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRAudioSourceTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRAudioSourceTest(OVRAudioSourceTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRAudioSourceTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRAudioSourceTest(OVRAudioSourceTest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAudioSourceTest();

public:
  /// @brief Field period, offset: 0x18, size: 0x4, def value: None
  float_t ___period;

  /// @brief Field nextActionTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___nextActionTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAudioSourceTest, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRAudioSourceTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAudioSourceTest*, "", "OVRAudioSourceTest");
