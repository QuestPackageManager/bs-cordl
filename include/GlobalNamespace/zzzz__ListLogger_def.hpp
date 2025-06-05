#pragma once
// IWYU pragma private; include "GlobalNamespace/ListLogger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListLogger)
namespace GlobalNamespace {
class ListLogger_LogMessage;
}
namespace GlobalNamespace {
struct ListLogger_LogType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct ListLogger_LogType;
}
namespace GlobalNamespace {
class ListLogger;
}
namespace GlobalNamespace {
class ListLogger_LogMessage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ListLogger_LogType);
MARK_REF_PTR_T(::GlobalNamespace::ListLogger);
MARK_REF_PTR_T(::GlobalNamespace::ListLogger_LogMessage);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ListLogger/LogType
struct CORDL_TYPE ListLogger_LogType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ListLogger_LogType_Unwrapped
  enum struct __ListLogger_LogType_Unwrapped : int32_t {
    __E_Info = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
    __E_Exception = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ListLogger_LogType_Unwrapped() const noexcept {
    return static_cast<__ListLogger_LogType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ListLogger_LogType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ListLogger_LogType(int32_t value__) noexcept;

  /// @brief Field Error value: I32(2)
  static ::GlobalNamespace::ListLogger_LogType const Error;

  /// @brief Field Exception value: I32(3)
  static ::GlobalNamespace::ListLogger_LogType const Exception;

  /// @brief Field Info value: I32(0)
  static ::GlobalNamespace::ListLogger_LogType const Info;

  /// @brief Field Warning value: I32(1)
  static ::GlobalNamespace::ListLogger_LogType const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5076 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListLogger_LogType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListLogger_LogType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ListLogger::LogType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListLogger/LogMessage
class CORDL_TYPE ListLogger_LogMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field context, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Object* context;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_message, put = __cordl_internal_set_message)) ::StringW message;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::GlobalNamespace::ListLogger_LogType type;

  static inline ::GlobalNamespace::ListLogger_LogMessage* New_ctor(::GlobalNamespace::ListLogger_LogType type, ::StringW message, ::System::Object* context);

  /// @brief Method ToString, addr 0x3b17e28, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Object* const& __cordl_internal_get_context() const;

  constexpr ::System::Object*& __cordl_internal_get_context();

  constexpr ::StringW const& __cordl_internal_get_message() const;

  constexpr ::StringW& __cordl_internal_get_message();

  constexpr ::GlobalNamespace::ListLogger_LogType const& __cordl_internal_get_type() const;

  constexpr ::GlobalNamespace::ListLogger_LogType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_context(::System::Object* value);

  constexpr void __cordl_internal_set_message(::StringW value);

  constexpr void __cordl_internal_set_type(::GlobalNamespace::ListLogger_LogType value);

  /// @brief Method .ctor, addr 0x3b17af4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ListLogger_LogType type, ::StringW message, ::System::Object* context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListLogger_LogMessage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListLogger_LogMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListLogger_LogMessage(ListLogger_LogMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListLogger_LogMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListLogger_LogMessage(ListLogger_LogMessage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5077 };

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::ListLogger_LogType ___type;

  /// @brief Field message, offset: 0x18, size: 0x8, def value: None
  ::StringW ___message;

  /// @brief Field context, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListLogger_LogMessage, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListLogger_LogMessage, ___message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListLogger_LogMessage, ___context) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListLogger_LogMessage, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IBeatSaberLogger, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListLogger
class CORDL_TYPE ListLogger : public ::System::Object {
public:
  // Declarations
  using LogMessage = ::GlobalNamespace::ListLogger_LogMessage;

  using LogType = ::GlobalNamespace::ListLogger_LogType;

  /// @brief Field _messages, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__messages, put = __cordl_internal_set__messages)) ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* _messages;

  __declspec(property(get = get_messages)) ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* messages;

  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
  constexpr operator ::GlobalNamespace::IBeatSaberLogger*() noexcept;

  /// @brief Method Log, addr 0x3b17a04, size 0x8, virtual true, abstract: false, final true
  inline void Log(::StringW message);

  /// @brief Method Log, addr 0x3b17a0c, size 0xe8, virtual true, abstract: false, final true
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogError, addr 0x3b17c24, size 0x8, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogError, addr 0x3b17c2c, size 0xec, virtual true, abstract: false, final true
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException, addr 0x3b17d18, size 0x8, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x3b17d20, size 0x108, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  /// @brief Method LogWarning, addr 0x3b17b30, size 0x8, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning, addr 0x3b17b38, size 0xec, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message, ::System::Object* context);

  static inline ::GlobalNamespace::ListLogger* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* const& __cordl_internal_get__messages() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>*& __cordl_internal_get__messages();

  constexpr void __cordl_internal_set__messages(::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* value);

  /// @brief Method .ctor, addr 0x3b17984, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_messages, addr 0x3b1797c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* get_messages();

  /// @brief Convert to "::GlobalNamespace::IBeatSaberLogger"
  constexpr ::GlobalNamespace::IBeatSaberLogger* i___GlobalNamespace__IBeatSaberLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListLogger(ListLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListLogger(ListLogger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5078 };

  /// @brief Field _messages, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* ____messages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListLogger, ____messages) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListLogger, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListLogger_LogType, "", "ListLogger/LogType");
NEED_NO_BOX(::GlobalNamespace::ListLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListLogger*, "", "ListLogger");
NEED_NO_BOX(::GlobalNamespace::ListLogger_LogMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListLogger_LogMessage*, "", "ListLogger/LogMessage");
