#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System::TermInfoReader
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2623))
// CS Name: ::System::TermInfoReader*
class CORDL_TYPE TermInfoReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field boolSize, offset 0x10, size 0x4
  __declspec(property(get = __get_boolSize, put = __set_boolSize)) int32_t boolSize;

  /// @brief Field numSize, offset 0x14, size 0x4
  __declspec(property(get = __get_numSize, put = __set_numSize)) int32_t numSize;

  /// @brief Field strOffsets, offset 0x18, size 0x4
  __declspec(property(get = __get_strOffsets, put = __set_strOffsets)) int32_t strOffsets;

  /// @brief Field buffer, offset 0x20, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field booleansOffset, offset 0x28, size 0x4
  __declspec(property(get = __get_booleansOffset, put = __set_booleansOffset)) int32_t booleansOffset;

  /// @brief Field intOffset, offset 0x2c, size 0x4
  __declspec(property(get = __get_intOffset, put = __set_intOffset)) int32_t intOffset;

  constexpr int32_t& __get_boolSize();

  constexpr int32_t const& __get_boolSize() const;

  constexpr void __set_boolSize(int32_t value);

  constexpr int32_t& __get_numSize();

  constexpr int32_t const& __get_numSize() const;

  constexpr void __set_numSize(int32_t value);

  constexpr int32_t& __get_strOffsets();

  constexpr int32_t const& __get_strOffsets() const;

  constexpr void __set_strOffsets(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_booleansOffset();

  constexpr int32_t const& __get_booleansOffset() const;

  constexpr void __set_booleansOffset(int32_t value);

  constexpr int32_t& __get_intOffset();

  constexpr int32_t const& __get_intOffset() const;

  constexpr void __set_intOffset(int32_t value);

  static inline ::System::TermInfoReader* New_ctor(::StringW term, ::StringW filename);

  /// @brief Method .ctor addr 0x24a5608 size 0x2d8 virtual false final false
  inline void _ctor(::StringW term, ::StringW filename);

  static inline ::System::TermInfoReader* New_ctor(::StringW term, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor addr 0x24a58e0 size 0x8c virtual false final false
  inline void _ctor(::StringW term, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method DetermineVersion addr 0x24ab56c size 0xb0 virtual false final false
  inline void DetermineVersion(int16_t magic);

  /// @brief Method ReadHeader addr 0x24ab478 size 0xc0 virtual false final false
  inline void ReadHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> position);

  /// @brief Method ReadNames addr 0x24ab538 size 0x34 virtual false final false
  inline void ReadNames(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> position);

  /// @brief Method Get addr 0x24a6268 size 0x60 virtual false final false
  inline int32_t Get(::System::TermInfoNumbers number);

  /// @brief Method Get addr 0x24a61d8 size 0x90 virtual false final false
  inline ::StringW Get(::System::TermInfoStrings tstr);

  /// @brief Method GetStringBytes addr 0x24aa11c size 0x90 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStringBytes(::System::TermInfoStrings tstr);

  /// @brief Method GetInt16 addr 0x24ab61c size 0x50 virtual false final false
  inline int16_t GetInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method GetString addr 0x24ab66c size 0x7c virtual false final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method GetStringBytes addr 0x24ab6e8 size 0xb8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStringBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "TermInfoReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TermInfoReader(TermInfoReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TermInfoReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TermInfoReader(TermInfoReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TermInfoReader();

public:
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
static_assert(::cordl_internals::size_check_v<::System::TermInfoReader, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___boolSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___numSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___strOffsets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___booleansOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoReader, ___intOffset) == 0x2c, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::TermInfoReader);
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoReader*, "System", "TermInfoReader");
