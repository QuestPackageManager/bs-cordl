#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine.InputSystem.Composites::OneModifierComposite
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6189))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6717))
// CS Name: ::UnityEngine.InputSystem.Composites::OneModifierComposite*
class CORDL_TYPE OneModifierComposite : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
  // Declarations
  /// @brief Field modifier, offset 0x10, size 0x4
  __declspec(property(get = __get_modifier, put = __set_modifier)) int32_t modifier;

  /// @brief Field binding, offset 0x14, size 0x4
  __declspec(property(get = __get_binding, put = __set_binding)) int32_t binding;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x18, size 0x1
  __declspec(property(get = __get_overrideModifiersNeedToBePressedFirst, put = __set_overrideModifiersNeedToBePressedFirst)) bool overrideModifiersNeedToBePressedFirst;

  /// @brief Field m_ValueSizeInBytes, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_ValueSizeInBytes, put = __set_m_ValueSizeInBytes)) int32_t m_ValueSizeInBytes;

  /// @brief Field m_ValueType, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ValueType, put = __set_m_ValueType))::System::Type* m_ValueType;

  /// @brief Field m_BindingIsButton, offset 0x28, size 0x1
  __declspec(property(get = __get_m_BindingIsButton, put = __set_m_BindingIsButton)) bool m_BindingIsButton;

  __declspec(property(get = get_valueType))::System::Type* valueType;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  constexpr int32_t& __get_modifier();

  constexpr int32_t const& __get_modifier() const;

  constexpr void __set_modifier(int32_t value);

  constexpr int32_t& __get_binding();

  constexpr int32_t const& __get_binding() const;

  constexpr void __set_binding(int32_t value);

  constexpr bool& __get_overrideModifiersNeedToBePressedFirst();

  constexpr bool const& __get_overrideModifiersNeedToBePressedFirst() const;

  constexpr void __set_overrideModifiersNeedToBePressedFirst(bool value);

  constexpr int32_t& __get_m_ValueSizeInBytes();

  constexpr int32_t const& __get_m_ValueSizeInBytes() const;

  constexpr void __set_m_ValueSizeInBytes(int32_t value);

  constexpr ::System::Type*& __get_m_ValueType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_m_ValueType() const;

  constexpr void __set_m_ValueType(::System::Type* value);

  constexpr bool& __get_m_BindingIsButton();

  constexpr bool const& __get_m_BindingIsButton() const;

  constexpr void __set_m_BindingIsButton(bool value);

  /// @brief Method get_valueType, addr 0x2a5b06c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

  /// @brief Method get_valueSizeInBytes, addr 0x2a5b074, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method EvaluateMagnitude, addr 0x2a5b07c, size 0x40, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ReadValue, addr 0x2a5b144, size 0x64, virtual true, abstract: false, final false
  inline void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ModifierIsPressed, addr 0x2a5b0bc, size 0x88, virtual false, abstract: false, final false
  inline bool ModifierIsPressed(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup, addr 0x2a5b1a8, size 0xac, virtual true, abstract: false, final false
  inline void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ReadValueAsObject, addr 0x2a5b728, size 0x50, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method DetermineValueTypeAndSize, addr 0x2a5b254, size 0x4d4, virtual false, abstract: false, final false
  static inline void DetermineValueTypeAndSize(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, int32_t part, ByRef<::System::Type*> valueType, ByRef<int32_t> valueSizeInBytes,
                                               ByRef<bool> isButton);

  static inline ::UnityEngine::InputSystem::Composites::OneModifierComposite* New_ctor();

  /// @brief Method .ctor, addr 0x2a5b778, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OneModifierComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OneModifierComposite(OneModifierComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OneModifierComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OneModifierComposite(OneModifierComposite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OneModifierComposite();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::OneModifierComposite, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___modifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___binding) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___overrideModifiersNeedToBePressedFirst) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___m_ValueSizeInBytes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___m_ValueType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::OneModifierComposite, ___m_BindingIsButton) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Composites
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::OneModifierComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::OneModifierComposite*, "UnityEngine.InputSystem.Composites", "OneModifierComposite");
