#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayableBinding)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class PlayableBinding_CreateOutputMethod;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableBinding_CreateOutputMethod;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableBinding_CreateOutputMethod);
MARK_VAL_T(::UnityEngine::Playables::PlayableBinding);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableBinding/CreateOutputMethod
class CORDL_TYPE PlayableBinding_CreateOutputMethod : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48d8a9c, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableOutput Invoke(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);

  static inline ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48d8a10, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableBinding_CreateOutputMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableBinding_CreateOutputMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableBinding_CreateOutputMethod(PlayableBinding_CreateOutputMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableBinding_CreateOutputMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableBinding_CreateOutputMethod(PlayableBinding_CreateOutputMethod const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableBinding_CreateOutputMethod, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Playables
// Dependencies
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableBinding
struct CORDL_TYPE PlayableBinding {
public:
  // Declarations
  using CreateOutputMethod = ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod;

  /// @brief Field DefaultDuration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DefaultDuration, put = setStaticF_DefaultDuration)) double_t DefaultDuration;

  /// @brief Field None, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_None, put = setStaticF_None)) ::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> None;

  __declspec(property(get = get_sourceObject)) ::UnityW<::UnityEngine::Object> sourceObject;

  __declspec(property(get = get_streamName)) ::StringW streamName;

  /// @brief Method CreateInternal, addr 0x48d898c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableBinding CreateInternal(::StringW name, ::UnityEngine::Object* sourceObject, ::System::Type* sourceType,
                                                                         ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* createFunction);

  /// @brief Method CreateOutput, addr 0x48d88a4, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableOutput CreateOutput(::UnityEngine::Playables::PlayableGraph graph);

  static inline double_t getStaticF_DefaultDuration();

  static inline ::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> getStaticF_None();

  /// @brief Method get_sourceObject, addr 0x48d889c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_sourceObject();

  /// @brief Method get_streamName, addr 0x48d8894, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_streamName();

  static inline void setStaticF_DefaultDuration(double_t value);

  static inline void setStaticF_None(::ArrayW<::UnityEngine::Playables::PlayableBinding, ::Array<::UnityEngine::Playables::PlayableBinding>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableBinding();

  // Ctor Parameters [CppParam { name: "m_StreamName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_SourceObject", ty: "::UnityW<::UnityEngine::Object>", modifiers: "",
  // def_value: None }, CppParam { name: "m_SourceBindingType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "m_CreateOutputMethod", ty:
  // "::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*", modifiers: "", def_value: None }]
  constexpr PlayableBinding(::StringW m_StreamName, ::UnityW<::UnityEngine::Object> m_SourceObject, ::System::Type* m_SourceBindingType,
                            ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* m_CreateOutputMethod) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11280 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_StreamName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_StreamName;

  /// @brief Field m_SourceObject, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> m_SourceObject;

  /// @brief Field m_SourceBindingType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* m_SourceBindingType;

  /// @brief Field m_CreateOutputMethod, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Playables::PlayableBinding_CreateOutputMethod* m_CreateOutputMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_StreamName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_SourceObject) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_SourceBindingType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableBinding, m_CreateOutputMethod) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableBinding, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableBinding_CreateOutputMethod);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableBinding_CreateOutputMethod*, "UnityEngine.Playables", "PlayableBinding/CreateOutputMethod");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableBinding, "UnityEngine.Playables", "PlayableBinding");
