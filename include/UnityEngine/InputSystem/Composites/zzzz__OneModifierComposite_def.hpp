#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/OneModifierComposite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OneModifierComposite)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class OneModifierComposite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::OneModifierComposite);
// Dependencies UnityEngine.InputSystem.InputBindingComposite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.OneModifierComposite
class CORDL_TYPE OneModifierComposite : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
  // Declarations
  /// @brief Field binding, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_binding, put = __cordl_internal_set_binding)) int32_t binding;

  /// @brief Field m_BindingIsButton, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BindingIsButton, put = __cordl_internal_set_m_BindingIsButton)) bool m_BindingIsButton;

  /// @brief Field m_ValueSizeInBytes, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ValueSizeInBytes, put = __cordl_internal_set_m_ValueSizeInBytes)) int32_t m_ValueSizeInBytes;

  /// @brief Field m_ValueType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueType, put = __cordl_internal_set_m_ValueType)) ::System::Type* m_ValueType;

  /// @brief Field modifier, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier, put = __cordl_internal_set_modifier)) int32_t modifier;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideModifiersNeedToBePressedFirst, put = __cordl_internal_set_overrideModifiersNeedToBePressedFirst)) bool overrideModifiersNeedToBePressedFirst;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  /// @brief Method DetermineValueTypeAndSize, addr 0x4577e50, size 0x4cc, virtual false, abstract: false, final false
  static inline void DetermineValueTypeAndSize(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, int32_t part, ::ByRef<::System::Type*> valueType,
                                               ::ByRef<int32_t> valueSizeInBytes, ::ByRef<bool> isButton);

  /// @brief Method EvaluateMagnitude, addr 0x4577c94, size 0x40, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup, addr 0x4577dc0, size 0x90, virtual true, abstract: false, final false
  inline void FinishSetup(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ModifierIsPressed, addr 0x4577cd4, size 0x88, virtual false, abstract: false, final false
  inline bool ModifierIsPressed(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::OneModifierComposite* New_ctor();

  /// @brief Method ReadValue, addr 0x4577d5c, size 0x64, virtual true, abstract: false, final false
  inline void ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsObject, addr 0x457831c, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_binding() const;

  constexpr int32_t& __cordl_internal_get_binding();

  constexpr bool const& __cordl_internal_get_m_BindingIsButton() const;

  constexpr bool& __cordl_internal_get_m_BindingIsButton();

  constexpr int32_t const& __cordl_internal_get_m_ValueSizeInBytes() const;

  constexpr int32_t& __cordl_internal_get_m_ValueSizeInBytes();

  constexpr ::System::Type* const& __cordl_internal_get_m_ValueType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_ValueType();

  constexpr int32_t const& __cordl_internal_get_modifier() const;

  constexpr int32_t& __cordl_internal_get_modifier();

  constexpr bool const& __cordl_internal_get_overrideModifiersNeedToBePressedFirst() const;

  constexpr bool& __cordl_internal_get_overrideModifiersNeedToBePressedFirst();

  constexpr void __cordl_internal_set_binding(int32_t value);

  constexpr void __cordl_internal_set_m_BindingIsButton(bool value);

  constexpr void __cordl_internal_set_m_ValueSizeInBytes(int32_t value);

  constexpr void __cordl_internal_set_m_ValueType(::System::Type* value);

  constexpr void __cordl_internal_set_modifier(int32_t value);

  constexpr void __cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value);

  /// @brief Method .ctor, addr 0x457836c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_valueSizeInBytes, addr 0x4577c8c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x4577c84, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OneModifierComposite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OneModifierComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OneModifierComposite(OneModifierComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OneModifierComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OneModifierComposite(OneModifierComposite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7127 };

  /// @brief Field modifier, offset: 0x10, size: 0x4, def value: None
  int32_t ___modifier;

  /// @brief Field binding, offset: 0x14, size: 0x4, def value: None
  int32_t ___binding;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset: 0x18, size: 0x1, def value: None
  bool ___overrideModifiersNeedToBePressedFirst;

  /// @brief Field m_ValueSizeInBytes, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_ValueSizeInBytes;

  /// @brief Field m_ValueType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___m_ValueType;

  /// @brief Field m_BindingIsButton, offset: 0x28, size: 0x1, def value: None
  bool ___m_BindingIsButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___modifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___binding) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___overrideModifiersNeedToBePressedFirst) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___m_ValueSizeInBytes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___m_ValueType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___m_BindingIsButton) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::OneModifierComposite, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::OneModifierComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::OneModifierComposite*, "UnityEngine.InputSystem.Composites", "OneModifierComposite");
