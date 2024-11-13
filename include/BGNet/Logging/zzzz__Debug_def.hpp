#pragma once
// IWYU pragma private; include "BGNet/Logging/Debug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Debug)
namespace BGNet::Logging {
class __Debug__ILogger;
}
namespace BGNet::Logging {
class __Debug__LoggerLinkedList;
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
class __Debug__ILogger;
}
namespace BGNet::Logging {
class __Debug__LoggerLinkedList;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Logging::Debug);
MARK_REF_PTR_T(::BGNet::Logging::__Debug__ILogger);
MARK_REF_PTR_T(::BGNet::Logging::__Debug__LoggerLinkedList);
// Type: ::LoggerLinkedList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Logging {
// Is value type: false
// CS Name: ::Debug::LoggerLinkedList*
class CORDL_TYPE __Debug__LoggerLinkedList : public ::System::Object {
public:
  // Declarations
  /// @brief Field logger, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::BGNet::Logging::__Debug__ILogger* logger;

  /// @brief Field next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::BGNet::Logging::__Debug__LoggerLinkedList* next;

  static inline ::BGNet::Logging::__Debug__LoggerLinkedList* New_ctor(::BGNet::Logging::__Debug__ILogger* logger);

  constexpr ::BGNet::Logging::__Debug__ILogger*& __cordl_internal_get_logger();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Logging::__Debug__ILogger*> const& __cordl_internal_get_logger() const;

  constexpr ::BGNet::Logging::__Debug__LoggerLinkedList*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::BGNet::Logging::__Debug__LoggerLinkedList*> const& __cordl_internal_get_next() const;

  constexpr void __cordl_internal_set_logger(::BGNet::Logging::__Debug__ILogger* value);

  constexpr void __cordl_internal_set_next(::BGNet::Logging::__Debug__LoggerLinkedList* value);

  /// @brief Method .ctor, addr 0x22bb658, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::BGNet::Logging::__Debug__ILogger* logger);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Debug__LoggerLinkedList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Debug__LoggerLinkedList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Debug__LoggerLinkedList(__Debug__LoggerLinkedList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Debug__LoggerLinkedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Debug__LoggerLinkedList(__Debug__LoggerLinkedList const&) = delete;

  /// @brief Field logger, offset: 0x10, size: 0x8, def value: None
  ::BGNet::Logging::__Debug__ILogger* ___logger;

  /// @brief Field next, offset: 0x18, size: 0x8, def value: None
  ::BGNet::Logging::__Debug__LoggerLinkedList* ___next;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19082 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::__Debug__LoggerLinkedList, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGNet::Logging::__Debug__LoggerLinkedList, ___logger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGNet::Logging::__Debug__LoggerLinkedList, ___next) == 0x18, "Offset mismatch!");

} // namespace BGNet::Logging
// Type: ::ILogger
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Logging {
// Is value type: false
// CS Name: ::Debug::ILogger*
class CORDL_TYPE __Debug__ILogger {
public:
  // Declarations
  /// @brief Method LogError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogError(::StringW message);

  /// @brief Method LogException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogInfo(::StringW message);

  /// @brief Method LogWarning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LogWarning(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "__Debug__ILogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Debug__ILogger(__Debug__ILogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Debug__ILogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Debug__ILogger(__Debug__ILogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19083 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Logging
// Type: BGNet.Logging::Debug
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGNet::Logging {
// Is value type: false
// CS Name: ::BGNet.Logging::Debug*
class CORDL_TYPE Debug : public ::System::Object {
public:
  // Declarations
  using ILogger = ::BGNet::Logging::__Debug__ILogger;

  using LoggerLinkedList = ::BGNet::Logging::__Debug__LoggerLinkedList;

  /// @brief Field _loggers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__loggers, put = setStaticF__loggers)) ::BGNet::Logging::__Debug__LoggerLinkedList* _loggers;

  /// @brief Field _loggersMutex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__loggersMutex, put = setStaticF__loggersMutex)) ::System::Object* _loggersMutex;

  /// @brief Method AddLogger, addr 0x22bb480, size 0x168, virtual false, abstract: false, final false
  static inline void AddLogger(::BGNet::Logging::__Debug__ILogger* logger);

  /// @brief Method Log, addr 0x22bb8c8, size 0xf4, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  /// @brief Method LogError, addr 0x22bb9bc, size 0xf8, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  /// @brief Method LogException, addr 0x22bbab4, size 0x100, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception, ::StringW message);

  /// @brief Method LogWarning, addr 0x22bbbb4, size 0xf8, virtual false, abstract: false, final false
  static inline void LogWarning(::StringW message);

  /// @brief Method NoDomainReloadInit, addr 0x22bb3f0, size 0x88, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method RemoveLogger, addr 0x22bb680, size 0x248, virtual false, abstract: false, final false
  static inline void RemoveLogger(::BGNet::Logging::__Debug__ILogger* logger);

  static inline ::BGNet::Logging::__Debug__LoggerLinkedList* getStaticF__loggers();

  static inline ::System::Object* getStaticF__loggersMutex();

  static inline void setStaticF__loggers(::BGNet::Logging::__Debug__LoggerLinkedList* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19084 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Logging::Debug, 0x10>, "Size mismatch!");

} // namespace BGNet::Logging
NEED_NO_BOX(::BGNet::Logging::Debug);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug*, "BGNet.Logging", "Debug");
NEED_NO_BOX(::BGNet::Logging::__Debug__ILogger);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::__Debug__ILogger*, "BGNet.Logging", "Debug/ILogger");
NEED_NO_BOX(::BGNet::Logging::__Debug__LoggerLinkedList);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::__Debug__LoggerLinkedList*, "BGNet.Logging", "Debug/LoggerLinkedList");
