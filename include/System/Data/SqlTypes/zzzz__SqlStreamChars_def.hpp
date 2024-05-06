#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlStreamChars.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlStreamChars)
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace System::Data::SqlTypes {
class SqlStreamChars;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::SqlTypes::SqlStreamChars);
// Type: System.Data.SqlTypes::SqlStreamChars
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: false
// CS Name: ::System.Data.SqlTypes::SqlStreamChars*
class CORDL_TYPE SqlStreamChars : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position)) int64_t Position;

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Read(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_Position();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlStreamChars();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SqlStreamChars", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SqlStreamChars(SqlStreamChars&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SqlStreamChars", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SqlStreamChars(SqlStreamChars const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlStreamChars, 0x10>, "Size mismatch!");

} // namespace System::Data::SqlTypes
NEED_NO_BOX(::System::Data::SqlTypes::SqlStreamChars);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlStreamChars*, "System.Data.SqlTypes", "SqlStreamChars");
