#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/CRC32C.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CRC32C)
// Forward declare root types
namespace LiteNetLib::Utils {
class CRC32C;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::CRC32C);
// Dependencies System.Object
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.CRC32C
class CORDL_TYPE CRC32C : public ::System::Object {
public:
  // Declarations
  /// @brief Field Table, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Table, put = setStaticF_Table)) ::ArrayW<uint32_t, ::Array<uint32_t>*> Table;

  /// @brief Method Compute, addr 0x3abb62c, size 0x3f4, virtual false, abstract: false, final false
  static inline uint32_t Compute(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t offset, int32_t length);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_Table();

  static inline void setStaticF_Table(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CRC32C();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CRC32C", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CRC32C(CRC32C&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CRC32C", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CRC32C(CRC32C const&) = delete;

  /// @brief Field ChecksumSize offset 0xffffffff size 0x4
  static constexpr int32_t ChecksumSize{ static_cast<int32_t>(0x4) };

  /// @brief Field Poly offset 0xffffffff size 0x4
  static constexpr uint32_t Poly{ static_cast<uint32_t>(0x82f63b78u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16574 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::CRC32C, 0x10>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::CRC32C);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::CRC32C*, "LiteNetLib.Utils", "CRC32C");
