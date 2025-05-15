#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingComposite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingComposite)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine::InputSystem {
class InputBindingComposite__GetPartNames_d__12;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputBindingComposite;
}
namespace UnityEngine::InputSystem {
class InputBindingComposite__GetPartNames_d__12;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputBindingComposite);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12
class CORDL_TYPE InputBindingComposite__GetPartNames_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_String__get_Current)) ::StringW System_Collections_Generic_IEnumerator_System_String__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::StringW __2__current;

  /// @brief Field <>3__composite, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__composite, put = __cordl_internal_set___3__composite)) ::StringW __3__composite;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field composite, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_composite, put = __cordl_internal_set_composite)) ::StringW composite;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x455c8fc, size 0x1c8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator, addr 0x455cb0c, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current, addr 0x455cac4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x455cba8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x455cacc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x455cb04, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x455c8f8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::StringW const& __cordl_internal_get___2__current() const;

  constexpr ::StringW& __cordl_internal_get___2__current();

  constexpr ::StringW const& __cordl_internal_get___3__composite() const;

  constexpr ::StringW& __cordl_internal_get___3__composite();

  constexpr ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::StringW const& __cordl_internal_get_composite() const;

  constexpr ::StringW& __cordl_internal_get_composite();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::StringW value);

  constexpr void __cordl_internal_set___3__composite(::StringW value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_composite(::StringW value);

  /// @brief Method .ctor, addr 0x455c7a0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* i___System__Collections__Generic__IEnumerable_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::StringW>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>* i___System__Collections__Generic__IEnumerator_1___StringW_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingComposite__GetPartNames_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite__GetPartNames_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputBindingComposite__GetPartNames_d__12(InputBindingComposite__GetPartNames_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite__GetPartNames_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputBindingComposite__GetPartNames_d__12(InputBindingComposite__GetPartNames_d__12 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6594 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::StringW _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field composite, offset: 0x28, size: 0x8, def value: None
  ::StringW ___composite;

  /// @brief Field <>3__composite, offset: 0x30, size: 0x8, def value: None
  ::StringW _____3__composite;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, ___composite) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, _____3__composite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.TypeTable
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputBindingComposite
class CORDL_TYPE InputBindingComposite : public ::System::Object {
public:
  // Declarations
  using _GetPartNames_d__12 = ::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12;

  /// @brief Field s_Composites, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Composites, put = setStaticF_s_Composites)) ::UnityEngine::InputSystem::Utilities::TypeTable s_Composites;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  /// @brief Method CallFinishSetup, addr 0x4554bbc, size 0xc, virtual false, abstract: false, final false
  inline void CallFinishSetup(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method EvaluateMagnitude, addr 0x455c450, size 0x8, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method FinishSetup, addr 0x455c458, size 0x4, virtual true, abstract: false, final false
  inline void FinishSetup(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method GetDisplayFormatString, addr 0x455c7d4, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW GetDisplayFormatString(::StringW composite);

  /// @brief Method GetExpectedControlLayoutName, addr 0x455c59c, size 0x194, virtual false, abstract: false, final false
  static inline ::StringW GetExpectedControlLayoutName(::StringW composite, ::StringW part);

  /// @brief Method GetPartNames, addr 0x455c730, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetPartNames(::StringW composite);

  /// @brief Method GetValueType, addr 0x455c45c, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueType(::StringW composite);

  static inline ::UnityEngine::InputSystem::InputBindingComposite* New_ctor();

  /// @brief Method ReadValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, ::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueAsObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueAsObject(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context);

  /// @brief Method .ctor, addr 0x455c8f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Composites();

  /// @brief Method get_valueSizeInBytes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

  static inline void setStaticF_s_Composites(::UnityEngine::InputSystem::Utilities::TypeTable value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputBindingComposite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputBindingComposite(InputBindingComposite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputBindingComposite(InputBindingComposite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputBindingComposite, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputBindingComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingComposite*, "UnityEngine.InputSystem", "InputBindingComposite");
NEED_NO_BOX(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputBindingComposite__GetPartNames_d__12*, "UnityEngine.InputSystem", "InputBindingComposite/<GetPartNames>d__12");
