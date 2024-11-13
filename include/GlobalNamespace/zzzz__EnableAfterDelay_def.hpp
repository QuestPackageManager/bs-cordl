#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableAfterDelay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnableAfterDelay)
namespace GlobalNamespace {
class __EnableAfterDelay___Start_d__1;
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
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableAfterDelay;
}
namespace GlobalNamespace {
class __EnableAfterDelay___Start_d__1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnableAfterDelay);
MARK_REF_PTR_T(::GlobalNamespace::__EnableAfterDelay___Start_d__1);
// Type: ::<Start>d__1
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnableAfterDelay::<Start>d__1*
class CORDL_TYPE __EnableAfterDelay___Start_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EnableAfterDelay> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x396d51c, size 0xa8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__EnableAfterDelay___Start_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x396d5c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x396d5cc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x396d604, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x396d518, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::EnableAfterDelay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::EnableAfterDelay>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EnableAfterDelay> value);

  /// @brief Method .ctor, addr 0x396d4e8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __EnableAfterDelay___Start_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnableAfterDelay___Start_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnableAfterDelay___Start_d__1(__EnableAfterDelay___Start_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnableAfterDelay___Start_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnableAfterDelay___Start_d__1(__EnableAfterDelay___Start_d__1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnableAfterDelay> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnableAfterDelay___Start_d__1, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnableAfterDelay___Start_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnableAfterDelay___Start_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnableAfterDelay___Start_d__1, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnableAfterDelay
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnableAfterDelay*
class CORDL_TYPE EnableAfterDelay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__1 = ::GlobalNamespace::__EnableAfterDelay___Start_d__1;

  /// @brief Field _component, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__component, put = __cordl_internal_set__component)) ::UnityW<::UnityEngine::MonoBehaviour> _component;

  static inline ::GlobalNamespace::EnableAfterDelay* New_ctor();

  /// @brief Method Start, addr 0x396d488, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get__component() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get__component();

  constexpr void __cordl_internal_set__component(::UnityW<::UnityEngine::MonoBehaviour> value);

  /// @brief Method .ctor, addr 0x396d510, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableAfterDelay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableAfterDelay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableAfterDelay(EnableAfterDelay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableAfterDelay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableAfterDelay(EnableAfterDelay const&) = delete;

  /// @brief Field _component, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> ____component;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableAfterDelay, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableAfterDelay, ____component) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableAfterDelay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableAfterDelay*, "", "EnableAfterDelay");
NEED_NO_BOX(::GlobalNamespace::__EnableAfterDelay___Start_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnableAfterDelay___Start_d__1*, "", "EnableAfterDelay/<Start>d__1");
