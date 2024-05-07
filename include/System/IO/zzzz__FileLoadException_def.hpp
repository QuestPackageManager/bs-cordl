#pragma once
// IWYU pragma private; include "System/IO/FileLoadException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileLoadException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileLoadException;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileLoadException);
// Type: System.IO::FileLoadException
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::FileLoadException*
class CORDL_TYPE FileLoadException : public ::System::IO::IOException {
public:
  // Declarations
  __declspec(property(get = get_FileName))::StringW FileName;

  __declspec(property(get = get_FusionLog))::StringW FusionLog;

  __declspec(property(get = get_Message))::StringW Message;

  /// @brief Field <FileName>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__FileName_k__BackingField, put = __cordl_internal_set__FileName_k__BackingField))::StringW _FileName_k__BackingField;

  /// @brief Field <FusionLog>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__FusionLog_k__BackingField, put = __cordl_internal_set__FusionLog_k__BackingField))::StringW _FusionLog_k__BackingField;

  /// @brief Method FormatFileLoadExceptionMessage, addr 0x287b6b0, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW FormatFileLoadExceptionMessage(::StringW fileName, int32_t hResult);

  /// @brief Method GetObjectData, addr 0x287b9c8, size 0x118, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::FileLoadException* New_ctor();

  static inline ::System::IO::FileLoadException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::FileLoadException* New_ctor(::StringW message);

  /// @brief Method ToString, addr 0x287b734, size 0x1e4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__FileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FileName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FusionLog_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FusionLog_k__BackingField();

  constexpr void __cordl_internal_set__FileName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FusionLog_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x287b60c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x287b918, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x287b668, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method get_FileName, addr 0x287b724, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FileName();

  /// @brief Method get_FusionLog, addr 0x287b72c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FusionLog();

  /// @brief Method get_Message, addr 0x287b68c, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileLoadException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileLoadException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileLoadException(FileLoadException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileLoadException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileLoadException(FileLoadException const&) = delete;

  /// @brief Field <FileName>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____FileName_k__BackingField;

  /// @brief Field <FusionLog>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____FusionLog_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::FileLoadException, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::IO::FileLoadException, ____FileName_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileLoadException, ____FusionLog_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileLoadException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileLoadException*, "System.IO", "FileLoadException");
