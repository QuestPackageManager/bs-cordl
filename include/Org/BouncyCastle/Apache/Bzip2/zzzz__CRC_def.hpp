#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CRC)
// Forward declare root types
namespace Org::BouncyCastle::Apache::Bzip2 {
class CRC;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Apache::Bzip2::CRC);
// Type: Org.BouncyCastle.Apache.Bzip2::CRC
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Apache::Bzip2 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1878))
// CS Name: ::Org.BouncyCastle.Apache.Bzip2::CRC*
class CORDL_TYPE CRC : public ::System::Object {
public:
  // Declarations
  /// @brief Field globalCrc, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_globalCrc, put = __cordl_internal_set_globalCrc)) int32_t globalCrc;

  /// @brief Field crc32Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_crc32Table, put = setStaticF_crc32Table))::ArrayW<int32_t, ::Array<int32_t>*> crc32Table;

  constexpr int32_t& __cordl_internal_get_globalCrc();

  constexpr int32_t const& __cordl_internal_get_globalCrc() const;

  constexpr void __cordl_internal_set_globalCrc(int32_t value);

  static inline void setStaticF_crc32Table(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_crc32Table();

  static inline ::Org::BouncyCastle::Apache::Bzip2::CRC* New_ctor();

  /// @brief Method .ctor, addr 0x11b678c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method InitialiseCRC, addr 0x11b7cb0, size 0xc, virtual false, abstract: false, final false
  inline void InitialiseCRC();

  /// @brief Method GetFinalCRC, addr 0x11b7ce8, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetFinalCRC();

  /// @brief Method GetGlobalCRC, addr 0x11b87bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetGlobalCRC();

  /// @brief Method SetGlobalCRC, addr 0x11b87c4, size 0x8, virtual false, abstract: false, final false
  inline void SetGlobalCRC(int32_t newCrc);

  /// @brief Method UpdateCRC, addr 0x11b8634, size 0xa4, virtual false, abstract: false, final false
  inline void UpdateCRC(int32_t inCh);

  // Ctor Parameters [CppParam { name: "", ty: "CRC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CRC(CRC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CRC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CRC(CRC const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CRC();

public:
  /// @brief Field globalCrc, offset: 0x10, size: 0x4, def value: None
  int32_t ___globalCrc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Apache::Bzip2::CRC, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Apache::Bzip2::CRC, ___globalCrc) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Apache::Bzip2
NEED_NO_BOX(::Org::BouncyCastle::Apache::Bzip2::CRC);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Apache::Bzip2::CRC*, "Org.BouncyCastle.Apache.Bzip2", "CRC");
