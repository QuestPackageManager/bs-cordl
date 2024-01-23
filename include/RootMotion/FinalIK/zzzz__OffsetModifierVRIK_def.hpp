#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OffsetModifierVRIK)
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class __OffsetModifierVRIK___Initiate_d__7;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
// Forward declare root types
namespace RootMotion::FinalIK {
class OffsetModifierVRIK;
}
namespace RootMotion::FinalIK {
class __OffsetModifierVRIK___Initiate_d__7;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::OffsetModifierVRIK);
MARK_REF_PTR_T(::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7);
// Type: ::<Initiate>d__7
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12657))
// CS Name: ::OffsetModifierVRIK::<Initiate>d__7*
class CORDL_TYPE __OffsetModifierVRIK___Initiate_d__7 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::RootMotion::FinalIK::OffsetModifierVRIK> __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::RootMotion::FinalIK::OffsetModifierVRIK>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::RootMotion::FinalIK::OffsetModifierVRIK> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::RootMotion::FinalIK::OffsetModifierVRIK> value);

  static inline ::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x12982d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x12984dc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x12984e0, size 0x150, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1298630, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1298638, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1298678, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetModifierVRIK___Initiate_d__7", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OffsetModifierVRIK___Initiate_d__7(__OffsetModifierVRIK___Initiate_d__7&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetModifierVRIK___Initiate_d__7", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OffsetModifierVRIK___Initiate_d__7(__OffsetModifierVRIK___Initiate_d__7 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OffsetModifierVRIK___Initiate_d__7();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::OffsetModifierVRIK> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7, 0x28>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7, _____4__this) == 0x20, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::OffsetModifierVRIK
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12658))
// CS Name: ::RootMotion.FinalIK::OffsetModifierVRIK*
class CORDL_TYPE OffsetModifierVRIK : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Initiate_d__7 = ::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Field ik, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::VRIK> ik;

  /// @brief Field lastTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lastTime, put = __cordl_internal_set_lastTime)) float_t lastTime;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr void __cordl_internal_set_weight(float_t value);

  constexpr ::UnityW<::RootMotion::FinalIK::VRIK>& __cordl_internal_get_ik();

  constexpr ::UnityW<::RootMotion::FinalIK::VRIK> const& __cordl_internal_get_ik() const;

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::VRIK> value);

  constexpr float_t& __cordl_internal_get_lastTime();

  constexpr float_t const& __cordl_internal_get_lastTime() const;

  constexpr void __cordl_internal_set_lastTime(float_t value);

  /// @brief Method get_deltaTime, addr 0x129822c, size 0x20, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method OnModifyOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnModifyOffset();

  /// @brief Method Start, addr 0x129824c, size 0x20, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Initiate, addr 0x129826c, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Initiate();

  /// @brief Method ModifyOffset, addr 0x12982fc, size 0xd4, virtual false, abstract: false, final false
  inline void ModifyOffset();

  /// @brief Method OnDestroy, addr 0x12983d0, size 0x10c, virtual true, abstract: false, final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::OffsetModifierVRIK* New_ctor();

  /// @brief Method .ctor, addr 0x1296234, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OffsetModifierVRIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OffsetModifierVRIK(OffsetModifierVRIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OffsetModifierVRIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OffsetModifierVRIK(OffsetModifierVRIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetModifierVRIK();

public:
  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field ik, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::VRIK> ___ik;

  /// @brief Field lastTime, offset: 0x28, size: 0x4, def value: None
  float_t ___lastTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::OffsetModifierVRIK, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::OffsetModifierVRIK, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::OffsetModifierVRIK, ___ik) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::OffsetModifierVRIK, ___lastTime) == 0x28, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::OffsetModifierVRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::OffsetModifierVRIK*, "RootMotion.FinalIK", "OffsetModifierVRIK");
NEED_NO_BOX(::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__OffsetModifierVRIK___Initiate_d__7*, "RootMotion.FinalIK", "OffsetModifierVRIK/<Initiate>d__7");
