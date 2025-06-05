#pragma once
// IWYU pragma private; include "GlobalNamespace/DeactivateAfterFirstFrame.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeactivateAfterFirstFrame)
namespace GlobalNamespace {
class DeactivateAfterFirstFrame__Start_d__0;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class DeactivateAfterFirstFrame;
}
namespace GlobalNamespace {
class DeactivateAfterFirstFrame__Start_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateAfterFirstFrame);
MARK_REF_PTR_T(::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeactivateAfterFirstFrame/<Start>d__0
class CORDL_TYPE DeactivateAfterFirstFrame__Start_d__0 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DeactivateAfterFirstFrame> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39bd780, size 0x64, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39bd7e4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39bd7ec, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39bd824, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39bd77c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::DeactivateAfterFirstFrame> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::DeactivateAfterFirstFrame>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DeactivateAfterFirstFrame> value);

  /// @brief Method .ctor, addr 0x39bd74c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateAfterFirstFrame__Start_d__0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame__Start_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateAfterFirstFrame__Start_d__0(DeactivateAfterFirstFrame__Start_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame__Start_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateAfterFirstFrame__Start_d__0(DeactivateAfterFirstFrame__Start_d__0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18874 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DeactivateAfterFirstFrame> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeactivateAfterFirstFrame
class CORDL_TYPE DeactivateAfterFirstFrame : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__0 = ::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0;

  static inline ::GlobalNamespace::DeactivateAfterFirstFrame* New_ctor();

  /// @brief Method Start, addr 0x39bd6ec, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method .ctor, addr 0x39bd774, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateAfterFirstFrame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateAfterFirstFrame(DeactivateAfterFirstFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateAfterFirstFrame(DeactivateAfterFirstFrame const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18875 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateAfterFirstFrame, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateAfterFirstFrame);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateAfterFirstFrame*, "", "DeactivateAfterFirstFrame");
NEED_NO_BOX(::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateAfterFirstFrame__Start_d__0*, "", "DeactivateAfterFirstFrame/<Start>d__0");
