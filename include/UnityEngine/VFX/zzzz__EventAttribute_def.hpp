#pragma once
// IWYU pragma private; include "UnityEngine\VFX\EventAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventAttribute)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
// Forward declare root types
namespace UnityEngine::VFX {
class EventAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::EventAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttribute*, "UnityEngine.VFX", "EventAttribute");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttribute
class CORDL_TYPE EventAttribute : public ::System::Object {
public:
  // Declarations
  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::UnityEngine::VFX::Utility::ExposedProperty* id;

  /// @brief Method ApplyToVFX, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ApplyToVFX(::UnityEngine::VFX::VFXEventAttribute* eventAttribute);

  static inline ::UnityEngine::VFX::EventAttribute* New_ctor();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_id() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_id();

  constexpr void __cordl_internal_set_id(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69d2c1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttribute(EventAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttribute(EventAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19935 };

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::EventAttribute, ___id) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::EventAttribute) == 0x18, "Size mismatch!");

} // namespace UnityEngine::VFX
