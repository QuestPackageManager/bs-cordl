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
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
struct __InputActionAsset__ReadFileJson;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
class __InputActionAsset___GetEnumerator_d__31;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class __InputActionAsset___get_bindings_d__8;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem {
struct __InputActionAsset__WriteFileJson;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct __InputControlScheme__SchemeJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteMapJson;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6221))
// CS Name: ::InputActionAsset::WriteFileJson
struct CORDL_TYPE __InputActionAsset__WriteFileJson {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maps", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>", modifiers: "", def_value: None }, CppParam { name:
  // "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>", modifiers: "", def_value:
  // None }]
  constexpr __InputActionAsset__WriteFileJson(
      ::StringW name, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> maps,
      ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> controlSchemes) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset__WriteFileJson();

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6222))
// CS Name: ::InputActionAsset::ReadFileJson
struct CORDL_TYPE __InputActionAsset__ReadFileJson {
public:
  // Declarations
  /// @brief Method ToAsset addr 0x28b9eac size 0xa4 virtual false final false
  inline void ToAsset(::UnityEngine::InputSystem::InputActionAsset* asset);

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maps", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>", modifiers: "", def_value: None }, CppParam { name:
  // "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>", modifiers: "", def_value:
  // None }]
  constexpr __InputActionAsset__ReadFileJson(
      ::StringW name, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> maps,
      ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson, ::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> controlSchemes) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset__ReadFileJson();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6273)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6223))
// CS Name: ::InputActionAsset::<get_bindings>d__8*
class CORDL_TYPE __InputActionAsset___get_bindings_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x58
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::InputSystem::InputBinding __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x70, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x78, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::InputSystem::InputActionAsset* __4__this;

  /// @brief Field <numActionMaps>5__2, offset 0x80, size 0x4
  __declspec(property(get = __get__numActionMaps_5__2, put = __set__numActionMaps_5__2)) int32_t _numActionMaps_5__2;

  /// @brief Field <i>5__3, offset 0x84, size 0x4
  __declspec(property(get = __get__i_5__3, put = __set__i_5__3)) int32_t _i_5__3;

  /// @brief Field <bindings>5__4, offset 0x88, size 0x8
  __declspec(property(get = __get__bindings_5__4, put = __set__bindings_5__4))::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> _bindings_5__4;

  /// @brief Field <numBindings>5__5, offset 0x90, size 0x4
  __declspec(property(get = __get__numBindings_5__5, put = __set__numBindings_5__5)) int32_t _numBindings_5__5;

  /// @brief Field <n>5__6, offset 0x94, size 0x4
  __declspec(property(get = __get__n_5__6, put = __set__n_5__6)) int32_t _n_5__6;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current))::UnityEngine::InputSystem::InputBinding
      System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::InputSystem::InputBinding& __get___2__current();

  constexpr ::UnityEngine::InputSystem::InputBinding const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::InputSystem::InputBinding value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::InputSystem::InputActionAsset*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::InputSystem::InputActionAsset* value);

  constexpr int32_t& __get__numActionMaps_5__2();

  constexpr int32_t const& __get__numActionMaps_5__2() const;

  constexpr void __set__numActionMaps_5__2(int32_t value);

  constexpr int32_t& __get__i_5__3();

  constexpr int32_t const& __get__i_5__3() const;

  constexpr void __set__i_5__3(int32_t value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>& __get__bindings_5__4();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> const& __get__bindings_5__4() const;

  constexpr void __set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value);

  constexpr int32_t& __get__numBindings_5__5();

  constexpr int32_t const& __get__numBindings_5__5() const;

  constexpr void __set__numBindings_5__5(int32_t value);

  constexpr int32_t& __get__n_5__6();

  constexpr int32_t const& __get__n_5__6() const;

  constexpr void __set__n_5__6(int32_t value);

  static inline ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x28b9198 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x28bc54c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x28bc550 size 0x14c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current addr 0x28bc69c size 0x10 virtual true final true
  inline ::UnityEngine::InputSystem::InputBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x28bc6ac size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x28bc6ec size 0x64 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator addr 0x28bc750 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28bc7f4 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___get_bindings_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionAsset___get_bindings_d__8(__InputActionAsset___get_bindings_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___get_bindings_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionAsset___get_bindings_d__8(__InputActionAsset___get_bindings_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset___get_bindings_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x58, def value: None
  ::UnityEngine::InputSystem::InputBinding _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x70, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionAsset* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6220)), TypeDefinitionIndex(TypeDefinitionIndex(6787)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6787), inst: 3039
// }), TypeDefinitionIndex(TypeDefinitionIndex(2611))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6224)) CS Name: ::InputActionAsset::<GetEnumerator>d__31*
class CORDL_TYPE __InputActionAsset___GetEnumerator_d__31 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::InputSystem::InputAction* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::InputSystem::InputActionAsset* __4__this;

  /// @brief Field <i>5__2, offset 0x28, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  /// @brief Field <actions>5__3, offset 0x30, size 0x10
  __declspec(property(get = __get__actions_5__3, put = __set__actions_5__3))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> _actions_5__3;

  /// @brief Field <actionCount>5__4, offset 0x40, size 0x4
  __declspec(property(get = __get__actionCount_5__4, put = __set__actionCount_5__4)) int32_t _actionCount_5__4;

  /// @brief Field <n>5__5, offset 0x44, size 0x4
  __declspec(property(get = __get__n_5__5, put = __set__n_5__5)) int32_t _n_5__5;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current))::UnityEngine::InputSystem::
      InputAction* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputActionAsset*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::InputSystem::InputActionAsset* value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>& __get__actions_5__3();

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> const& __get__actions_5__3() const;

  constexpr void __set__actions_5__3(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> value);

  constexpr int32_t& __get__actionCount_5__4();

  constexpr int32_t const& __get__actionCount_5__4() const;

  constexpr void __set__actionCount_5__4(int32_t value);

  constexpr int32_t& __get__n_5__5();

  constexpr int32_t const& __get__n_5__5() const;

  constexpr void __set__n_5__5(int32_t value);

  static inline ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x28baf24 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x28bc7f8 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x28bc7fc size 0x11c virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current addr 0x28bc978 size 0x8 virtual true final true
  inline ::UnityEngine::InputSystem::InputAction* System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x28bc980 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x28bc9c0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___GetEnumerator_d__31", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionAsset___GetEnumerator_d__31(__InputActionAsset___GetEnumerator_d__31&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionAsset___GetEnumerator_d__31", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionAsset___GetEnumerator_d__31(__InputActionAsset___GetEnumerator_d__31 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionAsset___GetEnumerator_d__31();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionAsset* _____4__this;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2446)), TypeDefinitionIndex(TypeDefinitionIndex(6273)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 3041
// }), TypeDefinitionIndex(TypeDefinitionIndex(10137)), TypeDefinitionIndex(TypeDefinitionIndex(6228))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6225)) CS Name:
// ::UnityEngine.InputSystem::InputActionAsset*
class CORDL_TYPE InputActionAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using _GetEnumerator_d__31 = ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31;

  using _get_bindings_d__8 = ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8;

  using ReadFileJson = ::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson;

  using WriteFileJson = ::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson;

  /// @brief Field m_ActionMaps, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ActionMaps, put = __set_m_ActionMaps))::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> m_ActionMaps;

  /// @brief Field m_ControlSchemes, offset 0x20, size 0x8
  __declspec(property(get = __get_m_ControlSchemes,
                      put = __set_m_ControlSchemes))::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> m_ControlSchemes;

  /// @brief Field m_SharedStateForAllMaps, offset 0x28, size 0x8
  __declspec(property(get = __get_m_SharedStateForAllMaps, put = __set_m_SharedStateForAllMaps))::UnityEngine::InputSystem::InputActionState* m_SharedStateForAllMaps;

  /// @brief Field m_BindingMask, offset 0x30, size 0x60
  __declspec(property(get = __get_m_BindingMask, put = __set_m_BindingMask))::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask;

  /// @brief Field m_ParameterOverridesCount, offset 0x90, size 0x4
  __declspec(property(get = __get_m_ParameterOverridesCount, put = __set_m_ParameterOverridesCount)) int32_t m_ParameterOverridesCount;

  /// @brief Field m_ParameterOverrides, offset 0x98, size 0x8
  __declspec(property(get = __get_m_ParameterOverrides,
                      put = __set_m_ParameterOverrides))::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,
                                                                 ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> m_ParameterOverrides;

  /// @brief Field m_Devices, offset 0xa0, size 0x10
  __declspec(property(get = __get_m_Devices, put = __set_m_Devices))::UnityEngine::InputSystem::__InputActionMap__DeviceArray m_Devices;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_actionMaps))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> actionMaps;

  __declspec(property(get = get_controlSchemes))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> controlSchemes;

  __declspec(property(get = get_bindings))::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* bindings;

  __declspec(property(get = get_bindingMask, put = set_bindingMask))::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_devices, put = set_devices))::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::InputAction* Item[];

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*>& __get_m_ActionMaps();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> const& __get_m_ActionMaps() const;

  constexpr void __set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*>& __get_m_ControlSchemes();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> const& __get_m_ControlSchemes() const;

  constexpr void __set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme, ::Array<::UnityEngine::InputSystem::InputControlScheme>*> value);

  constexpr ::UnityEngine::InputSystem::InputActionState*& __get_m_SharedStateForAllMaps();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> const& __get_m_SharedStateForAllMaps() const;

  constexpr void __set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState* value);

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __get_m_BindingMask();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __get_m_BindingMask() const;

  constexpr void __set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr int32_t& __get_m_ParameterOverridesCount();

  constexpr int32_t const& __get_m_ParameterOverridesCount() const;

  constexpr void __set_m_ParameterOverridesCount(int32_t value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>&
  __get_m_ParameterOverrides();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> const&
  __get_m_ParameterOverrides() const;

  constexpr void __set_m_ParameterOverrides(
      ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> value);

  constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray& __get_m_Devices();

  constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray const& __get_m_Devices() const;

  constexpr void __set_m_Devices(::UnityEngine::InputSystem::__InputActionMap__DeviceArray value);

  /// @brief Method get_enabled addr 0x28b8eb8 size 0x198 virtual false final false
  inline bool get_enabled();

  /// @brief Method get_actionMaps addr 0x28b9050 size 0x60 virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> get_actionMaps();

  /// @brief Method get_controlSchemes addr 0x28b90c0 size 0x60 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();

  /// @brief Method get_bindings addr 0x28b9120 size 0x78 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();

  /// @brief Method get_bindingMask addr 0x28b91cc size 0x10 virtual true final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method set_bindingMask addr 0x28b91dc size 0x13c virtual true final true
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method get_devices addr 0x28b9358 size 0x34 virtual true final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();

  /// @brief Method set_devices addr 0x28b9434 size 0x44 virtual true final true
  inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);

  /// @brief Method get_Item addr 0x28b95f4 size 0x88 virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW actionNameOrId);

  /// @brief Method ToJson addr 0x28b99ac size 0x9c virtual false final false
  inline ::StringW ToJson();

  /// @brief Method LoadFromJson addr 0x28b9dd0 size 0xdc virtual false final false
  inline void LoadFromJson(::StringW json);

  /// @brief Method FromJson addr 0x28b9f50 size 0xbc virtual false final false
  static inline ::UnityEngine::InputSystem::InputActionAsset* FromJson(::StringW json);

  /// @brief Method FindAction addr 0x28b967c size 0x330 virtual true final true
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindBinding addr 0x28ba128 size 0xec virtual true final true
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method FindActionMap addr 0x28ba2f4 size 0x1cc virtual false final false
  inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::StringW nameOrId, bool throwIfNotFound);

  /// @brief Method FindActionMap addr 0x28ba508 size 0x8c virtual false final false
  inline ::UnityEngine::InputSystem::InputActionMap* FindActionMap(::System::Guid id);

  /// @brief Method FindAction addr 0x28ba594 size 0x7c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid guid);

  /// @brief Method FindControlSchemeIndex addr 0x28ba658 size 0xdc virtual false final false
  inline int32_t FindControlSchemeIndex(::StringW name);

  /// @brief Method FindControlScheme addr 0x28ba734 size 0x130 virtual false final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlScheme(::StringW name);

  /// @brief Method IsUsableWithDevice addr 0x28ba864 size 0x174 virtual false final false
  inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Enable addr 0x28baaf0 size 0x160 virtual true final true
  inline void Enable();

  /// @brief Method Disable addr 0x28bac9c size 0x160 virtual true final true
  inline void Disable();

  /// @brief Method Contains addr 0x28bae30 size 0x8c virtual true final true
  inline bool Contains(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method GetEnumerator addr 0x28baebc size 0x68 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28baf4c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method MarkAsDirty addr 0x28baf50 size 0x4 virtual false final false
  inline void MarkAsDirty();

  /// @brief Method OnWantToChangeSetup addr 0x28baf54 size 0x80 virtual false final false
  inline void OnWantToChangeSetup();

  /// @brief Method OnSetupChanged addr 0x28bb270 size 0x84 virtual false final false
  inline void OnSetupChanged();

  /// @brief Method ReResolveIfNecessary addr 0x28b9318 size 0x40 virtual false final false
  inline void ReResolveIfNecessary(bool fullResolve);

  /// @brief Method ResolveBindingsIfNecessary addr 0x28bb4cc size 0xa0 virtual false final false
  inline void ResolveBindingsIfNecessary();

  /// @brief Method OnDestroy addr 0x28bb56c size 0x28 virtual false final false
  inline void OnDestroy();

  static inline ::UnityEngine::InputSystem::InputActionAsset* New_ctor();

  /// @brief Method .ctor addr 0x28bb594 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionAsset(InputActionAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionAsset(InputActionAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionAsset();

public:
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
