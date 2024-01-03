#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeactivateAfterFirstFrame)
namespace GlobalNamespace {
class __DeactivateAfterFirstFrame___Start_d__0;
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
namespace GlobalNamespace {
class DeactivateAfterFirstFrame;
}
namespace GlobalNamespace {
class __DeactivateAfterFirstFrame___Start_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeactivateAfterFirstFrame);
MARK_REF_PTR_T(::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0);
// Type: ::<Start>d__0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5358))
// CS Name: ::DeactivateAfterFirstFrame::<Start>d__0*
class CORDL_TYPE __DeactivateAfterFirstFrame___Start_d__0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::DeactivateAfterFirstFrame* __4__this;

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

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::DeactivateAfterFirstFrame*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DeactivateAfterFirstFrame*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::DeactivateAfterFirstFrame* value);

  static inline ::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x226c378, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x226c3a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x226c3ac, size 0x64, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x226c410, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x226c418, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x226c458, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__DeactivateAfterFirstFrame___Start_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeactivateAfterFirstFrame___Start_d__0(__DeactivateAfterFirstFrame___Start_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeactivateAfterFirstFrame___Start_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeactivateAfterFirstFrame___Start_d__0(__DeactivateAfterFirstFrame___Start_d__0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeactivateAfterFirstFrame___Start_d__0();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DeactivateAfterFirstFrame* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DeactivateAfterFirstFrame
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5359))
// CS Name: ::DeactivateAfterFirstFrame*
class CORDL_TYPE DeactivateAfterFirstFrame : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__0 = ::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0;

  /// @brief Method Start, addr 0x226c310, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  static inline ::GlobalNamespace::DeactivateAfterFirstFrame* New_ctor();

  /// @brief Method .ctor, addr 0x226c3a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeactivateAfterFirstFrame(DeactivateAfterFirstFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeactivateAfterFirstFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeactivateAfterFirstFrame(DeactivateAfterFirstFrame const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeactivateAfterFirstFrame();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeactivateAfterFirstFrame, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeactivateAfterFirstFrame);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateAfterFirstFrame*, "", "DeactivateAfterFirstFrame");
NEED_NO_BOX(::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DeactivateAfterFirstFrame___Start_d__0*, "", "DeactivateAfterFirstFrame/<Start>d__0");
