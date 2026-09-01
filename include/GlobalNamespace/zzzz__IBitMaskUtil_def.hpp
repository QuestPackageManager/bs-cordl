#pragma once
// IWYU pragma private; include "GlobalNamespace\IBitMaskUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBitMaskUtil)
// Forward declare root types
namespace GlobalNamespace {
class IBitMaskUtil;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBitMaskUtil*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBitMaskUtil*, "", "IBitMaskUtil");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBitMaskUtil
class CORDL_TYPE IBitMaskUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FromBytes(::ArrayW<uint8_t> bytes, int32_t offset);

  /// @brief Method GetBase64Char, addr 0x377d7f4, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetBase64Char(uint64_t digit);

  /// @brief Method GetBase64Digit, addr 0x377d798, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t GetBase64Digit(char16_t c);

  /// @brief Method GetHexDigit, addr 0x377d760, size 0x38, virtual false, abstract: false, final false
  static inline uint32_t GetHexDigit(char16_t c);

  /// @brief Method NumberOfSetBits, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t NumberOfSetBits(T bitMask);

  /// @brief Method ToBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<uint8_t> ToBytes(T bitMask);

  /// @brief Method ToShortString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ToShortString(T bitMask);

  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryParse(::StringW stringSerializedMask, ::by_ref<T> bitMask);

  /// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryParse(::StringW stringSerializedMask, int32_t offset, int32_t length, ::by_ref<T> bitMask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IBitMaskUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IBitMaskUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBitMaskUtil(IBitMaskUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBitMaskUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBitMaskUtil(IBitMaskUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IBitMaskUtil) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
