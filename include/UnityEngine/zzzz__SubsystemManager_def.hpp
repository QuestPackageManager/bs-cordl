#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubsystemManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::SubsystemsImplementation {
class SubsystemWithProvider;
}
namespace UnityEngine {
class IntegratedSubsystem;
}
namespace UnityEngine {
class Subsystem;
}
// Forward declare root types
namespace UnityEngine {
class SubsystemManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemManager);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SubsystemManager
class CORDL_TYPE SubsystemManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field afterReloadSubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_afterReloadSubsystems, put = setStaticF_afterReloadSubsystems)) ::System::Action* afterReloadSubsystems;

  /// @brief Field beforeReloadSubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beforeReloadSubsystems, put = setStaticF_beforeReloadSubsystems)) ::System::Action* beforeReloadSubsystems;

  /// @brief Field reloadSubsytemsCompleted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reloadSubsytemsCompleted, put = setStaticF_reloadSubsytemsCompleted)) ::System::Action* reloadSubsytemsCompleted;

  /// @brief Field reloadSubsytemsStarted, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_reloadSubsytemsStarted, put = setStaticF_reloadSubsytemsStarted)) ::System::Action* reloadSubsytemsStarted;

  /// @brief Field s_DeprecatedSubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DeprecatedSubsystems, put = setStaticF_s_DeprecatedSubsystems)) ::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* s_DeprecatedSubsystems;

  /// @brief Field s_IntegratedSubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_IntegratedSubsystems,
                      put = setStaticF_s_IntegratedSubsystems)) ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* s_IntegratedSubsystems;

  /// @brief Field s_StandaloneSubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StandaloneSubsystems,
                      put = setStaticF_s_StandaloneSubsystems)) ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* s_StandaloneSubsystems;

  /// @brief Method AddSubsystemSubset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TBaseTypeInList, typename TQueryType>
  static inline void AddSubsystemSubset(::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom, ::System::Collections::Generic::List_1<TQueryType>* copyTo);

  /// @brief Method ClearSubsystems, addr 0x69845d8, size 0x220, virtual false, abstract: false, final false
  static inline void ClearSubsystems();

  /// @brief Method GetIntegratedSubsystemByPtr, addr 0x698496c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::IntegratedSubsystem* GetIntegratedSubsystemByPtr(::System::IntPtr ptr);

  /// @brief Method GetSubsystemDescriptors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetSubsystemDescriptors(::System::Collections::Generic::List_1<T>* descriptors);

  /// @brief Method GetSubsystems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetSubsystems(::System::Collections::Generic::List_1<T>* subsystems);

  /// @brief Method InitializeIntegratedSubsystem, addr 0x69844e0, size 0xf8, virtual false, abstract: false, final false
  static inline void InitializeIntegratedSubsystem(::System::IntPtr ptr, ::UnityEngine::IntegratedSubsystem* subsystem);

  /// @brief Method ReloadSubsystemsCompleted, addr 0x69843fc, size 0xe4, virtual false, abstract: false, final false
  static inline void ReloadSubsystemsCompleted();

  /// @brief Method ReloadSubsystemsStarted, addr 0x6984318, size 0xe4, virtual false, abstract: false, final false
  static inline void ReloadSubsystemsStarted();

  /// @brief Method RemoveDeprecatedSubsystem, addr 0x698419c, size 0x88, virtual false, abstract: false, final false
  static inline bool RemoveDeprecatedSubsystem(::UnityEngine::Subsystem* subsystem);

  /// @brief Method RemoveIntegratedSubsystemByPtr, addr 0x6983d54, size 0x168, virtual false, abstract: false, final false
  static inline void RemoveIntegratedSubsystemByPtr(::System::IntPtr ptr);

  /// @brief Method RemoveStandaloneSubsystem, addr 0x6984aa8, size 0x88, virtual false, abstract: false, final false
  static inline bool RemoveStandaloneSubsystem(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider* subsystem);

  /// @brief Method StaticConstructScriptingClassMap, addr 0x69847f8, size 0x28, virtual false, abstract: false, final false
  static inline void StaticConstructScriptingClassMap();

  static inline ::System::Action* getStaticF_afterReloadSubsystems();

  static inline ::System::Action* getStaticF_beforeReloadSubsystems();

  static inline ::System::Action* getStaticF_reloadSubsytemsCompleted();

  static inline ::System::Action* getStaticF_reloadSubsytemsStarted();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* getStaticF_s_DeprecatedSubsystems();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* getStaticF_s_IntegratedSubsystems();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* getStaticF_s_StandaloneSubsystems();

  static inline void setStaticF_afterReloadSubsystems(::System::Action* value);

  static inline void setStaticF_beforeReloadSubsystems(::System::Action* value);

  static inline void setStaticF_reloadSubsytemsCompleted(::System::Action* value);

  static inline void setStaticF_reloadSubsytemsStarted(::System::Action* value);

  static inline void setStaticF_s_DeprecatedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* value);

  static inline void setStaticF_s_IntegratedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* value);

  static inline void setStaticF_s_StandaloneSubsystems(::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemManager(SubsystemManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemManager(SubsystemManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22510 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SubsystemManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemManager*, "UnityEngine", "SubsystemManager");
