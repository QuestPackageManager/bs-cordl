#pragma once
// IWYU pragma private; include "GlobalNamespace/PackedPlayModeBuildLogs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PackedPlayModeBuildLogs)
namespace GlobalNamespace {
struct PackedPlayModeBuildLogs_RuntimeBuildLog;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class PackedPlayModeBuildLogs;
}
namespace GlobalNamespace {
struct PackedPlayModeBuildLogs_RuntimeBuildLog;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PackedPlayModeBuildLogs);
MARK_VAL_T(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog);
// Dependencies UnityEngine.LogType
namespace GlobalNamespace {
// Is value type: true
// CS Name: PackedPlayModeBuildLogs/RuntimeBuildLog
struct CORDL_TYPE PackedPlayModeBuildLogs_RuntimeBuildLog {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x62939bc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LogType type, ::StringW message);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PackedPlayModeBuildLogs_RuntimeBuildLog();

  // Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr PackedPlayModeBuildLogs_RuntimeBuildLog(::UnityEngine::LogType Type, ::StringW Message) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19486 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::LogType Type;

  /// @brief Field Message, offset: 0x8, size: 0x8, def value: None
  ::StringW Message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog, Message) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PackedPlayModeBuildLogs
class CORDL_TYPE PackedPlayModeBuildLogs : public ::System::Object {
public:
  // Declarations
  using RuntimeBuildLog = ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog;

  __declspec(property(get = get_RuntimeBuildLogs, put = set_RuntimeBuildLogs)) ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* RuntimeBuildLogs;

  /// @brief Field m_RuntimeBuildLogs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeBuildLogs,
                      put = __cordl_internal_set_m_RuntimeBuildLogs)) ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* m_RuntimeBuildLogs;

  static inline ::GlobalNamespace::PackedPlayModeBuildLogs* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* const& __cordl_internal_get_m_RuntimeBuildLogs() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*& __cordl_internal_get_m_RuntimeBuildLogs();

  constexpr void __cordl_internal_set_m_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* value);

  /// @brief Method .ctor, addr 0x6293948, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_RuntimeBuildLogs, addr 0x6293938, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* get_RuntimeBuildLogs();

  /// @brief Method set_RuntimeBuildLogs, addr 0x6293940, size 0x8, virtual false, abstract: false, final false
  inline void set_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackedPlayModeBuildLogs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackedPlayModeBuildLogs(PackedPlayModeBuildLogs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackedPlayModeBuildLogs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackedPlayModeBuildLogs(PackedPlayModeBuildLogs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19487 };

  /// @brief Field m_RuntimeBuildLogs, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* ___m_RuntimeBuildLogs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PackedPlayModeBuildLogs, ___m_RuntimeBuildLogs) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PackedPlayModeBuildLogs, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PackedPlayModeBuildLogs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackedPlayModeBuildLogs*, "", "PackedPlayModeBuildLogs");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog, "", "PackedPlayModeBuildLogs/RuntimeBuildLog");
