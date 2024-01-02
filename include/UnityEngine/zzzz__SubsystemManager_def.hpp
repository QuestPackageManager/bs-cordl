#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubsystemManager)
namespace UnityEngine {
class Subsystem;
}
namespace System {
class Action;
}
namespace UnityEngine {
class IntegratedSubsystem;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::SubsystemsImplementation {
class SubsystemWithProvider;
}
// Forward declare root types
namespace UnityEngine {
class SubsystemManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemManager);
// Type: UnityEngine::SubsystemManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15968))
// CS Name: ::UnityEngine::SubsystemManager*
class CORDL_TYPE SubsystemManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field reloadSubsytemsStarted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reloadSubsytemsStarted, put = setStaticF_reloadSubsytemsStarted))::System::Action* reloadSubsytemsStarted;

  /// @brief Field reloadSubsytemsCompleted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_reloadSubsytemsCompleted, put = setStaticF_reloadSubsytemsCompleted))::System::Action* reloadSubsytemsCompleted;

  /// @brief Field beforeReloadSubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_beforeReloadSubsystems, put = setStaticF_beforeReloadSubsystems))::System::Action* beforeReloadSubsystems;

  /// @brief Field afterReloadSubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_afterReloadSubsystems, put = setStaticF_afterReloadSubsystems))::System::Action* afterReloadSubsystems;

  /// @brief Field s_IntegratedSubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_IntegratedSubsystems,
                             put = setStaticF_s_IntegratedSubsystems))::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* s_IntegratedSubsystems;

  /// @brief Field s_StandaloneSubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_StandaloneSubsystems,
                             put = setStaticF_s_StandaloneSubsystems))::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* s_StandaloneSubsystems;

  /// @brief Field s_DeprecatedSubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DeprecatedSubsystems,
                             put = setStaticF_s_DeprecatedSubsystems))::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* s_DeprecatedSubsystems;

  static inline void setStaticF_reloadSubsytemsStarted(::System::Action* value);

  static inline ::System::Action* getStaticF_reloadSubsytemsStarted();

  static inline void setStaticF_reloadSubsytemsCompleted(::System::Action* value);

  static inline ::System::Action* getStaticF_reloadSubsytemsCompleted();

  static inline void setStaticF_beforeReloadSubsystems(::System::Action* value);

  static inline ::System::Action* getStaticF_beforeReloadSubsystems();

  static inline void setStaticF_afterReloadSubsystems(::System::Action* value);

  static inline ::System::Action* getStaticF_afterReloadSubsystems();

  static inline void setStaticF_s_IntegratedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem*>* getStaticF_s_IntegratedSubsystems();

  static inline void setStaticF_s_StandaloneSubsystems(::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider*>* getStaticF_s_StandaloneSubsystems();

  static inline void setStaticF_s_DeprecatedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Subsystem*>* getStaticF_s_DeprecatedSubsystems();

  /// @brief Method GetInstances, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetInstances(::System::Collections::Generic::List_1<T>* subsystems);

  /// @brief Method RemoveDeprecatedSubsystem, addr 0x2d1a6d4, size 0x80, virtual false, abstract: false, final false
  static inline bool RemoveDeprecatedSubsystem(::UnityEngine::Subsystem* subsystem);

  /// @brief Method GetSubsystemDescriptors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetSubsystemDescriptors(::System::Collections::Generic::List_1<T>* descriptors);

  /// @brief Method GetSubsystems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetSubsystems(::System::Collections::Generic::List_1<T>* subsystems);

  /// @brief Method AddSubsystemSubset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TBaseTypeInList, typename TQueryType>
  static inline void AddSubsystemSubset(::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom, ::System::Collections::Generic::List_1<TQueryType>* copyTo);

  /// @brief Method GetIntegratedSubsystemByPtr, addr 0x2d1a8bc, size 0x184, virtual false, abstract: false, final false
  static inline ::UnityEngine::IntegratedSubsystem* GetIntegratedSubsystemByPtr(void* ptr);

  /// @brief Method RemoveIntegratedSubsystemByPtr, addr 0x2d1a428, size 0x184, virtual false, abstract: false, final false
  static inline void RemoveIntegratedSubsystemByPtr(void* ptr);

  /// @brief Method RemoveStandaloneSubsystem, addr 0x2d1aa40, size 0x80, virtual false, abstract: false, final false
  static inline bool RemoveStandaloneSubsystem(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider* subsystem);

  /// @brief Method ReloadSubsystemsStarted, addr 0x2d1aac0, size 0xe0, virtual false, abstract: false, final false
  static inline void ReloadSubsystemsStarted();

  /// @brief Method ReloadSubsystemsCompleted, addr 0x2d1aba0, size 0xe0, virtual false, abstract: false, final false
  static inline void ReloadSubsystemsCompleted();

  /// @brief Method InitializeIntegratedSubsystem, addr 0x2d1ac80, size 0x108, virtual false, abstract: false, final false
  static inline void InitializeIntegratedSubsystem(void* ptr, ::UnityEngine::IntegratedSubsystem* subsystem);

  /// @brief Method ClearSubsystems, addr 0x2d1ad88, size 0x274, virtual false, abstract: false, final false
  static inline void ClearSubsystems();

  /// @brief Method StaticConstructScriptingClassMap, addr 0x2d1a894, size 0x28, virtual false, abstract: false, final false
  static inline void StaticConstructScriptingClassMap();

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemManager(SubsystemManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemManager(SubsystemManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SubsystemManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemManager*, "UnityEngine", "SubsystemManager");
