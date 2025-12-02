#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameplayColorScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameplayColorScheme)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameplayColorScheme;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IGameplayColorScheme);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameplayColorScheme
class CORDL_TYPE IGameplayColorScheme {
public:
  // Declarations
  __declspec(property(get = get_obstaclesColor)) ::UnityEngine::Color obstaclesColor;

  __declspec(property(get = get_overrideNotes)) bool overrideNotes;

  __declspec(property(get = get_saberAColor)) ::UnityEngine::Color saberAColor;

  __declspec(property(get = get_saberBColor)) ::UnityEngine::Color saberBColor;

  /// @brief Method get_obstaclesColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_obstaclesColor();

  /// @brief Method get_overrideNotes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_overrideNotes();

  /// @brief Method get_saberAColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_saberAColor();

  /// @brief Method get_saberBColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_saberBColor();

  // Ctor Parameters [CppParam { name: "", ty: "IGameplayColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameplayColorScheme(IGameplayColorScheme const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IGameplayColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGameplayColorScheme*, "", "IGameplayColorScheme");
