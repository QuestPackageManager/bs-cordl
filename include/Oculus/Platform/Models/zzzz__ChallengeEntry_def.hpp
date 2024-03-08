#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeEntry)
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ChallengeEntry;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ChallengeEntry);
// Type: Oculus.Platform.Models::ChallengeEntry
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::ChallengeEntry*
class CORDL_TYPE ChallengeEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field DisplayScore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DisplayScore, put = __cordl_internal_set_DisplayScore))::StringW DisplayScore;

  /// @brief Field ExtraData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ExtraData, put = __cordl_internal_set_ExtraData))::ArrayW<uint8_t, ::Array<uint8_t>*> ExtraData;

  /// @brief Field Rank, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Rank, put = __cordl_internal_set_Rank)) int32_t Rank;

  /// @brief Field Score, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Score, put = __cordl_internal_set_Score)) int64_t Score;

  /// @brief Field Timestamp, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Timestamp, put = __cordl_internal_set_Timestamp))::System::DateTime Timestamp;

  /// @brief Field User, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_User, put = __cordl_internal_set_User))::Oculus::Platform::Models::User* User;

  /// @brief Field ID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  static inline ::Oculus::Platform::Models::ChallengeEntry* New_ctor(void* o);

  constexpr ::StringW const& __cordl_internal_get_DisplayScore() const;

  constexpr ::StringW& __cordl_internal_get_DisplayScore();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ExtraData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ExtraData();

  constexpr int32_t const& __cordl_internal_get_Rank() const;

  constexpr int32_t& __cordl_internal_get_Rank();

  constexpr int64_t const& __cordl_internal_get_Score() const;

  constexpr int64_t& __cordl_internal_get_Score();

  constexpr ::System::DateTime const& __cordl_internal_get_Timestamp() const;

  constexpr ::System::DateTime& __cordl_internal_get_Timestamp();

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_User();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_User() const;

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr void __cordl_internal_set_DisplayScore(::StringW value);

  constexpr void __cordl_internal_set_ExtraData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Rank(int32_t value);

  constexpr void __cordl_internal_set_Score(int64_t value);

  constexpr void __cordl_internal_set_Timestamp(::System::DateTime value);

  constexpr void __cordl_internal_set_User(::Oculus::Platform::Models::User* value);

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  /// @brief Method .ctor, addr 0x2859afc, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeEntry(ChallengeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeEntry(ChallengeEntry const&) = delete;

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

  /// @brief Field Timestamp, offset: 0x38, size: 0x8, def value: None
  ::System::DateTime ___Timestamp;

  /// @brief Field User, offset: 0x40, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___User;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ChallengeEntry, 0x48>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeEntry, ___DisplayScore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeEntry, ___ExtraData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeEntry, ____cordl_ID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeEntry, ___Rank) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeEntry, ___Score) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeEntry, ___Timestamp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::ChallengeEntry, ___User) == 0x40, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ChallengeEntry);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ChallengeEntry*, "Oculus.Platform.Models", "ChallengeEntry");
