#pragma once
// IWYU pragma private; include "GlobalNamespace/ISonyPlatformManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyPlatformManager)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class ISonyPlatformManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISonyPlatformManager);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISonyPlatformManager
class CORDL_TYPE ISonyPlatformManager {
public:
  // Declarations
  __declspec(property(get = get_initializationTask)) ::System::Threading::Tasks::Task* initializationTask;

  __declspec(property(get = get_userAccountId)) uint64_t userAccountId;

  __declspec(property(get = get_userId)) int32_t userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  /// @brief Method get_initializationTask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* get_initializationTask();

  /// @brief Method get_userAccountId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t get_userAccountId();

  /// @brief Method get_userId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_userId();

  /// @brief Method get_userName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_userName();

  // Ctor Parameters [CppParam { name: "", ty: "ISonyPlatformManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyPlatformManager(ISonyPlatformManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISonyPlatformManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyPlatformManager*, "", "ISonyPlatformManager");
