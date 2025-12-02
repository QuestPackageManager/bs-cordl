#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingCompositeContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingCompositeContext)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
template <typename TValue> struct InputBindingCompositeContext_DefaultComparer_1;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext_PartBinding;
}
namespace UnityEngine::InputSystem {
class InputBindingCompositeContext__get_controls_d__2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputBindingCompositeContext__get_controls_d__2;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine::InputSystem {
template <typename TValue> struct InputBindingCompositeContext_DefaultComparer_1;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext_PartBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2);
MARK_VAL_T(::UnityEngine::InputSystem::InputBindingCompositeContext);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1);
MARK_VAL_T(::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct CORDL_TYPE InputBindingCompositeContext_PartBinding {
public:
  // Declarations
  __declspec(property(get = get_control, put = set_control)) ::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_part, put = set_part)) int32_t part;

  /// @brief Method get_control, addr 0x62ef220, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_part, addr 0x62ef210, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_part();

  /// @brief Method set_control, addr 0x62ef228, size 0x8, virtual false, abstract: false, final false
  inline void set_control(::UnityEngine::InputSystem::InputControl* value);

  /// @brief Method set_part, addr 0x62ef218, size 0x8, virtual false, abstract: false, final false
  inline void set_part(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingCompositeContext_PartBinding();

  // Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_control_k__BackingField", ty:
  // "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }]
  constexpr InputBindingCompositeContext_PartBinding(int32_t _part_k__BackingField, ::UnityEngine::InputSystem::InputControl* _control_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <part>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _part_k__BackingField;

  /// @brief Field <control>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* _control_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding, _part_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding, _control_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext/DefaultComparer`1<TValue>
#pragma pack(push, 0)
struct CORDL_TYPE InputBindingCompositeContext_DefaultComparer_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<TValue>"
  constexpr operator ::System::Collections::Generic::IComparer_1<TValue>*();

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t Compare(TValue x, TValue y);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<TValue>"
  constexpr ::System::Collections::Generic::IComparer_1<TValue>* i___System__Collections__Generic__IComparer_1_TValue_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingCompositeContext_DefaultComparer_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8651 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext
struct CORDL_TYPE InputBindingCompositeContext {
public:
  // Declarations
  template <typename TValue> using DefaultComparer_1 = ::UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1<TValue>;

  using PartBinding = ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding;

  using _get_controls_d__2 = ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2;

  __declspec(property(get = get_controls)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* controls;

  /// @brief Method EvaluateMagnitude, addr 0x62ef0f0, size 0x24, virtual false, abstract: false, final false
  inline float_t EvaluateMagnitude(int32_t partNumber);

  /// @brief Method GetPressTime, addr 0x62ef1ec, size 0x24, virtual false, abstract: false, final false
  inline double_t GetPressTime(int32_t partNumber);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue(int32_t partNumber);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TComparer> inline TValue ReadValue(int32_t partNumber, TComparer comparer);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue(int32_t partNumber, ::ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TComparer> inline TValue ReadValue(int32_t partNumber, ::ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl, TComparer comparer);

  /// @brief Method ReadValue, addr 0x62ef19c, size 0x2c, virtual false, abstract: false, final false
  inline void ReadValue(int32_t partNumber, void* buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsButton, addr 0x62ef114, size 0x88, virtual false, abstract: false, final false
  inline bool ReadValueAsButton(int32_t partNumber);

  /// @brief Method ReadValueAsObject, addr 0x62ef1c8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(int32_t partNumber);

  /// @brief Method get_controls, addr 0x62ef060, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>* get_controls();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingCompositeContext();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr InputBindingCompositeContext(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_BindingIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8653 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_BindingIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_BindingIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext, m_BindingIndex) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingCompositeContext, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object, UnityEngine.InputSystem.InputActionState::BindingState, UnityEngine.InputSystem.InputBindingCompositeContext,
// UnityEngine.InputSystem.InputBindingCompositeContext::PartBinding
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2
class CORDL_TYPE InputBindingCompositeContext__get_controls_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(
      get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current)) ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding __2__current;

  /// @brief Field <>3__<>4__this, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get___3____4__this, put = __cordl_internal_set___3____4__this)) ::UnityEngine::InputSystem::InputBindingCompositeContext __3____4__this;

  /// @brief Field <>4__this, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::InputSystem::InputBindingCompositeContext __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <bindingIndex>5__3, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__bindingIndex_5__3, put = __cordl_internal_set__bindingIndex_5__3)) int32_t _bindingIndex_5__3;

  /// @brief Field <bindingState>5__4, offset 0x58, size 0x20
  __declspec(property(get = __cordl_internal_get__bindingState_5__4, put = __cordl_internal_set__bindingState_5__4)) ::UnityEngine::InputSystem::InputActionState_BindingState _bindingState_5__4;

  /// @brief Field <controlStartIndex>5__5, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__controlStartIndex_5__5, put = __cordl_internal_set__controlStartIndex_5__5)) int32_t _controlStartIndex_5__5;

  /// @brief Field <i>5__6, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__6, put = __cordl_internal_set__i_5__6)) int32_t _i_5__6;

  /// @brief Field <totalBindingCount>5__2, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__totalBindingCount_5__2, put = __cordl_internal_set__totalBindingCount_5__2)) int32_t _totalBindingCount_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x62ef234, size 0x100, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator, addr 0x62ef3d8, size 0x98, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current, addr 0x62ef334, size 0xc, virtual true, abstract: false, final
  /// true
  inline ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x62ef470, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x62ef340, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x62ef378, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x62ef230, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& __cordl_internal_get___3____4__this() const;

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& __cordl_internal_get___3____4__this();

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__bindingIndex_5__3() const;

  constexpr int32_t& __cordl_internal_get__bindingIndex_5__3();

  constexpr ::UnityEngine::InputSystem::InputActionState_BindingState const& __cordl_internal_get__bindingState_5__4() const;

  constexpr ::UnityEngine::InputSystem::InputActionState_BindingState& __cordl_internal_get__bindingState_5__4();

  constexpr int32_t const& __cordl_internal_get__controlStartIndex_5__5() const;

  constexpr int32_t& __cordl_internal_get__controlStartIndex_5__5();

  constexpr int32_t const& __cordl_internal_get__i_5__6() const;

  constexpr int32_t& __cordl_internal_get__i_5__6();

  constexpr int32_t const& __cordl_internal_get__totalBindingCount_5__2() const;

  constexpr int32_t& __cordl_internal_get__totalBindingCount_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding value);

  constexpr void __cordl_internal_set___3____4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__bindingIndex_5__3(int32_t value);

  constexpr void __cordl_internal_set__bindingState_5__4(::UnityEngine::InputSystem::InputActionState_BindingState value);

  constexpr void __cordl_internal_set__controlStartIndex_5__5(int32_t value);

  constexpr void __cordl_internal_set__i_5__6(int32_t value);

  constexpr void __cordl_internal_set__totalBindingCount_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x62ef0d0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputBindingCompositeContext_PartBinding_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputBindingCompositeContext_PartBinding_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingCompositeContext__get_controls_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputBindingCompositeContext__get_controls_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputBindingCompositeContext__get_controls_d__2(InputBindingCompositeContext__get_controls_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputBindingCompositeContext__get_controls_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputBindingCompositeContext__get_controls_d__2(InputBindingCompositeContext__get_controls_d__2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8652 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::InputSystem::InputBindingCompositeContext _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::InputSystem::InputBindingCompositeContext _____3____4__this;

  /// @brief Field <totalBindingCount>5__2, offset: 0x50, size: 0x4, def value: None
  int32_t ____totalBindingCount_5__2;

  /// @brief Field <bindingIndex>5__3, offset: 0x54, size: 0x4, def value: None
  int32_t ____bindingIndex_5__3;

  /// @brief Field <bindingState>5__4, offset: 0x58, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputActionState_BindingState ____bindingState_5__4;

  /// @brief Field <controlStartIndex>5__5, offset: 0x78, size: 0x4, def value: None
  int32_t ____controlStartIndex_5__5;

  /// @brief Field <i>5__6, offset: 0x7c, size: 0x4, def value: None
  int32_t ____i_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, _____3____4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, ____totalBindingCount_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, ____bindingIndex_5__3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, ____bindingState_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, ____controlStartIndex_5__5) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, ____i_5__6) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2, 0x80>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingCompositeContext__get_controls_d__2*, "UnityEngine.InputSystem", "InputBindingCompositeContext/<get_controls>d__2");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingCompositeContext, "UnityEngine.InputSystem", "InputBindingCompositeContext");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::InputBindingCompositeContext_DefaultComparer_1, "UnityEngine.InputSystem", "InputBindingCompositeContext/DefaultComparer`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingCompositeContext_PartBinding, "UnityEngine.InputSystem", "InputBindingCompositeContext/PartBinding");
