#pragma once
// IWYU pragma private; include "GlobalNamespace\UnityPlayerLoopMarker_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityPlayerLoopMarker_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class UnityPlayerLoopMarker_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::UnityPlayerLoopMarker_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::UnityPlayerLoopMarker_1, "", "UnityPlayerLoopMarker`1");
// Dependencies System.Object, UnityEngine.LowLevel.PlayerLoopSystem
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityPlayerLoopMarker`1<T>
class CORDL_TYPE UnityPlayerLoopMarker_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field frame, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_frame, put = setStaticF_frame)) int32_t frame;

  /// @brief Field kSystem, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_kSystem, put = setStaticF_kSystem)) ::UnityEngine::LowLevel::PlayerLoopSystem kSystem;

  /// @brief Field previousTime, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_previousTime, put = setStaticF_previousTime)) double_t previousTime;

  /// @brief Field time, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_time, put = setStaticF_time)) double_t time;

  static inline ::GlobalNamespace::UnityPlayerLoopMarker_1<T>* New_ctor();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_frame();

  static inline ::UnityEngine::LowLevel::PlayerLoopSystem getStaticF_kSystem();

  static inline double_t getStaticF_previousTime();

  static inline double_t getStaticF_time();

  /// @brief Method get_LastFrameTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline double_t get_LastFrameTime();

  static inline void setStaticF_frame(int32_t value);

  static inline void setStaticF_kSystem(::UnityEngine::LowLevel::PlayerLoopSystem value);

  static inline void setStaticF_previousTime(double_t value);

  static inline void setStaticF_time(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityPlayerLoopMarker_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopMarker_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityPlayerLoopMarker_1(UnityPlayerLoopMarker_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityPlayerLoopMarker_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityPlayerLoopMarker_1(UnityPlayerLoopMarker_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22776 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
