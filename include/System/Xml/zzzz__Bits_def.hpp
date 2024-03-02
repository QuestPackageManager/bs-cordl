#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Bits)
// Forward declare root types
namespace System::Xml {
class Bits;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Bits);
// Type: System.Xml::Bits
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::Bits*
class CORDL_TYPE Bits : public ::System::Object {
public:
  // Declarations
  /// @brief Field MASK_0000000011111111, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MASK_0000000011111111, put = setStaticF_MASK_0000000011111111)) uint32_t MASK_0000000011111111;

  /// @brief Field MASK_0000111100001111, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MASK_0000111100001111, put = setStaticF_MASK_0000111100001111)) uint32_t MASK_0000111100001111;

  /// @brief Field MASK_0011001100110011, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MASK_0011001100110011, put = setStaticF_MASK_0011001100110011)) uint32_t MASK_0011001100110011;

  /// @brief Field MASK_0101010101010101, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MASK_0101010101010101, put = setStaticF_MASK_0101010101010101)) uint32_t MASK_0101010101010101;

  /// @brief Field MASK_1111111111111111, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MASK_1111111111111111, put = setStaticF_MASK_1111111111111111)) uint32_t MASK_1111111111111111;

  /// @brief Method Count, addr 0x29371b4, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t Count(uint32_t num);

  /// @brief Method LeastPosition, addr 0x2937250, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t LeastPosition(uint32_t num);

  static inline uint32_t getStaticF_MASK_0000000011111111();

  static inline uint32_t getStaticF_MASK_0000111100001111();

  static inline uint32_t getStaticF_MASK_0011001100110011();

  static inline uint32_t getStaticF_MASK_0101010101010101();

  static inline uint32_t getStaticF_MASK_1111111111111111();

  static inline void setStaticF_MASK_0000000011111111(uint32_t value);

  static inline void setStaticF_MASK_0000111100001111(uint32_t value);

  static inline void setStaticF_MASK_0011001100110011(uint32_t value);

  static inline void setStaticF_MASK_0101010101010101(uint32_t value);

  static inline void setStaticF_MASK_1111111111111111(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Bits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bits(Bits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bits(Bits const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Bits, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Bits);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Bits*, "System.Xml", "Bits");
