#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VRsenalScoreLogger)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class __VRsenalScoreLogger___Start_d__3;
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
class YieldInstruction;
}
// Forward declare root types
namespace GlobalNamespace {
class VRsenalScoreLogger;
}
namespace GlobalNamespace {
class __VRsenalScoreLogger___Start_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRsenalScoreLogger);
MARK_REF_PTR_T(::GlobalNamespace::__VRsenalScoreLogger___Start_d__3);
// Type: ::<Start>d__3
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4015))
// CS Name: ::VRsenalScoreLogger::<Start>d__3*
class CORDL_TYPE __VRsenalScoreLogger___Start_d__3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::VRsenalScoreLogger* __4__this;

  /// @brief Field <yieldInstruction>5__2, offset 0x28, size 0x8
  __declspec(property(get = __get__yieldInstruction_5__2, put = __set__yieldInstruction_5__2))::UnityEngine::YieldInstruction* _yieldInstruction_5__2;

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

  constexpr ::GlobalNamespace::VRsenalScoreLogger*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRsenalScoreLogger*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::VRsenalScoreLogger* value);

  constexpr ::UnityEngine::YieldInstruction*& __get__yieldInstruction_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::YieldInstruction*> const& __get__yieldInstruction_5__2() const;

  constexpr void __set__yieldInstruction_5__2(::UnityEngine::YieldInstruction* value);

  static inline ::GlobalNamespace::__VRsenalScoreLogger___Start_d__3* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2222fdc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x222324c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2223250, size 0x6bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x222390c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2223914, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2223954, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__VRsenalScoreLogger___Start_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRsenalScoreLogger___Start_d__3(__VRsenalScoreLogger___Start_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRsenalScoreLogger___Start_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRsenalScoreLogger___Start_d__3(__VRsenalScoreLogger___Start_d__3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRsenalScoreLogger___Start_d__3();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::VRsenalScoreLogger* _____4__this;

  /// @brief Field <yieldInstruction>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::YieldInstruction* ____yieldInstruction_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRsenalScoreLogger___Start_d__3, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRsenalScoreLogger___Start_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRsenalScoreLogger___Start_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRsenalScoreLogger___Start_d__3, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRsenalScoreLogger___Start_d__3, ____yieldInstruction_5__2) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VRsenalScoreLogger
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4016))
// CS Name: ::VRsenalScoreLogger*
class CORDL_TYPE VRsenalScoreLogger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__3 = ::GlobalNamespace::__VRsenalScoreLogger___Start_d__3;

  /// @brief Field _scoreController, offset 0x18, size 0x8
  __declspec(property(get = __get__scoreController, put = __set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _difficultyBeatmap, offset 0x20, size 0x8
  __declspec(property(get = __get__difficultyBeatmap, put = __set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _levelEndActions, offset 0x28, size 0x8
  __declspec(property(get = __get__levelEndActions, put = __set__levelEndActions))::GlobalNamespace::ILevelEndActions* _levelEndActions;

  constexpr ::GlobalNamespace::IScoreController*& __get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __get__scoreController() const;

  constexpr void __set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__difficultyBeatmap() const;

  constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::ILevelEndActions*& __get__levelEndActions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __get__levelEndActions() const;

  constexpr void __set__levelEndActions(::GlobalNamespace::ILevelEndActions* value);

  /// @brief Method Start, addr 0x2222f74, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method OnDestroy, addr 0x2223004, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleLevelFinishedEvent, addr 0x222310c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLevelFinishedEvent();

  /// @brief Method LogScore, addr 0x2223110, size 0x134, virtual false, abstract: false, final false
  inline void LogScore();

  static inline ::GlobalNamespace::VRsenalScoreLogger* New_ctor();

  /// @brief Method .ctor, addr 0x2223244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRsenalScoreLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRsenalScoreLogger(VRsenalScoreLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRsenalScoreLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRsenalScoreLogger(VRsenalScoreLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRsenalScoreLogger();

public:
  /// @brief Field _scoreController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _difficultyBeatmap, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

  /// @brief Field _levelEndActions, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____levelEndActions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRsenalScoreLogger, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalScoreLogger, ____scoreController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalScoreLogger, ____difficultyBeatmap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRsenalScoreLogger, ____levelEndActions) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRsenalScoreLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRsenalScoreLogger*, "", "VRsenalScoreLogger");
NEED_NO_BOX(::GlobalNamespace::__VRsenalScoreLogger___Start_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRsenalScoreLogger___Start_d__3*, "", "VRsenalScoreLogger/<Start>d__3");
