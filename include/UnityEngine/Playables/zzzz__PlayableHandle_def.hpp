#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableHandle)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableHandle);
// Dependencies System.IEquatable`1<T>, System.IntPtr
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableHandle
struct CORDL_TYPE PlayableHandle {
public:
  // Declarations
  /// @brief Field m_Null, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_Null, put = setStaticF_m_Null)) ::UnityEngine::Playables::PlayableHandle m_Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*();

  /// @brief Method CheckInputBounds, addr 0x48ccbf4, size 0x70, virtual false, abstract: false, final false
  inline bool CheckInputBounds(int32_t inputIndex);

  /// @brief Method CheckInputBounds, addr 0x48ccf8c, size 0x208, virtual false, abstract: false, final false
  inline bool CheckInputBounds(int32_t inputIndex, bool acceptAny);

  /// @brief Method CompareVersion, addr 0x48ccdfc, size 0x34, virtual false, abstract: false, final false
  static inline bool CompareVersion(::UnityEngine::Playables::PlayableHandle lhs, ::UnityEngine::Playables::PlayableHandle rhs);

  /// @brief Method Equals, addr 0x48cced8, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::PlayableHandle other);

  /// @brief Method Equals, addr 0x48cce30, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* p);

  /// @brief Method GetDuration, addr 0x48cd994, size 0x74, virtual false, abstract: false, final false
  inline double_t GetDuration();

  /// @brief Method GetDuration_Injected, addr 0x48cda08, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetDuration_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetGraph, addr 0x48cdbdc, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph GetGraph();

  /// @brief Method GetGraph_Injected, addr 0x48cdc68, size 0x44, virtual false, abstract: false, final false
  static inline void GetGraph_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::ByRef<::UnityEngine::Playables::PlayableGraph> ret);

  /// @brief Method GetHashCode, addr 0x48ccf58, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInput, addr 0x48cca5c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable GetInput(int32_t inputPort);

  /// @brief Method GetInputCount, addr 0x48cd194, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetInputCount();

  /// @brief Method GetInputCount_Injected, addr 0x48cdcac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetInputCount_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetInputHandle, addr 0x48ccac0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetInputHandle(int32_t index);

  /// @brief Method GetInputHandle_Injected, addr 0x48ce23c, size 0x54, virtual false, abstract: false, final false
  static inline void GetInputHandle_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, ::ByRef<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method GetInputWeight, addr 0x48cccf8, size 0x80, virtual false, abstract: false, final false
  inline float_t GetInputWeight(int32_t inputIndex);

  /// @brief Method GetInputWeightFromIndex, addr 0x48ccd78, size 0x84, virtual false, abstract: false, final false
  inline float_t GetInputWeightFromIndex(int32_t index);

  /// @brief Method GetInputWeightFromIndex_Injected, addr 0x48ce2e4, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetInputWeightFromIndex_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index);

  /// @brief Method GetObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetObject();

  /// @brief Method GetPlayState, addr 0x48cd3bc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState GetPlayState();

  /// @brief Method GetPlayState_Injected, addr 0x48cd430, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayState GetPlayState_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetPlayableType, addr 0x48cbcb0, size 0x74, virtual false, abstract: false, final false
  inline ::System::Type* GetPlayableType();

  /// @brief Method GetPlayableType_Injected, addr 0x48cd2b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Type* GetPlayableType_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetPreviousTime, addr 0x48cde9c, size 0x74, virtual false, abstract: false, final false
  inline double_t GetPreviousTime();

  /// @brief Method GetPreviousTime_Injected, addr 0x48cdf10, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetPreviousTime_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetScriptInstance, addr 0x48ce18c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Object* GetScriptInstance();

  /// @brief Method GetScriptInstance_Injected, addr 0x48ce200, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Object* GetScriptInstance_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetTime, addr 0x48cd69c, size 0x74, virtual false, abstract: false, final false
  inline double_t GetTime();

  /// @brief Method GetTimeWrapMode, addr 0x48ce014, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode();

  /// @brief Method GetTimeWrapMode_Injected, addr 0x48ce088, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetTime_Injected, addr 0x48cd710, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetTime_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method IsDone, addr 0x48cd81c, size 0x74, virtual false, abstract: false, final false
  inline bool IsDone();

  /// @brief Method IsDone_Injected, addr 0x48cd890, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsDone_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method IsPlayableOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsPlayableOfType();

  /// @brief Method IsValid, addr 0x48cd208, size 0x74, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValid_Injected, addr 0x48cd27c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValid_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method Pause, addr 0x48cd51c, size 0x74, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause_Injected, addr 0x48cd590, size 0x3c, virtual false, abstract: false, final false
  static inline void Pause_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method Play, addr 0x48cd46c, size 0x74, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play_Injected, addr 0x48cd4e0, size 0x3c, virtual false, abstract: false, final false
  static inline void Play_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method SetDone, addr 0x48cd8cc, size 0x84, virtual false, abstract: false, final false
  inline void SetDone(bool value);

  /// @brief Method SetDone_Injected, addr 0x48cd950, size 0x44, virtual false, abstract: false, final false
  static inline void SetDone_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, bool value);

  /// @brief Method SetDuration, addr 0x48cda44, size 0x84, virtual false, abstract: false, final false
  inline void SetDuration(double_t value);

  /// @brief Method SetDuration_Injected, addr 0x48cdac8, size 0x4c, virtual false, abstract: false, final false
  static inline void SetDuration_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, double_t value);

  /// @brief Method SetInputCount, addr 0x48cdce8, size 0x84, virtual false, abstract: false, final false
  inline void SetInputCount(int32_t value);

  /// @brief Method SetInputCount_Injected, addr 0x48cdd6c, size 0x44, virtual false, abstract: false, final false
  static inline void SetInputCount_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t value);

  /// @brief Method SetInputWeight, addr 0x48ccb5c, size 0x98, virtual false, abstract: false, final false
  inline bool SetInputWeight(int32_t inputIndex, float_t weight);

  /// @brief Method SetInputWeight, addr 0x48cddb0, size 0x98, virtual false, abstract: false, final false
  inline void SetInputWeight(::UnityEngine::Playables::PlayableHandle input, float_t weight);

  /// @brief Method SetInputWeightFromIndex, addr 0x48ccc64, size 0x94, virtual false, abstract: false, final false
  inline void SetInputWeightFromIndex(int32_t index, float_t weight);

  /// @brief Method SetInputWeightFromIndex_Injected, addr 0x48ce290, size 0x54, virtual false, abstract: false, final false
  static inline void SetInputWeightFromIndex_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, float_t weight);

  /// @brief Method SetInputWeight_Injected, addr 0x48cde48, size 0x54, virtual false, abstract: false, final false
  static inline void SetInputWeight_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::ByRef<::UnityEngine::Playables::PlayableHandle> input, float_t weight);

  /// @brief Method SetPropagateSetTime, addr 0x48cdb14, size 0x84, virtual false, abstract: false, final false
  inline void SetPropagateSetTime(bool value);

  /// @brief Method SetPropagateSetTime_Injected, addr 0x48cdb98, size 0x44, virtual false, abstract: false, final false
  static inline void SetPropagateSetTime_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, bool value);

  /// @brief Method SetScriptInstance, addr 0x48cd2f4, size 0x84, virtual false, abstract: false, final false
  inline void SetScriptInstance(::System::Object* scriptInstance);

  /// @brief Method SetScriptInstance_Injected, addr 0x48cd378, size 0x44, virtual false, abstract: false, final false
  static inline void SetScriptInstance_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::System::Object* scriptInstance);

  /// @brief Method SetSpeed, addr 0x48cd5cc, size 0x84, virtual false, abstract: false, final false
  inline void SetSpeed(double_t value);

  /// @brief Method SetSpeed_Injected, addr 0x48cd650, size 0x4c, virtual false, abstract: false, final false
  static inline void SetSpeed_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, double_t value);

  /// @brief Method SetTime, addr 0x48cd74c, size 0x84, virtual false, abstract: false, final false
  inline void SetTime(double_t value);

  /// @brief Method SetTimeWrapMode, addr 0x48ce0c4, size 0x84, virtual false, abstract: false, final false
  inline void SetTimeWrapMode(::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method SetTimeWrapMode_Injected, addr 0x48ce148, size 0x44, virtual false, abstract: false, final false
  static inline void SetTimeWrapMode_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method SetTime_Injected, addr 0x48cd7d0, size 0x4c, virtual false, abstract: false, final false
  static inline void SetTime_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, double_t value);

  /// @brief Method SetTraversalMode, addr 0x48cdf4c, size 0x84, virtual false, abstract: false, final false
  inline void SetTraversalMode(::UnityEngine::Playables::PlayableTraversalMode mode);

  /// @brief Method SetTraversalMode_Injected, addr 0x48cdfd0, size 0x44, virtual false, abstract: false, final false
  static inline void SetTraversalMode_Injected(::ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::UnityEngine::Playables::PlayableTraversalMode mode);

  static inline ::UnityEngine::Playables::PlayableHandle getStaticF_m_Null();

  /// @brief Method get_Null, addr 0x48cbeb4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle get_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>* i___System__IEquatable_1___UnityEngine__Playables__PlayableHandle_();

  /// @brief Method op_Equality, addr 0x48cbdbc, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Playables::PlayableHandle x, ::UnityEngine::Playables::PlayableHandle y);

  static inline void setStaticF_m_Null(::UnityEngine::Playables::PlayableHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableHandle();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PlayableHandle(::System::IntPtr m_Handle, uint32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11286 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Handle;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableHandle, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");
