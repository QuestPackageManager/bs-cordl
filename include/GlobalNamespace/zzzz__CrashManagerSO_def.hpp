#pragma once
// IWYU pragma private; include "GlobalNamespace/CrashManagerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrashManagerSO)
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class CrashManagerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CrashManagerSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrashManagerSO
class CORDL_TYPE CrashManagerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _logString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__logString, put = __cordl_internal_set__logString)) ::StringW _logString;

  /// @brief Field _stackTrace, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__stackTrace, put = __cordl_internal_set__stackTrace)) ::StringW _stackTrace;

  __declspec(property(get = get_logString)) ::StringW logString;

  __declspec(property(get = get_stackTrace)) ::StringW stackTrace;

  /// @brief Method HandleLog, addr 0x3b086f8, size 0xc4, virtual false, abstract: false, final false
  inline void HandleLog(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type);

  static inline ::GlobalNamespace::CrashManagerSO* New_ctor();

  /// @brief Method OnDisable, addr 0x3b08654, size 0xa4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method StartCatchingExceptions, addr 0x3b085b0, size 0xa4, virtual false, abstract: false, final false
  inline void StartCatchingExceptions();

  constexpr ::StringW const& __cordl_internal_get__logString() const;

  constexpr ::StringW& __cordl_internal_get__logString();

  constexpr ::StringW const& __cordl_internal_get__stackTrace() const;

  constexpr ::StringW& __cordl_internal_get__stackTrace();

  constexpr void __cordl_internal_set__logString(::StringW value);

  constexpr void __cordl_internal_set__stackTrace(::StringW value);

  /// @brief Method .ctor, addr 0x3b087bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_logString, addr 0x3b085a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_logString();

  /// @brief Method get_stackTrace, addr 0x3b085a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_stackTrace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrashManagerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CrashManagerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrashManagerSO(CrashManagerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrashManagerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrashManagerSO(CrashManagerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5018 };

  /// @brief Field _logString, offset: 0x18, size: 0x8, def value: None
  ::StringW ____logString;

  /// @brief Field _stackTrace, offset: 0x20, size: 0x8, def value: None
  ::StringW ____stackTrace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrashManagerSO, ____logString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrashManagerSO, ____stackTrace) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CrashManagerSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CrashManagerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrashManagerSO*, "", "CrashManagerSO");
