#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerMarkerData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerMarkerData)
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerMarkerData;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData);
// Dependencies
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Profiling.LowLevel.Unsafe.ProfilerMarkerData
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerMarkerData {
public:
  // Declarations
  /// @brief Field Ptr, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_Ptr, put = __cordl_internal_set_Ptr)) void* Ptr;

  /// @brief Field Size, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) uint32_t Size;

  /// @brief Field Type, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) uint8_t Type;

  /// @brief Field reserved0, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_reserved0, put = __cordl_internal_set_reserved0)) uint8_t reserved0;

  /// @brief Field reserved1, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_reserved1, put = __cordl_internal_set_reserved1)) uint16_t reserved1;

  constexpr void* const& __cordl_internal_get_Ptr() const;

  constexpr void*& __cordl_internal_get_Ptr();

  constexpr uint32_t const& __cordl_internal_get_Size() const;

  constexpr uint32_t& __cordl_internal_get_Size();

  constexpr uint8_t const& __cordl_internal_get_Type() const;

  constexpr uint8_t& __cordl_internal_get_Type();

  constexpr uint8_t const& __cordl_internal_get_reserved0() const;

  constexpr uint8_t& __cordl_internal_get_reserved0();

  constexpr uint16_t const& __cordl_internal_get_reserved1() const;

  constexpr uint16_t& __cordl_internal_get_reserved1();

  constexpr void __cordl_internal_set_Ptr(void* value);

  constexpr void __cordl_internal_set_Size(uint32_t value);

  constexpr void __cordl_internal_set_Type(uint8_t value);

  constexpr void __cordl_internal_set_reserved0(uint8_t value);

  constexpr void __cordl_internal_set_reserved1(uint16_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerMarkerData();

  // Ctor Parameters [CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "reserved0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "reserved1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Ptr", ty: "void*", modifiers: "",
  // def_value: None }]
  constexpr ProfilerMarkerData(uint8_t Type, uint8_t reserved0, uint16_t reserved1, uint32_t Size, void* Ptr) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Type_padding[0x0];
      /// @brief Field Type, offset: 0x0, size: 0x1, def value: None
      uint8_t ___Type;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Type_padding_forAlignment[0x0];
      /// @brief Field Type, offset: 0x0, size: 0x1, def value: None
      uint8_t ___Type_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___reserved0_padding[0x1];
      /// @brief Field reserved0, offset: 0x1, size: 0x1, def value: None
      uint8_t ___reserved0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___reserved0_padding_forAlignment[0x1];
      /// @brief Field reserved0, offset: 0x1, size: 0x1, def value: None
      uint8_t ___reserved0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___reserved1_padding[0x2];
      /// @brief Field reserved1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___reserved1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___reserved1_padding_forAlignment[0x2];
      /// @brief Field reserved1, offset: 0x2, size: 0x2, def value: None
      uint16_t ___reserved1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___Size_padding[0x4];
      /// @brief Field Size, offset: 0x4, size: 0x4, def value: None
      uint32_t ___Size;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___Size_padding_forAlignment[0x4];
      /// @brief Field Size, offset: 0x4, size: 0x4, def value: None
      uint32_t ___Size_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___Ptr_padding[0x8];
      /// @brief Field Ptr, offset: 0x8, size: 0x8, def value: None
      void* ___Ptr;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___Ptr_padding_forAlignment[0x8];
      /// @brief Field Ptr, offset: 0x8, size: 0x8, def value: None
      void* ___Ptr_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9937 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData, 0x10>, "Size mismatch!");

} // namespace Unity::Profiling::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::Unsafe::ProfilerMarkerData, "Unity.Profiling.LowLevel.Unsafe", "ProfilerMarkerData");
