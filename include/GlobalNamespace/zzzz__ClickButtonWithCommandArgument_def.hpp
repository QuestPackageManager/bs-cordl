#pragma once
// IWYU pragma private; include "GlobalNamespace/ClickButtonWithCommandArgument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickButtonWithCommandArgument)
namespace GlobalNamespace {
class __ClickButtonWithCommandArgument___Start_d__2;
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
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ClickButtonWithCommandArgument;
}
namespace GlobalNamespace {
class __ClickButtonWithCommandArgument___Start_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ClickButtonWithCommandArgument);
MARK_REF_PTR_T(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2);
// Type: ::<Start>d__2
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ClickButtonWithCommandArgument::<Start>d__2*
class CORDL_TYPE __ClickButtonWithCommandArgument___Start_d__2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ClickButtonWithCommandArgument> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x396c4a0, size 0xc8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x396c568, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x396c570, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x396c5a8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x396c49c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ClickButtonWithCommandArgument> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ClickButtonWithCommandArgument>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ClickButtonWithCommandArgument> value);

  /// @brief Method .ctor, addr 0x396c46c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __ClickButtonWithCommandArgument___Start_d__2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ClickButtonWithCommandArgument___Start_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClickButtonWithCommandArgument___Start_d__2(__ClickButtonWithCommandArgument___Start_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClickButtonWithCommandArgument___Start_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClickButtonWithCommandArgument___Start_d__2(__ClickButtonWithCommandArgument___Start_d__2 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ClickButtonWithCommandArgument> _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ClickButtonWithCommandArgument
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ClickButtonWithCommandArgument*
class CORDL_TYPE ClickButtonWithCommandArgument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__2 = ::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2;

  /// @brief Field _argument, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__argument, put = __cordl_internal_set__argument)) ::StringW _argument;

  /// @brief Field _button, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  static inline ::GlobalNamespace::ClickButtonWithCommandArgument* New_ctor();

  /// @brief Method Start, addr 0x396c40c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::StringW const& __cordl_internal_get__argument() const;

  constexpr ::StringW& __cordl_internal_get__argument();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr void __cordl_internal_set__argument(::StringW value);

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  /// @brief Method .ctor, addr 0x396c494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickButtonWithCommandArgument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickButtonWithCommandArgument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickButtonWithCommandArgument(ClickButtonWithCommandArgument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickButtonWithCommandArgument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickButtonWithCommandArgument(ClickButtonWithCommandArgument const&) = delete;

  /// @brief Field _argument, offset: 0x20, size: 0x8, def value: None
  ::StringW ____argument;

  /// @brief Field _button, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClickButtonWithCommandArgument, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ClickButtonWithCommandArgument, ____argument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClickButtonWithCommandArgument, ____button) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClickButtonWithCommandArgument);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClickButtonWithCommandArgument*, "", "ClickButtonWithCommandArgument");
NEED_NO_BOX(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2*, "", "ClickButtonWithCommandArgument/<Start>d__2");
