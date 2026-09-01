#pragma once
// IWYU pragma private; include "GlobalNamespace\LightGroupTranslationLimits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(LightGroupTranslationLimits)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupTranslationLimits;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LightGroupTranslationLimits*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightGroupTranslationLimits*, "", "LightGroupTranslationLimits");
// Dependencies System.Object, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightGroupTranslationLimits
class CORDL_TYPE LightGroupTranslationLimits : public ::System::Object {
public:
  // Declarations
  /// @brief Field _distributionLimits, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__distributionLimits, put = __cordl_internal_set__distributionLimits)) ::UnityEngine::Vector2 _distributionLimits;

  /// @brief Field _translationLimits, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__translationLimits, put = __cordl_internal_set__translationLimits)) ::UnityEngine::Vector2 _translationLimits;

  __declspec(property(get = get_distributionLimits)) ::UnityEngine::Vector2 distributionLimits;

  __declspec(property(get = get_translationLimits)) ::UnityEngine::Vector2 translationLimits;

  static inline ::GlobalNamespace::LightGroupTranslationLimits* New_ctor();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__distributionLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__distributionLimits();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__translationLimits() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__translationLimits();

  constexpr void __cordl_internal_set__distributionLimits(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__translationLimits(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x586bd94, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_distributionLimits, addr 0x586bd8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_distributionLimits();

  /// @brief Method get_translationLimits, addr 0x586bd84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_translationLimits();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupTranslationLimits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationLimits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupTranslationLimits(LightGroupTranslationLimits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupTranslationLimits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupTranslationLimits(LightGroupTranslationLimits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19507 };

  /// @brief Field _translationLimits, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____translationLimits;

  /// @brief Field _distributionLimits, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____distributionLimits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightGroupTranslationLimits, ____translationLimits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightGroupTranslationLimits, ____distributionLimits) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightGroupTranslationLimits) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
