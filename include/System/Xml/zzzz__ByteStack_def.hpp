#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteStack)
// Forward declare root types
namespace System::Xml {
class ByteStack;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::ByteStack);
// Type: System.Xml::ByteStack
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::ByteStack*
class CORDL_TYPE ByteStack : public ::System::Object {
public:
  // Declarations
  /// @brief Field growthRate, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_growthRate, put = __cordl_internal_set_growthRate)) int32_t growthRate;

  /// @brief Field size, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int32_t size;

  /// @brief Field stack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack))::ArrayW<uint8_t, ::Array<uint8_t>*> stack;

  /// @brief Field top, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_top, put = __cordl_internal_set_top)) int32_t top;

  static inline ::System::Xml::ByteStack* New_ctor(int32_t growthRate);

  /// @brief Method Pop, addr 0x2d93cd0, size 0x4c, virtual false, abstract: false, final false
  inline uint8_t Pop();

  /// @brief Method Push, addr 0x2d93c00, size 0xd0, virtual false, abstract: false, final false
  inline void Push(uint8_t data);

  constexpr int32_t const& __cordl_internal_get_growthRate() const;

  constexpr int32_t& __cordl_internal_get_growthRate();

  constexpr int32_t const& __cordl_internal_get_size() const;

  constexpr int32_t& __cordl_internal_get_size();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_stack() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_stack();

  constexpr int32_t const& __cordl_internal_get_top() const;

  constexpr int32_t& __cordl_internal_get_top();

  constexpr void __cordl_internal_set_growthRate(int32_t value);

  constexpr void __cordl_internal_set_size(int32_t value);

  constexpr void __cordl_internal_set_stack(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_top(int32_t value);

  /// @brief Method .ctor, addr 0x2d93b90, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(int32_t growthRate);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteStack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteStack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteStack(ByteStack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteStack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteStack(ByteStack const&) = delete;

  /// @brief Field stack, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___stack;

  /// @brief Field growthRate, offset: 0x18, size: 0x4, def value: None
  int32_t ___growthRate;

  /// @brief Field top, offset: 0x1c, size: 0x4, def value: None
  int32_t ___top;

  /// @brief Field size, offset: 0x20, size: 0x4, def value: None
  int32_t ___size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::ByteStack, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::ByteStack, ___stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ByteStack, ___growthRate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ByteStack, ___top) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ByteStack, ___size) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::ByteStack);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ByteStack*, "System.Xml", "ByteStack");
