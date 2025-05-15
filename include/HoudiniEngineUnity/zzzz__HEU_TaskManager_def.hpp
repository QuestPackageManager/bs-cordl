#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TaskManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_TaskManager)
namespace HoudiniEngineUnity {
struct HEU_Task_TaskResult;
}
namespace HoudiniEngineUnity {
class HEU_Task;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TaskManager;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TaskManager);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_TaskManager
class CORDL_TYPE HEU_TaskManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pendingAdd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pendingAdd, put = setStaticF__pendingAdd)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* _pendingAdd;

  /// @brief Field _pendingRemove, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pendingRemove, put = setStaticF__pendingRemove)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* _pendingRemove;

  /// @brief Field _tasks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__tasks, put = setStaticF__tasks)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* _tasks;

  /// @brief Method AddTask, addr 0x3a61d40, size 0x14c, virtual false, abstract: false, final false
  static inline void AddTask(::HoudiniEngineUnity::HEU_Task* task);

  /// @brief Method CompleteTask, addr 0x3a614fc, size 0x28, virtual false, abstract: false, final false
  static inline void CompleteTask(::HoudiniEngineUnity::HEU_Task* task, ::HoudiniEngineUnity::HEU_Task_TaskResult result);

  /// @brief Method ExecuteTask, addr 0x3a62150, size 0x38, virtual false, abstract: false, final false
  static inline void ExecuteTask(::HoudiniEngineUnity::HEU_Task* task);

  /// @brief Method GetTask, addr 0x3a61bac, size 0x194, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_Task* GetTask(::System::Guid taskGuid);

  /// @brief Method InternalCompleteTask, addr 0x3a62188, size 0x60, virtual false, abstract: false, final false
  static inline void InternalCompleteTask(::HoudiniEngineUnity::HEU_Task* task);

  /// @brief Method KillTask, addr 0x3a61e8c, size 0xe8, virtual false, abstract: false, final false
  static inline void KillTask(::HoudiniEngineUnity::HEU_Task* task, bool bRemove);

  /// @brief Method KillTask, addr 0x3a620b4, size 0x9c, virtual false, abstract: false, final false
  static inline void KillTask(::System::Guid taskGuid, bool bRemove);

  static inline ::HoudiniEngineUnity::HEU_TaskManager* New_ctor();

  /// @brief Method RemoveTask, addr 0x3a61f74, size 0x140, virtual false, abstract: false, final false
  static inline void RemoveTask(::HoudiniEngineUnity::HEU_Task* task);

  /// @brief Method Update, addr 0x3a61ba8, size 0x4, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method .ctor, addr 0x3a621e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* getStaticF__pendingAdd();

  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* getStaticF__pendingRemove();

  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* getStaticF__tasks();

  static inline void setStaticF__pendingAdd(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* value);

  static inline void setStaticF__pendingRemove(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* value);

  static inline void setStaticF__tasks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TaskManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_TaskManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TaskManager(HEU_TaskManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TaskManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TaskManager(HEU_TaskManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11790 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TaskManager, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TaskManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TaskManager*, "HoudiniEngineUnity", "HEU_TaskManager");
