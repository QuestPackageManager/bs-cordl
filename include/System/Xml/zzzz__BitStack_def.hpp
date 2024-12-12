#pragma once
// IWYU pragma private; include "System/Xml/BitStack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitStack)
// Forward declare root types
namespace System::Xml {
class BitStack;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::BitStack);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.BitStack
class CORDL_TYPE BitStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field bitStack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bitStack, put = __cordl_internal_set_bitStack)) ::ArrayW<uint32_t, ::Array<uint32_t>*> bitStack;

  /// @brief Field curr, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_curr, put = __cordl_internal_set_curr)) uint32_t curr;

  /// @brief Field stackPos, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_stackPos, put = __cordl_internal_set_stackPos)) int32_t stackPos;

  static inline ::System::Xml::BitStack* New_ctor();

  /// @brief Method PeekBit, addr 0x424066c, size 0xc, virtual false, abstract: false, final false
  inline bool PeekBit();

  /// @brief Method PopBit, addr 0x4240600, size 0x28, virtual false, abstract: false, final false
  inline bool PopBit();

  /// @brief Method PopCurr, addr 0x4240628, size 0x44, virtual false, abstract: false, final false
  inline void PopCurr();

  /// @brief Method PushBit, addr 0x42404f8, size 0x38, virtual false, abstract: false, final false
  inline void PushBit(bool bit);

  /// @brief Method PushCurr, addr 0x4240530, size 0xd0, virtual false, abstract: false, final false
  inline void PushCurr();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_bitStack() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_bitStack();

  constexpr uint32_t const& __cordl_internal_get_curr() const;

  constexpr uint32_t& __cordl_internal_get_curr();

  constexpr int32_t const& __cordl_internal_get_stackPos() const;

  constexpr int32_t& __cordl_internal_get_stackPos();

  constexpr void __cordl_internal_set_bitStack(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_curr(uint32_t value);

  constexpr void __cordl_internal_set_stackPos(int32_t value);

  /// @brief Method .ctor, addr 0x42404d8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitStack(BitStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitStack(BitStack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7166 };

  /// @brief Field bitStack, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___bitStack;

  /// @brief Field stackPos, offset: 0x18, size: 0x4, def value: None
  int32_t ___stackPos;

  /// @brief Field curr, offset: 0x1c, size: 0x4, def value: None
  uint32_t ___curr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::BitStack, ___bitStack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BitStack, ___stackPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::BitStack, ___curr) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::BitStack, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::BitStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BitStack*, "System.Xml", "BitStack");
