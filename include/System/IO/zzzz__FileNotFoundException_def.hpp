#pragma once
// IWYU pragma private; include "System/IO/FileNotFoundException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::FileNotFoundException);
// Dependencies System.IO.IOException
namespace System::IO {
// Is value type: false
// CS Name: System.IO.FileNotFoundException
class CORDL_TYPE FileNotFoundException : public ::System::IO::IOException {
public:
  // Declarations
  __declspec(property(get = get_FileName)) ::StringW FileName;

  __declspec(property(get = get_FusionLog)) ::StringW FusionLog;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field <FileName>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__FileName_k__BackingField, put = __cordl_internal_set__FileName_k__BackingField)) ::StringW _FileName_k__BackingField;

  /// @brief Field <FusionLog>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__FusionLog_k__BackingField, put = __cordl_internal_set__FusionLog_k__BackingField)) ::StringW _FusionLog_k__BackingField;

  /// @brief Method GetObjectData, addr 0x3d37c00, size 0x118, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::FileNotFoundException* New_ctor();

  static inline ::System::IO::FileNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::IO::FileNotFoundException* New_ctor(::StringW message);

  static inline ::System::IO::FileNotFoundException* New_ctor(::StringW message, ::StringW fileName);

  /// @brief Method SetMessageField, addr 0x3d378e4, size 0x78, virtual false, abstract: false, final false
  inline void SetMessageField();

  /// @brief Method ToString, addr 0x3d3796c, size 0x1e4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::StringW const& __cordl_internal_get__FileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FileName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__FusionLog_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FusionLog_k__BackingField();

  constexpr void __cordl_internal_set__FileName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FusionLog_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3d37818, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d37b50, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d37874, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3d37898, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::StringW fileName);

  /// @brief Method get_FileName, addr 0x3d3795c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FileName();

  /// @brief Method get_FusionLog, addr 0x3d37964, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FusionLog();

  /// @brief Method get_Message, addr 0x3d378cc, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileNotFoundException(FileNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileNotFoundException(FileNotFoundException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3565 };

  /// @brief Field <FileName>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::StringW ____FileName_k__BackingField;

  /// @brief Field <FusionLog>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::StringW ____FusionLog_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::FileNotFoundException, ____FileName_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::IO::FileNotFoundException, ____FusionLog_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::FileNotFoundException, 0xa0>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::FileNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileNotFoundException*, "System.IO", "FileNotFoundException");
