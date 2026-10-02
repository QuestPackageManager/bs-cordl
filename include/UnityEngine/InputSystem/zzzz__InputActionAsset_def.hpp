#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class InputActionAsset_JsonVersion;
}
namespace UnityEngine::InputSystem {
struct InputActionAsset_ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct InputActionAsset_WriteFileJsonNoName;
}
namespace UnityEngine::InputSystem {
struct InputActionAsset_WriteFileJson;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__GetEnumerator_d__33;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__get_bindings_d__9;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_WriteMapJson;
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
struct InputControlScheme_SchemeJson;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionAsset_JsonVersion;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__GetEnumerator_d__33;
}
namespace UnityEngine::InputSystem {
class InputActionAsset__get_bindings_d__9;
}
namespace UnityEngine::InputSystem {
struct InputActionAsset_ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct InputActionAsset_WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct InputActionAsset_WriteFileJsonNoName;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset_JsonVersion*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionAsset_ReadFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionAsset_WriteFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset*, "UnityEngine.InputSystem", "InputActionAsset");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset_JsonVersion*, "UnityEngine.InputSystem", "InputActionAsset/JsonVersion");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33*, "UnityEngine.InputSystem", "InputActionAsset/<GetEnumerator>d__33");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9*, "UnityEngine.InputSystem", "InputActionAsset/<get_bindings>d__9");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset_ReadFileJson, "UnityEngine.InputSystem", "InputActionAsset/ReadFileJson");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset_WriteFileJson, "UnityEngine.InputSystem", "InputActionAsset/WriteFileJson");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName, "UnityEngine.InputSystem", "InputActionAsset/WriteFileJsonNoName");
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset/JsonVersion
class CORDL_TYPE InputActionAsset_JsonVersion : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionAsset_JsonVersion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset_JsonVersion", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionAsset_JsonVersion(InputActionAsset_JsonVersion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset_JsonVersion", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionAsset_JsonVersion(InputActionAsset_JsonVersion const&) = delete;

  /// @brief Field Current offset 0xffffffff size 0x4
  static constexpr int32_t Current{ static_cast<int32_t>(0x1) };

  /// @brief Field Version0 offset 0xffffffff size 0x4
  static constexpr int32_t Version0{ static_cast<int32_t>(0x0) };

  /// @brief Field Version1 offset 0xffffffff size 0x4
  static constexpr int32_t Version1{ static_cast<int32_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset_JsonVersion) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputActionMap::WriteMapJson, UnityEngine.InputSystem.InputControlScheme::SchemeJson
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionAsset/WriteFileJson
struct CORDL_TYPE InputActionAsset_WriteFileJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionAsset_WriteFileJson();

  // Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlSchemes", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>", modifiers: "", def_value: None, comment: None }]
  constexpr InputActionAsset_WriteFileJson(int32_t version, ::StringW name, ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson> maps,
                                           ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field version, offset: 0x0, size: 0x4, def value: None
  int32_t version;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field maps, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson> maps;

  /// @brief Field controlSchemes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJson, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJson, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJson, maps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJson, controlSchemes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJson) == 0x20, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputActionMap::WriteMapJson, UnityEngine.InputSystem.InputControlScheme::SchemeJson
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionAsset/WriteFileJsonNoName
struct CORDL_TYPE InputActionAsset_WriteFileJsonNoName {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionAsset_WriteFileJsonNoName();

  // Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>", modifiers: "", def_value: None, comment: None }]
  constexpr InputActionAsset_WriteFileJsonNoName(::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson> maps,
                                                 ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field maps, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson> maps;

  /// @brief Field controlSchemes, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName, maps) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName, controlSchemes) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName) == 0x10, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputActionMap::ReadMapJson, UnityEngine.InputSystem.InputControlScheme::SchemeJson
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionAsset/ReadFileJson
struct CORDL_TYPE InputActionAsset_ReadFileJson {
public:
  // Declarations
  /// @brief Method ToAsset, addr 0x69001cc, size 0x94, virtual false, abstract: false, final false
  inline void ToAsset(::UnityEngine::InputSystem::InputActionAsset* asset);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionAsset_ReadFileJson();

  // Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson>", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlSchemes", ty:
  // "::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>", modifiers: "", def_value: None, comment: None }]
  constexpr InputActionAsset_ReadFileJson(int32_t version, ::StringW name, ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson> maps,
                                          ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field version, offset: 0x0, size: 0x4, def value: None
  int32_t version;

  /// @brief Field name, offset: 0x8, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field maps, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson> maps;

  /// @brief Field controlSchemes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme_SchemeJson> controlSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_ReadFileJson, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_ReadFileJson, name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_ReadFileJson, maps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset_ReadFileJson, controlSchemes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset_ReadFileJson) == 0x20, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__33
class CORDL_TYPE InputActionAsset__GetEnumerator_d__33 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current)) ::UnityEngine::InputSystem::InputAction*
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputAction* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> __4__this;

  /// @brief Field <actionCount>5__4, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__actionCount_5__4, put = __cordl_internal_set__actionCount_5__4)) int32_t _actionCount_5__4;

  /// @brief Field <actions>5__3, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__actions_5__3,
                      put = __cordl_internal_set__actions_5__3)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>
      _actions_5__3;

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

  /// @brief Method MoveNext, addr 0x690265c, size 0x128, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current, addr 0x69027dc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputAction* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x69027e4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x690281c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x6902658, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get___2__current();

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

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x6901150, size 0x8, virtual false, abstract: false, final false
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
  constexpr InputActionAsset__GetEnumerator_d__33();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__GetEnumerator_d__33", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionAsset__GetEnumerator_d__33(InputActionAsset__GetEnumerator_d__33&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__GetEnumerator_d__33", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionAsset__GetEnumerator_d__33(InputActionAsset__GetEnumerator_d__33 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10581 };

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
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____actions_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____actionCount_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33, ____n_5__5) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33) == 0x48, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.InputSystem.InputBinding
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__9
class CORDL_TYPE InputActionAsset__get_bindings_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current)) ::UnityEngine::InputSystem::InputBinding
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x58
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityEngine::InputSystem::InputBinding __2__current;

  /// @brief Field <>4__this, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <bindings>5__4, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__bindings_5__4, put = __cordl_internal_set__bindings_5__4)) ::ArrayW<::UnityEngine::InputSystem::InputBinding> _bindings_5__4;

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

  /// @brief Method MoveNext, addr 0x6902828, size 0x15c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief [DebuggerHidden]
  static inline ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9* New_ctor(int32_t __1__state);

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator, addr 0x6902a34, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current, addr 0x6902984, size 0x10, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6902acc, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6902994, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// [DebuggerHidden]
  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x69029cc, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// [DebuggerHidden]
  /// @brief Method System.IDisposable.Dispose, addr 0x6902824, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityEngine::InputSystem::InputBinding const& __cordl_internal_get___2__current() const;

  constexpr ::UnityEngine::InputSystem::InputBinding& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get__bindings_5__4() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get__bindings_5__4();

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

  constexpr void __cordl_internal_set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set__i_5__3(int32_t value);

  constexpr void __cordl_internal_set__n_5__6(int32_t value);

  constexpr void __cordl_internal_set__numActionMaps_5__2(int32_t value);

  constexpr void __cordl_internal_set__numBindings_5__5(int32_t value);

  /// [DebuggerHidden]
  /// @brief Method .ctor, addr 0x68fec80, size 0x20, virtual false, abstract: false, final false
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
  constexpr InputActionAsset__get_bindings_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__get_bindings_d__9", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionAsset__get_bindings_d__9(InputActionAsset__get_bindings_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset__get_bindings_d__9", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionAsset__get_bindings_d__9(InputActionAsset__get_bindings_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10582 };

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
  ::ArrayW<::UnityEngine::InputSystem::InputBinding> ____bindings_5__4;

  /// @brief Field <numBindings>5__5, offset: 0x90, size: 0x4, def value: None
  int32_t ____numBindings_5__5;

  /// @brief Field <n>5__6, offset: 0x94, size: 0x4, def value: None
  int32_t ____n_5__6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____l__initialThreadId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, _____4__this) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____numActionMaps_5__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____i_5__3) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____bindings_5__4) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____numBindings_5__5) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9, ____n_5__6) == 0x94, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9) == 0x98, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// [DefaultMember("Item")]
// Dependencies System.Nullable`1<T>, UnityEngine.InputSystem.InputActionMap, UnityEngine.InputSystem.InputActionMap::DeviceArray,
// UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterOverride, UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.InputControlScheme, UnityEngine.ScriptableObject
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionAsset
class CORDL_TYPE InputActionAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using JsonVersion = ::UnityEngine::InputSystem::InputActionAsset_JsonVersion;

  using ReadFileJson = ::UnityEngine::InputSystem::InputActionAsset_ReadFileJson;

  using WriteFileJson = ::UnityEngine::InputSystem::InputActionAsset_WriteFileJson;

  using WriteFileJsonNoName = ::UnityEngine::InputSystem::InputActionAsset_WriteFileJsonNoName;

  using _GetEnumerator_d__33 = ::UnityEngine::InputSystem::InputActionAsset__GetEnumerator_d__33;

  using _get_bindings_d__9 = ::UnityEngine::InputSystem::InputActionAsset__get_bindings_d__9;

  __declspec(property(get = get_Item)) ::UnityEngine::InputSystem::InputAction* Item[];

  __declspec(property(get = get_actionMaps)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> actionMaps;

  __declspec(property(get = get_bindingMask, put = set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_bindings)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* bindings;

  __declspec(property(get = get_controlSchemes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> controlSchemes;

  __declspec(property(get = get_devices, put = set_devices)) ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices;

  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Field m_ActionMaps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionMaps, put = __cordl_internal_set_m_ActionMaps)) ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> m_ActionMaps;

  /// @brief Field m_BindingMask, offset 0x38, size 0x60
  __declspec(property(get = __cordl_internal_get_m_BindingMask, put = __cordl_internal_set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask;

  /// @brief Field m_ControlSchemes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlSchemes, put = __cordl_internal_set_m_ControlSchemes)) ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> m_ControlSchemes;

  /// @brief Field m_Devices, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Devices, put = __cordl_internal_set_m_Devices)) ::UnityEngine::InputSystem::InputActionMap_DeviceArray m_Devices;

  /// @brief Field m_IsProjectWide, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsProjectWide, put = __cordl_internal_set_m_IsProjectWide)) bool m_IsProjectWide;

  /// @brief Field m_ParameterOverrides, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParameterOverrides,
                      put = __cordl_internal_set_m_ParameterOverrides)) ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>
      m_ParameterOverrides;

  /// @brief Field m_ParameterOverridesCount, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParameterOverridesCount, put = __cordl_internal_set_m_ParameterOverridesCount)) int32_t m_ParameterOverridesCount;

  /// @brief Field m_SharedStateForAllMaps, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SharedStateForAllMaps, put = __cordl_internal_set_m_SharedStateForAllMaps)) ::UnityEngine::InputSystem::InputActionState* m_SharedStateForAllMaps;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

  /// @brief Method Contains, addr 0x6901060, size 0x9c, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Disable, addr 0x6900efc, size 0x138, virtual true, abstract: false, final true
  inline void Disable();

  /// @brief Method Enable, addr 0x6900d78, size 0x138, virtual true, abstract: false, final true
  inline void Enable();

  /// @brief Method FindAction, addr 0x68ff15c, size 0x33c, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindAction, addr 0x690088c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid guid);

  /// @brief Method FindActionMap, addr 0x6900804, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::System::Guid id);

  /// @brief Method FindActionMap, addr 0x69005f4, size 0x1cc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::StringW nameOrId, bool throwIfNotFound);

  /// @brief Method FindBinding, addr 0x690042c, size 0xdc, virtual true, abstract: false, final true
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ::by_ref<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method FindControlScheme, addr 0x6900a18, size 0x108, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlScheme(::StringW name);

  /// @brief Method FindControlSchemeIndex, addr 0x6900944, size 0xd4, virtual false, abstract: false, final false
  inline int32_t FindControlSchemeIndex(::StringW name);

  /// @brief Method FromJson, addr 0x6900260, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> FromJson(::StringW json);

  /// [IteratorStateMachine(typeof(UnityEngine.InputSystem.InputActionAsset::<GetEnumerator>d__33))]
  /// @brief Method GetEnumerator, addr 0x69010fc, size 0x54, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();

  /// @brief Method IsEmpty, addr 0x6901160, size 0x80, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method IsUsableWithDevice, addr 0x6900b20, size 0x178, virtual false, abstract: false, final false
  inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method LoadFromJson, addr 0x68ff8dc, size 0xd8, virtual false, abstract: false, final false
  inline void LoadFromJson(::StringW json);

  /// @brief Method MarkAsDirty, addr 0x690115c, size 0x4, virtual false, abstract: false, final false
  inline void MarkAsDirty();

  /// @brief Method MigrateJson, addr 0x68ff9b4, size 0x818, virtual false, abstract: false, final false
  inline void MigrateJson(::by_ref<::UnityEngine::InputSystem::InputActionAsset_ReadFileJson> parsedJson);

  static inline ::UnityEngine::InputSystem::InputActionAsset* New_ctor();

  /// @brief Method OnDestroy, addr 0x6901764, size 0x28, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnSetupChanged, addr 0x69014c0, size 0x7c, virtual false, abstract: false, final false
  inline void OnSetupChanged();

  /// @brief Method OnWantToChangeSetup, addr 0x69011e0, size 0x78, virtual false, abstract: false, final false
  inline void OnWantToChangeSetup();

  /// @brief Method ReResolveIfNecessary, addr 0x68fee0c, size 0x40, virtual false, abstract: false, final false
  inline void ReResolveIfNecessary(bool fullResolve);

  /// @brief Method ResolveBindingsIfNecessary, addr 0x69016e4, size 0x80, virtual false, abstract: false, final false
  inline void ResolveBindingsIfNecessary();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6901158, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method ToJson, addr 0x68ff498, size 0xf8, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> const& __cordl_internal_get_m_ActionMaps() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>& __cordl_internal_get_m_ActionMaps();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> const& __cordl_internal_get_m_ControlSchemes() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme>& __cordl_internal_get_m_ControlSchemes();

  constexpr ::UnityEngine::InputSystem::InputActionMap_DeviceArray const& __cordl_internal_get_m_Devices() const;

  constexpr ::UnityEngine::InputSystem::InputActionMap_DeviceArray& __cordl_internal_get_m_Devices();

  constexpr bool const& __cordl_internal_get_m_IsProjectWide() const;

  constexpr bool& __cordl_internal_get_m_IsProjectWide();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride> const& __cordl_internal_get_m_ParameterOverrides() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>& __cordl_internal_get_m_ParameterOverrides();

  constexpr int32_t const& __cordl_internal_get_m_ParameterOverridesCount() const;

  constexpr int32_t& __cordl_internal_get_m_ParameterOverridesCount();

  constexpr ::UnityEngine::InputSystem::InputActionState* const& __cordl_internal_get_m_SharedStateForAllMaps() const;

  constexpr ::UnityEngine::InputSystem::InputActionState*& __cordl_internal_get_m_SharedStateForAllMaps();

  constexpr void __cordl_internal_set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*> value);

  constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme> value);

  constexpr void __cordl_internal_set_m_Devices(::UnityEngine::InputSystem::InputActionMap_DeviceArray value);

  constexpr void __cordl_internal_set_m_IsProjectWide(bool value);

  constexpr void __cordl_internal_set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride> value);

  constexpr void __cordl_internal_set_m_ParameterOverridesCount(int32_t value);

  constexpr void __cordl_internal_set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState* value);

  /// @brief Method .ctor, addr 0x690178c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x68ff0dc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW actionNameOrId);

  /// @brief Method get_actionMaps, addr 0x68feb50, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> get_actionMaps();

  /// @brief Method get_bindingMask, addr 0x68feca0, size 0x10, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// [IteratorStateMachine(typeof(UnityEngine.InputSystem.InputActionAsset::<get_bindings>d__9))]
  /// @brief Method get_bindings, addr 0x68fec10, size 0x70, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();

  /// @brief Method get_controlSchemes, addr 0x68febb8, size 0x58, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();

  /// @brief Method get_devices, addr 0x68fee4c, size 0x34, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();

  /// @brief Method get_enabled, addr 0x68fea04, size 0x14c, virtual false, abstract: false, final false
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

  /// @brief Method set_bindingMask, addr 0x68fecb0, size 0x15c, virtual true, abstract: false, final true
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method set_devices, addr 0x68fef10, size 0x4c, virtual true, abstract: false, final true
  inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionAsset(InputActionAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionAsset(InputActionAsset const&) = delete;

  /// @brief Field Extension offset 0xffffffff size 0x8
  static constexpr ::ConstString Extension{ u"inputactions" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10583 };

  /// @brief Field kDefaultAssetLayoutJson offset 0xffffffff size 0x8
  static constexpr ::ConstString kDefaultAssetLayoutJson{ u"{}" };

  /// [SerializeField]
  /// @brief Field m_ActionMaps, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> ___m_ActionMaps;

  /// [SerializeField]
  /// @brief Field m_ControlSchemes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControlScheme> ___m_ControlSchemes;

  /// [SerializeField]
  /// @brief Field m_IsProjectWide, offset: 0x28, size: 0x1, def value: None
  bool ___m_IsProjectWide;

  /// @brief Field m_SharedStateForAllMaps, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* ___m_SharedStateForAllMaps;

  /// @brief Field m_BindingMask, offset: 0x38, size: 0x60, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ___m_BindingMask;

  /// @brief Field m_ParameterOverridesCount, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_ParameterOverridesCount;

  /// @brief Field m_ParameterOverrides, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride> ___m_ParameterOverrides;

  /// @brief Field m_Devices, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::InputActionMap_DeviceArray ___m_Devices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ActionMaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ControlSchemes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_IsProjectWide) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_SharedStateForAllMaps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_BindingMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ParameterOverridesCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_ParameterOverrides) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionAsset, ___m_Devices) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset) == 0xb8, "Size mismatch!");

} // namespace UnityEngine::InputSystem
