#pragma once
// IWYU pragma private; include "GlobalNamespace/ILightshowColorScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILightshowColorScheme)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ILightshowColorScheme;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILightshowColorScheme);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILightshowColorScheme
class CORDL_TYPE ILightshowColorScheme {
public:
  // Declarations
  __declspec(property(get = get_environmentColor0)) ::UnityEngine::Color environmentColor0;

  __declspec(property(get = get_environmentColor0Boost)) ::UnityEngine::Color environmentColor0Boost;

  __declspec(property(get = get_environmentColor1)) ::UnityEngine::Color environmentColor1;

  __declspec(property(get = get_environmentColor1Boost)) ::UnityEngine::Color environmentColor1Boost;

  __declspec(property(get = get_overrideLights)) bool overrideLights;

  __declspec(property(get = get_supportsEnvironmentColorBoost)) bool supportsEnvironmentColorBoost;

  /// @brief Method get_environmentColor0, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0();

  /// @brief Method get_environmentColor0Boost, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0Boost();

  /// @brief Method get_environmentColor1, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1();

  /// @brief Method get_environmentColor1Boost, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1Boost();

  /// @brief Method get_overrideLights, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_overrideLights();

  /// @brief Method get_supportsEnvironmentColorBoost, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_supportsEnvironmentColorBoost();

  // Ctor Parameters [CppParam { name: "", ty: "ILightshowColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILightshowColorScheme(ILightshowColorScheme const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22771 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILightshowColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILightshowColorScheme*, "", "ILightshowColorScheme");
