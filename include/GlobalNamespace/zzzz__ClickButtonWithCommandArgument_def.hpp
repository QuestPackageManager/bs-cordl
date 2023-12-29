#pragma once
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
namespace UnityEngine::UI {
class Button;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13843))
// CS Name: ::ClickButtonWithCommandArgument::<Start>d__2*
class CORDL_TYPE __ClickButtonWithCommandArgument___Start_d__2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::ClickButtonWithCommandArgument* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::ClickButtonWithCommandArgument*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ClickButtonWithCommandArgument*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::ClickButtonWithCommandArgument* value);

  static inline ::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x1f94160 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x1f94190 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x1f94194 size 0xc8 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f9425c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x1f94264 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f942a4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__ClickButtonWithCommandArgument___Start_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ClickButtonWithCommandArgument___Start_d__2(__ClickButtonWithCommandArgument___Start_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ClickButtonWithCommandArgument___Start_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ClickButtonWithCommandArgument___Start_d__2(__ClickButtonWithCommandArgument___Start_d__2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ClickButtonWithCommandArgument___Start_d__2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ClickButtonWithCommandArgument* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ClickButtonWithCommandArgument
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13844))
// CS Name: ::ClickButtonWithCommandArgument*
class CORDL_TYPE ClickButtonWithCommandArgument : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__2 = ::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2;

  /// @brief Field _argument, offset 0x18, size 0x8
  __declspec(property(get = __get__argument, put = __set__argument))::StringW _argument;

  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::UnityEngine::UI::Button* _button;

  constexpr ::StringW& __get__argument();

  constexpr ::StringW const& __get__argument() const;

  constexpr void __set__argument(::StringW value);

  constexpr ::UnityEngine::UI::Button*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__button() const;

  constexpr void __set__button(::UnityEngine::UI::Button* value);

  /// @brief Method Start addr 0x1f940f8 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* Start();

  static inline ::GlobalNamespace::ClickButtonWithCommandArgument* New_ctor();

  /// @brief Method .ctor addr 0x1f94188 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ClickButtonWithCommandArgument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickButtonWithCommandArgument(ClickButtonWithCommandArgument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickButtonWithCommandArgument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickButtonWithCommandArgument(ClickButtonWithCommandArgument const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickButtonWithCommandArgument();

public:
  /// @brief Field _argument, offset: 0x18, size: 0x8, def value: None
  ::StringW ____argument;

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____button;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClickButtonWithCommandArgument, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ClickButtonWithCommandArgument, ____argument) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClickButtonWithCommandArgument, ____button) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClickButtonWithCommandArgument);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClickButtonWithCommandArgument*, "", "ClickButtonWithCommandArgument");
NEED_NO_BOX(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ClickButtonWithCommandArgument___Start_d__2*, "", "ClickButtonWithCommandArgument/<Start>d__2");
