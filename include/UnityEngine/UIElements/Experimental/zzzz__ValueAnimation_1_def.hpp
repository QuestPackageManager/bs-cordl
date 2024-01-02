#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueAnimation_1)
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
template <typename T> class ValueAnimation_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::Experimental::ValueAnimation_1);
// Type: UnityEngine.UIElements.Experimental::ValueAnimation`1
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Experimental {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7458))
// CS Name: ::UnityEngine.UIElements.Experimental::ValueAnimation`1<T>*
class CORDL_TYPE ValueAnimation_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_StartTimeMs, offset 0x10, size 0x8
  __declspec(property(get = __get_m_StartTimeMs, put = __set_m_StartTimeMs)) int64_t m_StartTimeMs;

  /// @brief Field m_DurationMs, offset 0x18, size 0x4
  __declspec(property(get = __get_m_DurationMs, put = __set_m_DurationMs)) int32_t m_DurationMs;

  /// @brief Field <easingCurve>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__easingCurve_k__BackingField, put = __set__easingCurve_k__BackingField))::System::Func_2<float_t, float_t>* _easingCurve_k__BackingField;

  /// @brief Field <isRunning>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __get__isRunning_k__BackingField, put = __set__isRunning_k__BackingField)) bool _isRunning_k__BackingField;

  /// @brief Field <onAnimationCompleted>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__onAnimationCompleted_k__BackingField, put = __set__onAnimationCompleted_k__BackingField))::System::Action* _onAnimationCompleted_k__BackingField;

  /// @brief Field <autoRecycle>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __get__autoRecycle_k__BackingField, put = __set__autoRecycle_k__BackingField)) bool _autoRecycle_k__BackingField;

  /// @brief Field <recycled>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __get__recycled_k__BackingField, put = __set__recycled_k__BackingField)) bool _recycled_k__BackingField;

  /// @brief Field <owner>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__owner_k__BackingField, put = __set__owner_k__BackingField))::UnityEngine::UIElements::VisualElement* _owner_k__BackingField;

  /// @brief Field <valueUpdated>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__valueUpdated_k__BackingField,
                      put = __set__valueUpdated_k__BackingField))::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* _valueUpdated_k__BackingField;

  /// @brief Field <initialValue>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__initialValue_k__BackingField,
                      put = __set__initialValue_k__BackingField))::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* _initialValue_k__BackingField;

  /// @brief Field <interpolator>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__interpolator_k__BackingField, put = __set__interpolator_k__BackingField))::System::Func_4<T, T, float_t, T>* _interpolator_k__BackingField;

  /// @brief Field _from, offset 0x60, size 0x8
  __declspec(property(get = __get__from, put = __set__from)) T _from;

  /// @brief Field fromValueSet, offset 0x68, size 0x1
  __declspec(property(get = __get_fromValueSet, put = __set_fromValueSet)) bool fromValueSet;

  /// @brief Field <to>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__to_k__BackingField, put = __set__to_k__BackingField)) T _to_k__BackingField;

  /// @brief Field sObjectPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sObjectPool,
                             put = setStaticF_sObjectPool))::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* sObjectPool;

  __declspec(property(get = get_durationMs, put = set_durationMs)) int32_t durationMs;

  __declspec(property(get = get_easingCurve, put = set_easingCurve))::System::Func_2<float_t, float_t>* easingCurve;

  __declspec(property(get = get_isRunning, put = set_isRunning)) bool isRunning;

  __declspec(property(get = get_onAnimationCompleted, put = set_onAnimationCompleted))::System::Action* onAnimationCompleted;

  __declspec(property(get = get_autoRecycle, put = set_autoRecycle)) bool autoRecycle;

  __declspec(property(get = get_recycled, put = set_recycled)) bool recycled;

  __declspec(property(get = get_owner, put = set_owner))::UnityEngine::UIElements::VisualElement* owner;

  __declspec(property(get = get_valueUpdated, put = set_valueUpdated))::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* valueUpdated;

  __declspec(property(get = get_initialValue, put = set_initialValue))::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* initialValue;

  __declspec(property(get = get_interpolator, put = set_interpolator))::System::Func_4<T, T, float_t, T>* interpolator;

  __declspec(property(get = get_from, put = set_from)) T from;

  __declspec(property(get = get_to, put = set_to)) T to;

  /// @brief Convert operator to "::UnityEngine::UIElements::Experimental::IValueAnimationUpdate"
  constexpr operator ::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*() noexcept;

  constexpr int64_t& __get_m_StartTimeMs();

  constexpr int64_t const& __get_m_StartTimeMs() const;

  constexpr void __set_m_StartTimeMs(int64_t value);

  constexpr int32_t& __get_m_DurationMs();

  constexpr int32_t const& __get_m_DurationMs() const;

  constexpr void __set_m_DurationMs(int32_t value);

  constexpr ::System::Func_2<float_t, float_t>*& __get__easingCurve_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t, float_t>*> const& __get__easingCurve_k__BackingField() const;

  constexpr void __set__easingCurve_k__BackingField(::System::Func_2<float_t, float_t>* value);

  constexpr bool& __get__isRunning_k__BackingField();

  constexpr bool const& __get__isRunning_k__BackingField() const;

  constexpr void __set__isRunning_k__BackingField(bool value);

  constexpr ::System::Action*& __get__onAnimationCompleted_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__onAnimationCompleted_k__BackingField() const;

  constexpr void __set__onAnimationCompleted_k__BackingField(::System::Action* value);

  constexpr bool& __get__autoRecycle_k__BackingField();

  constexpr bool const& __get__autoRecycle_k__BackingField() const;

  constexpr void __set__autoRecycle_k__BackingField(bool value);

  constexpr bool& __get__recycled_k__BackingField();

  constexpr bool const& __get__recycled_k__BackingField() const;

  constexpr void __set__recycled_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__owner_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__owner_k__BackingField() const;

  constexpr void __set__owner_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*& __get__valueUpdated_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>*> const& __get__valueUpdated_k__BackingField() const;

  constexpr void __set__valueUpdated_k__BackingField(::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* value);

  constexpr ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*& __get__initialValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>*> const& __get__initialValue_k__BackingField() const;

  constexpr void __set__initialValue_k__BackingField(::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* value);

  constexpr ::System::Func_4<T, T, float_t, T>*& __get__interpolator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_4<T, T, float_t, T>*> const& __get__interpolator_k__BackingField() const;

  constexpr void __set__interpolator_k__BackingField(::System::Func_4<T, T, float_t, T>* value);

  constexpr T& __get__from();

  constexpr T const& __get__from() const;

  constexpr void __set__from(T value);

  constexpr bool& __get_fromValueSet();

  constexpr bool const& __get_fromValueSet() const;

  constexpr void __set_fromValueSet(bool value);

  constexpr T& __get__to_k__BackingField();

  constexpr T const& __get__to_k__BackingField() const;

  constexpr void __set__to_k__BackingField(T value);

  static inline void setStaticF_sObjectPool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>*>* getStaticF_sObjectPool();

  /// @brief Method get_durationMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_durationMs();

  /// @brief Method set_durationMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_durationMs(int32_t value);

  /// @brief Method get_easingCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_2<float_t, float_t>* get_easingCurve();

  /// @brief Method set_easingCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_easingCurve(::System::Func_2<float_t, float_t>* value);

  /// @brief Method get_isRunning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isRunning();

  /// @brief Method set_isRunning, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isRunning(bool value);

  /// @brief Method get_onAnimationCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action* get_onAnimationCompleted();

  /// @brief Method set_onAnimationCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_onAnimationCompleted(::System::Action* value);

  /// @brief Method get_autoRecycle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_autoRecycle();

  /// @brief Method set_autoRecycle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_autoRecycle(bool value);

  /// @brief Method get_recycled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_recycled();

  /// @brief Method set_recycled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_recycled(bool value);

  /// @brief Method get_owner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_owner();

  /// @brief Method set_owner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_owner(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_valueUpdated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* get_valueUpdated();

  /// @brief Method set_valueUpdated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_valueUpdated(::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* value);

  /// @brief Method get_initialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* get_initialValue();

  /// @brief Method set_initialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_initialValue(::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* value);

  /// @brief Method get_interpolator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_4<T, T, float_t, T>* get_interpolator();

  /// @brief Method set_interpolator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_interpolator(::System::Func_4<T, T, float_t, T>* value);

  /// @brief Method get_from, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_from();

  /// @brief Method set_from, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_from(T value);

  /// @brief Method get_to, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_to();

  /// @brief Method set_to, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_to(T value);

  static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Start();

  /// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Stop();

  /// @brief Method Recycle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Recycle();

  /// @brief Method UnityEngine.UIElements.Experimental.IValueAnimationUpdate.Tick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_Experimental_IValueAnimationUpdate_Tick(int64_t currentTimeMs);

  /// @brief Method SetDefaultValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetDefaultValues();

  /// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Unregister();

  /// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method SetOwner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetOwner(::UnityEngine::UIElements::VisualElement* e);

  /// @brief Method CheckNotRecycled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckNotRecycled();

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* Create(::UnityEngine::UIElements::VisualElement* e, ::System::Func_4<T, T, float_t, T>* interpolator);

  /// @brief Method KeepAlive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<T>* KeepAlive();

  // Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValueAnimation_1(ValueAnimation_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValueAnimation_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValueAnimation_1(ValueAnimation_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueAnimation_1();

public:
  /// @brief Field m_StartTimeMs, offset: 0x10, size: 0x8, def value: None
  int64_t ___m_StartTimeMs;

  /// @brief Field m_DurationMs, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_DurationMs;

  /// @brief Field <easingCurve>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<float_t, float_t>* ____easingCurve_k__BackingField;

  /// @brief Field <isRunning>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____isRunning_k__BackingField;

  /// @brief Field <onAnimationCompleted>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ____onAnimationCompleted_k__BackingField;

  /// @brief Field <autoRecycle>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____autoRecycle_k__BackingField;

  /// @brief Field <recycled>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____recycled_k__BackingField;

  /// @brief Field <owner>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____owner_k__BackingField;

  /// @brief Field <valueUpdated>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, T>* ____valueUpdated_k__BackingField;

  /// @brief Field <initialValue>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::UIElements::VisualElement*, T>* ____initialValue_k__BackingField;

  /// @brief Field <interpolator>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::System::Func_4<T, T, float_t, T>* ____interpolator_k__BackingField;

  /// @brief Field _from, offset: 0x60, size: 0x8, def value: None
  T ____from;

  /// @brief Field fromValueSet, offset: 0x68, size: 0x1, def value: None
  bool ___fromValueSet;

  /// @brief Field <to>k__BackingField, offset: 0x70, size: 0x8, def value: None
  T ____to_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements::Experimental
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Experimental::ValueAnimation_1, "UnityEngine.UIElements.Experimental", "ValueAnimation`1");
