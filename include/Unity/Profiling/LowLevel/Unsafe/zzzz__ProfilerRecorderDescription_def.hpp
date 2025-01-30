#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerRecorderDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
#include "Unity/Profiling/LowLevel/zzzz__ProfilerMarkerDataType_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorderDescription)
namespace Unity::Profiling {
struct ProfilerCategory;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderDescription;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription);
// Dependencies Unity.Profiling.LowLevel.MarkerFlags, Unity.Profiling.LowLevel.ProfilerMarkerDataType, Unity.Profiling.ProfilerCategory, Unity.Profiling.ProfilerMarkerDataUnit
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Profiling.LowLevel.Unsafe.ProfilerRecorderDescription
#pragma pack(push, 0)
struct CORDL_TYPE ProfilerRecorderDescription {
public:
  // Declarations
  __declspec(property(get = get_Category)) ::Unity::Profiling::ProfilerCategory Category;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field category, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_category, put = __cordl_internal_set_category)) ::Unity::Profiling::ProfilerCategory category;

  /// @brief Field dataType, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType)) ::Unity::Profiling::LowLevel::ProfilerMarkerDataType dataType;

  /// @brief Field flags, offset 0x2, size 0x2
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) ::Unity::Profiling::LowLevel::MarkerFlags flags;

  /// @brief Field nameUtf8, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nameUtf8, put = __cordl_internal_set_nameUtf8)) ::cordl_internals::Ptr<uint8_t> nameUtf8;

  /// @brief Field nameUtf8Len, offset 0xc, size 0x4
  __declspec(property(get = __cordl_internal_get_nameUtf8Len, put = __cordl_internal_set_nameUtf8Len)) int32_t nameUtf8Len;

  /// @brief Field reserved0, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_reserved0, put = __cordl_internal_set_reserved0)) int32_t reserved0;

  /// @brief Field unitType, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_unitType, put = __cordl_internal_set_unitType)) ::Unity::Profiling::ProfilerMarkerDataUnit unitType;

  constexpr ::Unity::Profiling::ProfilerCategory const& __cordl_internal_get_category() const;

  constexpr ::Unity::Profiling::ProfilerCategory& __cordl_internal_get_category();

  constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType const& __cordl_internal_get_dataType() const;

  constexpr ::Unity::Profiling::LowLevel::ProfilerMarkerDataType& __cordl_internal_get_dataType();

  constexpr ::Unity::Profiling::LowLevel::MarkerFlags const& __cordl_internal_get_flags() const;

  constexpr ::Unity::Profiling::LowLevel::MarkerFlags& __cordl_internal_get_flags();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_nameUtf8() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_nameUtf8();

  constexpr int32_t const& __cordl_internal_get_nameUtf8Len() const;

  constexpr int32_t& __cordl_internal_get_nameUtf8Len();

  constexpr int32_t const& __cordl_internal_get_reserved0() const;

  constexpr int32_t& __cordl_internal_get_reserved0();

  constexpr ::Unity::Profiling::ProfilerMarkerDataUnit const& __cordl_internal_get_unitType() const;

  constexpr ::Unity::Profiling::ProfilerMarkerDataUnit& __cordl_internal_get_unitType();

  constexpr void __cordl_internal_set_category(::Unity::Profiling::ProfilerCategory value);

  constexpr void __cordl_internal_set_dataType(::Unity::Profiling::LowLevel::ProfilerMarkerDataType value);

  constexpr void __cordl_internal_set_flags(::Unity::Profiling::LowLevel::MarkerFlags value);

  constexpr void __cordl_internal_set_nameUtf8(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_nameUtf8Len(int32_t value);

  constexpr void __cordl_internal_set_reserved0(int32_t value);

  constexpr void __cordl_internal_set_unitType(::Unity::Profiling::ProfilerMarkerDataUnit value);

  /// @brief Method get_Category, addr 0x4861820, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Profiling::ProfilerCategory get_Category();

  /// @brief Method get_Name, addr 0x4861828, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorderDescription();

  // Ctor Parameters [CppParam { name: "category", ty: "::Unity::Profiling::ProfilerCategory", modifiers: "", def_value: None }, CppParam { name: "flags", ty:
  // "::Unity::Profiling::LowLevel::MarkerFlags", modifiers: "", def_value: None }, CppParam { name: "dataType", ty: "::Unity::Profiling::LowLevel::ProfilerMarkerDataType", modifiers: "", def_value:
  // None }, CppParam { name: "unitType", ty: "::Unity::Profiling::ProfilerMarkerDataUnit", modifiers: "", def_value: None }, CppParam { name: "reserved0", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "nameUtf8Len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameUtf8", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }]
  constexpr ProfilerRecorderDescription(::Unity::Profiling::ProfilerCategory category, ::Unity::Profiling::LowLevel::MarkerFlags flags, ::Unity::Profiling::LowLevel::ProfilerMarkerDataType dataType,
                                        ::Unity::Profiling::ProfilerMarkerDataUnit unitType, int32_t reserved0, int32_t nameUtf8Len, ::cordl_internals::Ptr<uint8_t> nameUtf8) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___category_padding[0x0];
      /// @brief Field category, offset: 0x0, size: 0x2, def value: None
      ::Unity::Profiling::ProfilerCategory ___category;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___category_padding_forAlignment[0x0];
      /// @brief Field category, offset: 0x0, size: 0x2, def value: None
      ::Unity::Profiling::ProfilerCategory ___category_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___flags_padding[0x2];
      /// @brief Field flags, offset: 0x2, size: 0x2, def value: None
      ::Unity::Profiling::LowLevel::MarkerFlags ___flags;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___flags_padding_forAlignment[0x2];
      /// @brief Field flags, offset: 0x2, size: 0x2, def value: None
      ::Unity::Profiling::LowLevel::MarkerFlags ___flags_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___dataType_padding[0x4];
      /// @brief Field dataType, offset: 0x4, size: 0x1, def value: None
      ::Unity::Profiling::LowLevel::ProfilerMarkerDataType ___dataType;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___dataType_padding_forAlignment[0x4];
      /// @brief Field dataType, offset: 0x4, size: 0x1, def value: None
      ::Unity::Profiling::LowLevel::ProfilerMarkerDataType ___dataType_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___unitType_padding[0x5];
      /// @brief Field unitType, offset: 0x5, size: 0x1, def value: None
      ::Unity::Profiling::ProfilerMarkerDataUnit ___unitType;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___unitType_padding_forAlignment[0x5];
      /// @brief Field unitType, offset: 0x5, size: 0x1, def value: None
      ::Unity::Profiling::ProfilerMarkerDataUnit ___unitType_forAlignment;
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
      uint8_t ___nameUtf8Len_padding[0xc];
      /// @brief Field nameUtf8Len, offset: 0xc, size: 0x4, def value: None
      int32_t ___nameUtf8Len;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___nameUtf8Len_padding_forAlignment[0xc];
      /// @brief Field nameUtf8Len, offset: 0xc, size: 0x4, def value: None
      int32_t ___nameUtf8Len_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___nameUtf8_padding[0x10];
      /// @brief Field nameUtf8, offset: 0x10, size: 0x8, def value: None
      ::cordl_internals::Ptr<uint8_t> ___nameUtf8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___nameUtf8_padding_forAlignment[0x10];
      /// @brief Field nameUtf8, offset: 0x10, size: 0x8, def value: None
      ::cordl_internals::Ptr<uint8_t> ___nameUtf8_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10573 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription, 0x18>, "Size mismatch!");

} // namespace Unity::Profiling::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription, "Unity.Profiling.LowLevel.Unsafe", "ProfilerRecorderDescription");
