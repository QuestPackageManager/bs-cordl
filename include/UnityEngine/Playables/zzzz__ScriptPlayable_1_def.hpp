#pragma once
// IWYU pragma private; include "UnityEngine/Playables/ScriptPlayable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptPlayable_1)
namespace System {
class ICloneable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Playables::ScriptPlayable_1);
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Playables {
// cpp template
template <typename T>
// Is value type: true
// CS Name: UnityEngine.Playables.ScriptPlayable`1<T>
struct CORDL_TYPE ScriptPlayable_1 {
public:
  // Declarations
  /// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_m_NullPlayable, put = setStaticF_m_NullPlayable)) ::UnityEngine::Playables::ScriptPlayable_1<T> m_NullPlayable;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method CloneScriptInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* CloneScriptInstance(::UnityEngine::Playables::IPlayableBehaviour* source);

  /// @brief Method CloneScriptInstanceFromEngineObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* CloneScriptInstanceFromEngineObject(::UnityEngine::Object* source);

  /// @brief Method CloneScriptInstanceFromIClonable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* CloneScriptInstanceFromIClonable(::System::ICloneable* source);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<T> Create(::UnityEngine::Playables::PlayableGraph graph, T _cordl_template, int32_t inputCount);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<T> Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount);

  /// @brief Method CreateHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, T _cordl_template, int32_t inputCount);

  /// @brief Method CreateScriptInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* CreateScriptInstance();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::ScriptPlayable_1<T> other);

  /// @brief Method GetBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetBehaviour();

  /// @brief Method GetHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  static inline ::UnityEngine::Playables::ScriptPlayable_1<T> getStaticF_m_NullPlayable();

  /// @brief Method get_Null, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<T> get_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>* i___System__IEquatable_1___UnityEngine__Playables__ScriptPlayable_1_T__();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Explicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<T> op_Explicit___UnityEngine__Playables__ScriptPlayable_1_T_(::UnityEngine::Playables::Playable playable);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Playables::ScriptPlayable_1<T> playable);

  static inline void setStaticF_m_NullPlayable(::UnityEngine::Playables::ScriptPlayable_1<T> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptPlayable_1();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr ScriptPlayable_1(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10660 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Playables::ScriptPlayable_1, "UnityEngine.Playables", "ScriptPlayable`1");
