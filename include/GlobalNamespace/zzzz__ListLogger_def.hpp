#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListLogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListLogger)
namespace GlobalNamespace {
class __ListLogger__LogMessage;
}
namespace System {
class Exception;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct __ListLogger__LogType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ListLogger__LogType;
}
namespace GlobalNamespace {
class ListLogger;
}
namespace GlobalNamespace {
class __ListLogger__LogMessage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ListLogger__LogType);
MARK_REF_PTR_T(::GlobalNamespace::ListLogger);
MARK_REF_PTR_T(::GlobalNamespace::__ListLogger__LogMessage);
// Type: ::LogType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5878))
// CS Name: ::ListLogger::LogType
struct CORDL_TYPE __ListLogger__LogType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ListLogger__LogType_Unwrapped
  enum struct ____ListLogger__LogType_Unwrapped : int32_t {
    __E_Info = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
    __E_Exception = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ListLogger__LogType_Unwrapped() const noexcept {
    return static_cast<____ListLogger__LogType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ListLogger__LogType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListLogger__LogType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Info value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ListLogger__LogType const Info;

  /// @brief Field Warning value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ListLogger__LogType const Warning;

  /// @brief Field Error value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ListLogger__LogType const Error;

  /// @brief Field Exception value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__ListLogger__LogType const Exception;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ListLogger__LogType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LogMessage
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5878))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5879))
// CS Name: ::ListLogger::LogMessage*
class CORDL_TYPE __ListLogger__LogMessage : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::GlobalNamespace::__ListLogger__LogType type;

  /// @brief Field message, offset 0x18, size 0x8
  __declspec(property(get = __get_message, put = __set_message))::StringW message;

  /// @brief Field context, offset 0x20, size 0x8
  __declspec(property(get = __get_context, put = __set_context))::System::Object* context;

  constexpr ::GlobalNamespace::__ListLogger__LogType& __get_type();

  constexpr ::GlobalNamespace::__ListLogger__LogType const& __get_type() const;

  constexpr void __set_type(::GlobalNamespace::__ListLogger__LogType value);

  constexpr ::StringW& __get_message();

  constexpr ::StringW const& __get_message() const;

  constexpr void __set_message(::StringW value);

  constexpr ::System::Object*& __get_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_context() const;

  constexpr void __set_context(::System::Object* value);

  static inline ::GlobalNamespace::__ListLogger__LogMessage* New_ctor(::GlobalNamespace::__ListLogger__LogType type, ::StringW message, ::System::Object* context);

  /// @brief Method .ctor addr 0x22f9a28 size 0x3c virtual false final false
  inline void _ctor(::GlobalNamespace::__ListLogger__LogType type, ::StringW message, ::System::Object* context);

  /// @brief Method ToString addr 0x22f9d74 size 0x88 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "__ListLogger__LogMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListLogger__LogMessage(__ListLogger__LogMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListLogger__LogMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListLogger__LogMessage(__ListLogger__LogMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListLogger__LogMessage();

public:
  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__ListLogger__LogType ___type;

  /// @brief Field message, offset: 0x18, size: 0x8, def value: None
  ::StringW ___message;

  /// @brief Field context, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ListLogger__LogMessage, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ListLogger
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5880))
// CS Name: ::ListLogger*
class CORDL_TYPE ListLogger : public ::System::Object {
public:
  // Declarations
  using LogMessage = ::GlobalNamespace::__ListLogger__LogMessage;

  using LogType = ::GlobalNamespace::__ListLogger__LogType;

  /// @brief Field _messages, offset 0x10, size 0x8
  __declspec(property(get = __get__messages, put = __set__messages))::System::Collections::Generic::List_1<::GlobalNamespace::__ListLogger__LogMessage*>* _messages;

  __declspec(property(get = get_messages))::System::Collections::Generic::List_1<::GlobalNamespace::__ListLogger__LogMessage*>* messages;

  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
  constexpr operator ::GlobalNamespace::IBeatSaberLogger*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ListLogger__LogMessage*>*& __get__messages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ListLogger__LogMessage*>*> const& __get__messages() const;

  constexpr void __set__messages(::System::Collections::Generic::List_1<::GlobalNamespace::__ListLogger__LogMessage*>* value);

  /// @brief Method get_messages addr 0x22f98a8 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__ListLogger__LogMessage*>* get_messages();

  static inline ::GlobalNamespace::ListLogger* New_ctor();

  /// @brief Method .ctor addr 0x22f98b0 size 0x80 virtual false final false
  inline void _ctor();

  /// @brief Method Log addr 0x22f9930 size 0x8 virtual true final true
  inline void Log(::StringW message);

  /// @brief Method Log addr 0x22f9938 size 0xf0 virtual true final true
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogWarning addr 0x22f9a64 size 0x8 virtual true final true
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning addr 0x22f9a6c size 0xf4 virtual true final true
  inline void LogWarning(::StringW message, ::System::Object* context);

  /// @brief Method LogError addr 0x22f9b60 size 0x8 virtual true final true
  inline void LogError(::StringW message);

  /// @brief Method LogError addr 0x22f9b68 size 0xf4 virtual true final true
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException addr 0x22f9c5c size 0x8 virtual true final true
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException addr 0x22f9c64 size 0x110 virtual true final true
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  // Ctor Parameters [CppParam { name: "", ty: "ListLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListLogger(ListLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListLogger(ListLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListLogger();

public:
  /// @brief Field _messages, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__ListLogger__LogMessage*>* ____messages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListLogger, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ListLogger__LogType, "", "ListLogger/LogType");
NEED_NO_BOX(::GlobalNamespace::ListLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListLogger*, "", "ListLogger");
NEED_NO_BOX(::GlobalNamespace::__ListLogger__LogMessage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ListLogger__LogMessage*, "", "ListLogger/LogMessage");
