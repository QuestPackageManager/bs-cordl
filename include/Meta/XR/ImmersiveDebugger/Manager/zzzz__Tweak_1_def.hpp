#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/Tweak_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Tweak_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Tweak_1)
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Tweak_1___c__DisplayClass10_0;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Tweak_1;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class Tweak_1___c__DisplayClass10_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::Tweak_1);
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::Tweak_1___c__DisplayClass10_0);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Tweak`1/<>c__DisplayClass10_0<T>
class CORDL_TYPE Tweak_1___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::ImmersiveDebugger::Manager::Tweak_1<T>* __4__this;

  /// @brief Field memberInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberInfo, put = __cordl_internal_set_memberInfo)) ::System::Reflection::MemberInfo* memberInfo;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak_1___c__DisplayClass10_0<T>* New_ctor();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak_1<T>* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak_1<T>*& __cordl_internal_get___4__this();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_memberInfo();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::Tweak_1<T>* value);

  constexpr void __cordl_internal_set_memberInfo(::System::Reflection::MemberInfo* value);

  /// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T __ctor_b__0();

  /// @brief Method <.ctor>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__1(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tweak_1___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tweak_1___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tweak_1___c__DisplayClass10_0(Tweak_1___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tweak_1___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tweak_1___c__DisplayClass10_0(Tweak_1___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18393 };

  /// @brief Field memberInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___memberInfo;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::Tweak_1<T>* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Tweak
namespace Meta::XR::ImmersiveDebugger::Manager {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Tweak`1<T>
class CORDL_TYPE Tweak_1 : public ::Meta::XR::ImmersiveDebugger::Manager::Tweak {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::Meta::XR::ImmersiveDebugger::Manager::Tweak_1___c__DisplayClass10_0<T>;

  /// @brief Field FromFloat, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FromFloat, put = setStaticF_FromFloat)) ::System::Func_2<float_t, T>* FromFloat;

  /// @brief Field InverseLerp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InverseLerp, put = setStaticF_InverseLerp)) ::System::Func_4<T, T, T, float_t>* InverseLerp;

  /// @brief Field Lerp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Lerp, put = setStaticF_Lerp)) ::System::Func_4<T, T, float_t, T>* Lerp;

  __declspec(property(get = get_Tween, put = set_Tween)) float_t Tween;

  /// @brief Field _getter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__getter, put = __cordl_internal_set__getter)) ::System::Func_1<T>* _getter;

  /// @brief Field _max, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__max, put = __cordl_internal_set__max)) T _max;

  /// @brief Field _min, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__min, put = __cordl_internal_set__min)) T _min;

  /// @brief Field _setter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__setter, put = __cordl_internal_set__setter)) ::System::Action_1<T>* _setter;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak_1<T>* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                             ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  constexpr ::System::Func_1<T>* const& __cordl_internal_get__getter() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get__getter();

  constexpr T const& __cordl_internal_get__max() const;

  constexpr T& __cordl_internal_get__max();

  constexpr T const& __cordl_internal_get__min() const;

  constexpr T& __cordl_internal_get__min();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get__setter() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get__setter();

  constexpr void __cordl_internal_set__getter(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set__max(T value);

  constexpr void __cordl_internal_set__min(T value);

  constexpr void __cordl_internal_set__setter(::System::Action_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  static inline ::System::Func_2<float_t, T>* getStaticF_FromFloat();

  static inline ::System::Func_4<T, T, T, float_t>* getStaticF_InverseLerp();

  static inline ::System::Func_4<T, T, float_t, T>* getStaticF_Lerp();

  /// @brief Method get_Tween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_Tween();

  static inline void setStaticF_FromFloat(::System::Func_2<float_t, T>* value);

  static inline void setStaticF_InverseLerp(::System::Func_4<T, T, T, float_t>* value);

  static inline void setStaticF_Lerp(::System::Func_4<T, T, float_t, T>* value);

  /// @brief Method set_Tween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Tween(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tweak_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tweak_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tweak_1(Tweak_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tweak_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tweak_1(Tweak_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18394 };

  /// @brief Field _getter, offset: 0x40, size: 0x8, def value: None
  ::System::Func_1<T>* ____getter;

  /// @brief Field _setter, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<T>* ____setter;

  /// @brief Field _min, offset: 0x50, size: 0x8, def value: None
  T ____min;

  /// @brief Field _max, offset: 0x58, size: 0x8, def value: None
  T ____max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Manager
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Manager::Tweak_1, "Meta.XR.ImmersiveDebugger.Manager", "Tweak`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Manager::Tweak_1___c__DisplayClass10_0, "Meta.XR.ImmersiveDebugger.Manager", "Tweak`1/<>c__DisplayClass10_0");
