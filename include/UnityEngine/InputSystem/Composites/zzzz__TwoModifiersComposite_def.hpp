#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/TwoModifiersComposite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoModifiersComposite)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Composites {
struct TwoModifiersComposite_ModifiersOrder;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct TwoModifiersComposite_ModifiersOrder;
}
namespace UnityEngine::InputSystem::Composites {
class TwoModifiersComposite;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Composites::TwoModifiersComposite);
// Dependencies
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Composites.TwoModifiersComposite/ModifiersOrder
struct CORDL_TYPE TwoModifiersComposite_ModifiersOrder {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TwoModifiersComposite_ModifiersOrder_Unwrapped
  enum struct __TwoModifiersComposite_ModifiersOrder_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Ordered = static_cast<int32_t>(0x1),
    __E_Unordered = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TwoModifiersComposite_ModifiersOrder_Unwrapped() const noexcept {
    return static_cast<__TwoModifiersComposite_ModifiersOrder_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoModifiersComposite_ModifiersOrder();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TwoModifiersComposite_ModifiersOrder(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder const Default;

  /// @brief Field Ordered value: I32(1)
  static ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder const Ordered;

  /// @brief Field Unordered value: I32(2)
  static ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder const Unordered;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9190 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
// Dependencies UnityEngine.InputSystem.Composites.TwoModifiersComposite::ModifiersOrder, UnityEngine.InputSystem.InputBindingComposite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Composites.TwoModifiersComposite
class CORDL_TYPE TwoModifiersComposite : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
  // Declarations
  using ModifiersOrder = ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder;

  /// @brief Field binding, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_binding, put = __cordl_internal_set_binding)) int32_t binding;

  /// @brief Field m_BindingIsButton, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BindingIsButton, put = __cordl_internal_set_m_BindingIsButton)) bool m_BindingIsButton;

  /// @brief Field m_ValueSizeInBytes, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ValueSizeInBytes, put = __cordl_internal_set_m_ValueSizeInBytes)) int32_t m_ValueSizeInBytes;

  /// @brief Field m_ValueType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueType, put = __cordl_internal_set_m_ValueType)) ::System::Type* m_ValueType;

  /// @brief Field modifier1, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier1, put = __cordl_internal_set_modifier1)) int32_t modifier1;

  /// @brief Field modifier2, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_modifier2, put = __cordl_internal_set_modifier2)) int32_t modifier2;

  /// @brief Field modifiersOrder, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_modifiersOrder,
                      put = __cordl_internal_set_modifiersOrder)) ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder modifiersOrder;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideModifiersNeedToBePressedFirst, put = __cordl_internal_set_overrideModifiersNeedToBePressedFirst)) bool overrideModifiersNeedToBePressedFirst;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  /// @brief Method EvaluateMagnitude, addr 0x62ee584, size 0x40, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup, addr 0x62ee720, size 0xb4, virtual true, abstract: false, final false
  inline void FinishSetup(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method ModifiersArePressed, addr 0x62ee5c4, size 0xbc, virtual false, abstract: false, final false
  inline bool ModifiersArePressed(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  static inline ::UnityEngine::InputSystem::Composites::TwoModifiersComposite* New_ctor();

  /// @brief Method ReadValue, addr 0x62ee680, size 0xa0, virtual true, abstract: false, final false
  inline void ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsObject, addr 0x62ee7d4, size 0x64, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  constexpr int32_t const& __cordl_internal_get_binding() const;

  constexpr int32_t& __cordl_internal_get_binding();

  constexpr bool const& __cordl_internal_get_m_BindingIsButton() const;

  constexpr bool& __cordl_internal_get_m_BindingIsButton();

  constexpr int32_t const& __cordl_internal_get_m_ValueSizeInBytes() const;

  constexpr int32_t& __cordl_internal_get_m_ValueSizeInBytes();

  constexpr ::System::Type* const& __cordl_internal_get_m_ValueType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_ValueType();

  constexpr int32_t const& __cordl_internal_get_modifier1() const;

  constexpr int32_t& __cordl_internal_get_modifier1();

  constexpr int32_t const& __cordl_internal_get_modifier2() const;

  constexpr int32_t& __cordl_internal_get_modifier2();

  constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder const& __cordl_internal_get_modifiersOrder() const;

  constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder& __cordl_internal_get_modifiersOrder();

  constexpr bool const& __cordl_internal_get_overrideModifiersNeedToBePressedFirst() const;

  constexpr bool& __cordl_internal_get_overrideModifiersNeedToBePressedFirst();

  constexpr void __cordl_internal_set_binding(int32_t value);

  constexpr void __cordl_internal_set_m_BindingIsButton(bool value);

  constexpr void __cordl_internal_set_m_ValueSizeInBytes(int32_t value);

  constexpr void __cordl_internal_set_m_ValueType(::System::Type* value);

  constexpr void __cordl_internal_set_modifier1(int32_t value);

  constexpr void __cordl_internal_set_modifier2(int32_t value);

  constexpr void __cordl_internal_set_modifiersOrder(::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder value);

  constexpr void __cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value);

  /// @brief Method .ctor, addr 0x62ee838, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_valueSizeInBytes, addr 0x62ee57c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x62ee574, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoModifiersComposite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TwoModifiersComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwoModifiersComposite(TwoModifiersComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwoModifiersComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwoModifiersComposite(TwoModifiersComposite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9191 };

  /// @brief Field modifier1, offset: 0x10, size: 0x4, def value: None
  int32_t ___modifier1;

  /// @brief Field modifier2, offset: 0x14, size: 0x4, def value: None
  int32_t ___modifier2;

  /// @brief Field binding, offset: 0x18, size: 0x4, def value: None
  int32_t ___binding;

  /// @brief Field overrideModifiersNeedToBePressedFirst, offset: 0x1c, size: 0x1, def value: None
  bool ___overrideModifiersNeedToBePressedFirst;

  /// @brief Field modifiersOrder, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder ___modifiersOrder;

  /// @brief Field m_ValueSizeInBytes, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_ValueSizeInBytes;

  /// @brief Field m_ValueType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___m_ValueType;

  /// @brief Field m_BindingIsButton, offset: 0x30, size: 0x1, def value: None
  bool ___m_BindingIsButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___modifier1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___modifier2) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___binding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___overrideModifiersNeedToBePressedFirst) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___modifiersOrder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___m_ValueSizeInBytes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___m_ValueType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, ___m_BindingIsButton) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Composites::TwoModifiersComposite, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder, "UnityEngine.InputSystem.Composites", "TwoModifiersComposite/ModifiersOrder");
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::TwoModifiersComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::TwoModifiersComposite*, "UnityEngine.InputSystem.Composites", "TwoModifiersComposite");
