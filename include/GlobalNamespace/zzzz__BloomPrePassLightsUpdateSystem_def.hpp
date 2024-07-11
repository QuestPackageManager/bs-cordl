#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLightsUpdateSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassLightsUpdateSystem)
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLightsUpdateSystem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassLightsUpdateSystem);
// Type: ::BloomPrePassLightsUpdateSystem
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassLightsUpdateSystem*
class CORDL_TYPE BloomPrePassLightsUpdateSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field disableUpdateAlways, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_disableUpdateAlways, put = setStaticF_disableUpdateAlways)) bool disableUpdateAlways;

  /// @brief Method LateUpdate, addr 0x2517a00, size 0x2d4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::BloomPrePassLightsUpdateSystem* New_ctor();

  /// @brief Method .ctor, addr 0x2517cd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_disableUpdateAlways();

  static inline void setStaticF_disableUpdateAlways(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassLightsUpdateSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightsUpdateSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassLightsUpdateSystem(BloomPrePassLightsUpdateSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassLightsUpdateSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassLightsUpdateSystem(BloomPrePassLightsUpdateSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassLightsUpdateSystem, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassLightsUpdateSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassLightsUpdateSystem*, "", "BloomPrePassLightsUpdateSystem");
