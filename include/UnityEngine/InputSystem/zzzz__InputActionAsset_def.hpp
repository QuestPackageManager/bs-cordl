#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionAsset)
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
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputActionAsset__ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionAsset__WriteFileJson;
}
namespace UnityEngine::InputSystem {
class __InputActionAsset___GetEnumerator_d__31;
}
namespace UnityEngine::InputSystem {
class __InputActionAsset___get_bindings_d__8;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteMapJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__SchemeJson;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class __InputActionAsset___GetEnumerator_d__31;
}
namespace UnityEngine::InputSystem {
class __InputActionAsset___get_bindings_d__8;
}
namespace UnityEngine::InputSystem {
struct __InputActionAsset__ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionAsset__WriteFileJson;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionAsset);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson);
// Type: ::WriteFileJson
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionAsset::WriteFileJson
struct CORDL_TYPE __InputActionAsset__WriteFileJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset__WriteFileJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maps", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>", modifiers: "", def_value: None }, CppParam { name:
  // "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>", modifiers: "", def_value:
  // None }]
  constexpr __InputActionAsset__WriteFileJson(
      ::StringW name, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> maps,
      ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> controlSchemes) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field maps, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> maps;

  /// @brief Field controlSchemes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> controlSchemes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson, maps) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson, controlSchemes) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ReadFileJson
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionAsset::ReadFileJson
struct CORDL_TYPE __InputActionAsset__ReadFileJson {
public:
  // Declarations
  /// @brief Method ToAsset, addr 0x2b23834, size 0xa4, virtual false, abstract: false, final false
  inline void ToAsset(::UnityEngine::InputSystem::InputActionAsset* asset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset__ReadFileJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maps", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>", modifiers: "", def_value: None }, CppParam { name:
  // "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>", modifiers: "", def_value:
  // None }]
  constexpr __InputActionAsset__ReadFileJson(
      ::StringW name, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> maps,
      ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> controlSchemes) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field maps, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> maps;

  /// @brief Field controlSchemes, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> controlSchemes;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson, maps) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson, controlSchemes) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<get_bindings>d__8
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputActionAsset::<get_bindings>d__8*
class CORDL_TYPE __InputActionAsset___get_bindings_d__8 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current))::UnityEngine::InputSystem::InputBinding
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x58
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityEngine::InputSystem::InputBinding __2__current;

  /// @brief Field <>4__this, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::InputSystem::InputActionAsset> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <bindings>5__4, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__bindings_5__4,
                      put = __cordl_internal_set__bindings_5__4))::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> _bindings_5__4;

  /// @brief Field <i>5__3, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__3, put = __cordl_internal_set__i_5__3)) int32_t _i_5__3;

  /// @brief Field <n>5__6, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__n_5__6, put = __cordl_internal_set__n_5__6)) int32_t _n_5__6;

  /// @brief Field <numActionMaps>5__2, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__numActionMaps_5__2, put = __cordl_internal_set__numActionMaps_5__2)) int32_t _numActionMaps_5__2;

  /// @brief Field <numBindings>5__5, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__numBindings_5__5, put = __cordl_internal_set__numBindings_5__5)) int32_t _numBindings_5__5;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2b25ed8, size 0x14c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator, addr 0x2b260d8, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current, addr 0x2b26024, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2b2617c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2b26034, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2b26074, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2b25ed4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::InputBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::InputBinding& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> const& __cordl_internal_get__bindings_5__4() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>& __cordl_internal_get__bindings_5__4();

  constexpr int32_t const& __cordl_internal_get__i_5__3() const;

  constexpr int32_t& __cordl_internal_get__i_5__3();

  constexpr int32_t const& __cordl_internal_get__n_5__6() const;

  constexpr int32_t& __cordl_internal_get__n_5__6();

  constexpr int32_t const& __cordl_internal_get__numActionMaps_5__2() const;

  constexpr int32_t& __cordl_internal_get__numActionMaps_5__2();

  constexpr int32_t const& __cordl_internal_get__numBindings_5__5() const;

  constexpr int32_t& __cordl_internal_get__numBindings_5__5();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputBinding value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set__n_5__6(int32_t value);

  constexpr void __cordl_internal_set__numActionMaps_5__2(int32_t value);

  constexpr void __cordl_internal_set__numBindings_5__5(int32_t value);

  /// @brief Method .ctor, addr 0x2b22b20, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputBinding_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputBinding_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset___get_bindings_d__8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___get_bindings_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionAsset___get_bindings_d__8(__InputActionAsset___get_bindings_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___get_bindings_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionAsset___get_bindings_d__8(__InputActionAsset___get_bindings_d__8 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x58, def value: None
  ::UnityEngine::InputSystem::InputBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x70, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> _____4__this;

  /// @brief Field <numActionMaps>5__2, offset: 0x80, size: 0x4, def value: None
  int32_t ____numActionMaps_5__2;

  /// @brief Field <i>5__3, offset: 0x84, size: 0x4, def value: None
  int32_t ____i_5__3;

  /// @brief Field <bindings>5__4, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> ____bindings_5__4;

  /// @brief Field <numBindings>5__5, offset: 0x90, size: 0x4, def value: None
  int32_t ____numBindings_5__5;

  /// @brief Field <n>5__6, offset: 0x94, size: 0x4, def value: None
  int32_t ____n_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, _____l__initialThreadId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, _____4__this) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, ____numActionMaps_5__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, ____i_5__3) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, ____bindings_5__4) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, ____numBindings_5__5) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8, ____n_5__6) == 0x94, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<GetEnumerator>d__31
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputActionAsset::<GetEnumerator>d__31*
class CORDL_TYPE __InputActionAsset___GetEnumerator_d__31 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current))::UnityEngine::InputSystem::
      InputAction* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityEngine::InputSystem::InputAction* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::InputSystem::InputActionAsset> __4__this;

  /// @brief Field <actionCount>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__actionCount_5__4, put = __cordl_internal_set__actionCount_5__4)) int32_t _actionCount_5__4;

  /// @brief Field <actions>5__3, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__actions_5__3,
                      put = __cordl_internal_set__actions_5__3))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> _actions_5__3;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Field <n>5__5, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__n_5__5, put = __cordl_internal_set__n_5__5)) int32_t _n_5__5;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2b26184, size 0x11c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current, addr 0x2b26300, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputAction* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2b26308, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2b26348, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2b26180, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__actionCount_5__4() const;

  constexpr int32_t& __cordl_internal_get__actionCount_5__4();

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get__actions_5__3() const;

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>& __cordl_internal_get__actions_5__3();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr int32_t const& __cordl_internal_get__n_5__5() const;

  constexpr int32_t& __cordl_internal_get__n_5__5();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set__actionCount_5__4(int32_t value);

  constexpr void __cordl_internal_set__actions_5__3(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  constexpr void __cordl_internal_set__n_5__5(int32_t value);

  /// @brief Method .ctor, addr 0x2b248ac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputAction__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset___GetEnumerator_d__31();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___GetEnumerator_d__31", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionAsset___GetEnumerator_d__31(__InputActionAsset___GetEnumerator_d__31&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___GetEnumerator_d__31", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionAsset___GetEnumerator_d__31(__InputActionAsset___GetEnumerator_d__31 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> _____4__this;

  /// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
  int32_t ____i_5__2;

  /// @brief Field <actions>5__3, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> ____actions_5__3;

  /// @brief Field <actionCount>5__4, offset: 0x40, size: 0x4, def value: None
  int32_t ____actionCount_5__4;

  /// @brief Field <n>5__5, offset: 0x44, size: 0x4, def value: None
  int32_t ____n_5__5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, ____actions_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, ____actionCount_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31, ____n_5__5) == 0x44, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionAsset
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputActionAsset*
class CORDL_TYPE InputActionAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using ReadFileJson = ::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson;

  using WriteFileJson = ::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson;

  using _GetEnumerator_d__31 = ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31;

  using _get_bindings_d__8 = ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::InputAction* Item[];

  __declspec(property(get = get_actionMaps))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> actionMaps;

  __declspec(property(get = get_bindingMask, put = set_bindingMask))::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_bindings))::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* bindings;

  __declspec(property(get = get_controlSchemes))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> controlSchemes;

  __declspec(property(get = get_devices, put = set_devices))::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices;

  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Field m_ActionMaps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionMaps,
                      put = __cordl_internal_set_m_ActionMaps))::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> m_ActionMaps;

  /// @brief Field m_BindingMask, offset 0x30, size 0x60
  __declspec(property(get = __cordl_internal_get_m_BindingMask, put = __cordl_internal_set_m_BindingMask))::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask;

  /// @brief Field m_ControlSchemes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlSchemes,
                      put = __cordl_internal_set_m_ControlSchemes))::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> m_ControlSchemes;

  /// @brief Field m_Devices, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Devices, put = __cordl_internal_set_m_Devices))::UnityEngine::InputSystem::__InputActionMap__DeviceArray m_Devices;

  /// @brief Field m_ParameterOverrides, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParameterOverrides,
                      put = __cordl_internal_set_m_ParameterOverrides))::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,
                                                                                ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> m_ParameterOverrides;

  /// @brief Field m_ParameterOverridesCount, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParameterOverridesCount, put = __cordl_internal_set_m_ParameterOverridesCount)) int32_t m_ParameterOverridesCount;

  /// @brief Field m_SharedStateForAllMaps, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedStateForAllMaps, put = __cordl_internal_set_m_SharedStateForAllMaps))::UnityEngine::InputSystem::InputActionState* m_SharedStateForAllMaps;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

  /// @brief Method Contains, addr 0x2b247b8, size 0x8c, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Disable, addr 0x2b24624, size 0x160, virtual true, abstract: false, final true
  inline void Disable();

  /// @brief Method Enable, addr 0x2b24478, size 0x160, virtual true, abstract: false, final true
  inline void Enable();

  /// @brief Method FindAction, addr 0x2b23004, size 0x330, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindAction, addr 0x2b23f1c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid guid);

  /// @brief Method FindActionMap, addr 0x2b23e90, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::System::Guid id);

  /// @brief Method FindActionMap, addr 0x2b23c7c, size 0x1cc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::StringW nameOrId, bool throwIfNotFound);

  /// @brief Method FindBinding, addr 0x2b23ab0, size 0xec, virtual true, abstract: false, final true
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method FindControlScheme, addr 0x2b240bc, size 0x130, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlScheme(::StringW name);

  /// @brief Method FindControlSchemeIndex, addr 0x2b23fe0, size 0xdc, virtual false, abstract: false, final false
  inline int32_t FindControlSchemeIndex(::StringW name);

  /// @brief Method FromJson, addr 0x2b238d8, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> FromJson(::StringW json);

  /// @brief Method GetEnumerator, addr 0x2b24844, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();

  /// @brief Method IsUsableWithDevice, addr 0x2b241ec, size 0x174, virtual false, abstract: false, final false
  inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method LoadFromJson, addr 0x2b23758, size 0xdc, virtual false, abstract: false, final false
  inline void LoadFromJson(::StringW json);

  /// @brief Method MarkAsDirty, addr 0x2b248d8, size 0x4, virtual false, abstract: false, final false
  inline void MarkAsDirty();

  static inline ::UnityEngine::InputSystem::InputActionAsset* New_ctor();

  /// @brief Method OnDestroy, addr 0x2b24ef4, size 0x28, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnSetupChanged, addr 0x2b24bf8, size 0x84, virtual false, abstract: false, final false
  inline void OnSetupChanged();

  /// @brief Method OnWantToChangeSetup, addr 0x2b248dc, size 0x80, virtual false, abstract: false, final false
  inline void OnWantToChangeSetup();

  /// @brief Method ReResolveIfNecessary, addr 0x2b22ca0, size 0x40, virtual false, abstract: false, final false
  inline void ReResolveIfNecessary(bool fullResolve);

  /// @brief Method ResolveBindingsIfNecessary, addr 0x2b24e54, size 0xa0, virtual false, abstract: false, final false
  inline void ResolveBindingsIfNecessary();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2b248d4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToJson, addr 0x2b23334, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> const& __cordl_internal_get_m_ActionMaps() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>& __cordl_internal_get_m_ActionMaps();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> const& __cordl_internal_get_m_ControlSchemes() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>& __cordl_internal_get_m_ControlSchemes();

  constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray const& __cordl_internal_get_m_Devices() const;

  constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray& __cordl_internal_get_m_Devices();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> const&
  __cordl_internal_get_m_ParameterOverrides() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>&
  __cordl_internal_get_m_ParameterOverrides();

  constexpr int32_t const& __cordl_internal_get_m_ParameterOverridesCount() const;

  constexpr int32_t& __cordl_internal_get_m_ParameterOverridesCount();

  constexpr ::UnityEngine::InputSystem::InputActionState*& __cordl_internal_get_m_SharedStateForAllMaps();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> const& __cordl_internal_get_m_SharedStateForAllMaps() const;

  constexpr void __cordl_internal_set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> value);

  constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> value);

  constexpr void __cordl_internal_set_m_Devices(::UnityEngine::InputSystem::__InputActionMap__DeviceArray value);

  constexpr void __cordl_internal_set_m_ParameterOverrides(
      ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> value);

  constexpr void __cordl_internal_set_m_ParameterOverridesCount(int32_t value);

  constexpr void __cordl_internal_set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState* value);

  /// @brief Method .ctor, addr 0x2b24f1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x2b22f7c, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW actionNameOrId);

  /// @brief Method get_actionMaps, addr 0x2b229d8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> get_actionMaps();

  /// @brief Method get_bindingMask, addr 0x2b22b54, size 0x10, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method get_bindings, addr 0x2b22aa8, size 0x78, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();

  /// @brief Method get_controlSchemes, addr 0x2b22a48, size 0x60, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();

  /// @brief Method get_devices, addr 0x2b22ce0, size 0x34, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();

  /// @brief Method get_enabled, addr 0x2b22840, size 0x198, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr ::UnityEngine::InputSystem::IInputActionCollection* i___UnityEngine__InputSystem__IInputActionCollection() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr ::UnityEngine::InputSystem::IInputActionCollection2* i___UnityEngine__InputSystem__IInputActionCollection2() noexcept;

  /// @brief Method set_bindingMask, addr 0x2b22b64, size 0x13c, virtual true, abstract: false, final true
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method set_devices, addr 0x2b22dbc, size 0x44, virtual true, abstract: false, final true
  inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionAsset(InputActionAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionAsset(InputActionAsset const&) = delete;

  /// @brief Field m_ActionMaps, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> ___m_ActionMaps;

  /// @brief Field m_ControlSchemes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> ___m_ControlSchemes;

  /// @brief Field m_SharedStateForAllMaps, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* ___m_SharedStateForAllMaps;

  /// @brief Field m_BindingMask, offset: 0x30, size: 0x60, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ___m_BindingMask;

  /// @brief Field m_ParameterOverridesCount, offset: 0x90, size: 0x4, def value: None
  int32_t ___m_ParameterOverridesCount;

  /// @brief Field m_ParameterOverrides, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>
      ___m_ParameterOverrides;

  /// @brief Field m_Devices, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::InputSystem::__InputActionMap__DeviceArray ___m_Devices;

  /// @brief Field Extension offset 0xffffffff size 0x8
  static constexpr ::ConstString Extension{ u"inputactions" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionAsset, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ActionMaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ControlSchemes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_SharedStateForAllMaps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_BindingMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ParameterOverridesCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ParameterOverrides) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_Devices) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionAsset*, "UnityEngine.InputSystem", "InputActionAsset");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*, "UnityEngine.InputSystem", "InputActionAsset/<GetEnumerator>d__31");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*, "UnityEngine.InputSystem", "InputActionAsset/<get_bindings>d__8");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson, "UnityEngine.InputSystem", "InputActionAsset/ReadFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson, "UnityEngine.InputSystem", "InputActionAsset/WriteFileJson");
