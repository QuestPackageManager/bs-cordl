#pragma once
// IWYU pragma private; include "System/ArgumentException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::System::ArgumentException);
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

  /// @brief Method GetObjectData, addr 0x3d63780, size 0xdc, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3d63640, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d636f8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d62444, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d6369c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x3d5bbec, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW paramName);

  /// @brief Method .ctor, addr 0x3d636c0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW paramName, ::System::Exception* innerException);

  /// @brief Method get_Message, addr 0x3d6385c, size 0xa0, virtual true, abstract: false, final false
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

static_assert(::cordl_internals::size_check_v<::System::ArgumentException, 0x98>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ArgumentException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentException*, "System", "ArgumentException");
