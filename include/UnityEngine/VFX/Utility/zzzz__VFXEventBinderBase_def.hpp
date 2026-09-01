#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXEventBinderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXEventBinderBase)
namespace System {
class Object;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXEventBinderBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXEventBinderBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXEventBinderBase*, "UnityEngine.VFX.Utility", "VFXEventBinderBase");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXEventBinderBase
class CORDL_TYPE VFXEventBinderBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field EventName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_EventName, put = __cordl_internal_set_EventName)) ::StringW EventName;

  /// @brief Field eventAttribute, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_eventAttribute, put = __cordl_internal_set_eventAttribute)) ::UnityEngine::VFX::VFXEventAttribute* eventAttribute;

  /// @brief Field target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::UnityW<::UnityEngine::VFX::VisualEffect> target;

  static inline ::UnityEngine::VFX::Utility::VFXEventBinderBase* New_ctor();

  /// @brief Method OnEnable, addr 0x69e0f64, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69e1e04, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SendEventToVisualEffect, addr 0x69e1060, size 0xb0, virtual false, abstract: false, final false
  inline void SendEventToVisualEffect(::ArrayW<::System::Object*> parameters);

  /// @brief Method SetEventAttribute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetEventAttribute(::ArrayW<::System::Object*> parameters);

  /// @brief Method UpdateCacheEventAttribute, addr 0x69e1d78, size 0x8c, virtual false, abstract: false, final false
  inline void UpdateCacheEventAttribute();

  constexpr ::StringW const& __cordl_internal_get_EventName() const;

  constexpr ::StringW& __cordl_internal_get_EventName();

  constexpr ::UnityEngine::VFX::VFXEventAttribute* const& __cordl_internal_get_eventAttribute() const;

  constexpr ::UnityEngine::VFX::VFXEventAttribute*& __cordl_internal_get_eventAttribute();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get_target() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_EventName(::StringW value);

  constexpr void __cordl_internal_set_eventAttribute(::UnityEngine::VFX::VFXEventAttribute* value);

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::VFX::VisualEffect> value);

  /// @brief Method .ctor, addr 0x69e1394, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXEventBinderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXEventBinderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXEventBinderBase(VFXEventBinderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXEventBinderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXEventBinderBase(VFXEventBinderBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19982 };

  /// @brief Field target, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffect> ___target;

  /// @brief Field EventName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___EventName;

  /// @brief Field eventAttribute, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::VFXEventAttribute* ___eventAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEventBinderBase, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEventBinderBase, ___EventName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEventBinderBase, ___eventAttribute) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXEventBinderBase) == 0x38, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
