#pragma once
// IWYU pragma private; include "GlobalNamespace\UnityPlayerLoopManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityPlayerLoopManager)
namespace GlobalNamespace {
struct UnityPlayerLoopManager_InsertPosition;
}
namespace GlobalNamespace {
struct UnityPlayerLoopManager_SystemToInsert;
}
namespace GlobalNamespace {
class UnityPlayerLoopManager___c__DisplayClass3_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
struct PlayerLoopSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnityPlayerLoopManager_InsertPosition;
}
namespace GlobalNamespace {
class UnityPlayerLoopManager;
}
namespace GlobalNamespace {
class UnityPlayerLoopManager___c__DisplayClass3_0;
}
namespace GlobalNamespace {
struct UnityPlayerLoopManager_SystemToInsert;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityPlayerLoopManager_InsertPosition);
MARK_REF_T(::GlobalNamespace::UnityPlayerLoopManager*);
MARK_REF_T(::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*);
MARK_VAL_T(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityPlayerLoopManager_InsertPosition, "", "UnityPlayerLoopManager/InsertPosition");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityPlayerLoopManager*, "", "UnityPlayerLoopManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0*, "", "UnityPlayerLoopManager/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, "", "UnityPlayerLoopManager/SystemToInsert");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityPlayerLoopManager/InsertPosition
struct CORDL_TYPE UnityPlayerLoopManager_InsertPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityPlayerLoopManager_InsertPosition_Unwrapped
  enum struct __UnityPlayerLoopManager_InsertPosition_Unwrapped : int32_t {
    __E_Before = static_cast<int32_t>(0x0),
    __E_After = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityPlayerLoopManager_InsertPosition_Unwrapped() const noexcept {
    return static_cast<__UnityPlayerLoopManager_InsertPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityPlayerLoopManager_InsertPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityPlayerLoopManager_InsertPosition(int32_t value__) noexcept;

  /// @brief Field After value: I32(1)
  static ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition const After;

  /// @brief Field Before value: I32(0)
  static ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition const Before;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22772 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityPlayerLoopManager_InsertPosition, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityPlayerLoopManager_InsertPosition) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.LowLevel.PlayerLoopSystem, UnityPlayerLoopManager::InsertPosition
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityPlayerLoopManager/SystemToInsert
struct CORDL_TYPE UnityPlayerLoopManager_SystemToInsert {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x58532fc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW relativeToSystem, ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition position, ::UnityEngine::LowLevel::PlayerLoopSystem system);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityPlayerLoopManager_SystemToInsert();

  // Ctor Parameters [CppParam { name: "Position", ty: "::GlobalNamespace::UnityPlayerLoopManager_InsertPosition", modifiers: "", def_value: None }, CppParam { name: "RelativeToSystem", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "System", ty: "::UnityEngine::LowLevel::PlayerLoopSystem", modifiers: "", def_value: None }]
  constexpr UnityPlayerLoopManager_SystemToInsert(::GlobalNamespace::UnityPlayerLoopManager_InsertPosition Position, ::StringW RelativeToSystem,
                                                  ::UnityEngine::LowLevel::PlayerLoopSystem System) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22773 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field Position, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition Position;

  /// @brief Field RelativeToSystem, offset: 0x8, size: 0x8, def value: None
  ::StringW RelativeToSystem;

  /// @brief Field System, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::LowLevel::PlayerLoopSystem System;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, RelativeToSystem) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, System) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityPlayerLoopManager/<>c__DisplayClass3_0
class CORDL_TYPE UnityPlayerLoopManager___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0)) ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* __9__0;

  /// @brief Field <>9__1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1)) ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* __9__1;

  /// @brief Field currentSystemName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentSystemName, put = __cordl_internal_set_currentSystemName)) ::StringW currentSystemName;

  static inline ::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0* New_ctor();

  /// @brief Method <InsertSystems>b__0, addr 0x5853fc8, size 0x38, virtual false, abstract: false, final false
  inline bool _InsertSystems_b__0(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert s);

  /// @brief Method <InsertSystems>b__1, addr 0x5854000, size 0x38, virtual false, abstract: false, final false
  inline bool _InsertSystems_b__1(::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert s);

  constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* const& __cordl_internal_get___9__0() const;

  constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>*& __cordl_internal_get___9__0();

  constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* const& __cordl_internal_get___9__1() const;

  constexpr ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>*& __cordl_internal_get___9__1();

  constexpr ::StringW const& __cordl_internal_get_currentSystemName() const;

  constexpr ::StringW& __cordl_internal_get_currentSystemName();

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* value);

  constexpr void __cordl_internal_set___9__1(::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* value);

  constexpr void __cordl_internal_set_currentSystemName(::StringW value);

  /// @brief Method .ctor, addr 0x5853fc4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityPlayerLoopManager___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopManager___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityPlayerLoopManager___c__DisplayClass3_0(UnityPlayerLoopManager___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopManager___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityPlayerLoopManager___c__DisplayClass3_0(UnityPlayerLoopManager___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22774 };

  /// @brief Field currentSystemName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___currentSystemName;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* _____9__0;

  /// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert, bool>* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0, ___currentSystemName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0, _____9__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityPlayerLoopManager
class CORDL_TYPE UnityPlayerLoopManager : public ::System::Object {
public:
  // Declarations
  using InsertPosition = ::GlobalNamespace::UnityPlayerLoopManager_InsertPosition;

  using SystemToInsert = ::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert;

  using __c__DisplayClass3_0 = ::GlobalNamespace::UnityPlayerLoopManager___c__DisplayClass3_0;

  /// @brief Method InitializePlayerLoop, addr 0x5852efc, size 0x400, virtual false, abstract: false, final false
  static inline void InitializePlayerLoop();

  /// @brief Method InsertSystems, addr 0x5853318, size 0xa5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevel::PlayerLoopSystem InsertSystems(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem> loopSystem,
                                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::UnityPlayerLoopManager_SystemToInsert>* systemsToInsert);

  /// @brief Method RemoveDisabledSubsystems, addr 0x5853d74, size 0x250, virtual false, abstract: false, final false
  static inline bool RemoveDisabledSubsystems(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem> loop, ::ArrayW<::System::Type*> typesToRemove);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityPlayerLoopManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityPlayerLoopManager(UnityPlayerLoopManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityPlayerLoopManager(UnityPlayerLoopManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityPlayerLoopManager) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
