#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardShortcutsManager)
namespace System {
class Action;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct KeyCode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __KeyboardShortcutsManager__KeyboardShortcut;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class KeyboardShortcutsManager;
}
namespace GlobalNamespace {
class __KeyboardShortcutsManager__KeyboardShortcut;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::KeyboardShortcutsManager);
MARK_REF_PTR_T(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut);
// Type: ::KeyboardShortcut
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9986)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13811))
// CS Name: ::KeyboardShortcutsManager::KeyboardShortcut*
class CORDL_TYPE __KeyboardShortcutsManager__KeyboardShortcut : public ::System::Object {
public:
  // Declarations
  /// @brief Field mainKey, offset 0x10, size 0x4
  __declspec(property(get = __get_mainKey, put = __set_mainKey))::UnityEngine::KeyCode mainKey;

  /// @brief Field combinationKey1, offset 0x14, size 0x4
  __declspec(property(get = __get_combinationKey1, put = __set_combinationKey1))::UnityEngine::KeyCode combinationKey1;

  /// @brief Field combinationKey2, offset 0x18, size 0x4
  __declspec(property(get = __get_combinationKey2, put = __set_combinationKey2))::UnityEngine::KeyCode combinationKey2;

  constexpr ::UnityEngine::KeyCode& __get_mainKey();

  constexpr ::UnityEngine::KeyCode const& __get_mainKey() const;

  constexpr void __set_mainKey(::UnityEngine::KeyCode value);

  constexpr ::UnityEngine::KeyCode& __get_combinationKey1();

  constexpr ::UnityEngine::KeyCode const& __get_combinationKey1() const;

  constexpr void __set_combinationKey1(::UnityEngine::KeyCode value);

  constexpr ::UnityEngine::KeyCode& __get_combinationKey2();

  constexpr ::UnityEngine::KeyCode const& __get_combinationKey2() const;

  constexpr void __set_combinationKey2(::UnityEngine::KeyCode value);

  static inline ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut* New_ctor(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1,
                                                                                          ::UnityEngine::KeyCode combinationKey2);

  /// @brief Method .ctor addr 0x1f919b8 size 0x3c virtual false final false
  inline void _ctor(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2);

  /// @brief Method GetHashCode addr 0x1f91f38 size 0x14 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x1f91f4c size 0xb8 virtual true final false
  inline bool Equals(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "__KeyboardShortcutsManager__KeyboardShortcut", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __KeyboardShortcutsManager__KeyboardShortcut(__KeyboardShortcutsManager__KeyboardShortcut&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__KeyboardShortcutsManager__KeyboardShortcut", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __KeyboardShortcutsManager__KeyboardShortcut(__KeyboardShortcutsManager__KeyboardShortcut const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyboardShortcutsManager__KeyboardShortcut();

public:
  /// @brief Field mainKey, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___mainKey;

  /// @brief Field combinationKey1, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___combinationKey1;

  /// @brief Field combinationKey2, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___combinationKey2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut, ___mainKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut, ___combinationKey1) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut, ___combinationKey2) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KeyboardShortcutsManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13812))
// CS Name: ::KeyboardShortcutsManager*
class CORDL_TYPE KeyboardShortcutsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using KeyboardShortcut = ::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut;

  /// @brief Field _keyboardShortcutActions, offset 0x18, size 0x8
  __declspec(property(get = __get__keyboardShortcutActions,
                      put = __set__keyboardShortcutActions))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*,
                                                                                                         ::System::Collections::Generic::List_1<::System::Action*>*>* _keyboardShortcutActions;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Collections::Generic::List_1<::System::Action*>*>*&
  __get__keyboardShortcutActions();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Collections::Generic::List_1<::System::Action*>*>*> const&
  __get__keyboardShortcutActions() const;

  constexpr void __set__keyboardShortcutActions(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Collections::Generic::List_1<::System::Action*>*>* value);

  /// @brief Method Update addr 0x1f912c4 size 0x2fc virtual false final false
  inline void Update();

  /// @brief Method RemoveKeyboardShortcuts addr 0x1f915c0 size 0x164 virtual false final false
  inline void RemoveKeyboardShortcuts(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>* shortcutActions);

  /// @brief Method RemoveKeyboardShortcuts addr 0x1f91734 size 0x158 virtual false final false
  inline void RemoveKeyboardShortcuts(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>* shortcutActions);

  /// @brief Method RemoveKeyboardShortcut addr 0x1f9188c size 0x9c virtual false final false
  inline void RemoveKeyboardShortcut(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut* keyboardShortcut, ::System::Action* callback);

  /// @brief Method RemoveKeyboardShortcut addr 0x1f91928 size 0x90 virtual false final false
  inline void RemoveKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2, ::System::Action* callback);

  /// @brief Method RemoveKeyboardShortcut addr 0x1f919f4 size 0xc virtual false final false
  inline void RemoveKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::System::Action* callback);

  /// @brief Method RemoveKeyboardShortcut addr 0x1f91724 size 0x10 virtual false final false
  inline void RemoveKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::System::Action* callback);

  /// @brief Method AddKeyboardShortcuts addr 0x1f91a00 size 0x164 virtual false final false
  inline void AddKeyboardShortcuts(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::System::Action*>* shortcutActions);

  /// @brief Method AddKeyboardShortcuts addr 0x1f91b74 size 0x158 virtual false final false
  inline void AddKeyboardShortcuts(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Action*>* shortcutActions);

  /// @brief Method AddKeyboardShortcut addr 0x1f91ccc size 0x154 virtual false final false
  inline void AddKeyboardShortcut(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut* keyboardShortcut, ::System::Action* callback);

  /// @brief Method AddKeyboardShortcut addr 0x1f91e20 size 0x90 virtual false final false
  inline void AddKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2, ::System::Action* callback);

  /// @brief Method AddKeyboardShortcut addr 0x1f91eb0 size 0xc virtual false final false
  inline void AddKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::System::Action* callback);

  /// @brief Method AddKeyboardShortcut addr 0x1f91b64 size 0x10 virtual false final false
  inline void AddKeyboardShortcut(::UnityEngine::KeyCode mainKey, ::System::Action* callback);

  static inline ::GlobalNamespace::KeyboardShortcutsManager* New_ctor();

  /// @brief Method .ctor addr 0x1f91ebc size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardShortcutsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardShortcutsManager(KeyboardShortcutsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardShortcutsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardShortcutsManager(KeyboardShortcutsManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardShortcutsManager();

public:
  /// @brief Field _keyboardShortcutActions, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, ::System::Collections::Generic::List_1<::System::Action*>*>*
      ____keyboardShortcutActions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::KeyboardShortcutsManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyboardShortcutsManager, ____keyboardShortcutActions) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::KeyboardShortcutsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeyboardShortcutsManager*, "", "KeyboardShortcutsManager");
NEED_NO_BOX(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__KeyboardShortcutsManager__KeyboardShortcut*, "", "KeyboardShortcutsManager/KeyboardShortcut");
