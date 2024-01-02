#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardEntry)
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class SupplementaryMetric;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LeaderboardEntry;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LeaderboardEntry);
// Type: Oculus.Platform.Models::LeaderboardEntry
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13449))
// CS Name: ::Oculus.Platform.Models::LeaderboardEntry*
class CORDL_TYPE LeaderboardEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field DisplayScore, offset 0x10, size 0x8
  __declspec(property(get = __get_DisplayScore, put = __set_DisplayScore))::StringW DisplayScore;

  /// @brief Field ExtraData, offset 0x18, size 0x8
  __declspec(property(get = __get_ExtraData, put = __set_ExtraData))::ArrayW<uint8_t, ::Array<uint8_t>*> ExtraData;

  /// @brief Field ID, offset 0x20, size 0x8
  __declspec(property(get = __get__cordl_ID, put = __set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field Rank, offset 0x28, size 0x4
  __declspec(property(get = __get_Rank, put = __set_Rank)) int32_t Rank;

  /// @brief Field Score, offset 0x30, size 0x8
  __declspec(property(get = __get_Score, put = __set_Score)) int64_t Score;

  /// @brief Field SupplementaryMetricOptional, offset 0x38, size 0x8
  __declspec(property(get = __get_SupplementaryMetricOptional, put = __set_SupplementaryMetricOptional))::Oculus::Platform::Models::SupplementaryMetric* SupplementaryMetricOptional;

  /// @brief Field SupplementaryMetric, offset 0x40, size 0x8
  __declspec(property(get = __get_SupplementaryMetric, put = __set_SupplementaryMetric))::Oculus::Platform::Models::SupplementaryMetric* SupplementaryMetric;

  /// @brief Field Timestamp, offset 0x48, size 0x8
  __declspec(property(get = __get_Timestamp, put = __set_Timestamp))::System::DateTime Timestamp;

  /// @brief Field User, offset 0x50, size 0x8
  __declspec(property(get = __get_User, put = __set_User))::Oculus::Platform::Models::User* User;

  constexpr ::StringW& __get_DisplayScore();

  constexpr ::StringW const& __get_DisplayScore() const;

  constexpr void __set_DisplayScore(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ExtraData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ExtraData() const;

  constexpr void __set_ExtraData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint64_t& __get__cordl_ID();

  constexpr uint64_t const& __get__cordl_ID() const;

  constexpr void __set__cordl_ID(uint64_t value);

  constexpr int32_t& __get_Rank();

  constexpr int32_t const& __get_Rank() const;

  constexpr void __set_Rank(int32_t value);

  constexpr int64_t& __get_Score();

  constexpr int64_t const& __get_Score() const;

  constexpr void __set_Score(int64_t value);

  constexpr ::Oculus::Platform::Models::SupplementaryMetric*& __get_SupplementaryMetricOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::SupplementaryMetric*> const& __get_SupplementaryMetricOptional() const;

  constexpr void __set_SupplementaryMetricOptional(::Oculus::Platform::Models::SupplementaryMetric* value);

  constexpr ::Oculus::Platform::Models::SupplementaryMetric*& __get_SupplementaryMetric();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::SupplementaryMetric*> const& __get_SupplementaryMetric() const;

  constexpr void __set_SupplementaryMetric(::Oculus::Platform::Models::SupplementaryMetric* value);

  constexpr ::System::DateTime& __get_Timestamp();

  constexpr ::System::DateTime const& __get_Timestamp() const;

  constexpr void __set_Timestamp(::System::DateTime value);

  constexpr ::Oculus::Platform::Models::User*& __get_User();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __get_User() const;

  constexpr void __set_User(::Oculus::Platform::Models::User* value);

  static inline ::Oculus::Platform::Models::LeaderboardEntry* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2706a8c, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeaderboardEntry(LeaderboardEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeaderboardEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeaderboardEntry(LeaderboardEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeaderboardEntry();

public:
  /// @brief Field DisplayScore, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DisplayScore;

  /// @brief Field ExtraData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ExtraData;

  /// @brief Field ID, offset: 0x20, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field Rank, offset: 0x28, size: 0x4, def value: None
  int32_t ___Rank;

  /// @brief Field Score, offset: 0x30, size: 0x8, def value: None
  int64_t ___Score;

  /// @brief Field SupplementaryMetricOptional, offset: 0x38, size: 0x8, def value: None
  ::Oculus::Platform::Models::SupplementaryMetric* ___SupplementaryMetricOptional;

  /// @brief Field SupplementaryMetric, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::SupplementaryMetric* ___SupplementaryMetric;

  /// @brief Field Timestamp, offset: 0x48, size: 0x8, def value: None
  ::System::DateTime ___Timestamp;

  /// @brief Field User, offset: 0x50, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___User;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LeaderboardEntry, 0x58>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___DisplayScore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___ExtraData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ____cordl_ID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___Rank) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___Score) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___SupplementaryMetricOptional) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___SupplementaryMetric) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___Timestamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LeaderboardEntry, ___User) == 0x50, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LeaderboardEntry*, "Oculus.Platform.Models", "LeaderboardEntry");
