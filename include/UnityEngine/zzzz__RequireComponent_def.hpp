#pragma once
// IWYU pragma private; include "UnityEngine/RequireComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RequireComponent)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class RequireComponent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RequireComponent);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RequireComponent
class CORDL_TYPE RequireComponent : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_Type0, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type0, put = __cordl_internal_set_m_Type0)) ::System::Type* m_Type0;

  /// @brief Field m_Type1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type1, put = __cordl_internal_set_m_Type1)) ::System::Type* m_Type1;

  /// @brief Field m_Type2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Type2, put = __cordl_internal_set_m_Type2)) ::System::Type* m_Type2;

  static inline ::UnityEngine::RequireComponent* New_ctor(::System::Type* requiredComponent);

  static inline ::UnityEngine::RequireComponent* New_ctor(::System::Type* requiredComponent, ::System::Type* requiredComponent2);

  constexpr ::System::Type* const& __cordl_internal_get_m_Type0() const;

  constexpr ::System::Type*& __cordl_internal_get_m_Type0();

  constexpr ::System::Type* const& __cordl_internal_get_m_Type1() const;

  constexpr ::System::Type*& __cordl_internal_get_m_Type1();

  constexpr ::System::Type* const& __cordl_internal_get_m_Type2() const;

  constexpr ::System::Type*& __cordl_internal_get_m_Type2();

  constexpr void __cordl_internal_set_m_Type0(::System::Type* value);

  constexpr void __cordl_internal_set_m_Type1(::System::Type* value);

  constexpr void __cordl_internal_set_m_Type2(::System::Type* value);

  /// @brief Method .ctor, addr 0x690ff9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* requiredComponent);

  /// @brief Method .ctor, addr 0x690ffa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* requiredComponent, ::System::Type* requiredComponent2);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequireComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequireComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequireComponent(RequireComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequireComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequireComponent(RequireComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10283 };

  /// @brief Field m_Type0, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___m_Type0;

  /// @brief Field m_Type1, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___m_Type1;

  /// @brief Field m_Type2, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___m_Type2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RequireComponent, ___m_Type0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RequireComponent, ___m_Type1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RequireComponent, ___m_Type2) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RequireComponent, 0x28>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RequireComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RequireComponent*, "UnityEngine", "RequireComponent");
