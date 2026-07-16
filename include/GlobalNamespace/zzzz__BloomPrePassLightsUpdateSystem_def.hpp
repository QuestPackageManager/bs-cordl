#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassLightsUpdateSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassLightsUpdateSystem)
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassLightsUpdateSystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BloomPrePassLightsUpdateSystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BloomPrePassLightsUpdateSystem*, "", "BloomPrePassLightsUpdateSystem");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassLightsUpdateSystem
class CORDL_TYPE BloomPrePassLightsUpdateSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field disableUpdateAlways, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_disableUpdateAlways, put = setStaticF_disableUpdateAlways)) bool disableUpdateAlways;

  /// @brief Method LateUpdate, addr 0x5864f58, size 0x2f8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::BloomPrePassLightsUpdateSystem* New_ctor();

  /// @brief Method .ctor, addr 0x5865250, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BloomPrePassLightsUpdateSystem) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
