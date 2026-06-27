#pragma once
// IWYU pragma private; include "BGNet/Logging/Debug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Debug)
namespace BGNet::Logging {
class Debug_ILogger;
}
namespace BGNet::Logging {
class Debug_LoggerLinkedList;
}
namespace BGNet::Logging {
struct Debug___c__DisplayClass7_0;
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
namespace BGNet::Logging {
struct Debug___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::Debug);
MARK_REF_PTR_T(::BGNet::Logging::Debug_ILogger);
MARK_REF_PTR_T(::BGNet::Logging::Debug_LoggerLinkedList);
MARK_VAL_T(::BGNet::Logging::Debug___c__DisplayClass7_0);
// Dependencies System.Object
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.Debug/LoggerLinkedList
class CORDL_TYPE Debug_LoggerLinkedList : public ::System::Object {
public:
// Declarations
/// @brief Field logger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::BGNet::Logging::Debug_ILogger*  logger;

/// @brief Field next, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::BGNet::Logging::Debug_LoggerLinkedList*  next;

static inline ::BGNet::Logging::Debug_LoggerLinkedList* New_ctor(::BGNet::Logging::Debug_ILogger*  logger) ;

constexpr ::BGNet::Logging::Debug_ILogger* const& __cordl_internal_get_logger() const;

constexpr ::BGNet::Logging::Debug_ILogger*& __cordl_internal_get_logger() ;

constexpr ::BGNet::Logging::Debug_LoggerLinkedList* const& __cordl_internal_get_next() const;

constexpr ::BGNet::Logging::Debug_LoggerLinkedList*& __cordl_internal_get_next() ;

constexpr void __cordl_internal_set_logger(::BGNet::Logging::Debug_ILogger*  value) ;

constexpr void __cordl_internal_set_next(::BGNet::Logging::Debug_LoggerLinkedList*  value) ;

/// @brief Method .ctor, addr 0x32859e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::BGNet::Logging::Debug_ILogger*  logger) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debug_LoggerLinkedList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debug_LoggerLinkedList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug_LoggerLinkedList(Debug_LoggerLinkedList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug_LoggerLinkedList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug_LoggerLinkedList(Debug_LoggerLinkedList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23325};

/// @brief Field logger, offset: 0x10, size: 0x8, def value: None
 ::BGNet::Logging::Debug_ILogger*  ___logger;

/// @brief Field next, offset: 0x18, size: 0x8, def value: None
 ::BGNet::Logging::Debug_LoggerLinkedList*  ___next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Logging::Debug_LoggerLinkedList, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Logging::Debug_LoggerLinkedList, ___next) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Logging::Debug_LoggerLinkedList, 0x20>, "Size mismatch!");

} // namespace end def BGNet::Logging
// Dependencies 
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.Debug/ILogger
class CORDL_TYPE Debug_ILogger {
public:
// Declarations
/// @brief Method LogError, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LogError(::StringW  message) ;

/// @brief Method LogException, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LogException(::System::Exception*  exception, ::StringW  message) ;

/// @brief Method LogInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LogInfo(::StringW  message) ;

/// @brief Method LogWarning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void LogWarning(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "Debug_ILogger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug_ILogger(Debug_ILogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Logging
// Dependencies 
namespace BGNet::Logging {
// Is value type: true
// CS Name: BGNet.Logging.Debug/<>c__DisplayClass7_0
struct CORDL_TYPE Debug___c__DisplayClass7_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Debug___c__DisplayClass7_0() ;

// Ctor Parameters [CppParam { name: "logger", ty: "::BGNet::Logging::Debug_ILogger*", modifiers: "", def_value: None }]
constexpr Debug___c__DisplayClass7_0(::BGNet::Logging::Debug_ILogger*  logger) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field logger, offset: 0x0, size: 0x8, def value: None
 ::BGNet::Logging::Debug_ILogger*  logger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGNet::Logging::Debug___c__DisplayClass7_0, logger) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGNet::Logging::Debug___c__DisplayClass7_0, 0x8>, "Size mismatch!");

} // namespace end def BGNet::Logging
// Dependencies System.Object
namespace BGNet::Logging {
// Is value type: false
// CS Name: BGNet.Logging.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
// Declarations
using ILogger = ::BGNet::Logging::Debug_ILogger;

using LoggerLinkedList = ::BGNet::Logging::Debug_LoggerLinkedList;

using __c__DisplayClass7_0 = ::BGNet::Logging::Debug___c__DisplayClass7_0;

/// @brief Field _loggers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__loggers, put=setStaticF__loggers)) ::BGNet::Logging::Debug_LoggerLinkedList*  _loggers;

/// @brief Field _loggersMutex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__loggersMutex, put=setStaticF__loggersMutex)) ::System::Object*  _loggersMutex;

/// @brief Method AddLogger, addr 0x328581c, size 0x15c, virtual false, abstract: false, final false
static inline void AddLogger(::BGNet::Logging::Debug_ILogger*  logger) ;

/// @brief Method ClearAllLoggers, addr 0x32860e8, size 0x98, virtual false, abstract: false, final false
static inline void ClearAllLoggers() ;

/// @brief Method Log, addr 0x3285ce4, size 0xfc, virtual false, abstract: false, final false
static inline void Log(::StringW  message) ;

/// @brief Method LogError, addr 0x3285de0, size 0x100, virtual false, abstract: false, final false
static inline void LogError(::StringW  message) ;

/// @brief Method LogException, addr 0x3285ee0, size 0x108, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  exception, ::StringW  message) ;

/// @brief Method LogWarning, addr 0x3285fe8, size 0x100, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  message) ;

/// @brief Method NoDomainReloadInit, addr 0x3285798, size 0x80, virtual false, abstract: false, final false
static inline void NoDomainReloadInit() ;

/// @brief Method RemoveAndDisposeLogger, addr 0x32859ec, size 0x240, virtual false, abstract: false, final false
static inline void RemoveAndDisposeLogger(::BGNet::Logging::Debug_ILogger*  logger) ;

/// @brief Method <RemoveAndDisposeLogger>g__DisposeLogger|7_0, addr 0x3285c2c, size 0xb8, virtual false, abstract: false, final false
static inline void _RemoveAndDisposeLogger_g__DisposeLogger_7_0(::ByRef<::BGNet::Logging::Debug___c__DisplayClass7_0>  _cordl_fixed_empty_name_whitespace) ;

static inline ::BGNet::Logging::Debug_LoggerLinkedList* getStaticF__loggers() ;

static inline ::System::Object* getStaticF__loggersMutex() ;

static inline void setStaticF__loggers(::BGNet::Logging::Debug_LoggerLinkedList*  value) ;

static inline void setStaticF__loggersMutex(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug(Debug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug(Debug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::Debug, 0x10>, "Size mismatch!");

} // namespace end def BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::Debug);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug*, "BGNet.Logging", "Debug");
NEED_NO_BOX(::BGNet::Logging::Debug_ILogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug_ILogger*, "BGNet.Logging", "Debug/ILogger");
NEED_NO_BOX(::BGNet::Logging::Debug_LoggerLinkedList);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug_LoggerLinkedList*, "BGNet.Logging", "Debug/LoggerLinkedList");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug___c__DisplayClass7_0, "BGNet.Logging", "Debug/<>c__DisplayClass7_0");
