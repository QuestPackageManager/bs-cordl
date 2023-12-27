#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableGraph)
namespace UnityEngine::Playables {
struct FrameRate;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableGraph);
// Type: UnityEngine.Playables::PlayableGraph
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10435))
// CS Name: ::UnityEngine.Playables::PlayableGraph
struct CORDL_TYPE PlayableGraph {
public:
  // Declarations
  /// @brief Method GetRootPlayable addr 0x2cf6200 size 0x4 virtual false final false
  inline ::UnityEngine::Playables::Playable GetRootPlayable(int32_t index);

  /// @brief Method Connect addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename U, typename V> inline bool Connect(U source, int32_t sourceOutputPort, V destination, int32_t destinationInputPort);

  /// @brief Method Evaluate addr 0x2cf6260 size 0x40 virtual false final false
  inline void Evaluate();

  /// @brief Method IsValid addr 0x2cf62ec size 0x3c virtual false final false
  inline bool IsValid();

  /// @brief Method IsPlaying addr 0x2cf6364 size 0x3c virtual false final false
  inline bool IsPlaying();

  /// @brief Method Evaluate addr 0x2cf62a0 size 0x4c virtual false final false
  inline void Evaluate(float_t deltaTime);

  /// @brief Method GetResolver addr 0x2cf6428 size 0x3c virtual false final false
  inline ::UnityEngine::IExposedPropertyTable* GetResolver();

  /// @brief Method GetPlayableCount addr 0x2cf64a0 size 0x3c virtual false final false
  inline int32_t GetPlayableCount();

  /// @brief Method GetRootPlayableCount addr 0x2cf6518 size 0x3c virtual false final false
  inline int32_t GetRootPlayableCount();

  /// @brief Method SynchronizeEvaluation addr 0x2cf6590 size 0x50 virtual false final false
  inline void SynchronizeEvaluation(::UnityEngine::Playables::PlayableGraph playable);

  /// @brief Method CreatePlayableHandle addr 0x2cf5cb0 size 0x54 virtual false final false
  inline ::UnityEngine::Playables::PlayableHandle CreatePlayableHandle();

  /// @brief Method CreateScriptOutputInternal addr 0x2cf5a70 size 0x54 virtual false final false
  inline bool CreateScriptOutputInternal(::StringW name, ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method GetRootPlayableInternal addr 0x2cf6204 size 0x5c virtual false final false
  inline ::UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int32_t index);

  /// @brief Method IsMatchFrameRateEnabled addr 0x2cf6710 size 0x3c virtual false final false
  inline bool IsMatchFrameRateEnabled();

  /// @brief Method GetFrameRate addr 0x2cf6788 size 0x4c virtual false final false
  inline ::UnityEngine::Playables::FrameRate GetFrameRate();

  /// @brief Method ConnectInternal addr 0x2cf6818 size 0x74 virtual false final false
  inline bool ConnectInternal(::UnityEngine::Playables::PlayableHandle source, int32_t sourceOutputPort, ::UnityEngine::Playables::PlayableHandle destination, int32_t destinationInputPort);

  /// @brief Method IsValid_Injected addr 0x2cf6328 size 0x3c virtual false final false
  static inline bool IsValid_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self);

  /// @brief Method IsPlaying_Injected addr 0x2cf63a0 size 0x3c virtual false final false
  static inline bool IsPlaying_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self);

  /// @brief Method Evaluate_Injected addr 0x2cf63dc size 0x4c virtual false final false
  static inline void Evaluate_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, float_t deltaTime);

  /// @brief Method GetResolver_Injected addr 0x2cf6464 size 0x3c virtual false final false
  static inline ::UnityEngine::IExposedPropertyTable* GetResolver_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self);

  /// @brief Method GetPlayableCount_Injected addr 0x2cf64dc size 0x3c virtual false final false
  static inline int32_t GetPlayableCount_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self);

  /// @brief Method GetRootPlayableCount_Injected addr 0x2cf6554 size 0x3c virtual false final false
  static inline int32_t GetRootPlayableCount_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self);

  /// @brief Method SynchronizeEvaluation_Injected addr 0x2cf65e0 size 0x44 virtual false final false
  static inline void SynchronizeEvaluation_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::PlayableGraph> playable);

  /// @brief Method CreatePlayableHandle_Injected addr 0x2cf6624 size 0x44 virtual false final false
  static inline void CreatePlayableHandle_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method CreateScriptOutputInternal_Injected addr 0x2cf6668 size 0x54 virtual false final false
  static inline bool CreateScriptOutputInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ::StringW name, ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method GetRootPlayableInternal_Injected addr 0x2cf66bc size 0x54 virtual false final false
  static inline void GetRootPlayableInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, int32_t index, ByRef<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method IsMatchFrameRateEnabled_Injected addr 0x2cf674c size 0x3c virtual false final false
  static inline bool IsMatchFrameRateEnabled_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self);

  /// @brief Method GetFrameRate_Injected addr 0x2cf67d4 size 0x44 virtual false final false
  static inline void GetFrameRate_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::FrameRate> ret);

  /// @brief Method ConnectInternal_Injected addr 0x2cf688c size 0x6c virtual false final false
  static inline bool ConnectInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> source, int32_t sourceOutputPort,
                                              ByRef<::UnityEngine::Playables::PlayableHandle> destination, int32_t destinationInputPort);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PlayableGraph(void* m_Handle, uint32_t m_Version) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableGraph();

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  void* m_Handle;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableGraph, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
