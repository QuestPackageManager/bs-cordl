#pragma once
// IWYU pragma private; include "UnityEngine/Audio/RealtimeAccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RealtimeAccess)
// Forward declare root types
namespace UnityEngine::Audio {
struct RealtimeAccess;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::RealtimeAccess);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::RealtimeAccess, "UnityEngine.Audio", "RealtimeAccess");
// [IsReadOnly]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.RealtimeAccess
struct CORDL_TYPE RealtimeAccess {
public:
  // Declarations
  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Method get_IsCreated, addr 0x6eabc88, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RealtimeAccess();

  // Ctor Parameters [CppParam { name: "m_Realtime", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Frame", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_DTM", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RealtimeAccess(void* m_Realtime, int32_t m_Frame, int32_t m_DTM) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20391 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [NativeDisableUnsafePtrRestriction]
  /// @brief Field m_Realtime, offset: 0x0, size: 0x8, def value: None
  void* m_Realtime;

  /// @brief Field m_Frame, offset: 0x8, size: 0x4, def value: None
  int32_t m_Frame;

  /// @brief Field m_DTM, offset: 0xc, size: 0x4, def value: None
  int32_t m_DTM;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::RealtimeAccess, m_Realtime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::RealtimeAccess, m_Frame) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::RealtimeAccess, m_DTM) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::RealtimeAccess) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
