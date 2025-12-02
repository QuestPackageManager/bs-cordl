#pragma once
// IWYU pragma private; include "BGNet/Logging/Debug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Debug)
namespace BGNet::Logging {
class Debug_ILogger;
}
namespace BGNet::Logging {
class Debug_LoggerLinkedList;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace BGNet::Logging {
class Debug;
}
namespace BGNet::Logging {
class Debug_ILogger;
}
namespace BGNet::Logging {
class Debug_LoggerLinkedList;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::Debug);
MARK_REF_PTR_T(::BGNet::Logging::Debug_ILogger);
MARK_REF_PTR_T(::BGNet::Logging::Debug_LoggerLinkedList);
// Dependencies System.Object
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.Debug/LoggerLinkedList
class CORDL_TYPE Debug_LoggerLinkedList : public ::System::Object {
public:
  // Declarations
  /// @brief Field logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::BGNet::Logging::Debug_ILogger* logger;

  /// @brief Field next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::BGNet::Logging::Debug_LoggerLinkedList* next;

  static inline ::BGNet::Logging::Debug_LoggerLinkedList* New_ctor(::BGNet::Logging::Debug_ILogger* logger);

  constexpr ::BGNet::Logging::Debug_ILogger* const& __cordl_internal_get_logger() const;

  constexpr ::BGNet::Logging::Debug_ILogger*& __cordl_internal_get_logger();

  constexpr ::BGNet::Logging::Debug_LoggerLinkedList* const& __cordl_internal_get_next() const;

  constexpr ::BGNet::Logging::Debug_LoggerLinkedList*& __cordl_internal_get_next();

  constexpr void __cordl_internal_set_logger(::BGNet::Logging::Debug_ILogger* value);

  constexpr void __cordl_internal_set_next(::BGNet::Logging::Debug_LoggerLinkedList* value);

  /// @brief Method .ctor, addr 0x321dfdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Logging::Debug_ILogger* logger);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debug_LoggerLinkedList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Debug_LoggerLinkedList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debug_LoggerLinkedList(Debug_LoggerLinkedList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debug_LoggerLinkedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debug_LoggerLinkedList(Debug_LoggerLinkedList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23244 };

  /// @brief Field logger, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Logging::Debug_ILogger* ___logger;

  /// @brief Field next, offset: 0x18, size: 0x8, def value: None
  ::BGNet::Logging::Debug_LoggerLinkedList* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Logging::Debug_LoggerLinkedList, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Logging::Debug_LoggerLinkedList, ___next) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Logging::Debug_LoggerLinkedList, 0x20>, "Size mismatch!");

} // namespace BGNet::Logging
// Dependencies
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.Debug/ILogger
class CORDL_TYPE Debug_ILogger {
public:
  // Declarations
  /// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogError(::StringW message);

  /// @brief Method LogException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogInfo(::StringW message);

  /// @brief Method LogWarning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void LogWarning(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "Debug_ILogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debug_ILogger(Debug_ILogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23245 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Logging
// Dependencies System.Object
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
  // Declarations
  using ILogger = ::BGNet::Logging::Debug_ILogger;

  using LoggerLinkedList = ::BGNet::Logging::Debug_LoggerLinkedList;

  /// @brief Field _loggers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__loggers, put = setStaticF__loggers)) ::BGNet::Logging::Debug_LoggerLinkedList* _loggers;

  /// @brief Field _loggersMutex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__loggersMutex, put = setStaticF__loggersMutex)) ::System::Object* _loggersMutex;

  /// @brief Method AddLogger, addr 0x321de14, size 0x15c, virtual false, abstract: false, final false
  static inline void AddLogger(::BGNet::Logging::Debug_ILogger* logger);

  /// @brief Method Log, addr 0x321e208, size 0xfc, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogError, addr 0x321e304, size 0x100, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LogException, addr 0x321e404, size 0x108, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogWarning, addr 0x321e50c, size 0x100, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message);

  /// @brief Method NoDomainReloadInit, addr 0x321dd90, size 0x80, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method RemoveLogger, addr 0x321dfe4, size 0x224, virtual false, abstract: false, final false
  static inline void RemoveLogger(::BGNet::Logging::Debug_ILogger* logger);

  static inline ::BGNet::Logging::Debug_LoggerLinkedList* getStaticF__loggers();

  static inline ::System::Object* getStaticF__loggersMutex();

  static inline void setStaticF__loggers(::BGNet::Logging::Debug_LoggerLinkedList* value);

  static inline void setStaticF__loggersMutex(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debug(Debug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debug(Debug const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23246 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::Debug, 0x10>, "Size mismatch!");

} // namespace BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::Debug);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug*, "BGNet.Logging", "Debug");
NEED_NO_BOX(::BGNet::Logging::Debug_ILogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug_ILogger*, "BGNet.Logging", "Debug/ILogger");
NEED_NO_BOX(::BGNet::Logging::Debug_LoggerLinkedList);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug_LoggerLinkedList*, "BGNet.Logging", "Debug/LoggerLinkedList");
