#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXMultiplePositionBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VFXMultiplePositionBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXMultiplePositionBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*, "UnityEngine.VFX.Utility", "VFXMultiplePositionBinder");
// Dependencies UnityEngine.GameObject, UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXMultiplePositionBinder
class CORDL_TYPE VFXMultiplePositionBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  /// @brief Field EveryFrame, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_EveryFrame, put = __cordl_internal_set_EveryFrame)) bool EveryFrame;

  /// @brief Field PositionCountProperty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PositionCountProperty, put = __cordl_internal_set_PositionCountProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* PositionCountProperty;

  /// @brief Field PositionMapProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_PositionMapProperty, put = __cordl_internal_set_PositionMapProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* PositionMapProperty;

  /// @brief Field Targets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Targets, put = __cordl_internal_set_Targets)) ::ArrayW<::UnityW<::UnityEngine::GameObject>> Targets;

  /// @brief Field count, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field positionMap, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_positionMap, put = __cordl_internal_set_positionMap)) ::UnityW<::UnityEngine::Texture2D> positionMap;

  /// @brief Method IsValid, addr 0x69e05dc, size 0x74, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69e000c, size 0x18, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ToString, addr 0x69e0708, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e0650, size 0xb8, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateTexture, addr 0x69e0110, size 0x4cc, virtual false, abstract: false, final false
  inline void UpdateTexture();

  constexpr bool const& __cordl_internal_get_EveryFrame() const;

  constexpr bool& __cordl_internal_get_EveryFrame();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_PositionCountProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_PositionCountProperty();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_PositionMapProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_PositionMapProperty();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_Targets() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_Targets();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_positionMap() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_positionMap();

  constexpr void __cordl_internal_set_EveryFrame(bool value);

  constexpr void __cordl_internal_set_PositionCountProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_PositionMapProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_Targets(::ArrayW<::UnityW<::UnityEngine::GameObject>> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_positionMap(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x69e07a0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXMultiplePositionBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXMultiplePositionBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXMultiplePositionBinder(VFXMultiplePositionBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXMultiplePositionBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXMultiplePositionBinder(VFXMultiplePositionBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19966 };

  /// @brief Field PositionMapProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___PositionMapProperty;

  /// @brief Field PositionCountProperty, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___PositionCountProperty;

  /// @brief Field Targets, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>> ___Targets;

  /// @brief Field EveryFrame, offset: 0x40, size: 0x1, def value: None
  bool ___EveryFrame;

  /// @brief Field positionMap, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___positionMap;

  /// @brief Field count, offset: 0x50, size: 0x4, def value: None
  int32_t ___count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder, ___PositionMapProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder, ___PositionCountProperty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder, ___Targets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder, ___EveryFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder, ___positionMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder, ___count) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXMultiplePositionBinder) == 0x58, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
