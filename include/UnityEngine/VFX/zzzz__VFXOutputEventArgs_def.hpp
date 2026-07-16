#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXOutputEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXOutputEventArgs)
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct VFXOutputEventArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VFXOutputEventArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXOutputEventArgs, "UnityEngine.VFX", "VFXOutputEventArgs");
// Dependencies
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VFXOutputEventArgs
struct CORDL_TYPE VFXOutputEventArgs {
public:
  // Declarations
  __declspec(property(get = get_eventAttribute)) ::UnityEngine::VFX::VFXEventAttribute* eventAttribute;

  __declspec(property(get = get_nameId)) int32_t nameId;

  /// @brief Method .ctor, addr 0x6e2a834, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t nameId, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  /// @brief Method get_eventAttribute, addr 0x6e2a82c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::VFX::VFXEventAttribute* get_eventAttribute();

  /// @brief Method get_nameId, addr 0x6e2a824, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_nameId();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXOutputEventArgs();

  // Ctor Parameters [CppParam { name: "_nameId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_eventAttribute_k__BackingField", ty:
  // "::UnityEngine::VFX::VFXEventAttribute*", modifiers: "", def_value: None }]
  constexpr VFXOutputEventArgs(int32_t _nameId_k__BackingField, ::UnityEngine::VFX::VFXEventAttribute* _eventAttribute_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22329 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <nameId>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _nameId_k__BackingField;

  /// @brief Field <eventAttribute>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::VFX::VFXEventAttribute* _eventAttribute_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXOutputEventArgs, _nameId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXOutputEventArgs, _eventAttribute_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXOutputEventArgs) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
