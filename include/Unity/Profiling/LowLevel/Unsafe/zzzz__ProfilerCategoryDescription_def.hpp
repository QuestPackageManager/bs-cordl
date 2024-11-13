#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerCategoryDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerCategoryDescription)
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerCategoryDescription;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription);
// Type: Unity.Profiling.LowLevel.Unsafe::ProfilerCategoryDescription
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: Some(0) }
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: true
// CS Name: ::Unity.Profiling.LowLevel.Unsafe::ProfilerCategoryDescription
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerCategoryDescription {
public:
  // Declarations
  /// @brief Field Color, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_Color, put = __cordl_internal_set_Color)) ::UnityEngine::Color32 Color;

  /// @brief Field Flags, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_Flags, put = __cordl_internal_set_Flags)) uint16_t Flags;

  /// @brief Field Id, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) uint16_t Id;

  /// @brief Field NameUtf8, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_NameUtf8, put = __cordl_internal_set_NameUtf8)) ::cordl_internals::Ptr<uint8_t> NameUtf8;

  /// @brief Field NameUtf8Len, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_NameUtf8Len, put = __cordl_internal_set_NameUtf8Len)) int32_t NameUtf8Len;

  /// @brief Field reserved0, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_reserved0, put = __cordl_internal_set_reserved0)) int32_t reserved0;

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_Color() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_Color();

  constexpr uint16_t const& __cordl_internal_get_Flags() const;

  constexpr uint16_t& __cordl_internal_get_Flags();

  constexpr uint16_t const& __cordl_internal_get_Id() const;

  constexpr uint16_t& __cordl_internal_get_Id();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_NameUtf8() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_NameUtf8();

  constexpr int32_t const& __cordl_internal_get_NameUtf8Len() const;

  constexpr int32_t& __cordl_internal_get_NameUtf8Len();

  constexpr int32_t const& __cordl_internal_get_reserved0() const;

  constexpr int32_t& __cordl_internal_get_reserved0();

  constexpr void __cordl_internal_set_Color(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_Flags(uint16_t value);

  constexpr void __cordl_internal_set_Id(uint16_t value);

  constexpr void __cordl_internal_set_NameUtf8(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_NameUtf8Len(int32_t value);

  constexpr void __cordl_internal_set_reserved0(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerCategoryDescription();

  // Ctor Parameters [CppParam { name: "Id", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Flags", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Color", ty:
  // "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "reserved0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "NameUtf8Len", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "NameUtf8", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }]
  constexpr ProfilerCategoryDescription(uint16_t Id, uint16_t Flags, ::UnityEngine::Color32 Color, int32_t reserved0, int32_t NameUtf8Len, ::cordl_internals::Ptr<uint8_t> NameUtf8) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Id_padding[0x0];
      /// @brief Field Id, offset: 0x0, size: 0x2, def value: None
      uint16_t ___Id;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Id_padding_forAlignment[0x0];
      /// @brief Field Id, offset: 0x0, size: 0x2, def value: None
      uint16_t ___Id_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___Flags_padding[0x2];
      /// @brief Field Flags, offset: 0x2, size: 0x2, def value: None
      uint16_t ___Flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___Flags_padding_forAlignment[0x2];
      /// @brief Field Flags, offset: 0x2, size: 0x2, def value: None
      uint16_t ___Flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___Color_padding[0x4];
      /// @brief Field Color, offset: 0x4, size: 0x4, def value: None
      ::UnityEngine::Color32 ___Color;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___Color_padding_forAlignment[0x4];
      /// @brief Field Color, offset: 0x4, size: 0x4, def value: None
      ::UnityEngine::Color32 ___Color_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___reserved0_padding[0x8];
      /// @brief Field reserved0, offset: 0x8, size: 0x4, def value: None
      int32_t ___reserved0;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___reserved0_padding_forAlignment[0x8];
      /// @brief Field reserved0, offset: 0x8, size: 0x4, def value: None
      int32_t ___reserved0_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___NameUtf8Len_padding[0xc];
      /// @brief Field NameUtf8Len, offset: 0xc, size: 0x4, def value: None
      int32_t ___NameUtf8Len;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___NameUtf8Len_padding_forAlignment[0xc];
      /// @brief Field NameUtf8Len, offset: 0xc, size: 0x4, def value: None
      int32_t ___NameUtf8Len_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___NameUtf8_padding[0x10];
      /// @brief Field NameUtf8, offset: 0x10, size: 0x8, def value: None
      ::cordl_internals::Ptr<uint8_t> ___NameUtf8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___NameUtf8_padding_forAlignment[0x10];
      /// @brief Field NameUtf8, offset: 0x10, size: 0x8, def value: None
      ::cordl_internals::Ptr<uint8_t> ___NameUtf8_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10539 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription, 0x18>, "Size mismatch!");

} // namespace Unity::Profiling::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription, "Unity.Profiling.LowLevel.Unsafe", "ProfilerCategoryDescription");
