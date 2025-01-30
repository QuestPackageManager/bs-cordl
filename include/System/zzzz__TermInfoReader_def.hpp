#pragma once
// IWYU pragma private; include "System/TermInfoReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TermInfoReader)
namespace System {
struct TermInfoNumbers;
}
namespace System {
struct TermInfoStrings;
}
// Forward declare root types
namespace System {
class TermInfoReader;
}
// Write type traits
MARK_REF_PTR_T(::System::TermInfoReader);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TermInfoReader
class CORDL_TYPE TermInfoReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field boolSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_boolSize, put = __cordl_internal_set_boolSize)) int32_t boolSize;

  /// @brief Field booleansOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_booleansOffset, put = __cordl_internal_set_booleansOffset)) int32_t booleansOffset;

  /// @brief Field buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field intOffset, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_intOffset, put = __cordl_internal_set_intOffset)) int32_t intOffset;

  /// @brief Field numSize, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_numSize, put = __cordl_internal_set_numSize)) int32_t numSize;

  /// @brief Field strOffsets, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_strOffsets, put = __cordl_internal_set_strOffsets)) int32_t strOffsets;

  /// @brief Method DetermineVersion, addr 0x3e445f8, size 0xa8, virtual false, abstract: false, final false
  inline void DetermineVersion(int16_t magic);

  /// @brief Method Get, addr 0x3e3f318, size 0x90, virtual false, abstract: false, final false
  inline ::StringW Get(::System::TermInfoStrings tstr);

  /// @brief Method Get, addr 0x3e3f3a8, size 0x60, virtual false, abstract: false, final false
  inline int32_t Get(::System::TermInfoNumbers number);

  /// @brief Method GetInt16, addr 0x3e446a0, size 0x50, virtual false, abstract: false, final false
  inline int16_t GetInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method GetString, addr 0x3e446f0, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method GetStringBytes, addr 0x3e4476c, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStringBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method GetStringBytes, addr 0x3e43254, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStringBytes(::System::TermInfoStrings tstr);

  static inline ::System::TermInfoReader* New_ctor(::StringW term, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  static inline ::System::TermInfoReader* New_ctor(::StringW term, ::StringW filename);

  /// @brief Method ReadHeader, addr 0x3e44504, size 0xc0, virtual false, abstract: false, final false
  inline void ReadHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::ByRef<int32_t> position);

  /// @brief Method ReadNames, addr 0x3e445c4, size 0x34, virtual false, abstract: false, final false
  inline void ReadNames(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::ByRef<int32_t> position);

  constexpr int32_t const& __cordl_internal_get_boolSize() const;

  constexpr int32_t& __cordl_internal_get_boolSize();

  constexpr int32_t const& __cordl_internal_get_booleansOffset() const;

  constexpr int32_t& __cordl_internal_get_booleansOffset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_intOffset() const;

  constexpr int32_t& __cordl_internal_get_intOffset();

  constexpr int32_t const& __cordl_internal_get_numSize() const;

  constexpr int32_t& __cordl_internal_get_numSize();

  constexpr int32_t const& __cordl_internal_get_strOffsets() const;

  constexpr int32_t& __cordl_internal_get_strOffsets();

  constexpr void __cordl_internal_set_boolSize(int32_t value);

  constexpr void __cordl_internal_set_booleansOffset(int32_t value);

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_intOffset(int32_t value);

  constexpr void __cordl_internal_set_numSize(int32_t value);

  constexpr void __cordl_internal_set_strOffsets(int32_t value);

  /// @brief Method .ctor, addr 0x3e3eacc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW term, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor, addr 0x3e3e808, size 0x2c4, virtual false, abstract: false, final false
  inline void _ctor(::StringW term, ::StringW filename);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TermInfoReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TermInfoReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TermInfoReader(TermInfoReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TermInfoReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TermInfoReader(TermInfoReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2627 };

  /// @brief Field boolSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___boolSize;

  /// @brief Field numSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___numSize;

  /// @brief Field strOffsets, offset: 0x18, size: 0x4, def value: None
  int32_t ___strOffsets;

  /// @brief Field buffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field booleansOffset, offset: 0x28, size: 0x4, def value: None
  int32_t ___booleansOffset;

  /// @brief Field intOffset, offset: 0x2c, size: 0x4, def value: None
  int32_t ___intOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TermInfoReader, ___boolSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___numSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___strOffsets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___booleansOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___intOffset) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TermInfoReader, 0x30>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::TermInfoReader);
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoReader*, "System", "TermInfoReader");
