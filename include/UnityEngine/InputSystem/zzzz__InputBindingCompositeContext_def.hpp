#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class InputControl;
}
namespace UnityEngine::InputSystem {
template <typename TValue> struct __InputBindingCompositeContext__DefaultComparer_1;
}
namespace UnityEngine::InputSystem {
struct __InputBindingCompositeContext__PartBinding;
}
namespace UnityEngine::InputSystem {
class __InputBindingCompositeContext___get_controls_d__2;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class __InputBindingCompositeContext___get_controls_d__2;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine::InputSystem {
template <typename TValue> struct __InputBindingCompositeContext__DefaultComparer_1;
}
namespace UnityEngine::InputSystem {
struct __InputBindingCompositeContext__PartBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2);
MARK_VAL_T(::UnityEngine::InputSystem::InputBindingCompositeContext);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::__InputBindingCompositeContext__DefaultComparer_1);
MARK_VAL_T(::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding);
// Type: ::PartBinding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6191))
// CS Name: ::InputBindingCompositeContext::PartBinding
struct CORDL_TYPE __InputBindingCompositeContext__PartBinding {
public:
  // Declarations
  __declspec(property(get = get_part, put = set_part)) int32_t part;

  __declspec(property(get = get_control, put = set_control))::UnityEngine::InputSystem::InputControl* control;

  /// @brief Method get_part, addr 0x2a56704, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_part();

  /// @brief Method set_part, addr 0x2a5670c, size 0x8, virtual false, abstract: false, final false
  inline void set_part(int32_t value);

  /// @brief Method get_control, addr 0x2a56714, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method set_control, addr 0x2a5671c, size 0x8, virtual false, abstract: false, final false
  inline void set_control(::UnityEngine::InputSystem::InputControl* value);

  // Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_control_k__BackingField", ty:
  // "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: None }]
  constexpr __InputBindingCompositeContext__PartBinding(int32_t _part_k__BackingField, ::UnityEngine::InputSystem::InputControl* _control_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBindingCompositeContext__PartBinding();

  /// @brief Field <part>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _part_k__BackingField;

  /// @brief Field <control>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* _control_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding, _part_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding, _control_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::DefaultComparer`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6192))
// CS Name: ::InputBindingCompositeContext::DefaultComparer`1<TValue>
#pragma pack(push, 0)
struct CORDL_TYPE __InputBindingCompositeContext__DefaultComparer_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<TValue>"
  constexpr operator ::System::Collections::Generic::IComparer_1<TValue>*();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<TValue>"
  constexpr ::System::Collections::Generic::IComparer_1<TValue>* i___System__Collections__Generic__IComparer_1_TValue_();

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t Compare(TValue x, TValue y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBindingCompositeContext__DefaultComparer_1();

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingCompositeContext
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6194))
// CS Name: ::UnityEngine.InputSystem::InputBindingCompositeContext
struct CORDL_TYPE InputBindingCompositeContext {
public:
  // Declarations
  using _get_controls_d__2 = ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2;

  template <typename TValue> using DefaultComparer_1 = ::UnityEngine::InputSystem::__InputBindingCompositeContext__DefaultComparer_1<TValue>;

  using PartBinding = ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding;

  __declspec(property(get = get_controls))::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>* controls;

  /// @brief Method get_controls, addr 0x2a5653c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>* get_controls();

  /// @brief Method EvaluateMagnitude, addr 0x2a565ec, size 0x24, virtual false, abstract: false, final false
  inline float_t EvaluateMagnitude(int32_t partNumber);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue(int32_t partNumber);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline TValue ReadValue(int32_t partNumber, ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TComparer> inline TValue ReadValue(int32_t partNumber, TComparer comparer);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TComparer> inline TValue ReadValue(int32_t partNumber, ByRef<::UnityEngine::InputSystem::InputControl*> sourceControl, TComparer comparer);

  /// @brief Method ReadValueAsButton, addr 0x2a56610, size 0x88, virtual false, abstract: false, final false
  inline bool ReadValueAsButton(int32_t partNumber);

  /// @brief Method ReadValue, addr 0x2a56698, size 0x24, virtual false, abstract: false, final false
  inline void ReadValue(int32_t partNumber, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsObject, addr 0x2a566bc, size 0x24, virtual false, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(int32_t partNumber);

  /// @brief Method GetPressTime, addr 0x2a566e0, size 0x24, virtual false, abstract: false, final false
  inline double_t GetPressTime(int32_t partNumber);

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr InputBindingCompositeContext(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_BindingIndex) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingCompositeContext();

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_BindingIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_BindingIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingCompositeContext, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingCompositeContext, m_BindingIndex) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<get_controls>d__2
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6174)), TypeDefinitionIndex(TypeDefinitionIndex(6191)),
// TypeDefinitionIndex(TypeDefinitionIndex(6194))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6193)) CS Name: ::InputBindingCompositeContext::<get_controls>d__2*
class CORDL_TYPE __InputBindingCompositeContext___get_controls_d__2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x30, size 0x10
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::InputSystem::InputBindingCompositeContext __4__this;

  /// @brief Field <>3__<>4__this, offset 0x40, size 0x10
  __declspec(property(get = __get___3____4__this, put = __set___3____4__this))::UnityEngine::InputSystem::InputBindingCompositeContext __3____4__this;

  /// @brief Field <totalBindingCount>5__2, offset 0x50, size 0x4
  __declspec(property(get = __get__totalBindingCount_5__2, put = __set__totalBindingCount_5__2)) int32_t _totalBindingCount_5__2;

  /// @brief Field <bindingIndex>5__3, offset 0x54, size 0x4
  __declspec(property(get = __get__bindingIndex_5__3, put = __set__bindingIndex_5__3)) int32_t _bindingIndex_5__3;

  /// @brief Field <bindingState>5__4, offset 0x58, size 0x20
  __declspec(property(get = __get__bindingState_5__4, put = __set__bindingState_5__4))::UnityEngine::InputSystem::__InputActionState__BindingState _bindingState_5__4;

  /// @brief Field <controlStartIndex>5__5, offset 0x78, size 0x4
  __declspec(property(get = __get__controlStartIndex_5__5, put = __set__controlStartIndex_5__5)) int32_t _controlStartIndex_5__5;

  /// @brief Field <i>5__6, offset 0x7c, size 0x4
  __declspec(property(get = __get__i_5__6, put = __set__i_5__6)) int32_t _i_5__6;

  __declspec(property(
      get =
          System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current))::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem____InputBindingCompositeContext__PartBinding_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem____InputBindingCompositeContext__PartBinding_() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding& __get___2__current();

  constexpr ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& __get___4__this();

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value);

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext& __get___3____4__this();

  constexpr ::UnityEngine::InputSystem::InputBindingCompositeContext const& __get___3____4__this() const;

  constexpr void __set___3____4__this(::UnityEngine::InputSystem::InputBindingCompositeContext value);

  constexpr int32_t& __get__totalBindingCount_5__2();

  constexpr int32_t const& __get__totalBindingCount_5__2() const;

  constexpr void __set__totalBindingCount_5__2(int32_t value);

  constexpr int32_t& __get__bindingIndex_5__3();

  constexpr int32_t const& __get__bindingIndex_5__3() const;

  constexpr void __set__bindingIndex_5__3(int32_t value);

  constexpr ::UnityEngine::InputSystem::__InputActionState__BindingState& __get__bindingState_5__4();

  constexpr ::UnityEngine::InputSystem::__InputActionState__BindingState const& __get__bindingState_5__4() const;

  constexpr void __set__bindingState_5__4(::UnityEngine::InputSystem::__InputActionState__BindingState value);

  constexpr int32_t& __get__controlStartIndex_5__5();

  constexpr int32_t const& __get__controlStartIndex_5__5() const;

  constexpr void __set__controlStartIndex_5__5(int32_t value);

  constexpr int32_t& __get__i_5__6();

  constexpr int32_t const& __get__i_5__6() const;

  constexpr void __set__i_5__6(int32_t value);

  static inline ::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2a565b8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2a56724, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2a56728, size 0x100, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current, addr 0x2a56828, size 0xc, virtual true, abstract: false, final
  /// true
  inline ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2a56834, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2a56874, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator, addr 0x2a568d0, size 0xb0, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2a56980, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__InputBindingCompositeContext___get_controls_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputBindingCompositeContext___get_controls_d__2(__InputBindingCompositeContext___get_controls_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputBindingCompositeContext___get_controls_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputBindingCompositeContext___get_controls_d__2(__InputBindingCompositeContext___get_controls_d__2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputBindingCompositeContext___get_controls_d__2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding _____2__current;

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
  ::UnityEngine::InputSystem::__InputActionState__BindingState ____bindingState_5__4;

  /// @brief Field <controlStartIndex>5__5, offset: 0x78, size: 0x4, def value: None
  int32_t ____controlStartIndex_5__5;

  /// @brief Field <i>5__6, offset: 0x7c, size: 0x4, def value: None
  int32_t ____i_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, _____3____4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, ____totalBindingCount_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, ____bindingIndex_5__3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, ____bindingState_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, ____controlStartIndex_5__5) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2, ____i_5__6) == 0x7c, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBindingCompositeContext___get_controls_d__2*, "UnityEngine.InputSystem", "InputBindingCompositeContext/<get_controls>d__2");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingCompositeContext, "UnityEngine.InputSystem", "InputBindingCompositeContext");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::__InputBindingCompositeContext__DefaultComparer_1, "UnityEngine.InputSystem", "InputBindingCompositeContext/DefaultComparer`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputBindingCompositeContext__PartBinding, "UnityEngine.InputSystem", "InputBindingCompositeContext/PartBinding");
