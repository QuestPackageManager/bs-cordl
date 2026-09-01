#pragma once
// IWYU pragma private; include "System\ArgumentException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ArgumentException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class ArgumentException;
}
// Write type traits
MARK_REF_T(::System::ArgumentException*);
DEFINE_IL2CPP_CLASS(::System::ArgumentException*, "System", "ArgumentException");
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.ArgumentException
class CORDL_TYPE ArgumentException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field _paramName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__paramName, put = __cordl_internal_set__paramName)) ::StringW _paramName;

  /// @brief Method GetObjectData, addr 0x5bae880, size 0xc0, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ArgumentException* New_ctor();

  static inline ::System::ArgumentException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::ArgumentException* New_ctor(::StringW message);

  static inline ::System::ArgumentException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::ArgumentException* New_ctor(::StringW message, ::StringW paramName);

  static inline ::System::ArgumentException* New_ctor(::StringW message, ::StringW paramName, ::System::Exception* innerException);

  constexpr ::StringW const& __cordl_internal_get__paramName() const;

  constexpr ::StringW& __cordl_internal_get__paramName();

  constexpr void __cordl_internal_set__paramName(::StringW value);

  /// @brief Method .ctor, addr 0x5bae730, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5bae7ec, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5bad494, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5bae790, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x5ba6d88, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW paramName);

  /// @brief Method .ctor, addr 0x5bae7b4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW paramName, ::System::Exception* innerException);

  /// @brief Method get_Message, addr 0x5bae940, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArgumentException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgumentException(ArgumentException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgumentException(ArgumentException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2346 };

  /// @brief Field _paramName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____paramName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ArgumentException, ____paramName) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::ArgumentException) == 0x98, "Size mismatch!");

} // namespace System
