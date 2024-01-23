#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaddedHeadAndTail)
// Forward declare root types
namespace System::Collections::Concurrent {
struct PaddedHeadAndTail;
}
// Write type traits
MARK_VAL_T(::System::Collections::Concurrent::PaddedHeadAndTail);
// Type: System.Collections.Concurrent::PaddedHeadAndTail
// SizeInfo { instance_size: 384, native_size: 384, calculated_instance_size: 260, calculated_native_size: 276, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0)
// }
namespace System::Collections::Concurrent {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3804))
// CS Name: ::System.Collections.Concurrent::PaddedHeadAndTail
#pragma pack(push, 0)
struct CORDL_TYPE PaddedHeadAndTail {
public:
  // Declarations
  /// @brief Field Head, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_Head, put = __cordl_internal_set_Head)) int32_t Head;

  /// @brief Field Tail, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_Tail, put = __cordl_internal_set_Tail)) int32_t Tail;

  constexpr int32_t& __cordl_internal_get_Head();

  constexpr int32_t const& __cordl_internal_get_Head() const;

  constexpr void __cordl_internal_set_Head(int32_t value);

  constexpr int32_t& __cordl_internal_get_Tail();

  constexpr int32_t const& __cordl_internal_get_Tail() const;

  constexpr void __cordl_internal_set_Tail(int32_t value);

  // Ctor Parameters [CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PaddedHeadAndTail(int32_t Head, int32_t Tail) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PaddedHeadAndTail();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x80
      uint8_t ___Head_padding[0x80];
      /// @brief Field Head, offset: 0x80, size: 0x4, def value: None
      int32_t ___Head;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x80 for alignment
      uint8_t ___Head_padding_forAlignment[0x80];
      /// @brief Field Head, offset: 0x80, size: 0x4, def value: None
      int32_t ___Head_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x100
      uint8_t ___Tail_padding[0x100];
      /// @brief Field Tail, offset: 0x100, size: 0x4, def value: None
      int32_t ___Tail;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x100 for alignment
      uint8_t ___Tail_padding_forAlignment[0x100];
      /// @brief Field Tail, offset: 0x100, size: 0x4, def value: None
      int32_t ___Tail_forAlignment;
    };
  };

public:
  /// @brief Size padding 0x180 - 0x104 = 0x7c, packed as 0x7c
  uint8_t _cordl_size_padding[0x7c];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Concurrent::PaddedHeadAndTail, 0x180>, "Size mismatch!");

} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Concurrent::PaddedHeadAndTail, "System.Collections.Concurrent", "PaddedHeadAndTail");
