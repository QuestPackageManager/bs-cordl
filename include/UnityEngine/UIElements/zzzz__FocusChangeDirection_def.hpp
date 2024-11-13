#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusChangeDirection.hpp"
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::FocusChangeDirection*
class CORDL_TYPE FocusChangeDirection : public ::System::Object {
public:
  // Declarations
  /// @brief Field <lastValue>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lastValue_k__BackingField, put = setStaticF__lastValue_k__BackingField)) ::UnityEngine::UIElements::FocusChangeDirection* _lastValue_k__BackingField;

  /// @brief Field <none>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__none_k__BackingField, put = setStaticF__none_k__BackingField)) ::UnityEngine::UIElements::FocusChangeDirection* _none_k__BackingField;

  /// @brief Field <unspecified>k__BackingField, offset 0xffffffff, size 0x8
  static
      __declspec(property(get = getStaticF__unspecified_k__BackingField, put = setStaticF__unspecified_k__BackingField)) ::UnityEngine::UIElements::FocusChangeDirection* _unspecified_k__BackingField;

  /// @brief Field m_Value, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) int32_t m_Value;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ApplyTo, addr 0x49cf708, size 0x28, virtual true, abstract: false, final false
  inline void ApplyTo(::UnityEngine::UIElements::FocusController* focusController, ::UnityEngine::UIElements::Focusable* f);

  /// @brief Method Dispose, addr 0x49cf704, size 0x4, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::UIElements::FocusChangeDirection* New_ctor(int32_t value);

  /// @brief Method System.IDisposable.Dispose, addr 0x49cf6f8, size 0xc, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get_m_Value() const;

  constexpr int32_t& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Value(int32_t value);

  /// @brief Method .ctor, addr 0x49cf6c4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__lastValue_k__BackingField();

  static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__none_k__BackingField();

  static inline ::UnityEngine::UIElements::FocusChangeDirection* getStaticF__unspecified_k__BackingField();

  /// @brief Method get_lastValue, addr 0x49cf66c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_lastValue();

  /// @brief Method get_none, addr 0x49cf614, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_none();

  /// @brief Method get_unspecified, addr 0x49cf5bc, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::FocusChangeDirection* get_unspecified();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method op_Implicit, addr 0x49cf6ec, size 0xc, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::UIElements::FocusChangeDirection* fcd);

  static inline void setStaticF__lastValue_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);

  static inline void setStaticF__none_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);

  static inline void setStaticF__unspecified_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusChangeDirection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusChangeDirection(FocusChangeDirection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusChangeDirection(FocusChangeDirection const&) = delete;

  /// @brief Field m_Value, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5923 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusChangeDirection, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FocusChangeDirection, ___m_Value) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusChangeDirection*, "UnityEngine.UIElements", "FocusChangeDirection");
