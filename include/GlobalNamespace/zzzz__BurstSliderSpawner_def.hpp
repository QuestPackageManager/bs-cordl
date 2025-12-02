#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BurstSliderSpawner)
namespace GlobalNamespace {
class BurstSliderSpawner_ProcessNoteDataDelegate;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteSpawnData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct SliderSpawnData;
}
namespace GlobalNamespace {
class VariableMovementDataProvider;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderSpawner;
}
namespace GlobalNamespace {
class BurstSliderSpawner_ProcessNoteDataDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BurstSliderSpawner);
MARK_REF_PTR_T(::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstSliderSpawner/ProcessNoteDataDelegate
class CORDL_TYPE BurstSliderSpawner_ProcessNoteDataDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x56bebb4, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNote, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x56bec68, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x56beba0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNote);

  static inline ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x56bea58, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderSpawner_ProcessNoteDataDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner_ProcessNoteDataDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderSpawner_ProcessNoteDataDelegate(BurstSliderSpawner_ProcessNoteDataDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner_ProcessNoteDataDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderSpawner_ProcessNoteDataDelegate(BurstSliderSpawner_ProcessNoteDataDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BurstSliderSpawner
class CORDL_TYPE BurstSliderSpawner : public ::System::Object {
public:
  // Declarations
  using ProcessNoteDataDelegate = ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate;

  /// @brief Method BezierCurve, addr 0x56be578, size 0x8c, virtual false, abstract: false, final false
  static inline void BezierCurve(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t t, ::ByRef<::UnityEngine::Vector2> pos,
                                 ::ByRef<::UnityEngine::Vector2> tangent);

  /// @brief Method ProcessSliderData, addr 0x56be604, size 0x418, virtual false, abstract: false, final false
  static inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData, bool forceIsFirstNote,
                                       ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider, ::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate* processNoteData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderSpawner(BurstSliderSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderSpawner(BurstSliderSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5639 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderSpawner, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderSpawner*, "", "BurstSliderSpawner");
NEED_NO_BOX(::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderSpawner_ProcessNoteDataDelegate*, "", "BurstSliderSpawner/ProcessNoteDataDelegate");
