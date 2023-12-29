#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReaderWriterCount)
// Forward declare root types
namespace System::Threading {
class ReaderWriterCount;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ReaderWriterCount);
// Type: System.Threading::ReaderWriterCount
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14656))
// CS Name: ::System.Threading::ReaderWriterCount*
class CORDL_TYPE ReaderWriterCount : public ::System::Object {
public:
  // Declarations
  /// @brief Field lockID, offset 0x10, size 0x8
  __declspec(property(get = __get_lockID, put = __set_lockID)) int64_t lockID;

  /// @brief Field readercount, offset 0x18, size 0x4
  __declspec(property(get = __get_readercount, put = __set_readercount)) int32_t readercount;

  /// @brief Field writercount, offset 0x1c, size 0x4
  __declspec(property(get = __get_writercount, put = __set_writercount)) int32_t writercount;

  /// @brief Field upgradecount, offset 0x20, size 0x4
  __declspec(property(get = __get_upgradecount, put = __set_upgradecount)) int32_t upgradecount;

  /// @brief Field next, offset 0x28, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Threading::ReaderWriterCount* next;

  constexpr int64_t& __get_lockID();

  constexpr int64_t const& __get_lockID() const;

  constexpr void __set_lockID(int64_t value);

  constexpr int32_t& __get_readercount();

  constexpr int32_t const& __get_readercount() const;

  constexpr void __set_readercount(int32_t value);

  constexpr int32_t& __get_writercount();

  constexpr int32_t const& __get_writercount() const;

  constexpr void __set_writercount(int32_t value);

  constexpr int32_t& __get_upgradecount();

  constexpr int32_t const& __get_upgradecount() const;

  constexpr void __set_upgradecount(int32_t value);

  constexpr ::System::Threading::ReaderWriterCount*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterCount*> const& __get_next() const;

  constexpr void __set_next(::System::Threading::ReaderWriterCount* value);

  static inline ::System::Threading::ReaderWriterCount* New_ctor();

  /// @brief Method .ctor addr 0x2698f88 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReaderWriterCount(ReaderWriterCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReaderWriterCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReaderWriterCount(ReaderWriterCount const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReaderWriterCount();

public:
  /// @brief Field lockID, offset: 0x10, size: 0x8, def value: None
  int64_t ___lockID;

  /// @brief Field readercount, offset: 0x18, size: 0x4, def value: None
  int32_t ___readercount;

  /// @brief Field writercount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___writercount;

  /// @brief Field upgradecount, offset: 0x20, size: 0x4, def value: None
  int32_t ___upgradecount;

  /// @brief Field next, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::ReaderWriterCount* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ReaderWriterCount, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterCount, ___lockID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterCount, ___readercount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterCount, ___writercount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterCount, ___upgradecount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ReaderWriterCount, ___next) == 0x28, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ReaderWriterCount);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterCount*, "System.Threading", "ReaderWriterCount");
