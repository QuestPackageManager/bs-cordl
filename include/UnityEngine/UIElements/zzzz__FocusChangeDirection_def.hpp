#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FocusChangeDirection)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusChangeDirection);
// Type: UnityEngine.UIElements::FocusChangeDirection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6140))
// CS Name: ::UnityEngine.UIElements::FocusChangeDirection*
class CORDL_TYPE FocusChangeDirection : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Value, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) int32_t m_Value;

  /// @brief Field <unspecified>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__unspecified_k__BackingField,
                             put = setStaticF__unspecified_k__BackingField))::UnityEngine::UIElements::FocusChangeDirection* _unspecified_k__BackingField;

  /// @brief Field <none>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__none_k__BackingField, put = setStaticF__none_k__BackingField))::UnityEngine::UIElements::FocusChangeDirection* _none_k__BackingField;

  /// @brief Field <lastValue>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lastValue_k__BackingField, put = setStaticF__lastValue_k__BackingField))::UnityEngine::UIElements::FocusChangeDirection* _lastValue_k__BackingField;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get_m_Value();

  constexpr int32_t const& __cordl_internal_get_m_Value() const;

  constexpr void __cordl_internal_set_m_Value(int32_t value);

  static inline void setStaticF__unspecified_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);

  static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__unspecified_k__BackingField();

  static inline void setStaticF__none_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);

  static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__none_k__BackingField();

  static inline void setStaticF__lastValue_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);

  static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__lastValue_k__BackingField();

  /// @brief Method get_unspecified, addr 0x2e177f4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_unspecified();

  /// @brief Method get_none, addr 0x2e1784c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_none();

  /// @brief Method get_lastValue, addr 0x2e178a4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_lastValue();

  static inline ::UnityEngine::UIElements::FocusChangeDirection* New_ctor(int32_t value);

  /// @brief Method .ctor, addr 0x2e178fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method op_Implicit, addr 0x2e17924, size 0xc, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::UIElements::FocusChangeDirection* fcd);

  /// @brief Method System.IDisposable.Dispose, addr 0x2e17930, size 0xc, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method Dispose, addr 0x2e1793c, size 0x4, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method ApplyTo, addr 0x2e17940, size 0x28, virtual true, abstract: false, final false
  inline void ApplyTo(::UnityEngine::UIElements::FocusController* focusController, ::UnityEngine::UIElements::Focusable* f);

  // Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusChangeDirection(FocusChangeDirection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusChangeDirection(FocusChangeDirection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusChangeDirection();

public:
  /// @brief Field m_Value, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusChangeDirection, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusChangeDirection, ___m_Value) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusChangeDirection*, "UnityEngine.UIElements", "FocusChangeDirection");
