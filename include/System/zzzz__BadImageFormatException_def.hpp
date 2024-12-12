#pragma once
// IWYU pragma private; include "System/BadImageFormatException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BadImageFormatException)
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
class BadImageFormatException;
}
// Write type traits
MARK_REF_PTR_T(::System::BadImageFormatException);
// Dependencies System.SystemException
namespace System {
// Is value type: false
// CS Name: System.BadImageFormatException
class CORDL_TYPE BadImageFormatException : public ::System::SystemException {
public:
  // Declarations
  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field _fileName, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__fileName, put = __cordl_internal_set__fileName)) ::StringW _fileName;

  /// @brief Field _fusionLog, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__fusionLog, put = __cordl_internal_set__fusionLog)) ::StringW _fusionLog;

  /// @brief Method GetObjectData, addr 0x3d55524, size 0x118, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::BadImageFormatException* New_ctor();

  static inline ::System::BadImageFormatException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::BadImageFormatException* New_ctor(::StringW message);

  static inline ::System::BadImageFormatException* New_ctor(::StringW message, ::StringW fileName);

  static inline ::System::BadImageFormatException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method SetMessageField, addr 0x3d55654, size 0x78, virtual false, abstract: false, final false
  inline void SetMessageField();

  /// @brief Method ToString, addr 0x3d556cc, size 0x1e4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__fileName() const;

  constexpr ::StringW& __cordl_internal_get__fileName();

  constexpr ::StringW const& __cordl_internal_get__fusionLog() const;

  constexpr ::StringW& __cordl_internal_get__fusionLog();

  constexpr void __cordl_internal_set__fileName(::StringW value);

  constexpr void __cordl_internal_set__fusionLog(::StringW value);

  /// @brief Method .ctor, addr 0x3d5539c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d55474, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d553f8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d55440, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW fileName);

  /// @brief Method .ctor, addr 0x3d5541c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method get_Message, addr 0x3d5563c, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BadImageFormatException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BadImageFormatException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BadImageFormatException(BadImageFormatException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BadImageFormatException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BadImageFormatException(BadImageFormatException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2358 };

  /// @brief Field _fileName, offset: 0x90, size: 0x8, def value: None
  ::StringW ____fileName;

  /// @brief Field _fusionLog, offset: 0x98, size: 0x8, def value: None
  ::StringW ____fusionLog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::BadImageFormatException, ____fileName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::BadImageFormatException, ____fusionLog) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::BadImageFormatException, 0xa0>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::BadImageFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::BadImageFormatException*, "System", "BadImageFormatException");
